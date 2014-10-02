// Copyright 2014 jc techno labs
// Licensed under GPLv2
// Refer to the license.txt file included.


#include <QApplication>
#include <QDesktopWidget>
#include <QProcessEnvironment>
#include <QTextStream>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QDesktopWidget *desktop = QApplication::desktop();
	int screenNum = QProcessEnvironment::systemEnvironment().value("SDL_VIDEO_FULLSCREEN_HEAD", "0").toInt();
	
	// get position on desktop
	QRect rect = desktop->screenGeometry(screenNum);

	QTextStream cout(stdout);
	int x=rect.x();
	int y=rect.y();
	cout << "xpos " << QString::number(x) << "\n"; 
	cout << "ypos " << QString::number(y) << "\n"; 

	return 0;
}
