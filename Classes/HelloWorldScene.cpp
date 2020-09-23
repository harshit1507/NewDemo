
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
    sprite->setPosition(Vec2(visibleSize.width/1.5,visibleSize.height/1.2));
    this->addChild(sprite,1);

    label = Label::createWithTTF("","fonts/arial.ttf",30);
    label->setPosition(Vec2(visibleSize.width/1.5,visibleSize.height/1.2));
    label->setColor(Color3B(0,0,0));
    this->addChild(label,2);

    label2 = Label::createWithTTF("","fonts/arial.ttf",30);
    label2->setPosition(Vec2(visibleSize.width/2,visibleSize.height/2));
    label2->setColor(Color3B(255,255,255));
    this->addChild(label2,3);

    a=0;
    __String *string = __String::createWithFormat("%d",a);
    label->setString(string->getCString());



//    label->setTextColor(Color4B())

    menuItemImage = MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
    menuItemImage->setPosition(Vec2(visibleSize.width/3,visibleSize.height*0.60));
    menuItemImage->setTag(1);

    label3 = Label::createWithTTF("+","fonts/arial.ttf",30);
    label3->setPosition(Vec2(visibleSize.width/3,visibleSize.height*0.60));
    label3->setColor(Color3B(0,0,0));
    this->addChild(label3,2);

    menuItemImage1 = MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
    menuItemImage1->setPosition(Vec2(visibleSize.width/1,visibleSize.height*0.60));
    menuItemImage1->setTag(2);

    label4 = Label::createWithTTF("-","fonts/arial.ttf",30);
    label4->setPosition(Vec2(visibleSize.width/1,visibleSize.height*0.60));
    label4->setColor(Color3B(0,0,0));
    this->addChild(label4,2);

//    MenuItemImage *menuItemImage2 = MenuItemImage::create("HelloWorld.png","HelloWorld.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//    menuItemImage2->setPosition(Vec2(visibleSize.width/4,visibleSize.height*0.0));
//    menuItemImage2->setTag(3);

    Menu *menu = Menu::create(menuItemImage,menuItemImage1, nullptr);
    menu->setPosition(Vec2(0,0));
    this->addChild(menu);
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


void HelloWorld::callFunction(Ref *ref) {

    menuItemImage2 = (MenuItemImage*)ref;
    int tag = menuItemImage2->getTag();

    if(tag == 1)
    {
        if(a==20) {
            label2->setVisible(true);
            menuItemImage->setEnabled(false);
            menuItemImage->setNormalImage(Sprite::create("Scale_9_Sprite12.png"));
            __String *string = __String::create("You can't go above 20");
            label2->setString(string->getCString());
        }
        else if(a!=20){
            label2->setVisible(false);
            menuItemImage->setNormalImage(Sprite::create("Scale_9_Sprite.png"));
            menuItemImage1->setNormalImage(Sprite::create("Scale_9_Sprite.png"));
            menuItemImage->setEnabled(true);
            menuItemImage1->setEnabled(true);
            a++;
            if(a==20)
            {
                label2->setVisible(true);
                menuItemImage->setEnabled(false);
                menuItemImage->setNormalImage(Sprite::create("Scale_9_Sprite12.png"));
                label2->setString("You can't go above 20");
            }
            __String *string = __String::createWithFormat("%d",a);
            label->setString(string->getCString());
        }
    }
    else if(tag==2)
    {
        if(a==0)
        {
            label2->setVisible(true);
            menuItemImage1->setEnabled(false);
            menuItemImage1->setNormalImage(Sprite::create("Scale_9_Sprite12.png"));
            __String *string = __String::create("You can't go below 0");
            label2->setString(string->getCString());
        } else if(a!=0){
            label2->setVisible(false);
            menuItemImage1->setNormalImage(Sprite::create("Scale_9_Sprite.png"));
            menuItemImage->setNormalImage(Sprite::create("Scale_9_Sprite.png"));
            menuItemImage->setEnabled(true);
            menuItemImage1->setEnabled(true);
            a--;
            if(a==0)
            {
                label2->setVisible(true);
                menuItemImage1->setEnabled(false);
                menuItemImage1->setNormalImage(Sprite::create("Scale_9_Sprite12.png"));
                __String *string = __String::create("You can't go below 0");
                label2->setString(string->getCString());
            }
            __String *string = __String::createWithFormat("%d",a);
            label->setString(string->getCString());
        }
    }
//    std::string sdgs  = "dhfgjsdgfk";
//    log("gjsdfjhds %s",sdgs.c_str());

}

void HelloWorld::menuCloseCallback(Ref* pSender)
{
    //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();

    /*To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() as given above,instead trigger a custom event created in RootViewController.mm as below*/

    //EventCustom customEndEvent("game_scene_close_event");
    //_eventDispatcher->dispatchEvent(&customEndEvent);


}
