int reverse(int x){
    long y = 0;
    while(x){
        y = y * 10 + x % 10;
        x /= 10;
    }
    return (y > -pow(2,31) && y < pow(2,31) - 1) ? y:0;
}