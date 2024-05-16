
#include <wx/wx.h>
/*Se crea una clase APP que hereda de wxApp*/
class App : public wxApp {
public:
	/*Se crea un método público llamado OnInit*/
	bool OnInit() {
		/*Se crea una ventana y se le asigna un puntero llamado window*/
		wxFrame* window = new wxFrame(NULL, wxID_ANY, "GUI Test", wxDefaultPosition, wxSize(600, 400));
		/*Se crea un sizer  horizontal para organizar los elementos en la ventana*/
		wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
		/*Se crea el texto que se imprimirá en la ventana */
		wxStaticText* text = new wxStaticText(window, wxID_ANY, "Well Done! \nEverything seems to be working",
			wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
		/*Se le da formato al texto y se muestra la ventana*/
		text->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
		sizer->Add(text, 1, wxALIGN_CENTER);
		window->SetSizer(sizer);
		window->Show();
		return true;


	}

};


wxIMPLEMENT_APP(App);

