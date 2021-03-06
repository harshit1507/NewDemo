/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__



#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cstdlib"
USING_NS_CC;
using namespace ui;
using namespace cocos2d;
using namespace cocos2d::ui;
using namespace std;
class HelloWorld : public cocos2d::Scene
{
private:
    Label *label3,*label4,*label5,*label2,*label6,*label;
    MenuItemImage *menuItemImage,*menuItemImage1,*menuItemImage2,*menuItemImage3;
    int a,b,count,c ;
    float per;
    Sprite *sprite,*sprite2;
    RotateBy *rotateBy;
    MoveTo *moveTo,*moveTo1;
    Vec2 posinitial,point3;
    ProgressTimer *progressTimer;
    PageView *pageView;
    vector<Sprite*> sprVector;
    vector<int> intVector;
    std::vector<MenuItemImage*> menuVector,menuVector1;
    std::map<int,MenuItemImage*> map1;
    ClippingNode *clipper;

public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);

    void callFunction(Ref *ref);
    void callFunction1();
    void callScheduleCall(float dt);
    bool onTouchBegan(Touch *touch, Event *unused_event);
    void onTouchEnded(Touch *touch, Event *unused_event);
    void onTouchMoved(Touch *Touch, Event *unused_event);
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
