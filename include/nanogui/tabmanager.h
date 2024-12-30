#pragma once

#include <nanogui/tabwidget.h>
#include <nanogui/tabheader.h>

NAMESPACE_BEGIN(nanogui)

class TabManager {
public:
    TabManager() = delete;
    static void sendRemoveRequest(int tabid);
    static int getActiveTab();
    static TabWidget* receiver;
    static TabHeader* sender;
};

NAMESPACE_END(nanogui)