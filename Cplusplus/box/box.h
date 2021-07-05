/**
 * @file box.h
 * @author Bharath.G ()
 * @brief Class definition for box
 * @version 0.1
 * @date 2021-06-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __BOX_H_
#define __BOX_H_

class box
{
private:
    double m_length;
    double m_breadth;
    double m_height;
public:
    box();
    box(double val);
    box(double lenth, double breadth, double height);
    box(const box& ref);

    double volume() const;
    double get_length() const;
    double get_breadth()const;
    double get_height()const;

    ~box();
};

#endif // #ifndef __BOX_H_