#include <bits/stdc++.h>
using namespace std;

const int M = 32;

void intro()
{
	/*
	* A bitset is an array of bool but each Boolean value is not stored separately instead bitset optimizes the
	* space such that each bool takes 1 bit space only, so space taken by bitset bs is less than that of bool
	* bs[N] and vector bs(N).
	! However, a limitation of bitset is, N must be known at compile time, i.e., a
	! constant (this limitation is not there with vector and dynamic array).
	*/

	/*
	* As bitset stores the same information in compressed manner the operation on bitset are faster than
	* that of array and vector. We can access each bit of bitset individually with help of array indexing
	* operator [] that is bs[3] shows bit at index 3 of bitset bs just like a simple array.
	! Remember bitset starts its indexing backward that is for 10110, 0 are at 0th and 3rd indices whereas
	! 1 are at 1st 2nd and 4th indices.
	*/

	/*
	* We can construct a bitset using integer number as well as binary string via constructors. The size of
	* bitset is fixed at compile time that is, it can’t be changed at runtime.
	* The main function defined for bitset class are operator [], count, size, set, reset and many more..
	*/


	// default constructor initializes with all bits 0
	bitset<M> bset1;

	// bset2 is initialized with bits of 20
	bitset<M> bset2(20);

	// bset3 is initialized with bits of specified binary string
	bitset<M> bset3(string("1100"));
	// Strings must be in binary representation (e.g. "8", "16" not acceptable)
	bitset<M> bset4("1100");

	// cout prints exact bits representation of bitset
	cout << bset1 << endl; // 00000000000000000000000000000000
	cout << bset2 << endl; // 00000000000000000000000000010100
	cout << bset3 << endl; // 00000000000000000000000000001100
	cout << bset4 << endl; // 00000000000000000000000000001100
	cout << endl;

	// declaring set8 with capacity of 8 bits
	bitset<8> set8; // 00000000

	// setting first bit (or 6th index)
	set8[1] = 1; // 00000010
	set8[4] = set8[1]; // 00010010
	cout << set8 << endl;

	// count function returns number of set bits in bitset
	int numberof1 = set8.count();

	// size function returns total number of bits in bitset
	// so there difference will give us number of unset(0)
	// bits in bitset
	int numberof0 = set8.size() - numberof1;

	cout << set8 << " has " << numberof1 << " ones and "
		<< numberof0 << " zeros\n";

	// test function return 1 if bit is set else returns 0
	cout << "bool representation of " << set8 << " : ";
	for (int i = 0; i < set8.size(); i++)
		cout << set8.test(i) << " ";

	cout << endl;

	// any function returns true, if atleast 1 bit is set
	if (!set8.any())
		cout << "set8 has no bit set.\n";

	if (!bset1.any())
		cout << "bset1 has no bit set.\n";

	// none function returns true, if none of the bit is set
	if (!bset1.none())
		cout << "bset1 has some bit set\n";

	// all function test if all bits are set. returns true, if all of the bit is set
	if (bset1.all())
		cout << "bset1 has all bit set\n";


	/*
	 * For bitset set, reset and flip function are defined. Set function sets (1) all bits of bitset if no argument
	 * is provided otherwise it sets the bit whose position is given as argument. In same way reset and flip
	 * also work if they are called with no argument they perform their operation on whole bitset and if some
	 * position is provided as argument then they perform operation at that position only.
	*/

	// bset.set() sets all bits
	cout << set8.set() << endl;

	// bset.set(pos, b) makes bset[pos] = b
	cout << set8.set(4, 0) << endl;

	// bset.set(pos) makes bset[pos] = 1  i.e. default is 1
	cout << set8.set(4) << endl;

	// reset function makes all bits 0
	cout << set8.reset(2) << endl;
	cout << set8.reset() << endl;

	// flip function flips all bits i.e.  1 <-> 0 and  0 <-> 1
	cout << set8.flip(2) << endl;
	cout << set8.flip() << endl;

	// Converting decimal number to binary by using bitset
	int num = 100;
	cout << "\nDecimal number: " << num
		<< "  Binary equivalent: " << bitset<8>(num);

	return;
}

