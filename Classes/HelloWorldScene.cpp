
#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"
#include "WelcomeScene.h"


Scene* HelloWorld::createScene()
{
    return HelloWorld::create();
}

// on "init" you need to initialize your instance
bool HelloWorld::init() {
    //////////////////////////////
    // 1. super init first
    if (!Scene::init()) {
        return false;
    }


//    Director::getInstance()->replaceScene(TransitionFade::create(2,HelloWorld::createScene()));

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();



//        Sprite *spr = Sprite::create("fdf.png");
//        this->addChild(spr);
//        sprVector.push_back(spr);

    LayerColor *layer = LayerColor::create(Color4B::BLACK);
    this->addChild(layer);


    ParticleGalaxy *fire = ParticleGalaxy::createWithTotalParticles(100);
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

//    sprite = Sprite::create("anar.png");
//    point3 = Vec2(visibleSize.width*0.55,visibleSize.height*0.2);
////    sprite->setAnchorPoint(Vec2(.5,.5));
//    sprite->setPosition(point3);
//    layer->addChild(sprite);

//    sprite = Sprite::create("unnamed.jpg");
//    point3 = Vec2(visibleSize.width*0.5,visibleSize.height*0.5);
//    sprite->setAnchorPoint(Vec2(.5,.5));
//    sprite->setPosition(point3);
//    sprite->setScale(1);
//    this->addChild(sprite);

//    rotateBy = RotateBy::create(.25,360);
////    RepeatForever *repeatForever = RepeatForever::create(rotateBy);
//    sprite->runAction(rotateBy);

//    menuItemImage =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//    menuItemImage->setPosition(Vec2(visibleSize.width*.5,visibleSize.height*0.4));
//    menuItemImage->setScaleX(1.5);
//    menuItemImage->setTag(1);
//
//    Menu *menu = Menu::create(menuItemImage, nullptr);
//    menu->setPosition(Vec2(0,0));
//    this->addChild(menu);
//
//    label3 = Label::createWithTTF("","fonts/arial.ttf",30);
//    label3->setPosition(Vec2(visibleSize.width*.5,visibleSize.height*.4));
//    label3->setColor(Color3B(0,0,0));
//    this->addChild(label3,2);

    EventListenerTouchOneByOne *listener = EventListenerTouchOneByOne::create();
    listener->setSwallowTouches(true);


        listener->onTouchBegan = CC_CALLBACK_2(HelloWorld::onTouchBegan, this);
        listener->onTouchMoved = CC_CALLBACK_2(HelloWorld::onTouchMoved, this);
        listener->onTouchEnded = CC_CALLBACK_2(HelloWorld::onTouchEnded, this);

        _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);


//        sprite = Sprite::create("Scale_9_Sprite.png");
////        sprite->setPosition(getContentSize()/2);
//        sprite->setScale(2);
////        this->addChild(sprite);
//
//        clipper = ClippingNode::create(sprite);
//        clipper->setContentSize(sprite->getBoundingBox().size);
//        clipper->setPosition(this->getContentSize()/2);
//        this->addChild(clipper);
//
//        sprite2 = Sprite::create("HelloWorld.png");
//        sprite2->setPosition(Vec2(0,0));
//        clipper->addChild(sprite2);

//        int i=0;
//        for(int j=0;j<5;j++)
//        {
//            for(int k=0;k<2;k++)
//            {
//                MenuItemImage *menuItemImage5 =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//                menuItemImage5->setPosition(Vec2(visibleSize.width*(.2+j*.2),visibleSize.height*(.2+k*.2)));
//                menuItemImage5->setTag(i);
//                i++;
//                Menu *menu = Menu::create(menuItemImage5, nullptr);
//                menu->setPosition(Vec2(0,0));
//                this->addChild(menu);
////                menu->setPosition(Vec2(0,0));
////                this->addChild(menuItemImage);
//                menuVector.push_back(menuItemImage5);
//                log("Pushing into Vector %d",i-1);
//            }
//        }
//
//    int i=0;
//        for(int j=0;j<5;j++)
//        {
//            for(int k=0;k<2;k++)
//            {
//                MenuItemImage *menuItemImage5 =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//                menuItemImage5->setPosition(Vec2(visibleSize.width*(.2+j*.2),visibleSize.height*(.2+k*.2)));
//                menuItemImage5->setTag(i);
//
//                Menu *menu = Menu::create(menuItemImage5, nullptr);
//                menu->setPosition(Vec2(0,0));
//                this->addChild(menu);
////                menu->setPosition(Vec2(0,0));
////                this->addChild(menuItemImage);
//                map1.insert(pair<int,MenuItemImage*>(i,menuItemImage5));
//                log("Mapping %d",i);
//                i++;
//            }
//        }

//        menuItemImage = MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//        menuItemImage->setPosition(Vec2(visibleSize.width*.5,visibleSize.height*.5));
//        menuItemImage->setTag(0);
//        this->addChild(menuItemImage);
//        menuVector.push_back(menuItemImage);
//        log("Pushing into Vector");
//        menuItemImage->setPosition(Vec2(visibleSize.width*(.1+i*.1),visibleSize.height*0.4));
//        menuItemImage->setTag(i);

