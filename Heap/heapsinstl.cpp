#include<bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> s = {20, 30, 40, 25, 15};
    make_heap(s.begin(),s.end());
    cout<<s.front()<<endl;
     vector<int> v1 = {20, 30, 40, 25, 15};
     make_heap(v1.begin(), v1.end());
      
    // Displaying the maximum element of heap
    // using front()
    cout << "The maximum element of heap is : ";
    cout << v1.front() << endl;
      
    // using push_back() to enter element
    // in vector
    v1.push_back(50);
      
    // using push_heap() to reorder elements
    push_heap(v1.begin(), v1.end());
      
    // Displaying the maximum element of heap
    // using front()
    cout << "The maximum element of heap after push is : ";
    cout << v1.front() << endl;
      
     // using pop_heap() to delete maximum element
    pop_heap(v1.begin(), v1.end());
    v1.pop_back();
      
    // Displaying the maximum element of heap
    // using front()
    cout << "The maximum element of heap after pop is : ";
     cout << "Output of begin and end: ";
    for (auto i = v1.begin(); i < v1.end(); i++)
        cout << *i << " ";
        cout<<endl;
    sort_heap(v1.begin(),v1.end());
     for (auto i = v1.begin(); i < v1.end(); i++)
        cout << *i << " ";
        cout<<endl;
    vector <int> st = {40, 30, 25, 35, 15};
    is_heap(st.begin(),st.end())? 
    cout<<"It is  a heap" : cout<<"It is not a heap";
    cout<<endl;
    auto it = is_heap_until(st.begin(),st.end());
    for(auto i = st.begin();i<it;i++){
        cout<<*i<<" ";
    }

  
    return 0;
}