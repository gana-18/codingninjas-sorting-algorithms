int findSecondLargest(int *input, int n)
{
     long a = 2147483648;
     int count=0;int i=0,j=1;
    for(j;j<n;j++){
        if(input[i] == input[j]){
        	count++;
        }
    }
    if((count)==n-1 || n <= 1)
    	return -a;
    else{
        int max = -9999999;
	    int j = 0;
	    for(int i = 0; i < n; i++){
		    if(input[i] > max){
			    max = input[i];
		    }
	    }
	    int temp = max;
	    max = -9999999;
	    for(int i = 0; i < n; i++){
		    if(input[i] > max && input[i] != temp){
			    max = input[i];
		    }
	    }
        return max;
	}
}