#include "objx-vec.h"
#include<cmath>
#include<cassert>
using namespace phys;
 Vec Vec:: operator+(float a)const{
  return Vec(this->x+a,this->y+a);
 }
 Vec Vec:: operator+(Vec a){
   return Vec(this->x+a.x,this->y+a.y);
 }
 float Vec::operator*(Vec a){
  float p=a.x*this->x;
  float p1=a.y*this->y;
  return p+p1;
 }
 // Cross product
 Vec Vec::operator^(Vec a){
   return Vec();
 }
 float Vec::operator[](int a)const{
 assert(a<2&&a>=0);
  return a==0?x:y;
 }
 Vec Vec:: operator/(float a)const{
   return Vec(this->x/a,this->y/a);
 }
 // Get the angle floator the dot product
 float Vec:: operator%(Vec a){
  auto g=*(this)*a;
  return acos(g/(this->abs()*a.abs())); 
 }
 float Vec::abs() const{
   return sqrt(pow(this->x,2)+pow(this->y,2));
 }
Vec Vec::unit() const {
  return *(this)/this->abs();
 }
Vec:: Vec():x(0),y(0){}
Vec:: Vec(float x,float y):x(x),y(y){}
