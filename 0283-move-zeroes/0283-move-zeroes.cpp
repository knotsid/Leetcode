class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        // finding first 0 in array
	    int j=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]==0){
	            j=i;
	            break;
	        }
	    }
	    
	    // edge case : if no zero in array
	    if(j==-1){
	        return ;
	    }
	    
	    // swapping of non zero and zero
	    for(int i=j+1;i<n;i++){
	        if(arr[i]!=0){
	            swap(arr[i],arr[j]);
	            j++;
	        }
	    }
    }
};