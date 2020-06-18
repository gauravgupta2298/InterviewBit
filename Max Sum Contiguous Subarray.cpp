int Solution::maxSubArray(const vector<int> &A) {
    int i,n=A.size(),max=A[0],sum=A[0];
    if(sum<0) sum=0;
    for(i=1; i<n; i++){
        sum=sum+A[i];
        if(max<sum) max=sum;
        if(sum<0) sum=0;
    }
    return max;
}
