bool isPalindrome(int x) {
    if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
    }
    long long rev=0;
    int i=x;
    while (x!=0){
        int t=x%10;
        x/=10;
        rev=rev*10+t;
    }

    if(rev==i) 
        return true;
    else
        return false;
    

}
