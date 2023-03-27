#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    scanf("%d", &x);
    int angka[x], hasil[x];

    for (int a = 0; a < x; a++)
    {
        scanf("%d", &angka[a]);
        if (angka[a] == 1)
        {
            hasil[a] = 0;
            continue;
        }
        hasil[a] = 0;
        for (int b = 1; b < sqrt(angka[a]); b++)
        {
            if (angka[a] % b == 0)
            {
                hasil[a] += b;
                hasil[a] += angka[a] / b;
            }
        }
        hasil[a] -= angka[a];
    }

    for (int a = 0; a < x; a++)
    {
        printf("%d\n", hasil[a]);
    }
}