#include "objx-vec.h"
#include<cmath>
#include<cassert>
using namespace phys;
 Vec Vec:: operator+(float a)const{
  return Vec(*x+a,*y+a);
 }
 Vec Vec:: operator+(Vec a){
   return Vec(*x+*(a.x),*y+*(a.y));
 }
 float Vec::operator*(Vec a){
  float p=*(a.x)*(*x);
  float p1=*(a.y)*(*y);
  return p+p1;
 }
 // Cross product
 Vec Vec::operator^(Vec a){
   return Vec();
 }
 float& Vec::operator[](unsigned int a)const{
 assert(a<2&&a>=0);
  return *(a==0?x:y);
 }
 Vec Vec:: operator/(float a)const{
   return Vec(*x/a,*y/a);
 }
 // Get the angle floator the dot product
 float Vec:: operator%(Vec a){
  auto g=*(this)*a;
  return acos(g/(this->abs()*a.abs())); 
 }
 float Vec::abs() const{
   return sqrt(pow(*x,2)+pow(*y,2));
 }
Vec Vec::unit() const {
  return *(this)/this->abs();
 }
Vec:: Vec():x(new float),y(new float){
 *(this->x)=0;
 *(this->y)=0;
}
Vec:: Vec(float x,float y):Vec(){
 *(this->x)=x;
 *(this->y)=y;
}
Vec::~Vec(){
 delete x;
 delete y;
}
