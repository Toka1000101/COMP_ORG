
int n = 100;
void copyij(int src[n][n], int dst[n][n]) {
  int i,j;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      dst[i][j] = src[i][j];
}

int main() {
    int src[n][n];
    int dst[n][n];

    copyij(src,dst);

    return 0;
}