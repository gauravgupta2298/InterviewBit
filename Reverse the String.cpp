string Solution::solve(string A) {
    vector<string> collect;
    A= A + ' ';
    int n= A.size();
    string temp="";
    for(int i=0; i<n; i++){
        if(A[i]==' '){
            if(temp.size()>0){
                collect.push_back(temp);
                temp="";
            }
        }
        else{
            temp+= A[i];
        }
    }
    n= collect.size();
    A= "";
    for(int i=n-1; i>-1; i--){
        A+= collect[i];
        if(i!=0) A+=' ';
    }
    return A;
}
