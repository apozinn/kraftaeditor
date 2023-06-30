#pragma once
#include "../../utils/fileManager.hpp"

class FilesTree : public wxPanel {
	wxPanel* files_tree;
    wxSizer* sizer;
    wxScrolled<wxPanel>* files_container;
    wxBoxSizer* file_ctn_sizer;
    wxScrolled<wxPanel>* project_files_ctn;
public:
    wxWindow* selectedFile;
	FileManager* fileManager = new FileManager();
	wxString menufile_path, menudir_path;
	FilesTree(wxWindow* parent, wxWindowID ID);
	void Update();
	void CreateFile(wxWindow* parent, wxString name, wxString path);
	void CreateDir(wxWindow* parent, wxString name, wxString path);
	void OnFileSelect(wxMouseEvent& event);
	void ToggleDir(wxMouseEvent& event);
	void OpenFile(wxString path);
	void onTopMenuClick(wxMouseEvent& event);
    void onFileRightClick(wxMouseEvent& event);
    void onDirRightClick(wxMouseEvent& event);
	void Create(std::string path, wxWindow* parent);
	void SetSelectedFile(wxWindow* new_window) {selectedFile = new_window;}
	void FitContainer(wxWindow* window);
	void OnPaint(wxPaintEvent& event);
	void OnCreateDir(wxCommandEvent& event);
	void OnCreateFile(wxCommandEvent& event);
	void OnDeleteDir(wxCommandEvent& event);
	void OnDeleteFile(wxCommandEvent& event);
private:
    wxDECLARE_NO_COPY_CLASS(FilesTree);
    wxDECLARE_EVENT_TABLE();
};

wxBEGIN_EVENT_TABLE(FilesTree, wxPanel)
    EVT_MENU(ID_CREATE_DIR, FilesTree::OnCreateDir)
    EVT_MENU(ID_CREATE_FILE, FilesTree::OnCreateFile)
    EVT_MENU(ID_DELETE_DIR, FilesTree::OnDeleteDir)
    EVT_MENU(ID_DELETE_FILE, FilesTree::OnDeleteFile)
wxEND_EVENT_TABLE()