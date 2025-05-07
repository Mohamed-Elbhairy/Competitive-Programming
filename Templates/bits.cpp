bool getbit(int n,int x) {
    return ((n >> x) & 1);
}
void setbit(int& n, int x) {// to 1
    n |= 1LL<<x;
}
ll resetbit(ll n, int x) {// to 0
    return n^ (1LL << x);
}
void flipbit(int& n, int x) {
    n ^= (1<<x);
}
bool isPowerof2(int n) {
    if (!n)return 0;
    return !(n & n - 1);
}