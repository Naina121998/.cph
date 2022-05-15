#include <iostream>
#include <stack>
using namespace std;
int getMaxArea(int his[],int n){
  
    stack <int> s;
    int tp;
    int max_area = 0;
    int area;
    int i = 0;
    while (i < n)
    {
        // If this bar is higher than the bar on top 
        // stack, push it to stack
        if (s.empty() || his[s.top()] <= his[i]){
            s.push(i++);
  
        }
        else
        {
            tp = s.top();  // store the top index
            s.pop();  // pop the top
  
            // Calculate the area with hist[tp] stack 
            // as smallest bar
            area= his[tp] * (s.empty() ? i : 
                                   i - s.top() - 1);
  
            // update max area, if needed
            if (max_area < area)
                max_area = area;
        }
    }
   while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area = his[tp] * (s.empty() ? i : 
                                i - s.top() - 1);
  
        if (max_area < area)
            max_area = area;
    }
  
    return max_area;
}
  

  int main()
{
    int hist[] = {6, 2, 5, 4, 5, 1, 6};
    int n = sizeof(hist)/sizeof(hist[0]);
    cout << "Maximum area is " << getMaxArea(hist, n);
    return 0;
}

