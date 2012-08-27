#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CatPictureApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();

private:
	float brightness1;
	float brightness2;
	float brightness3;
};

void CatPictureApp::setup()
{
	brightness1=0.0f;
	brightness2=0.0f;
	brightness3=0.0f;
}

void CatPictureApp::mouseDown( MouseEvent event )
{
}

void CatPictureApp::update()
{
	brightness1=brightness1 + 0.01f;
	if(brightness1 >1.0f){
		brightness1 = 0.0f;
	}

	brightness2=brightness2 + 0.005f;
	if(brightness2 >1.0f){
		brightness2 = 0.0f;
	}

	brightness3=brightness3 + 0.001f;
	if(brightness3 >1.0f){
		brightness3 = 0.0f;
	}
}

void CatPictureApp::draw()
{
	// clear out the window with black
	gl::clear( Color( brightness1, brightness2, brightness3 ) ); 
}

CINDER_APP_BASIC( CatPictureApp, RendererGl )
