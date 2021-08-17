/*

Vectors are sequence containers representing arrays that can change in size.
Vectors are same as dynamic arrays with the ability to resize itself automatically. 
Just like arrays, vectors use contiguous storage locations for their elements.
one-dimensional array. 
data is inserted at the end.
The default values for vector's elements is Zero (0).

*/

#include <bits/stdc++.h>
#include <iostream> 
#include <vector>

using namespace std;

struct myStruct { string name; int age; };
int data[] = { 1, 2, 3, 4, 5, 6, 7 ,8 ,9 };

int main()
{
    // Declaration:
    vector <int> v1;        // empty vector
    vector <int> v2[10];    // array of 10 vector<int>v
    vector <int> v3(10);    // vector with 10 int elements  
    vector < pair <int,int> > v4;
    vector < stack <int> > v5;
    vector < set <int> > v6;
    vector < myStruct > v7, v8, v9, v10; 


    // Initialization:
    vector <int> v11 = v1;                                       // make a copy
    vector <int> v12(v1);                                        // identical to v2's ints
    vector <int> v13(1000);                                      // specific size: 1000 0's
    vector <string> v14(20, "Unknown");                          // specific size: 20 & initial value: "Unknown"
    vector <int> v15(v1.begin(), v1.end());                      // [begin,end)
    vector <int> v16(data, data+(sizeof(data)/sizeof(data[0]))); // data+length=.end()
    vector <int> v17(v1.begin(), v1.begin()+(v1.size()/2));      // 1st half of v1
    vector <int> v18(v1.rbegin()+(v1.size()/2), v1.rend());      // 1st half of v1, ordered back-to-front
    vector <int> v19 = {1 ,2, 3, 4, 5, 6, 7, 8, 9};
    

    // Iterator:
    vector <int>::iterator it1;
    vector < set <int> >::iterator it2;
    vector < pair <int,int> >::iterator it3;
/*  
    begin()   - O(1) – Returns an iterator pointing to the first element in the vector
    end()     - O(1) – Returns an iterator pointing to the theoretical element that follows the last element in the vector
    rbegin()  - O(1) – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    rend()    - O(1) – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    cbegin()  - O(1) – Returns a constant iterator pointing to the first element in the vector.
    cend()    - O(1) – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
    crbegin() - O(1) – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    crend()   - O(1) – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end) 
*/
    

    // Capacity:
/*  
    size()          – O(1) - Returns the number of elements in the vector.
    max_size()      – O(1) - Returns the maximum number of elements that the vector can hold.
    capacity()      – O(1) - Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    resize(n)       – Linear on the number of elements inserted/erased, If a reallocation happens, the reallocation is itself up to linear in the entire vector size. - Resizes the container so that it contains ‘n’ elements.
    empty()         – O(1) - Returns whether the container is empty.
    shrink_to_fit() – At most, linear in container size. - Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    reserve(n)      – If a reallocation happens, linear in vector size at most - Requests that the vector capacity be at least enough to contain n elements.
*/

    
    // Element access:
    v1.front() = 5;
    v2.back() += 3;
    v3.at(0) = 7;
    int *pos = v1.data();
/*
    operator[n] - O(1) - Returns a reference to the element at position ‘n’ in the vector
    at(n)       - O(1) - Returns a reference to the element at position ‘n’ in the vector
    front()     - O(1) - Returns a reference to the first element in the vector
    back()      - O(1) - Returns a reference to the last element in the vector
    data()      - O(1) - Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
*/


    // Modifiers:
/*
    operator=      - O(1) - assigns new value to the vector element by replacing old one
    assign(n,val)  – assign(first,last) - Linear on initial and final sizes - It assigns new value to the vector elements by replacing old ones, fill the array with val by n times 
    push_back(val) – Add element at the end
    pop_back()     – Delete last element
    insert()       - Linear on the number of elements inserted plus the number of elements after position (moving) – It inserts new elements before the element at the specified position
    erase()        – It is used to remove elements from a container from the specified position or range.
    clear()        – It is used to remove all the elements of the vector container
*/
    

    return 0;
}