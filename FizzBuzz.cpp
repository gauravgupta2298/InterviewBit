vector<string> Solution::fizzBuzz(int A) {
    vector<string> ans;
    int i; string value;
    for(i=1; i<=A; i++){
        if(i%3==0 && i%5==0){
            value="FizzBuzz";
        }else if(i%3==0){
            value="Fizz";
        }else if(i%5==0){
            value="Buzz";
        }else{
            value=to_string(i);
        }
        ans.push_back(value);
    }
    return ans;
}
