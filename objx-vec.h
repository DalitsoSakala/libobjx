#pragma once

namespace phys{
struct Vec{
 Vec  operator+(float a)const;
 Vec  operator+(Vec a);
 float operator*(Vec a);
 // Cross product
 Vec operator^(Vec a);
 float operator[](int a)const;
 Vec  operator/(float a)const;
 // Get the angle floator the dot product
 float  operator%(Vec a);
 float abs() const;
Vec unit();
 Vec();
 Vec(float x,float y);
};
}
