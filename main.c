void turning_points (int change, int prev, int count) {
 int num;
  while (scanf("%d", &num) == 1) {
    if (prev > num) {
      if (change == 1) {
        ++count;
      }
      change = -1;
    }
    else if (prev < num) {
      if (change == -1) {
        ++count;
      }
      change = 1;
    }
    prev = num;
  }
  printf ("%d\n", count);

}

int main(void) {
  turning_points (0, 0, 0);
}
