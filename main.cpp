#include <iostream>
#include <vector>

int main() {
    std::vector<float> price {2.5, 4.25, 3.0, 10.0};
    std::vector<int> index {1, 1, 0, 3};

    float sum = 0;

    for(int i=0; i<index.size(); i++) {
        int ind = index[i];

        // check index
        if( (ind<0) || (ind>=price.size()) ) {
            std::cout << "Error. Index out of range." << std::endl;
            return 1;
        }

        // calculate
        sum += price[ind];
    }

    // result output
    std::cout << "Result: " << sum << std::endl;

    return 0;
}
