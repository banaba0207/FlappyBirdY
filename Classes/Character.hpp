#ifndef __SushiNeko__Character__
#define __SushiNeko__Character__

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"


class Character : public cocos2d::Node
{
public:
    CREATE_FUNC(Character);
    bool init() override;
    void update(float dt) override;
    void onEnter() override;
    void jump();
    cocos2d::Rect getRect();
    
    void startFly();
    void stopFly();
    
protected:
    cocostudio::timeline::ActionTimeline* timeline;
    
    float velocity;
    float accel;
    bool isFlying;
};
//
#endif /* defined(__SushiNeko__Character__) */