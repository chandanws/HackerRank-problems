// Problem link: https://www.hackerrank.com/challenges/box-it/problem

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box {
    private:
        int l, b, h;
    public:
        Box() {
            l = 0;
            b = 0;
            h = 0;
        }
        Box(int _l, int _b, int _h) {
            l = _l;
            b = _b;
            h = _h;
        }
        Box(Box& box) {
            l = box.getLength();
            b = box.getBreadth();
            h = box.getHeight();
        }
        int getLength() {
            return l;
        }
        int getBreadth() {
            return b;
        }
        int getHeight() {
            return h;
        }
        long CalculateVolume() {
            return (long) getLength() * getBreadth() * getHeight();
        }
        bool operator<(Box& box) {
            return getLength() < box.getLength() ||
                (getBreadth() < box.getBreadth() && getLength() == box.getLength()) ||
                (getHeight() < box.getHeight() &&
                 getBreadth() == box.getBreadth() &&
                 getLength() == box.getLength());
        }
};

ostream& operator<<(ostream& out, Box& B) {
    return out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
}
