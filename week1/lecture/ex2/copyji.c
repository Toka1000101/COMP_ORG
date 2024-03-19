
int n = 100;
void copyji(int src[n][n], int dst[n][n]){
  int i,j;
  for (j = 0; j < n; j++)
    for (i = 0; i < n; i++)
      dst[i][j] = src[i][j];
}


int main() {
    int src[n][n];
    int dst[n][n];
    copyji(src,dst);

    return 0;
}