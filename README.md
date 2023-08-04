# Bitset
Implementation of bitset
A bitset is an array of bools but each boolean value is not stored in a separate byte instead, bitset optimizes the space such that each boolean value takes 1-bit space only, so space taken by bitset is less than that of an array of bool or vector of bool. 

A limitation of the bitset is that size must be known at compile time i.e. size of the bitset is fixed.
