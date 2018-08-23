// Problem link: https://www.hackerrank.com/challenges/rectangle-area/problem


/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
    public:
        int width, height;
        Rectangle() {
            width = 0;
            height = 0;
        }
        void setWidth(int w) {
            width = w;
        }
        void setHeight(int h) {
            height = h;
        }
        void display() {
            cout << width << " " << height << endl;
        }
};

class RectangleArea : public Rectangle {
    public:
        int area;
        RectangleArea() {
            area = 0;
        }
        void read_input() {
            int width = 0, height = 0;
            cin >> width >> height;
            Rectangle::setWidth(width);
            Rectangle::setHeight(height);
            setArea(width, height);
        }
        void setArea(int width, int height) {
            area = width * height;
        }
        void display() {
            cout << area << endl;
        }
};
