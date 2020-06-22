vector<int> Solution::primesum(int A) {
    vector<bool> sieve (A+1, true);
    vector<int> ans;
    sieve[0]=false;
    sieve[1]=false;
    
    for(int i=2; i*i<=A; i++){
        if(sieve[i]){
            for(int j=i*i; j<=A; j=j+i){
                sieve[j]=false;
            }
        }
    } 
    //found all prime numbers till A
    // if f+s=A then return f,s
    for(int f=2; f<=A; f++){
        if(sieve[f]){
            int s=A-f;
            if(sieve[s]){
                ans.push_back(f);
                ans.push_back(s);
                break;
            }
        }
        
    }
    return ans;
    
}
