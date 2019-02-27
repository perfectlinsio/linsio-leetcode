int reverse(int x) {
    long long rev=0;
    while (x!=0){
        int t=x%10;
        x/=10;
        rev=rev*10+t;
    }
    if(rev<INT_MIN||rev>INT_MAX)
        return 0;
    return rev;
}
