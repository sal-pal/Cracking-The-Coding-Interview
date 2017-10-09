## Hash Tables

### Basics

* Hash tables are unordered collections of key-value pairs that support INSERT, FIND, and DELETE operations in constant time.
* Hash tables can use arrays to  store values, where each value can be looked up via  key, i.e. that value's array index.
* When keys are too large to be used to look up values, a hash function is needed.
* Hashing functions are used to map a large number of possible keys to a small set of buckets. 
* The idea of hashing is to distribute entries (key-value pairs) uniformly across an array.
* A key is converted to an integer, such that the integer is an element of the range 0 to the index of the last value in the array.


### Study Questions 
1. What is the basic structure of a hash table?
3. What are the basic operations of a hash table?
4. How are keys associated with values?
5. Explain at a high level the steps for creating hash function.
6. What types of tasks are hash tables useful for?
