#pragma once

enum {
    ID_MAIN_FRAME = -1,
    ID_Quit,
    ID_EXIT_FIND_CONTAINER,
    ID_ABOUT,
    ID_NEW_FILE,
    ID_OPEN_FOLDER,
    ID_OPEN_FILE,
    ID_TABS,
    ID_SIDE_NAVIGATION,
    ID_CODE_CONTAINER,
    ID_HIDDE_MENU_BAR,
    ID_TOGGLE_COMMENT_LINE,
    ID_GOTO_SEARCHPAGE,
    ID_TOGGLE_COMMENT_BLOCK,
    ID_HIDDE_FILES_TREE,
    ID_HIDDE_SIDE_NAV,
    ID_HIDDE_STATUS_BAR,
    ID_NAVIGATION_BUTTONS,
    ID_TOGGLE_FIND,
    ID_FIND_CONTAINER,
    ID_FILES_TREE_TOP_CONTENT,
    ID_HIDDE_TABS,
    ID_RENAME_FILE,
    ID_TOGGLE_MINI_MAP_VIEW,
    ID_RENAME_DIR,
    ID_CODE_MAP,
    ID_CODE_EDITOR,
    ID_CODE_BLOCK,
    ID_OPEN_TERMINAL,
    ID_APPLICATION_CONTENT,
    ID_CENTERED_CONTENT,
    ID_EMPYT_WINDOW,
    ID_CREATE_FILE,
    ID_MAIN_CONTAINER_SPLITTER,
    ID_MAIN_SPLITTER,
    ID_EXIT,
    ID_TABS_RIGHT_MENU,
    ID_SERVICAL_CONTAINER,
    ID_DELETE_DIR,
    ID_TOGGLE_COMMENT,
    ID_DELETE_FILE,
    ID_GLOBAL_NAVIGATION,
    ID_EXIT_TERMINAL,
    ID_TABS_CONTAINER,
    ID_CREATE_DIR,
    ID_TOGGLE_CONTROL_PANEL,
    ID_CODE_ARROWS_PRESS,
    ID_TERMINAL,
    ID_CONTROL_PANEL,
    ID_EXIT_CONTROL_PANEL,
    ID_MAIN_CONTAINER,
    ID_FILES_TREE,
    ID_CONTROL_PANEL_UP,
    ID_CONTROL_PANEL_DOWN,
    ID_CONTROL_PANEL_SELECT,
    ID_MAIN_CODE,
    ID_STATUS_BAR,
    ID_OPEN_FOLDER_LINK,
    ID_MENU_BAR,
    ID_FILES_TREE_TOP_MENU,
    ID_PROJECT_FILES,
    ID_PROJECT_TOOLS_BAR,
    ID_PROJECT_FILES_CTN,
    ID_FILES_TREE_EMPTY,
    ID_NOTIFY_PANEL,
    ID_PJT_TOOLS_PJTNAME,
    ID_PJT_TOOLS_ARROW,
    ID_FILE_DOCKER,
    ID_SEARCH_PAGE_INPUT,
    ID_TRIPLE_A,
    ID_BUILDER_PAGE,
    ID_EXTENSIONS_PAGE,
    ID_SETTINGS_PAGE,
    ID_FOCUS_PAGE,
    ID_STTSBAR_FILE_EXT,
    ID_STTSBAR_TAB_SIZE,
    ID_STTSBAR_CODELOCALE,
    ID_FOCUS_MODE,
    ID_CLOSE_ALL_FILES,
    ID_SIDE_CONTAINER,
};

wxString project_path;
std::string project_name;
wxString icons_dir;
wxString current_openned_path;

#define STYLE_TYPES_COUNT 32