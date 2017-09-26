/*
**
** Made by Applelo
**
*/

#include "Engine.hh"

#ifndef MENU_HH_
# define MENU_HH_

typedef enum Step {
	MAIN = 0,
	SWITCH_TO_UXO,
	SWITCH_TO_UMAO,
	SWITCH_TO_IMCO,

	SWITCH_TO_GRW0,
		SWITCH_TO_GRO0,
	UNINSTALL,
	REBOOT,
	EXIT,
	AUTO_SWITCH
} Step;



class Menu {
private:
	std::vector<std::string> _mainMenu = {
    	"Switch to ux0",
		"Switch to uma0",
		"Switch to imc0",
		"Switch to grw0",
		"Switch to gro0",
	
		
	   "Reboot your PSVita",	
		"Uninstall",
	
		"Exit"
	};
	Step _step;
	SceCtrlData _ctrl_peek;
	SceCtrlData _ctrl_press;
	vita2d_pgf *_pgf;
	Engine* _engine;
	int _selector;
	int _result;
	char const *_log;
	int _mustReboot;

public:
	Menu();
	virtual ~Menu();

	//Getter
	const Step getMenu() const;

	//Setter
	void setMenu(const Step step);

	//Display Menu
	void main();
	void auto_switch();
	void switch_to_ux0();
	void switch_to_uma0();
	void switch_to_imc0();
		void switch_to_grw0();
	void switch_to_gro0();

	void uninstall();
	void reboot();

};

#endif /* !MENU_HH_ */
