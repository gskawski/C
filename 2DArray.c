int main() {
  // better to use ptr to 2D array instead of pointers of pointers to point to
  double **a;
  int i1 = sizeof(a[0]);  //i1 =4 = sizeof(double*)
  
  double matrix[rows][col];
  int i2 sizeof(matrix[0]);  //i2 = 240 = col * sizeof(double
}
