void insertionSort(int *input, int size)
{
      int key, j;
   for(int i = 1; i<size; i++) {
      key = input[i];//take value
      j = i;
      while(j > 0 && input[j-1]>key) {
         input[j] = input[j-1];
         j--;
      }
      input[j] = key;   //insert in right place
   }
}