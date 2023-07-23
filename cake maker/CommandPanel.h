// CommandPanel.h
#ifndef COMMANDPANEL_H
#define COMMANDPANEL_H

#include "CommandTaker.h"
#include "CakeMenu.h"

class CommandPanel {
public:
    CommandPanel(CommandTaker& taker, const CakeMenu& menu);

    void showMenu() const;

private:
    CommandTaker& taker;
    const CakeMenu& menu;
};

#endif // COMMANDPANEL_H
