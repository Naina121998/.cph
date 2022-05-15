#include <iostream>
#include <stack>
using namespace std;
int getMaxArea(int hist[],int n){
  
    stack <int> s;
    int tp;
    int max_area = 0;
    int area;
    int i = 0;
    while(i<n){
        if(s.empty() ||  hist[i] >= hist[s.top()]){
            s.push(i++);
        } 
      else {
            tp = s.top();
            s.pop();
        
        area = hist[tp] * (s.empty() ? i : 
                                   i - s.top() - 1);
  
            if (max_area < area){
                max_area = area;
               }
       }
    }
    
    
    while(!s.empty()){
        tp = s.top();
        s.pop();
         area = hist[tp] * (s.empty() ? i : (i - s.top() - 1));
        if( max_area < area){
            max_area = area;
        }
    }
    return max_area;

}

    int main()
{
    int his[] = {6, 2, 5, 4, 5, 1, 26};
    int n = sizeof(his)/sizeof(his[0]);
    cout << "Maximum area is " << getMaxArea(his, n);
    return 0;
}
  