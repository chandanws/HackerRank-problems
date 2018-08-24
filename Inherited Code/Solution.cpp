// Problem link: https://www.hackerrank.com/challenges/inherited-code/problem

/* Define the exception here */
struct BadLengthException : public exception {
    int size;
    BadLengthException(int n) {
        size = n;
    }
    const char * what() const throw () {
        printf("%d", size);
        return "";
    }
};
