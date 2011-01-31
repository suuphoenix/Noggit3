#include <iostream>
#include <sstream>

#include "ui_ZoneIdBrowser.h"
#include "ui_ListView.h"
#include "Gui.h"
#include "scrollbarUI.h"
#include "textUI.h" // textUI
#include "noggit.h" // arial14, arialn13

ui_ZoneIdBrowser::ui_ZoneIdBrowser(int xPos,int yPos, int w, int h, Gui *setGui) : window(xPos,yPos,w,h)
{
	this->mainGui = setGui;
	this->ZoneIdList = new ui_ListView(4,20,w - 8,h - 26,20);
	this->ZoneIdList->clickable = true;
	for(int i = 1 ; i <= 60 ; i++)
	{
		frame *curFrame = new frame(1,1,1,1); 
		std::stringstream ss;
		ss << "Eintrag Nummer: " << i;

		curFrame->addChild(new textUI( 200.0f, 20.0f, ss.str() , &arialn13, eJustifyLeft ) );
		this->ZoneIdList->addElement(curFrame);
	}

	this->addChild(ZoneIdList);
}
