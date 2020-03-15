#include "Piano.h"

//Giving each ID an event handler function 

wxBEGIN_EVENT_TABLE(Piano, wxFrame)
	EVT_BUTTON(1000,onButton1)
	EVT_BUTTON(1001,onButton2)
	EVT_BUTTON(1002,onButton3)
	EVT_BUTTON(1003,onButton4)
	EVT_BUTTON(1004,onButton5)
wxEND_EVENT_TABLE()

Piano :: Piano() : wxFrame(nullptr, wxID_ANY, "Piano sounds",wxPoint(60,60),wxSize(500,500))
{
	//Creating the buttons and putting them in a Grid for a better view

	wxGridSizer* grid = new wxGridSizer(1, 5, 0, 0);
	btn1 = new wxButton(this, 1000, "", wxPoint(70,70),  wxSize(50,50));
	btn2 = new wxButton(this, 1001, "", wxPoint(120,70), wxSize(50,50));
	btn3 = new wxButton(this, 1002, "", wxPoint(170,70), wxSize(50,50));
	btn4 = new wxButton(this, 1003, "", wxPoint(220,70), wxSize(50,50));
	btn5 = new wxButton(this, 1004, "", wxPoint(270,70), wxSize(50,50));

	grid->Add(btn1, 1, wxEXPAND | wxALL);
	grid->Add(btn2, 1, wxEXPAND | wxALL);
	grid->Add(btn3, 1, wxEXPAND | wxALL);
	grid->Add(btn4, 1, wxEXPAND | wxALL);
	grid->Add(btn5, 1, wxEXPAND | wxALL);

	this->SetSizer(grid);
	grid->Layout();
	
	
}
Piano :: ~Piano()
{

}

//The event handlers

void Piano :: onButton1(wxCommandEvent &evt)
{
	
	PlaySound(sound1, NULL, SND_ASYNC);
}
void Piano::onButton2(wxCommandEvent& evt)
{
	PlaySound(sound2, NULL, SND_ASYNC);
}
void Piano::onButton3(wxCommandEvent& evt)
{
	PlaySound(sound3, NULL, SND_ASYNC);
}
void Piano::onButton4(wxCommandEvent& evt)
{
	PlaySound(sound4, NULL, SND_ASYNC);
}
void Piano::onButton5(wxCommandEvent& evt)
{
	PlaySound(sound5, NULL, SND_ASYNC);
}
