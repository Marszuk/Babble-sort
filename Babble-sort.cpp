#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;



int main()
{

vector<int> v1 = {4,2,5,3,7,6,9,2};


vector<int>::iterator it2 = v1.begin()+1;
for(std::vector<int>::iterator it1 = v1.begin() ; it1 != v1.end(); ++it1){
 for(std::vector<int>::iterator it2 = v1.begin() ; it2 != v1.end(); ++it2){
     if(*it1<*it2){
        iter_swap(it1,it2);

    }
 }
}
 for (auto a:v1)
    cout<<a<<endl;


    return 0;
}