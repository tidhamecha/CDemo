#include <assert.h>
#include <stdio.h>
#include "utils.c"

void test_sum() {
    assert(sum(2, 3) == 5);
    assert(sum(-2, 3) == 1);
    assert(sum(0, 0) == 0);
    assert(sum(100, -100) == 0);
}

int main() {
    test_sum();
    printf("All tests passed!\n");
    return 0;
}