#pragma once
#include "wx/wx.h"
#include "Piano.h"


class Launcher : public wxApp
{
public:
	Launcher();
	~Launcher();
	

private:
	Piano* m_frame1 = nullptr;

public:
	virtual bool OnInit();
};

