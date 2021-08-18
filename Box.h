class Box {
    private:
       int lenght;
       int width;
       int height;
    public:
       void SetBoxvolume(int lg,int wd,int hgt);
       // write prototypes of setters for length, width and height
       int getLength();
       int getWidth();
       int getHeight();
       // write prototypes of getters for length, width and height
 
       int calcVolume();
};
