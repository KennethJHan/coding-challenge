#include <iostream>
#include <cstdio>
#include <cstring>

int main()
{
    const int bufferSize = 5000000;
    char buffer[bufferSize];
    fgets(buffer, bufferSize, stdin);
    int N = atoi(buffer);
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        fgets(buffer, bufferSize, stdin);
        ans += atoi(buffer);
    }
    printf("%d\n", ans);

    return 0;
}