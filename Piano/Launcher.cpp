#include "Launcher.h"

wxIMPLEMENT_APP(Launcher);

Launcher::Launcher()
{

}
Launcher:: ~Launcher()
{

}

bool Launcher::OnInit()
{
	m_frame1 = new Piano();
	m_frame1 -> Show();

	return true;

}

