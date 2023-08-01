#include <stdio.h>

int main() {
  int costs[] = {100, 400, 250, 500, 105};
  int min_cost = costs[0];
  int max_cost = costs[0];

  for (int i = 1; i < 5; i++) {
    if (costs[i] < min_cost) {
      min_cost = costs[i];
    }
    if (costs[i] > max_cost) {
      max_cost = costs[i];
    }
  }

  printf("Minimum cost: %d\n", min_cost);
  printf("Maximum cost: %d\n", max_cost);

  return 0;
}