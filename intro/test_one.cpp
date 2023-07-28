#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using std::vector;
using std::string;
using std::set;

vector <int> get_intersection_of_arrays(vector<int>& arr_a, vector<int>& arr_b);
int main(){
     int test[] = {1, 2, 3, 4,5 , 6, 7, 8};
     int test_two[] = {4, 5, 6, 7, 8, 9, 10};
    vector<int> alpha = vector<int>({1, 2, 3, 4, 5, 5, 6, 7, 8});
    vector<int> beta = vector<int>(test_two,test_two+7) ;
    // std::copy(std::begin(test), std::end(test), alpha.begin());
    // std::copy(std::begin(test_two), std::end(test_two), beta.begin());
    std::cout << alpha.size() << std::endl;
    std::cout << beta.size() << std::endl;
    vector<int> result = get_intersection_of_arrays(alpha, beta);
    set<int> set_result = set<int>(result.begin(), std::end(result));
    for(int index: set_result){
        std::cout << index << " ";
    }
}
vector<int> get_intersection_of_arrays(vector <int> & arr_a , vector<int> & arr_b){
    vector<int> result = vector<int>();
    // int len_a = sizeof(arr_a)/sizeof(arr_a[0]);
    // int len_b = sizeof(arr_b)/sizeof(arr_b[0]);
    int len_a = arr_a.size();
    int len_b = arr_b.size();
    // std::cout << "size: "<< size << std::endl;
    // std::cout << "sizeof: "<< len_a << std::endl;
    for(int index: arr_a){
        for(int index_b: arr_b){
            if(index == index_b){
                result.push_back(index_b);
            }
        }
    }
    return result;
}