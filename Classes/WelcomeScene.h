//
// Created by assertinfotech on 2/10/20.
//

#ifndef PROJ_ANDROID_WELCOMESCENE_H
#define PROJ_ANDROID_WELCOMESCENE_H

#include "cocos2d.h"
#include "ui/CocosGUI.h"
USING_NS_CC;
using namespace ui;
using namespace cocos2d;

class WelcomeScene : public cocos2d::Scene
{

public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    void menuCloseCallback(cocos2d::Ref* pSender);

    CREATE_FUNC(WelcomeScene);
};


#endif //PROJ_ANDROID_WELCOMESCENE_H