void bitwise()
{
	/*
	 * For bitset all bitwise operator are overloaded that is they can be applied to bitset directly without any
	 *casting or conversion, main overloaded operator are &, |, ==, != and shifting operator <> which makes
	 * operation on bitset easy.
	*/

	bitset<4> bset1(9); // bset1 contains 1001
	bitset<4> bset2(3); // bset2 contains 0011

	// comparison operator
	cout << (bset1 == bset2) << endl; // false 0
	cout << (bset1 != bset2) << endl; // true  1

	// bitwise operation and assignment
	cout << (bset1 ^= bset2) << endl; // 1010
	cout << (bset1 &= bset2) << endl; // 0010
	cout << (bset1 |= bset2) << endl; // 0011

	// left and right shifting
	cout << (bset1 <<= 2) << endl; // 1100
	cout << (bset1 >>= 1) << endl; // 0110

	// not operator
	cout << (~bset2) << endl; // 1100

	// bitwise operator
	cout << (bset1 & bset2) << endl; // 0010
	cout << (bset1 | bset2) << endl; // 0111
	cout << (bset1 ^ bset2) << endl; // 0101

	return;
}

void construct_by_str()
{
	string bit_string = "110010";
	bitset<8> b1(bit_string);             // [0, 0, 1, 1, 0, 0, 1, 0]

	// string from position 2 till end
	bitset<8> b2(bit_string, 2);      // [0, 0, 0, 0, 0, 0, 1, 0]

	// string from position 2 till next 3 positions
	bitset<8> b3(bit_string, 2, 3);   // [0, 0, 0, 0, 0, 0, 0, 1]

	cout << b1 << '\n' << b2 << '\n' << b3 << '\n';

	return;
}

void construct_by_chars()
{
	/*
	 ! If _pos > str.size(), this constructor throws std::out_of_range.
	 ! If any characters examined in _str is not zero or one, it throws std::invalid_argument.
	*/

	// string constructor using custom zero/one digits
	string alpha_bit_string = "aBaaBBaB";
	bitset<8> b1(alpha_bit_string, 0, alpha_bit_string.size(), 'a', 'B');         // [0,1,0,0,1,1,0,1]

	cout << b1 << '\n';
}

void construct_by_cstr()
{
	/*
	 * Constructs an object of class bitset, initializing the N bits to values that correspond to the
	 * characters provided in a c-style character string of zeros and ones. You call the constructor without
	 * casting the string into a string type. It also has two optional parameters, _Zero and _One, which
	 * indicate what character in _Str is to be interpreted to mean a 0 bit and a 1 bit, respectively.
	*/

	// char* constructor using custom digits
	bitset<8> b1("XXXXYYYY", 8, 'X', 'Y'); // [0, 0, 0, 0, 1, 1, 1, 1]
	cout << b1 << '\n';
}

void operations()
{
	/*
	 * Converts the contents of the bitset to a string. Uses zero to represent bits with value of false and
	 * one to represent bits with value of true. The resulting string contains N characters with the first
	 * character corresponds to the last (N-1th) bit and the last character corresponding to the first
	 * bit. Also, we can pass the characters used to print true and false value through the parameters.
	*/

	bitset<8> b(42);
	cout << b.to_string() << '\n';			//00101010
	cout << b.to_string('*') << '\n';		//**1*1*1*
	cout << b.to_string('O', 'X') << '\n';	//OOXOXOXO


	/*
	 * Converts the contents of the bitset to an unsigned long integer. The first bit of the bitset
	 * corresponds to the least significant digit of the number and the last bit corresponds to the most
	 * significant digit.
	 ! Function throws std::overflow_error if the value cannot be represented in unsigned long.
	*/
	bitset<5> bb(5);
	cout << bb.to_ulong() << '\n';	//  to long (it means int in cpp) (32-bit)
	cout << bb.to_ullong() << '\n';	// to long long in cpp (64-bit)
}

void reverse(bitset<M>& b)
{
	/*
	? Reverse bits in bitset
	*/

	for (int i = 0; i < M / 2; i++) {
		bool temp = b[i];
		b[i] = b[M - i - 1];
		b[M - i - 1] = temp;
	}
}

void reverse()
{
	auto x = bitset<M>(10);
	cout << x << endl;

	auto str = x.to_string();
	reverse(str.begin(), str.end());

	auto y = bitset<M>(str);
	cout << y << endl;
}
