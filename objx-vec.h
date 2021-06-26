#pragma once

namespace phys{
struct Vec{
 float *x,*y;
 Vec  operator+(float a)const;
 Vec  operator+(Vec a);
 float operator*(Vec a);
 // Cross product
 Vec operator^(Vec a);
 float& operator[](unsigned int a)const;
 Vec  operator/(float a)const;
 // Get the angle floator the dot product
 float  operator%(Vec a);
 float abs() const;
Vec unit()const;
 Vec();
 Vec(float x,float y);
 ~Vec();
};
}
