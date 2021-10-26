int binarySearch(int *input, int n, int val)
{
    long low=0,high=n-1,mid,i=1,j=1;
    while(low<=high){
     mid = (low + high)/2;
    if (val == input[mid]){
        return mid;
        }
    else if (val > input[mid]) {    // x is on the right side
        low = mid + 1;
            if(val==input[mid]){
                return mid;
            }
        }
    else {                          // x is on the left side
        high = mid - 1;
            if(val==input[mid]){
                return mid;
            }
        }
        }
    return -1;
    
    
}