//        Menu *menu = Menu::create(menuItemImage, nullptr);
//        menu->setPosition(Vec2(0,0));
//        this->addChild(menu);
//        menuVector.push_back(menuItemImage);

//    Sprite *spfdhj = sprVector.at(0);


//    ScrollView *scrollView = ScrollView::create();
  ////  ScrollView *scrollView1 = ScrollView::create();
//    scrollView->setContentSize(Size(visibleSize.width,visibleSize.height));
////   scrollView1->setContentSize(Size(visibleSize.width,visibleSize.height));
////    this->addChild(scrollView1,1);
//    this->addChild(scrollView,1);
//    scrollView->setDirection(ScrollView::Direction::VERTICAL);
////    scrollView1->setDirection(ScrollView::Direction::HORIZONTAL);
//    scrollView->setScrollBarEnabled(false);
//    scrollView->setBounceEnabled(true);
////    scrollView1->setBounceEnabled(true);
////    Sprite *tempSprite = Sprite::create("Scale_9_Sprite.png");
//    float topMargin = tempSprite->getContentSize().height*20;
////    float horizontalMargin = tempSprite->getContentSize().width*10;
//    if(topMargin <= scrollView->getContentSize().height){
//        topMargin = scrollView->getContentSize().height;
//    }
//    if(horizontalMargin <= scrollView1->getContentSize().width)
//    {
//        horizontalMargin=scrollView1->getContentSize().width;
//    }
//    scrollView->setInnerContainerSize(Size(scrollView->getContentSize().width,topMargin));
   //// scrollView1->setInnerContainerSize(Size(horizontalMargin,scrollView1->getContentSize().height));
//    for(int i=0;i<20;i++){
//        Sprite *sprite = Sprite::create("HelloWorld.png");
//        sprite->setPosition(Vec2(scrollView->getContentSize().width/2,topMargin-sprite->getContentSize().height/2));
//        scrollView->addChild(sprite);
//
//        topMargin = topMargin - sprite->getContentSize().height;
//    }
//    for(int i=0;i<10;i++)
//    {
//        Sprite *sprite = Sprite::create("HelloWorld.png");
//        sprite->setPosition(Vec2(horizontalMargin-sprite->getContentSize().width/2,scrollView1->getContentSize().height/2));
//        scrollView1->addChild(sprite);

//        horizontalMargin-=sprite->getContentSize().width;
//    }


//    Slider *slider = Slider::create();
//    slider->setPosition(Vec2(visibleSize.width*.5,visibleSize.height*.5));
//    slider->loadBarTexture("barTop.png"); // what the slider looks like
//    slider->loadSlidBallTextures("bar.png", "bar_pressed.png", "bar_disabled.png");
//    slider->loadProgressBarTexture("barTopPressed.png");
//
//    slider->addTouchEventListener([&](Ref* sender, Widget::TouchEventType type){
//        switch (type)
//        {
//            case ui::Widget::TouchEventType::BEGAN:
//                break;
//            case ui::Widget::TouchEventType::ENDED:
//                log("slider moved");
//                break;
//            default:
//                break;
//        }
//    });
//
//    this->addChild(slider);
//    CallFunc *callFunc = CallFunc::create(CC_CALLBACK_0(HelloWorld::callFunction1,this));
//
//
//    sprite = Sprite::create("Scale_9_Sprite.png");
//    sprite->setPosition(Vec2(visibleSize.width*.5,visibleSize.height*.4));
//    sprite->setScaleX(2);
//    this->addChild(sprite,1);

