#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

class SettingsPopup : public Popup
{
public:
    static SettingsPopup *create();

protected:
    TextInput *m_bpmInput;

    std::function<void(float)> m_bpmCallback;

protected:
    bool init();

public:
    void setBpm(float bpm);

    void setBpmCallback(std::function<void(float)> callback);
};
