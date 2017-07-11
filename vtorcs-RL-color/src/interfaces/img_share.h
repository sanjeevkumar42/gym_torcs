#ifndef _IMG_SHARE_
#define _IMG_SHARE_

#define image_width 640
#define image_height 480


typedef struct shared_use_st
{
    int written;
    int pause;
    unsigned char data[image_width*image_height*3];
}shared_use_st;

extern void *shm;

//extern void changeCameraView();

#endif
