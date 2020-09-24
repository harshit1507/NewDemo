
#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"


Scene* HelloWorld::createScene()
{
    return HelloWorld::create();
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Scene::init() )
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    sprite = Sprite::create("Scale_9_Sprite.png");
    sprite->setPosition(Vec2(visibleSize.width*.5,visibleSize.height*.6));
    this->addChild(sprite,1);

    MenuItemImage *menuItemImage =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
    menuItemImage->setPosition(Vec2(visibleSize.width*.3,visibleSize.height*0.2));
    menuItemImage->setTag(1);

    Label *label = Label::createWithTTF("U","fonts/arial.ttf",30);
    label->setPosition(Vec2(visibleSize.width*.3,visibleSize.height*.2));
    label->setColor(Color3B(0,0,0));
    this->addChild(label,2);

    MenuItemImage *menuItemImage1 =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
    menuItemImage1->setPosition(Vec2(visibleSize.width*.5,visibleSize.height*0.2));
    menuItemImage1->setTag(2);

    Label *label1 = Label::createWithTTF("D","fonts/arial.ttf",30);
    label1->setPosition(Vec2(visibleSize.width*.5,visibleSize.height*.2));
    label1->setColor(Color3B(0,0,0));
    this->addChild(label1,2);

    MenuItemImage *menuItemImage2 =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
    menuItemImage2->setPosition(Vec2(visibleSize.width*.8,visibleSize.height*0.2));
    menuItemImage2->setScale(3,1);
    menuItemImage2->setTag(3);

    Label *label2 = Label::createWithTTF("End rotate","fonts/arial.ttf",30);
    label2->setPosition(Vec2(visibleSize.width*.8,visibleSize.height*.2));
    label2->setColor(Color3B(0,0,0));
    this->addChild(label2,3);

    Menu *menu = Menu::create(menuItemImage,menuItemImage1,menuItemImage2, nullptr);
    menu->setPosition(Vec2(0,0));
    this->addChild(menu);

    CallFunc *callFunc = CallFunc::create(CC_CALLBACK_0(HelloWorld::callFunction1,this));

        rotateBy = RotateBy::create(.2,45);


        RepeatForever *repeatForever = RepeatForever::create(rotateBy);
        sprite->runAction(rotateBy);
        sprite->runAction(repeatForever);
   //     Sequence *sequence = Sequence::create(moveTo,callFunc, nullptr);
//        sprite->runAction(sequence);

//int a=5;



//    MoveTo  *moveTo = MoveTo::create(3,Vec2(visibleSize.width*.8,visibleSize.height*.8));
//    FadeOut *fadeOut = FadeOut::create(3);
//    ScaleTo *scaleTo = ScaleTo::create(3,4);
//    RotateTo *rotateTo = RotateTo::create(.2,45);
//    DelayTime *delayTime = DelayTime::create(2);
//    Sequence *sequence = Sequence::create(moveTo,callFunc,scaleTo,delayTime,rotateTo,delayTime,fadeOut, nullptr);
//    sprite->runAction(sequence);
//    RepeatForever *repeatForever = RepeatForever::create(rotateBy);
//    sprite->runAction(repeatForever);
//    Spawn *spawn = Spawn::create(moveTo,fadeOut,scaleTo,rotateTo);
//    sprite->runAction(spawn);
//    sprite->runAction(moveTo);
//    sprite->runAction(fadeOut);
//    sprite->runAction(scaleTo);
//    sprite->runAction(rotateTo);


