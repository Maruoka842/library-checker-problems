#include <cstdio>
#include "random.h"
#include "../params.h"

using namespace std;
using ll = long long;

int main(int, char* argv[]) {
    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int n = 262144 + (seed % 3) - 1;

    printf("%d\n", n);

    printf("1");
    for (int i = 1; i < n; i++) {
        printf(" %d", gen.uniform<int>(0, MOD - 1));
    }
    printf("\n");
    return 0;
}
