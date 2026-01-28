#include <iostream>
#include<vector>
#include<algorithm>

void print_vector(const std::vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << (i == vec.size() - 1 ? "" : " ");
    }
    std::cout << std::endl;
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int q;
    std::cin >> q;
    std::vector<int> vec;
    while(q--){
        int type;
        std::cin>>type;
        if(type==1){
            int x;
            std::cin>>x;
            vec.push_back(x);
        }
        else if(type==2){
            if(!vec.empty()){
                vec.pop_back();
            }
        } else if(type==3){
            int i;
            std::cin>>i;
            std::cout<<vec[i]<<std::endl;
        }
        else if (type==4){
            int i,x;
            std::cin>>i>>x;
            vec.insert(vec.begin()+i+1,x);
        }
        else if(type==5){
            std::sort(vec.begin(),vec.end());
        } 
        else if(type==6){
            std::sort(vec.rbegin(),vec.rend());
        } else if(type==7){
            std::cout<<vec.size()<<std::endl;
        } else if(type==8){
            print_vector(vec);
        }
    }
    return 0;
}