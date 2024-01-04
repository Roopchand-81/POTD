class Solution
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {

        set<int> uniqe_set;         // create a set container;
        uniqe_set.insert(a, a + n); // initialised first array in set;
        uniqe_set.insert(b, b + m); // initalised  second array in set;
        return uniqe_set.size();    // return total element in set (union of both array);
    }
};