int Solution::pow(int x, int n, int d) {
    
    if(n==0){
        if(x==0) return 0;
        return 1;
    } 
    if(n==1) return x%d<0 ? x%d+d : x%d;
    
    long long int ans=1, value=x;
    while(n>0){
        if(n%2==1){
            ans= (ans*value)%d;
            n--;
        }
        else{
            value= (value*value)%d;
            n= n/2;
        }
    }
    
    return ans%d<0 ? ans%d+d : ans%d;
}