//    sprite = Sprite::create("button1.png");
//    progressTimer=ProgressTimer::create(sprite);
//    progressTimer->setType(ProgressTimer::Type::RADIAL);
//    progressTimer->setPosition(Vec2(visibleSize.width*.6,visibleSize.height*.8));
////    progressTimer->setBarChangeRate(Vec2(1,0));
////    progressTimer->setMidpoint(Vec2(0,0));
////    progressTimer->setPercentage(100);
//    progressTimer->setScale(2);
//
//    this->addChild(progressTimer,1);
//
////    ProgressTo *progressTo = ProgressTo::create(5,100);
////    progressTimer->runAction(progressTo);
//
////    ProgressFromTo *progressFromTo = ProgressFromTo::create(10,0,100);
////    progressTimer->runAction(progressFromTo);
//
//
////    ProgressTo *progressTo = ProgressTo::create(3,70);
////    sprite->runAction(ProgressTo::create(3,70));
////
////    pointArray->addControlPoint(Vec2(visibleSize.width*.5,visibleSize.height*.5));
////    pointArray->addControlPoint(sprite->getPosition()+Vec2(260,170));
////    pointArray->addControlPoint(sprite->getPosition()+Vec2(320,0));
////    pointArray->addControlPoint(sprite->getPosition()+Vec2(380,170));
////    pointArray->addControlPoint(sprite->getPosition()+Vec2(440,0));
////    pointArray->addControlPoint(sprite->getPosition()+Vec2(500,170));
////    pointArray->addControlPoint(sprite->getPosition()+Vec2(560,0));
////
////    CardinalSplineTo *cardinalSplineTo = CardinalSplineTo::create(3,pointArray,1);
////    ScaleTo *scaleTo = ScaleTo::create(3,4);
////    Spawn *spawn = Spawn::create(cardinalSplineTo,nullptr);
////    Sequence *sequence = Sequence::create(callFunc, nullptr);
////   // sprite->runAction(spawn);
////    sprite->runAction(sequence);
//////    RepeatForever *repeatForever = RepeatForever::create(cardinalSplineTo);
////
////   // sprite->runAction(cardinalSplineTo);
////   //sprite->runAction(repeatForever);
//////
//    menuItemImage =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//    menuItemImage->setPosition(Vec2(visibleSize.width*.5,visibleSize.height*0.7));
//    menuItemImage->setScaleX(3);
//    menuItemImage->setTag(1);
//
//    Menu *menu = Menu::create(menuItemImage, nullptr);
//    menu->setPosition(Vec2(0,0));
//    this->addChild(menu);
//
//    Label *label = Label::createWithTTF("Welcome Scene","fonts/arial.ttf",30);
//    label->setPosition(Vec2(visibleSize.width*.5,visibleSize.height*.7));
//    label->setColor(Color3B(0,0,0));
//    this->addChild(label,2);
//
//    slider->setPercent(30);
//    int p = slider->getPercent();
//    __String *string = __String::createWithFormat("%d",p);
//    label->setString(string->getCString());
//
//    Menu *menu = Menu::create(menuItemImage, nullptr);
//    menu->setPosition(Vec2(0,0));
//    this->addChild(menu);

////
//    menuItemImage1 =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//    menuItemImage1->setPosition(Vec2(visibleSize.width*.65,visibleSize.height*0.5));
//    menuItemImage1->setScaleX(1.5);
//    menuItemImage1->setTag(2);
//
//    Label *label1 = Label::createWithTTF("Min","fonts/arial.ttf",30);
//    label1->setPosition(Vec2(visibleSize.width*.65,visibleSize.height*.5));
//    label1->setColor(Color3B(0,0,0));
//    this->addChild(label1,4);
////
//    menuItemImage2 =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//    menuItemImage2->setPosition(Vec2(visibleSize.width*1,visibleSize.height*0.5));
//    menuItemImage2->setScaleX(1.5);
//    menuItemImage2->setTag(3);
//
//    Label *label2 = Label::createWithTTF("Sec","fonts/arial.ttf",30);
//    label2->setPosition(Vec2(visibleSize.width*1,visibleSize.height*.5));
//    label2->setColor(Color3B(0,0,0));
//    this->addChild(label2,6);
////
////    menuItemImage3 =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
////    menuItemImage3->setPosition(Vec2(visibleSize.width*1.05,visibleSize.height*0.95));
////    menuItemImage3->setTag(4);
//
//    menuItemImage3 =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//    menuItemImage3->setPosition(Vec2(visibleSize.width*.3,visibleSize.height*0.3));
//    menuItemImage3->setTag(4);
////
//    label3 = Label::createWithTTF("","fonts/arial.ttf",30);
//    label3->setPosition(Vec2(visibleSize.width*.3,visibleSize.height*.3));
//    label3->setColor(Color3B(0,0,0));
//    this->addChild(label3,8);
//
//    MenuItemImage *menuItemImage4 =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//    menuItemImage4->setPosition(Vec2(visibleSize.width*.65,visibleSize.height*0.3));
//    menuItemImage4->setTag(5);
//
//    label4 = Label::createWithTTF("","fonts/arial.ttf",30);
//    label4->setPosition(Vec2(visibleSize.width*.65,visibleSize.height*.3));
//    label4->setColor(Color3B(0,0,0));
//    this->addChild(label4,8);
//
//    MenuItemImage *menuItemImage5 =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//    menuItemImage5->setPosition(Vec2(visibleSize.width*1,visibleSize.height*0.3));
//    menuItemImage5->setTag(6);
//
//    label5 = Label::createWithTTF("","fonts/arial.ttf",30);
//    label5->setPosition(Vec2(visibleSize.width*1,visibleSize.height*.3));
//    label5->setColor(Color3B(0,0,0));
//    this->addChild(label5,8);
//
////    MenuItemImage *menuItemImage6 =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
////    menuItemImage6->setPosition(Vec2(visibleSize.width*.5,visibleSize.height*0.6));
////    menuItemImage6->setScaleX(3);
////    menuItemImage6->setTag(7);
////
////    label6 = Label::createWithTTF("","fonts/arial.ttf",30);
////    label6->setPosition(Vec2(visibleSize.width*.5,visibleSize.height*.6));
////    label6->setColor(Color3B(0,0,0));
////    this->addChild(label6,8);
//
//    MenuItemImage *menuItemImage7 =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//    menuItemImage7->setPosition(Vec2(visibleSize.width*.3,visibleSize.height*0.15));
//    menuItemImage7->setScaleX(1.5);
//    menuItemImage7->setTag(8);
//
//    Label *label7 = Label::createWithTTF("Start","fonts/arial.ttf",30);
//    label7->setPosition(Vec2(visibleSize.width*.3,visibleSize.height*.15));
//    label7->setColor(Color3B(0,0,0));
//    this->addChild(label7,8);
//
//    MenuItemImage *menuItemImage8 =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//    menuItemImage8->setPosition(Vec2(visibleSize.width*.7,visibleSize.height*0.15));
//    menuItemImage8->setScaleX(1.5);
//    menuItemImage8->setTag(9);
//
//    Label *label8 = Label::createWithTTF("Stop","fonts/arial.ttf",30);
//    label8->setPosition(Vec2(visibleSize.width*.7,visibleSize.height*.15));
//    label8->setColor(Color3B(0,0,0));
//    this->addChild(label8,8);
//
//    Menu *menu = Menu::create(menuItemImage,menuItemImage1,menuItemImage2,menuItemImage3,menuItemImage4,menuItemImage5,menuItemImage7,menuItemImage8, nullptr);
//    menu->setPosition(Vec2(0,0));
//    this->addChild(menu);
////
////    a=0,b=0;
//    __String *string = __String::createWithFormat("%d",a);
//    label2->setString(string->getCString());
//    __String *string1= __String::createWithFormat("%d",b);
//    label3->setString(string1->getCString());
////
//    MenuItemImage *menuItemImage2 =MenuItemImage::create("Scale_9_Sprite.png","Scale_9_Sprite.png",CC_CALLBACK_1(HelloWorld::callFunction,this));
//    menuItemImage2->setPosition(Vec2(visibleSize.width*.8,visibleSize.height*0.2));
//    menuItemImage2->setScale(3,1);
//    menuItemImage2->setTag(3);
//
//    Label *label2 = Label::createWithTTF("End rotate","fonts/arial.ttf",30);
//    label2->setPosition(Vec2(visibleSize.width*.8,visibleSize.height*.2));
//    label2->setColor(Color3B(0,0,0));
//    this->addChild(label2,3);
//
//    Menu *menu = Menu::create(menuItemImage,menuItemImage1,menuItemImage2, nullptr);
//    menu->setPosition(Vec2(0,0));
//    this->addChild(menu);
//
//    CallFunc *callFunc = CallFunc::create(CC_CALLBACK_0(HelloWorld::callFunction1,this));
//
//        rotateBy = RotateBy::create(.2,45);
//
//
//        RepeatForever *repeatForever = RepeatForever::create(rotateBy);
//        sprite->runAction(rotateBy);
//        sprite->runAction(repeatForever);
   //     Sequence *sequence = Sequence::create(moveTo,callFunc, nullptr);