//
//    label = Label::createWithTTF("","fonts/arial.ttf",30);
//    label->setPosition(Vec2(visibleSize.width*.3,visibleSize.height*.9));
//    label->setColor(Color3B(0,0,0));
//    this->addChild(label,2);
//
//    sprite2 = Sprite::create("Scale_9_Sprite.png");
//    sprite2->setPosition(Vec2(visibleSize.width*.85,visibleSize.height*.9));
//    this->addChild(sprite2,1);
//
//    label5 = Label::createWithTTF("","fonts/arial.ttf",30);
//    label5->setPosition(Vec2(visibleSize.width*.85,visibleSize.height*.9));
//    label5->setColor(Color3B(0,0,0));
//    this->addChild(label5,2);
//
//    label2 = Label::createWithTTF("","fonts/arial.ttf",30);
//    label2->setPosition(Vec2(visibleSize.width/2,visibleSize.height/2));
//    label2->setColor(Color3B(255,255,255));
//    this->addChild(label2,3);
//
//    a=0;
//    __String *string = __String::createWithFormat("%d",a);
//    label->setString(string->getCString());
//
//    b=0;
//    __String *string1 = __String::createWithFormat("%d",b);
//    label5->setString(string->getCString());
//
//
//
//   label->setTextColor(Color4B())
//
//    menuItemImage = MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//    menuItemImage->setPosition(Vec2(visibleSize.width*.3,visibleSize.height*0.60));
//    menuItemImage->setTag(1);
//
//    Label *label3 = Label::createWithTTF("+","fonts/arial.ttf",30);
//    label3->setPosition(Vec2(visibleSize.width*.3,visibleSize.height*0.60));
//    label3->setColor(Color3B(0,0,0));
//    this->addChild(label3,2);
//
//    menuItemImage1 = MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//    menuItemImage1->setPosition(Vec2(visibleSize.width*.85,visibleSize.height*0.60));
//    menuItemImage1->setTag(2);
//
//    Label *label4 = Label::createWithTTF("-","fonts/arial.ttf",30);
//    label4->setPosition(Vec2(visibleSize.width*.85,visibleSize.height*0.60));
//    label4->setColor(Color3B(0,0,0));
//    this->addChild(label4,2);
//
//    MenuItemImage *menuItemImage2 = MenuItemImage::create("HelloWorld.png","HelloWorld.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//    menuItemImage2->setPosition(Vec2(visibleSize.width/4,visibleSize.height*0.0));
//    menuItemImage2->setTag(3);
//
//    Menu *menu = Menu::create(menuItemImage,menuItemImage1, nullptr);
//    menu->setPosition(Vec2(0,0));
//    this->addChild(menu);
//    /////////////////////////////
//    // 2. add a menu item with "X" image, which is clicked to quit the program
//    //    you may modify it.
//
//    // add a "close" icon to exit the progress. it's an autorelease object
//    auto closeItem = MenuItemImage::create(
//                                           "CloseNormal.png",
//                                           "CloseSelected.png",
//                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
//
//    if (closeItem == nullptr ||
//        closeItem->getContentSize().width <= 0 ||
//        closeItem->getContentSize().height <= 0)
//    {
//        problemLoading("'CloseNormal.png' and 'CloseSelected.png'");
//    }
//    else
//    {
//        float x = origin.x + visibleSize.width - closeItem->getContentSize().width/2;
//        float y = origin.y + closeItem->getContentSize().height/2;
//        closeItem->setPosition(Vec2(x,y));
//    }
//
//    // create menu, it's an autorelease object
//    auto menu = Menu::create(closeItem, NULL);
//    menu->setPosition(Vec2::ZERO);
//    this->addChild(menu, 1);
//
//    /////////////////////////////
//    // 3. add your codes below...
//
//    // add a label shows "Hello World"
//    // create and initialize a label
//
//    auto label = Label::createWithTTF("Hello World", "fonts/Marker Felt.ttf", 24);
//    if (label == nullptr)
//    {
//        problemLoading("'fonts/Marker Felt.ttf'");
//    }
//    else
//    {
//        // position the label on the center of the screen
//        label->setPosition(Vec2(origin.x + visibleSize.width/2,
//                                origin.y + visibleSize.height - label->getContentSize().height));
//
//        // add the label as a child to this layer
//        this->addChild(label, 1);
//    }
//
//    // add "HelloWorld" splash screen"
//    auto sprite = Sprite::create("HelloWorld.png");
//    if (sprite == nullptr)
//    {
//        problemLoading("'HelloWorld.png'");
//    }
//    else
//    {
//        // position the sprite on the center of the screen
//        sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
//
//        // add the sprite as a child to this layer
//        this->addChild(sprite, 0);
//    }


    return true;
}

void  HelloWorld::callFunction1(){

    auto visibleSize = Director::getInstance()->getVisibleSize();
    //sprite->runAction(moveTo1);
    log("checking Log");
    moveTo1 = MoveTo::create(1,Vec2(visibleSize.width*.5,visibleSize.height*.4));
    sprite->runAction(moveTo1);
}

void HelloWorld::callFunction(Ref *ref) {
    MenuItemImage *menuItemImage2 = (MenuItemImage*)ref;
    int tag = menuItemImage2->getTag();

    auto visibleSize = Director::getInstance()->getVisibleSize();
    moveTo = MoveTo::create(1,Vec2(visibleSize.width*.5,visibleSize.height*.8));
    moveTo1 = MoveTo::create(1,Vec2(visibleSize.width*.5,visibleSize.height*.4));
    if(tag==1)
    {
        sprite->runAction(moveTo);
    }
    else if(tag==2)
    {
        sprite->runAction(moveTo1);
    }
    else if(tag==3)
    {
        sprite->stopAllActions();
    }
}

