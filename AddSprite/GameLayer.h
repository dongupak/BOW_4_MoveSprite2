//
//  GameLayer.h
//  AddSprite
//
//  Created by ivis on 13. 6. 28..
//  Copyright 2013년 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface GameLayer : CCLayer {
    
}

//GameLayer의 자식으로서 CCScene 메서드를 호출한다.
+(CCScene *) scene;

@end