//        sprite->runAction(sequence);

//int a=5;
   // MoveTo  *moveTo = MoveTo::create(3,Vec2(visibleSize.width*.70,visibleSize.height*.70));

//    JumpTo *jump = JumpTo::create(3,Vec2(pos.x+400,visibleSize.height*.2),250,3);

//    rotateBy = RotateBy::create(1,45);
//	EaseCircleActionOut *easeBounceInOut = EaseCircleActionOut::create(rotateBy);
//
//
//    sprite->runAction(easeBounceInOut);



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

//
//    a=0;
//    b=0;
//    c=0;
//    per=100;
//    UserDefault::getInstance()->setIntegerForKey("h",a);
//    UserDefault::getInstance()->setIntegerForKey("m",b);
//    UserDefault::getInstance()->setIntegerForKey("s",c);
//    UserDefault::getInstance()->setFloatForKey("p",per);
//    a=UserDefault::getInstance()->getIntegerForKey("h",0);
//    __String *string = __String::createWithFormat("%02d",a);
//    label3->setString(string->getCString());
//
//    b=UserDefault::getInstance()->getIntegerForKey("m",0);
//    string = __String::createWithFormat("%02d",b);
//    label4->setString(string->getCString());
//
//    c=UserDefault::getInstance()->getIntegerForKey("s",0);
//    string = __String::createWithFormat("%02d",c);
//    label5->setString(string->getCString());
////    per=100;
//    per=UserDefault::getInstance()->getFloatForKey("p",100);
////    string = __String::createWithFormat("%f",per);
////    label6->setString(string->getCString());
//
//    count=0;

//this->schedule(CC_SCHEDULE_SELECTOR(HelloWorld::callScheduleCall),1);
//int a=UserDefault::getInstance()->getIntegerForKey("teeye",0);
//a++;
//UserDefault::getInstance()->setIntegerForKey("teeye",a);




