#include <nanogui/tabmanager.h>

NAMESPACE_BEGIN(nanogui)

TabWidget* TabManager::receiver = nullptr;
TabHeader* TabManager::sender = nullptr;

void TabManager::sendRemoveRequest(int tabid){
    receiver->removeTab(tabid);
}

int TabManager::getActiveTab(){
    return receiver->activeTab();
}

NAMESPACE_END(nanogui)