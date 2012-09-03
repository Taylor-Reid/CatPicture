#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

const int SURFACE_WIDTH = 1024;
const int SURFACE_HEIGHT = 1024;

class CatPictureApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
	void drawRect(int x,int y,int height, int width, int red, int green, int blue);
	void drawGradientRect(int x,int y,int height, int width, int red1, int green1, int blue1,int red2, int green2, int blue2);
	void prepareSettings(Settings* settings);

private:
	Surface* mySurface_;
	int frameNumber_;
};

void CatPictureApp::prepareSettings(Settings* settings){
	(*settings).setWindowSize(640,480);
	(*settings).setResizable(false);
}

void CatPictureApp::setup(){
	mySurface_ = new Surface(SURFACE_WIDTH,SURFACE_HEIGHT,false);
	frameNumber_=0;
	
}

void CatPictureApp::drawRect(){
	
}

void CatPictureApp::drawGradientRect(){
	
}

void CatPictureApp::mouseDown( MouseEvent event )
{
}

void CatPictureApp::update()
{
	frameNumber_++;

	uint8_t* dataArray = (*mySurface_).getData();

	
}

void CatPictureApp::draw()
{
	 
}

CINDER_APP_BASIC( CatPictureApp, RendererGl )