// partical animation *************************/






    return true;
}
//static CCSize winsize = CCDirector::sharedDirector()->getWinSize();
bool HelloWorld::onTouchBegan(Touch *touch, Event *event) {

    Size visibleSize = Director::getInstance()->getVisibleSize();


    Director::getInstance()->replaceScene(TransitionZoomFlipAngular::create(2,WelcomeScene::create()));
    

//    ParticleExplosion *fire = ParticleExplosion::createWithTotalParticles(100);
////fire->addParticles(100);
//    fire->setSpeed(0.5f);
//    fire->setEndColor(Color4F::RED);
//    fire->setStartColor(Color4F::YELLOW);
//    fire->setLife(5.0);
//    fire->setGravity(Vec2(0,1));
//
//
//    fire->setPosition(touch->getLocation());
//    this->addChild(fire);


//    ParticleRain *fire = ParticleRain::createWithTotalParticles(100);
////fire->addParticles(100);
////fire->setSpeed(0.5f);
//    fire->setEndColor(Color4F::RED);
//    fire->setStartColor(Color4F::YELLOW);
//    fire->setLife(5.0);
//    fire->setGravity(Vec2(0,1));
//
//
//    fire->setPosition(touch->getLocation());
//    this->addChild(fire);


//    ParticleFireworks *fire = ParticleFireworks::createWithTotalParticles(100);
////fire->addParticles(100);
////fire->setSpeed(0.5f);
//    fire->setEndColor(Color4F::RED);
//    fire->setStartColor(Color4F::YELLOW);
//    fire->setLife(5.0);
//    fire->setGravity(Vec2(0,1));
//
//
//    fire->setPosition(touch->getLocation());
//    this->addChild(fire);

//    ParticleFireworks *fire = ParticleFireworks::createWithTotalParticles(100);
////fire->addParticles(100);
////fire->setSpeed(0.5f);
//    fire->setEndColor(Color4F::RED);
//    fire->setStartColor(Color4F::YELLOW);
//    fire->setLife(5.0);
//    fire->setGravity(Vec2(0,1));
////    fire->setRotatePerSecond(10);
//    fire->setPosition(touch->getLocation());
//    this->addChild(fire);

//
//    ParticleFireworks *fire = ParticleFireworks::createWithTotalParticles(200);
////fire->addParticles(100);
//    fire->setSpeed(400);
////    fire->setSpeedVar(120);
//    fire->setEndColor(Color4F::YELLOW);
//    fire->setStartColor(Color4F::RED);
//    fire->setLife(7);
//    fire->setGravity(Vec2(0,-200));
////    fire->setEndRadius(2);
//    fire->setStartSize(12);
////    fire->setEmissionRate(500);
//
//    fire->setPosition(Vec2(visibleSize.width*.55,visibleSize.height*.35));
//    this->addChild(fire);

//    ParticleRain *fire = ParticleRain::createWithTotalParticles(100);
////fire->addParticles(100);
////fire->setSpeed(0.5f);
////    fire->setEndColor(Color4F::RED);
//    fire->setStartColor(Color4F::YELLOW);
////    fire->setLife(5.0);
////    fire->setGravity(Vec2(0,1));
////    fire->setRotatePerSecond(10);
//    fire->setPosition(Vec2(visibleSize.width*.55,visibleSize.height*.75));
//    this->addChild(fire);
//
//    ParticleFlower *fire = ParticleFlower::createWithTotalParticles(10);
////fire->addParticles(100);
////fire->setSpeed(0.5f);
//    fire->setEndColor(Color4F::RED);
//    fire->setStartColor(Color4F::YELLOW);
////    fire->setLife(5.0);
////    fire->setGravity(Vec2(0,1));
////    fire->setRotatePerSecond(10);
////fire->setEmissionRate(200);
//    fire->setPosition(Vec2(visibleSize.width*.55,visibleSize.height*.75));
//    this->addChild(fire);


//    fire->setVisible(false);

//    if (sprite->getBoundingBox().containsPoint(touch->getLocation()))
//    {
//
//        //Rect of sprite
//        Rect rect = sprite->getBoundingBox();
//        Vec2 p1 = Vec2(rect.getMinX(),rect.getMinY());
//        log("x : %f\ty : %f",p1.x,p1.y);
//        //Width of sprite
//        float width = sprite->getContentSize().width;
//        log("Width of Sprite : %f", width);
//
//        //Height of sprite
//        float height = sprite->getContentSize().height;
//        log("Height of Sprite : %f", height);
//
//        //Touch Location
//        Vec2 TouchLocation = touch->getLocation();
//        log("Touch Location : %f\t%f", TouchLocation.x, TouchLocation.y);
//
//
//        //Anchor x
//        float x1 = (TouchLocation.x - p1.x) / width;
//        log("Anchor x : %f", x1);
//
//        //Anchor y
//        float y1 = (TouchLocation.y - p1.y) / height;
//        log("Anchor y : %f", y1);
//
//        //Setting Anchors
//        sprite->setAnchorPoint(Vec2(x1, y1));
//
//        //Setting Position
//        sprite->setPosition(TouchLocation);
//
//        rotateBy = RotateBy::create(1,360);
//        sprite->runAction(rotateBy);
//
//
//
//
//
//
//    }


//    __String *string1 = __String::createWithFormat("Began");

//    if (sprite->getBoundingBox().containsPoint(touch->getLocation())) {
//        label3->setString("Began");
//        sprite->setPosition(touch->getLocation());
//        Rect imgRect = sprite->getBoundingBox();
//        Vec2 pos = Vec2(imgRect.getMinX(),imgRect.getMinY());
//    Size visibleSize = Director::getInstance()->getVisibleSize();
//        Vec2 pos = sprite->getPosition();
//        float x = visibleSize.width;
//        float y = visibleSize.height;
//        float x2=touch->getLocation().x;
//        float y2=touch->getLocation().y;
//        float x1=abs(x2-x);
//        float y1=abs(y2-y);
//        float x3=sprite->getPosition().x;
//        float y3=sprite->getPosition().y;
////        float x5 = x2*.5/x3;
////        float y5 = y2*.5/y3;
//        log("pos.x = %f\tpos.y = %f\nx = %f\ty = %f\nx1 = %f\ty1 = %f\nx2 = %f\ty2 = %f",pos.x,pos.y,x,y,x1,y1,x2,y2);
//        sprite->setAnchorPoint(Vec2((x1/x)*.5,(y1/y)*.5));
//        log("x5 = %f\ty5 = %f",(x1/x)*.5,(y1/y)*.5);
//        log("\nVec2.x = %f\tVec2.y = %f",Vec2(x1/x,y1/y).x,Vec2(x1/x,y1/y).y);
//        sprite->setPosition(pos.x,pos.y);

//
//        sprite->setPosition(touch->getLocation());
//        float x = (1/winsize.width)*touch->getLocation().x;
////        float y = (1/winsize.height)*touch->getLocation().y;
//        float x2 = touch->getLocation().x;
//        float y2 = touch->getLocation().y;
//        float x1 = sprite->getAnchorPoint().x;
//        float y1 = sprite->getAnchorPoint().y;
//        float x3 = sprite->getPosition().x;
//        float y3 = sprite->getPosition().y;
//        float x5 = x2 * .5 / x3;
//        float y5 = y2 * .5 / y3;
//        log("x1 = %f\ty1 = %f\nx2 = %f\ty2 = %f\nx3 = %f\ty3 = %f", x1, y1, x2, y2, x3, y3);
//        sprite->setAnchorPoint(Vec2(x5, y5));
//        log("x5 = %f\ty5 = %f", x5, y5);
//        sprite->setPosition(touch->getLocation());

//        rotateBy = RotateBy::create(.25,45);
////        RepeatForever *repeatForever = RepeatForever::create(rotateBy);
//        sprite->runAction(rotateBy);
//        sprite->setPosition(touch->getLocation());
//    }

//    label3->setString("Began");
//    Vec2 point1 = touch->getLocation();
//
//    sprite->setPosition(point1);
//    sprite->setPosition(point);
        return true;
//    }
}
void HelloWorld::onTouchMoved(Touch *touch, Event *unused_event)
    {
//    __String *string1 = __String::createWithFormat("Moved");
//    label3->setString("moved");
    if(sprite->getBoundingBox().containsPoint(touch->getLocation()))
    {


//        label3->setString("Moved");
//        sprite->setPosition(touch->getLocation());
//        float x = (1/winsize.width)*touch->getLocation().x;
//        float y = (1/winsize.height)*touch->getLocation().y;
//        float x2=touch->getLocation().x;
//        float y2=touch->getLocation().y;
//        float x1=sprite->getAnchorPoint().x;
//        float y1=sprite->getAnchorPoint().y;
//        float x3=sprite->getPosition().x;
//        float y3=sprite->getPosition().y;
//        float x5 = x2*.5/x3;
//        float y5 = y2*.5/y3;
//        log("x1 = %f\ty1 = %f\nx2 = %f\ty2 = %f\nx3 = %f\ty3 = %f",x1,y1,x2,y2,x3,y3);
//        sprite->setAnchorPoint(Vec2(x5,y5));
//        log("x5 = %f\ty5 = %f",x5,y5);
//        rotateBy = RotateBy::create(.25,45);
//        RepeatForever *repeatForever = RepeatForever::create(rotateBy);
//        sprite->runAction(repeatForever);
    }
//    Vec2 point2 = touch->getLocation();
//    sprite->setPosition(point2);
};

