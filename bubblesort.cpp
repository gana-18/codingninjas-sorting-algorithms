void swapping(int &a, int &b) {      //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void bubbleSort(int *input, int size)
{
 for(int i = 0; i<size; i++) {
      int swaps = 0;         //flag to detect any swap is there or not
      for(int j = 0; j<size-i-1; j++) {
         if(input[j] > input[j+1]) {       //when the current item is bigger than next
            swapping(input[j], input[j+1]);
            swaps = 1;    //set swap flag
         }
      }
      if(!swaps)
         break;       // No swap in this pass, so array is sorted
   }
}

