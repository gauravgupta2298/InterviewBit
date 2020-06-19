int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    int i,x,y,diagonal,distance=0,n=X.size();
    for(i=1; i<n; i++)
    {
        x=abs(X[i-1]-X[i]);
        y=abs(Y[i-1]-Y[i]);
        diagonal=min(x,y); //trying to travel diagonal upto a limit
        distance=distance+abs(x-y)+diagonal; //after travelling diagonally now moving in straight line 
    }
    return distance;
}
