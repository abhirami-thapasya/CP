long long int longestSubarry(long long int A[], long long int N) {
    int right=0,left=0;
    long long int maxm=0;
    while(right<N){
        if(A[right]<0){
            while(A[right]<0){
                right++;
            }
            if(right<N){
                left=right;
                long long int len=right-left+1;
                maxm=max(len,maxm);
                right++;
            }
            
        }
        else{
            long long int len=right-left+1;
            maxm=max(len,maxm);
            right++;
        }
    }
    return maxm;
}