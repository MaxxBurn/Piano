#pragma once
#include "wx/wx.h"
#include "wx/sound.h"


class Piano : public wxFrame
{
public:
	Piano();
	~Piano();
private:
	//Honestly a big mess , but initializations of buttons and directories for the .wav files
	wxButton* btn1 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn3 = nullptr;
	wxButton* btn4 = nullptr;
	wxButton* btn5 = nullptr;
	LPCWSTR sound1 = L"..\\Piano\\1.wav";
	LPCWSTR sound2 = L"..\\Piano\\2.wav";
	LPCWSTR sound3 = L"..\\Piano\\3.wav";
	LPCWSTR sound4 = L"..\\Piano\\4.wav";
	LPCWSTR sound5 = L"..\\Piano\\5.wav";

private:
	//EventHandler Functions


	void onButton1(wxCommandEvent& evt);
	void onButton2(wxCommandEvent& evt);
	void onButton3(wxCommandEvent& evt);
	void onButton4(wxCommandEvent& evt);
	void onButton5(wxCommandEvent& evt);
	DECLARE_EVENT_TABLE()

};



