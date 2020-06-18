vector<int> Solution::plusOne(vector<int> &A) 
{
    int n=A.size();
    int carry=1;
    while(carry && n--)
    {
        A[n]++;
        if(A[n]==10)
        {
            A[n]=0;
            carry=1;
        }
        else
        {
            carry=0;
        }
    }
    if(carry)
    {
        A.insert(A.begin(),1);
    }
    while(A[0]==0)
    {
        A.erase(A.begin());
    }
    return A;
}
