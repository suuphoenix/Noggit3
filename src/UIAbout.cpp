#include "UIAbout.h"

#include <algorithm>

#include "Noggit.h" // fonts
#include "revision.h"
#include "UIMinimizeButton.h"
#include "UIText.h"
#include "UITexture.h"
#include "Video.h" // video

UIAbout::UIAbout( )
: UICloseWindow( video.xres / 2.0f - winWidth / 2.0f, video.yres / 2.0f - winHeight / 2.0f, winWidth, winHeight, "" )
{
  addChild( new UITexture( 20.0f, 20.0f, 64.0f, 64.0f, "Interface\\ICONS\\INV_Potion_83.blp" ) );
  addChild( new UIText( 73.0f, 24.0f, "Noggit Studio", skurri32, eJustifyLeft ) );
  addChild( new UIText( 165.0f, 55.0f, "a wow map editor", fritz16, eJustifyLeft ) );
  addChild( new UIText( 20.0f, 100.0f, "Ufoz [...], Cryect, Beket, Schlumpf, Tigurius, Steff", fritz16, eJustifyLeft ) );
  addChild( new UIText( 20.0f, 130.0f, "World of Warcraft is (C) Blizzard Entertainment", fritz16, eJustifyLeft ) );
  addChild( new UIText( 20.0f, 160.0f, STRPRODUCTVER , fritz16, eJustifyLeft ) );
  addChild( new UIText( 360.0f, 160.0f, __DATE__ ", " __TIME__, fritz16, eJustifyRight ) );
}

void UIAbout::resize()
{
  using std::max;
  this->x = max( ( video.xres / 2.0f ) - ( winWidth / 2.0f ), 0.0f );
  this->y = max( ( video.yres / 2.0f ) - ( winHeight / 2.0f ), 0.0f );
}
