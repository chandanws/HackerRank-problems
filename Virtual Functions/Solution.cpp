// Problem link: https://www.hackerrank.com/challenges/virtual-functions/problem

class Person {
    private:
        string name;
        int age;
    public:
        void set_name(string _name) {
            name = _name;
        }
        void set_age(int _age) {
            age = _age;
        }
        string get_name() {
            return name;
        }
        int get_age() {
            return age;
        }
        virtual void getdata() {}
        virtual void putdata() {}
};

class Professor : public Person {
    private:
        int publications, cur_id;
        static int id;
    public:
        Professor() {
            cur_id = id++;
        }
        void getdata() {
            string name;
            int age, publications;
            cin >> name >> age >> publications;
            Person::set_name(name);
            Person::set_age(age);
            set_publications(publications);
        }
        void putdata() {
            printf("%s %d %d %d\n", Person::get_name().c_str(), Person::get_age(), get_publications(), get_cur_id());
        }
        void set_publications(int _publications) {
            publications = _publications;
        }
        int get_publications() {
            return publications;
        }
        int get_cur_id() {
            return cur_id;
        }
};
int Professor::id = 1;

class Student : public Person {
    private:
        int marks[6], cur_id, sum;
        static int id;
    public:
        Student() {
            cur_id = id++;
        }
        void getdata() {
            string name;
            int age, sum = 0;
            cin >> name >> age;
            for(int i = 0; i < 6; i++) {
                int mark = 0;
                cin >> mark;
                marks[i] = mark;
                sum += mark;
            }
            Person::set_name(name);
            Person::set_age(age);
            set_sum(sum);
        }
        void putdata() {
            printf("%s %d %d %d\n", Person::get_name().c_str(), Person::get_age(), get_sum(),
                   get_cur_id());
        }
        void set_sum(int _sum) {
            sum = _sum;
        }
        int get_sum() {
            return sum;
        }
        int get_cur_id() {
            return cur_id;
        }
};
int Student::id = 1;
