#include "Box.h"
void Box::SetBoxvolume(int lg,int wd,int hgt){
  lenght=lg;
  width=wd;
  height=hgt;
}
int Box::getLength(){
return lenght;
}
int Box::getWidth(){
return width;
}
int Box::getHeight(){
return height;
}
// Implement setters and getters

// Implemenet the calcVolume() unction
int Box::calcVolume() {

  return (lenght*width*height);
}
