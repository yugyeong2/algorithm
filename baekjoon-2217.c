#include <stdio.h>
#include <stdlib.h>

int compare(const void *first, const void *second)
{
    if (*(int *)first > *(int *)second)
        return 1;
    else if (*(int *)first < *(int *)second)
        return -1;
    else
        return 0;
}

int main()
{
    int N = 0; // 줄의 개수
    scanf("%d", &N);

    int *w = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &w[i]);
    }

    qsort(w, N, sizeof(int), compare); // 오름차순 정렬

    int *result = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
        result[i] = w[i] * (N - i);
    }

    int max = result[0];
    for (int i = 0; i < N; i++)
    {
        if (max < result[i])
        {
            max = result[i];
        }
    }

    printf("%d", max);

    return 0;
}
// n^2이 안되니까 정렬을 하자
//  그리디
//  작은거 구하고
//  제일작은거 * n
//  2번째 작은거 *(n-1)
//  모두 다 해야됌
//  10, 20, 20은 40
//  10, 20, 50은 50