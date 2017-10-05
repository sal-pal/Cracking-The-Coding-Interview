## Hash Tables

### Basics

* Hash tables are unordered collections of key-value pairs that support INSERT, FIND, and DELETE operations in constant time.
* Hash tables can use arrays to  store values, where each value can be looked up via  key, i.e. that value's array index.
* When keys are too large to be used to look up values, a hash function is needed.
* Hashing functions are used to map a large number of possible keys to a small set of buckets. 
* The idea of hashing is to distribute entries (key-value pairs) uniformly across an array.

### How Hashing Is Implemented
* A key is converted to an integer, such that the integer is an element of the range 0 to the index of the last value in the array.