int Solution::trailingZeroes(int A) {
    int zeros=0, fives=5;
    while(A/fives!=0){
        zeros=zeros+A/fives;
        fives=fives*5;
    }
    return zeros;
}
