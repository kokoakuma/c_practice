#include <stdio.h>
#define MONEY_TYPE_COUNT 9  // 10000円札を除いたお金の種類の数
#define MONEY_ON_HAND 10000 // 計算時、手持ちのお金は常に10000円と想定されている

int main(void)
{
    int price;
    int change;

    printf("商品の金額を入力してください(1以上9999以下の整数に対応しています)\n");
    scanf("%d", &price);

    if (price < 1 || price > 9999)
    {
        printf("適切な入力ではありません。1以上9999以下の整数を入力してください\n");
        return 1;
    }

    printf("%d円の商品に対して10000円を支払った際のおつりは:\n", price);

    // おつりを計算する
    change = MONEY_ON_HAND - price;

    int money_list[MONEY_TYPE_COUNT] = {5000, 2000, 1000, 500, 100, 50, 10, 5, 1};

    for (int i = 0; i < MONEY_TYPE_COUNT; i++)
    {
        int target = money_list[i];
        int count = 0;

        // 対象の紙幣・硬貨の最大枚数を計算する
        count = change / target;
        // 対象の紙幣・硬貨分を引いた残りの金額を計算する
        change %= target;

        // 1枚以上の紙幣・硬貨のみを表示する
        if (count > 0)
        {
            printf("%d円: %d枚\n", target, count);
        }
    }
    return 0;
}

/*
  選択課題: B-1

  main関数では1以上9999以下の整数を受け取り、10000円で支払った際のおつりを表示する。

  まず、おつりの計算と、お金の配列(10000円以外)の定義を行う。
  次に、大きい額からforでループさせ、出せる枚数の最大と余りを計算する。
  そうすることで、"大きな金額の紙幣、硬貨を優先します"という仕様を満たす。

  工夫:
  - 減算の繰り返しでも枚数を求められるが、ネストを浅くするために除算にした
  - お金以外の定数はマクロを定義することで可読性向上を狙った

*/