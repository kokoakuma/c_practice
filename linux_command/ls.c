#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

int checkIsOption(char *arg);
void checkOptions(char *arg, int *option_all);
void printEntries(char *dir_path, int option_a);

int main(int argc, char *argv[])
{
    DIR *directory;
    struct dirent *entry;
    char dir_name_buffer[256];
    struct stat info;
    int option_all;
    option_all = 0;

    if (argc == 1) // ls
    {
        if (getcwd(dir_name_buffer, sizeof(dir_name_buffer)) == NULL)
        {
            printf("Failed to get current dir\n");
            exit(1);
        };
        printEntries(dir_name_buffer, option_all);
    }
    else if (argc == 2) // ls abc
    {
        if (checkIsOption(argv[1]) == 1)
        {
            printf("Usage: ls <directory> or ls <directory> -a\n");
            exit(1);
        }

        printEntries(argv[1], 0);
    }
    else
    { // ls a -a
        if (checkIsOption(argv[1]) == 1)
        {
            printf("Usage: ls <directory> or ls <directory> -a\n");
            exit(1);
        }

        if (checkIsOption(argv[2]) == 1)
        {
            checkOptions(argv[2], &option_all);
        }

        printEntries(argv[1], option_all);
    }

    closedir(directory);

    return 0;
}

void printEntries(char *dir_path, int option_a)
{
    DIR *directory;
    struct dirent *entry;
    struct stat info;

    if ((directory = opendir(dir_path)) == NULL)
    {
        perror("opendir() error");
        exit(EXIT_FAILURE);
    }

    // option_a
    if (option_a)
    {
        while ((entry = readdir(directory)) != NULL)
        {
            printf("%s\n", entry->d_name);
        }
    }
    else // only regular and dir
    {
        while ((entry = readdir(directory)) != NULL)
        {
            if (entry->d_name[0] == '.') // 隠しファイル
                continue;
            if (stat(entry->d_name, &info) == -1) // 特殊ファイル
                continue;
            if (S_ISREG(info.st_mode) || S_ISDIR(info.st_mode))
            {
                printf("%s\n", entry->d_name);
            }
        }
    }

    exit(0);
}

int checkIsOption(char *arg)
{
    if (arg[0] == '-')
        return 1;

    return 0;
}

void checkOptions(char *arg, int *option_all)
{
    if (strstr(arg, "a") != NULL)
    {
        *option_all = 1;
    }
}
