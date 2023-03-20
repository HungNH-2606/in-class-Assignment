#include<iostream>
int square_root(int x){
    int left = 2;
    int right = x/2;
    int ans = 0;
    if(x==0 || x==1)
    {
        return x;
    }
    else
    {
        while(left<=right)
        {
            long long int mid = left+ (right-left)/2;
            if(mid == x/mid)
            {
                return mid;
            }
            else if(mid < x/mid)
            {
                ans = mid;
                left = mid + 1;
            }
            else
            {
                right = mid-1;
            }
        }
    }
    return ans;
}

int main(){
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;

    std::cout << "Square root of " << x << " is " << square_root(x) << std::endl;

    return 0;
}