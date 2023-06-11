#ifndef EXAMPLE_H
#define EXAMPLE_H

class Example {
public:
    Example(double value);
    // The important method that is missing is the 'deconstructor'
    // This is a serious issue because without a 'deconstructor' it is 
    // not possible to delete objects of the class and there will
    // be no way to 'clean up' the memory
    ~Example();
    void setValue(double value);
    double getValue();

private:
    double* ptrValue;
};

#endif