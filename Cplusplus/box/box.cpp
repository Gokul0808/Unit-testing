#include "box.h"

box::box(): m_length(0.0), m_breadth(0.0), m_height(0.0)
{
}
box::box(double val): m_length(val), m_breadth(val), m_height(val)
{
}
box::box(double length, double breadth, double height) : m_length(length), m_breadth(breadth), m_height(height)
{
}

box::box(const box &ref) : m_length(ref.m_length), m_breadth(ref.m_breadth), m_height(ref.m_height)
{
}

box::~box()
{
}

double box::volume() const
{
    return m_length * m_breadth * m_height;
}
double box::get_length() const
{
    return m_length;
}

double box::get_breadth() const
{
    return m_breadth;
}

double box::get_height() const
{
    return m_height;
}