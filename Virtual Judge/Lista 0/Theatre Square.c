#include <stdio.h>
#include <math.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    long long flagstones_n = ceil((double)n/a);
    long long flagstones_m = ceil((double)m/a);
    printf("%lld", flagstones_n * flagstones_m);
    return 0;
}
