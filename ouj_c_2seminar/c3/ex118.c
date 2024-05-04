#include <stdio.h>
int bf = 0; /* すべてのフラグがOFF */
/* フラグを調べる */
int is_set(int num)
{
    return bf >> (num - 1) & 1;
};
/* フラグをONにする */
void set(int num)
{
    bf |= 1 << (num - 1);
};
/* フラグをOFFにする */
void clear(int num)
{
    int mask = ~(1 << (num - 1));
    bf &= mask;
};
/* フラグを反転する */
void toggle(int num)
{
    bf ^= 1 << (num - 1);
};

int main(void)
{
    while (1) {
        int fn, i;
        char op;
        /* 現在のフラグの状態を表示する */
        printf("フラグ: [1] [2] [3] [4]¥n状態:  ");
        fflush(stdout);
        for (i = 1; i <= 4; ++i)
        {
            printf(" %s", is_set(i) ? "ON " : "OFF");
        }
        printf("\n\n");
        /* 操作対象フラグの番号を入力させる */
        printf("対象フラグ (1-4, その他: 終了) > ");
        fflush(stdout);
        scanf("%d%*c", &fn);
        if (fn < 1 || fn > 4)
        {
            /* 1〜4以外が入力されたら反復を終了する */
            break;
        }
        /* フラグに対する操作を入力させる */
        printf("操作 ('p': 確認, 's': ON, 'c': OFF, 't': 反転) > ");
        fflush(stdout);
        scanf("%c", &op);
        switch (op)
        {
            case 'p':
                printf("\nフラグ [%d] は%sです。\n\n", fn, is_set(fn) ? "ON" : "OFF");
                break;
            case 's':
                set(fn);
                printf("\nフラグ [%d] をONにしました。\n\n", fn);
                break;
            case 'c':
                clear(fn);
                printf("\nフラグ [%d] をOFFにしました。\n\n", fn);
                break;
            case 't':
                toggle(fn);
                printf("\nフラグ [%d] を反転しました。\n\n", fn);
                break;
        }
    }
    return 0;
}