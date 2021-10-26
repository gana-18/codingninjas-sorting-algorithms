void pushZeroesEnd(int *input, int size)
{
    
    int count = 0;  // Count of non-zero elements
    for (int i = 0; i < size; i++)
        if (input[i] != 0)
            input[count++] = input[i]; // here count is
                                   // incremented
 
    // Now all non-zero elements have been shifted to
    // front and  'count' is set as index of first 0.
    // Make all elements 0 from count to end.
    while (count < size)
        input[count++] = 0;
}