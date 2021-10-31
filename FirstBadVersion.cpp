// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    void Linear_Search(long long int& i ){
        while( (i-1)>0 && isBadVersion(i-1))i--;
    }
    int firstBadVersion(int n) {
        long long int l=1,h=n,m;
        while(l<h){
            m =(h+l)/2;
            if(isBadVersion(m)){
                h=m;
            }
            else {
                l = m+1;
            }
        }
        return h;
    }
};