void HelloWorld::onTouchEnded(Touch *touch, Event *unused_event)
{

//    __String *string1 = __String::createWithFormat("Ended");
//    if(sprite->getBoundingBox().containsPoint(touch->getLocation()))
//    {
//        label3->setString("Ended");
////        sprite->setPosition(touch->getLocation());
//        float x = (1/winsize.width)*touch->getLocation().x;
//        float y = (1/winsize.height)*touch->getLocation().y;
//        float x2=touch->getLocation().x;
//        float y2=touch->getLocation().y;
//        float x1=sprite->getAnchorPoint().x;
//        float y1=sprite->getAnchorPoint().y;
//        Vec2 pos=sprite->convertToWorldSpace(sprite->getPosition());
//        float x3=pos.x;
//        float y3=pos.y;
//        float x5 = x2*.5/x3;
//        float y5 = y2*.5/y3;
//        log("x1 = %f\ty1 = %f\nx2 = %f\ty2 = %f\nx3 = %f\ty3 = %f",x1,y1,x2,y2,x3,y3);
//        sprite->setAnchorPoint(Vec2(x,y));
//        log("x5 = %f\ty5 = %f",x5,y5);
//        rotateBy = RotateBy::create(.25,45);
//        RepeatForever *repeatForever = RepeatForever::create(rotateBy);
//        sprite->runAction(repeatForever);


//    }
//    label3->setString("Ended");
//    point3 = touch->getLocation();
//    sprite->setPosition(point3);
};
void  HelloWorld::callScheduleCall(float dt){

    log("hbfjsdffhfgfgfdg");

//    ProgressFromTo *progressFromTo = ProgressFromTo::create(5,30,80);
//    progressTimer->runAction(progressFromTo);

    if(c==59)
    {
        log("if(c==59)");
        c=0;
        per=100;
        log("after setting c and per");
        __String *string = __String::createWithFormat("%02d",c);
        label5->setString(string->getCString());
        log("after prining c=0");
        UserDefault::getInstance()->setIntegerForKey("s",c);
        log("after setting value of c in user default");

        progressTimer->setPercentage(per);
        ProgressTo *progressTo = ProgressTo::create(1,per-(1.0/.6));
        per = per-(1.0/.6);
        UserDefault::getInstance()->setFloatForKey("p", per);
        progressTimer->runAction(progressTo);

//        string = __String::createWithFormat("%f",per);
//        label6->setString(string->getCString());
        log("before if(b<59)");
            if(b<59)
            {
                b++;
                string = __String::createWithFormat("%02d", b);
                label4->setString(string->getCString());
                UserDefault::getInstance()->setIntegerForKey("m",b);
            }
            else if(b==59)
            {
                b=0;
                string = __String::createWithFormat("%02d", b);
                label4->setString(string->getCString());
                UserDefault::getInstance()->setIntegerForKey("m",b);
                if(a<23)
                {
                    a++;
                    __String *string = __String::createWithFormat("%02d",a);
                    label3->setString(string->getCString());
                    UserDefault::getInstance()->setIntegerForKey("h",a);
                }
                else if(a==24)
                {
                    log("else if(a==24) before scheduler");
                    this->unschedule(CC_SCHEDULE_SELECTOR(HelloWorld::callScheduleCall));
                    log("else if(a==24) after scheduler");
                }
            }
    }else if(c<59) {
        if(a==24)
        {
            log("else if(c<59) && if(a==24) before scheduler");
            this->unschedule(CC_SCHEDULE_SELECTOR(HelloWorld::callScheduleCall));
            log("else if(c<59) && if(a==24) after scheduler");
        }
        else
        {
//            if(per=UserDefault::getInstance()->getIntegerForKey("p",100)<100 && c==0)
//            {
//                UserDefault::getInstance()->setFloatForKey("p", 100);
//            }
//            per=UserDefault::getInstance()->getIntegerForKey("p",100);
            c++;
            __String *string = __String::createWithFormat("%02d", c);
            label5->setString(string->getCString());
            UserDefault::getInstance()->setIntegerForKey("s", c);

            progressTimer->setPercentage(per);
            ProgressTo *progressTo = ProgressTo::create(1,per-(1.0/.6));
            per = per-(1.0/.6);
            UserDefault::getInstance()->setFloatForKey("p", per);
            progressTimer->runAction(progressTo);

//            string = __String::createWithFormat("%f",per);
//            label6->setString(string->getCString());
        }
    } else{
        log("else");
    }

//    if((UserDefault::getInstance()->getIntegerForKey("h")==23)
//            && (UserDefault::getInstance()->getIntegerForKey("m")==59)
//                    && (UserDefault::getInstance()->getIntegerForKey("s")==59)){
//
//        this->unschedule(CC_SCHEDULE_SELECTOR(HelloWorld::callScheduleCall));
//    }

}
void  HelloWorld::callFunction1(){

    Size visibleSize = Director::getInstance()->getVisibleSize();


//    posinitial = sprite->getPosition();
//    PointArray *pointArray = PointArray::create(5);
//    pointArray->addControlPoint(posinitial);
//    pointArray->addControlPoint(Vec2(visibleSize.width*1.1,visibleSize.height*.5));
//    pointArray->addControlPoint(Vec2(visibleSize.width*.6,visibleSize.height*1));
//    pointArray->addControlPoint(Vec2(visibleSize.width*0.15,visibleSize.height*.5));
//    pointArray->addControlPoint(Vec2(visibleSize.width*.6,visibleSize.height*0));
//
//    CardinalSplineTo *cardinalSplineTo = CardinalSplineTo::create(10,pointArray,0);
//    RepeatForever *repeatForever = RepeatForever::create(cardinalSplineTo);
//    sprite->runAction(repeatForever);
    //sprite->runAction(moveTo1);
  //  log("checking Log");
//    moveTo1 = MoveTo::create(1,Vec2(visibleSize.width*.5,visibleSize.height*.4));
//    sprite->runAction(moveTo1);
//    ScaleTo *scaleTo = ScaleTo::create(.01,20);
//    rotateBy = RotateBy::create(.01,45);
//    RepeatForever *repeatForever = RepeatForever::create();
//    sprite->runAction(scaleTo);
//    sprite->runAction(repeatForever);
}
int j=0;
void HelloWorld::callFunction(Ref *ref) {

    Size visibleSize = Director::getInstance()->getVisibleSize();

    MenuItemImage *menuItemImage4 = (MenuItemImage*)ref;
    int tag = menuItemImage4->getTag();




//    menuItemImage4->setNormalImage(Sprite::create("button1.png"));
//    menuItemImage4->setSelectedImage(Sprite::create("button1.png"));
//    log("callFunction1 %d", tag);
//
//
//    map<int,MenuItemImage*>::iterator itr;
//    for(itr = map1.begin(); itr!=map1.end();itr++)
//    {
//        if(itr->first!=tag) {
//            itr->second->setNormalImage(Sprite::create("Scale_9_Sprite.png"));
//            itr->second->setSelectedImage(Sprite::create("Scale_9_Sprite.png"));
//        }
//    }


//    for(int i=0;i<10;i++)
//    {
//        if(tag!=i)
//        {
//            menuVector.at(i)->setNormalImage(Sprite::create("Scale_9_Sprite.png"));
//            menuVector.at(i)->setSelectedImage(Sprite::create("Scale_9_Sprite.png"));
//        }
//    }




//
//    menuItemImage4->setNormalImage(Sprite::create("Scale_9_Sprite12.png"));
//    if(tag==8)
//    {
//        log("after pressing start");
//        if (count == 1) {
//            count = 0;
//            log("before schedule of start");
//            this->schedule(CC_SCHEDULE_SELECTOR(HelloWorld::callScheduleCall), 1);
//            log("after schedule of start");
//        }
//    }
//    else if(tag==9)
//    {
//        if (count == 0) {
//            count = 1;
//            log("After pressing stop");
//            this->unschedule(CC_SCHEDULE_SELECTOR(HelloWorld::callScheduleCall));
//
//        }
//    }


//    Size visibleSize = Director::getInstance()->getVisibleSize();
////    moveTo = MoveTo::create(1,Vec2(visibleSize.width*.5,visibleSize.height*.8));
////    moveTo1 = MoveTo::create(1,Vec2(visibleSize.width*.5,visibleSize.height*.4));
//
//    if(tag==1)
//    {
//        if(count==1)
//        {
//            count=0;
//            a++;
//            __String *string = __String::createWithFormat("%d",a);
//            label2->setString(string->getCString());
//            Vec2 pos = sprite->getPosition();
//            PointArray *parray = PointArray::create(5);
//            parray->addControlPoint(pos);
//            parray->addControlPoint(Vec2(visibleSize.width*1.1,visibleSize.height*.5));
//            parray->addControlPoint(Vec2(visibleSize.width*.6,visibleSize.height*1));
//            parray->addControlPoint(Vec2(visibleSize.width*0.15,visibleSize.height*.5));
//            parray->addControlPoint(Vec2(visibleSize.width*.6,visibleSize.height*0));
//            CardinalSplineTo *cardinalSplineTo2 = CardinalSplineTo::create(10,parray,0);
////
//
//            CallFunc *callFunc = CallFunc::create(CC_CALLBACK_0(HelloWorld::callFunction1,this));
////            CardinalSplineTo *cardinalSplineTo3 = CardinalSplineTo::create(10,pointArray,0);
////            RepeatForever *repeatForever = RepeatForever::create(cardinalSplineTo3);
//            Sequence *sequence = Sequence::create(cardinalSplineTo2,callFunc, nullptr);
//            sprite->runAction(sequence);
//        }
//
//
////        sprite->runAction(moveTo);
//    }
//    else if(tag==2)
//    {
//        count=1;
//        b++;
//        __String *string = __String::createWithFormat("%d",b);
//        label3->setString(string->getCString());
//        sprite->stopAllActions();
//        Vec2 pos1 = sprite->getPosition();
//        PointArray *parray1 = PointArray::create(2);
//        parray1->addControlPoint(pos1);
//        parray1->addControlPoint(Vec2(pos1.x,visibleSize.height*0));
//        CardinalSplineTo *cardinalSplineTo1 = CardinalSplineTo::create(5,parray1,0);
//        sprite->runAction(cardinalSplineTo1);
//        sprite->runAction(moveTo1);
    }
//    else if(tag==3)
//    {
//        sprite->stopAllActions();
//    }


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
//            string = __String::createWithFormat("%d",a);
//            label->setString(string->getCString());
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
