void rotate(int *input, int d, int n)
{
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = input[i];
    }
    // shifting remaining elements of the array
    for (int i = d; i < n; i++) {
        input[i - d] = input[i];
    }
    for (int i = 0; i < d; i++) {
        input[n - d+ i] = temp[i];
    }
}