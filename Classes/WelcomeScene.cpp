//
// Created by assertinfotech on 2/10/20.
//

#include "WelcomeScene.h"
#include "HelloWorldScene.h"

Scene* WelcomeScene::createScene()
{
    return WelcomeScene::create();
}

bool WelcomeScene::init() {
    //////////////////////////////
    // 1. super init first
    if (!Scene::init()) {
        return false;
    }

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    LayerColor *layer = LayerColor::create(Color4B::GREEN);
    this->addChild(layer);


    ParticleSpiral *fire = ParticleSpiral::createWithTotalParticles(100);
//fire->addParticles(100);
//fire->setSpeed(0.5f);
    fire->setEndColor(Color4F::RED);
    fire->setStartColor(Color4F::YELLOW);
    fire->setLife(25.0);
//    fire->setGravity(Vec2(0,1));
//    fire->setRotatePerSecond(10);
//fire->setEmissionRate(200);
    fire->setPosition(Vec2(visibleSize.width*.55,visibleSize.height*.25));
    layer->addChild(fire);


return true;
}
void WelcomeScene::menuCloseCallback(Ref* pSender)
{
    //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();

    /*To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() as given above,instead trigger a custom event created in RootViewController.mm as below*/

    //EventCustom customEndEvent("game_scene_close_event");
    //_eventDispatcher->dispatchEvent(&customEndEvent);


}