//void HelloWorld::callFunction(Ref *ref) {
//
//
//    MenuItemImage *menuItemImage2 = (MenuItemImage*)ref;
//    int tag = menuItemImage2->getTag();
//
//    if(tag == 1)
//    {
//        if(b>20)
//        {
//            label2->setVisible(true);
//            menuItemImage->setEnabled(false);
//            menuItemImage->setNormalImage(Sprite::create("Scale_9_Sprite12.png"));
//            __String *string = __String::create("You need to subtract then go forward");
//            label2->setString(string->getCString());
//        }
//        if(a<21)
//        {
//            if(b<21)
//            {
//                if (count == 0)
//                {
//                    count = 1;
//                    a = b;
//                    __String *string = __String::createWithFormat("%d", a);
//                    label->setString(string->getCString());
//                }
//                else if (count == 1 && a<20)
//                {
//                    a++;
//                    __String *string = __String::createWithFormat("%d", a);
//                    label->setString(string->getCString());
//                    label2->setVisible(false);
//                    menuItemImage->setNormalImage(Sprite::create("Scale_9_Sprite.png"));
//                    menuItemImage1->setNormalImage(Sprite::create("Scale_9_Sprite.png"));
//                    menuItemImage->setEnabled(true);
//                    menuItemImage1->setEnabled(true);
//                }
//            }
//            else if(b>20)
//            {
//                label2->setVisible(true);
//                menuItemImage->setEnabled(false);
//                menuItemImage->setNormalImage(Sprite::create("Scale_9_Sprite12.png"));
//                label2->setString("You need to subtract then go forward");
//            }
////            string = __String::createWithFormat("%d",a);
////            label->setString(string->getCString());
//
//        }
//    }
//    else if(tag==2)
//    {
//        if(b==0)
//        {
//            if(count==1)
//            {
//                b+=a;
//                __String *string = __String::createWithFormat("%d", b);
//                label5->setString(string->getCString());
//                count=0;
//                label2->setVisible(false);
//                menuItemImage1->setNormalImage(Sprite::create("Scale_9_Sprite.png"));
//                menuItemImage->setNormalImage(Sprite::create("Scale_9_Sprite.png"));
//                menuItemImage->setEnabled(true);
//            }
//            if(b==0)
//            {
//                label2->setVisible(true);
//                menuItemImage1->setEnabled(false);
//                menuItemImage1->setNormalImage(Sprite::create("Scale_9_Sprite12.png"));
//                __String *string = __String::create("You can't go below 0");
//                label2->setString(string->getCString());
//            }
//        }
//        else if(b!=0)
//        {
//            label2->setVisible(false);
//            menuItemImage1->setNormalImage(Sprite::create("Scale_9_Sprite.png"));
//            menuItemImage->setNormalImage(Sprite::create("Scale_9_Sprite.png"));
//            menuItemImage->setEnabled(true);
//            menuItemImage1->setEnabled(true);
//            if(count==1)
//            {
//                count = 0;
//                b += a;
//                __String *string = __String::createWithFormat("%d", b);
//                label5->setString(string->getCString());
//            }
//            else if(count==0)
//                {
//
//                    b--;
//                    __String *string = __String::createWithFormat("%d", b);
//                    label5->setString(string->getCString());
//                    if(b==0)
//                    {
//                        label2->setVisible(true);
//                        menuItemImage1->setEnabled(false);
//                        menuItemImage1->setNormalImage(Sprite::create("Scale_9_Sprite12.png"));
//                        __String *string = __String::create("You can't go below 0");
//                        label2->setString(string->getCString());
//                        string = __String::createWithFormat("%d", b);
//                        label5->setString(string->getCString());
//                    }
//                }
//        }
//        if(b<21)
//        {
//            a=b;
//        }
//        count=0;
//    }
//    std::string sdgs  = "dhfgjsdgfk";
//    log("gjsdfjhds %s",sdgs.c_str());
//
//}

void HelloWorld::menuCloseCallback(Ref* pSender)
{
    //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();

    /*To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() as given above,instead trigger a custom event created in RootViewController.mm as below*/

    //EventCustom customEndEvent("game_scene_close_event");
    //_eventDispatcher->dispatchEvent(&customEndEvent);


}
