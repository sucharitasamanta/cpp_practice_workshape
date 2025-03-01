#include <iostream>
#include<stdio.h>
#include <tuple>
using namespace std;

template <typename TupleType, size_t Index = 0>
void traverseTuple(const TupleType& tuple) {
    if constexpr (Index < std::tuple_size_v<TupleType>) {
        // Access and print the element
        std::cout << std::get<Index>(tuple) << "\t"; 

        // Recursively traverse the next element
        traverseTuple<TupleType, Index + 1>(tuple);
    }
}

int main()
{
    // Initialize tuples
    tuple<int, char, float> t1(3, 'B', 10.10);
    tuple<int, char, float> t2 = make_tuple(5, 'S', 37.90);
    
    auto size1 = tuple_size<decltype(t1)>::value;
    cout<<"Size of tuple1 = "<<size1<<endl;
    cout<<"Values in tuple1 are: "<<get<0>(t1)<<"\t"<<get<1>(t1)<<"\t"<<get<2>(t1)<<endl;
    
    cout<<"Values in tuple2 are: ";
    traverseTuple(t2);
    
    // Swap the tuples
    t1.swap(t2);
    cout<<"\nNew Values in tuple1 are: ";
    traverseTuple(t1);
    cout<<"\nNew Values in tuple2 are: ";
    traverseTuple(t2);
    
    // Concatinate tuples
    auto t3 = tuple_cat(t1,t2);
    cout<<"\nTuple3: ";
    traverseTuple(t3);
    
    return 0;
}
