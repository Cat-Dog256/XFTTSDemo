//
//  TXSoundPlayer.h
//  SoundPlayer
//
//  Created by MoGo on 16/5/19.
//  Copyright © 2016年 李策--MoGo--. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@interface TXSoundPlayer : NSObject
{
    NSMutableDictionary* soundSet;  //声音设置
    NSString* path;  //配置文件路径
}

@property(nonatomic,assign)float rate;   //语速
@property(nonatomic,assign)float volume; //音量
@property(nonatomic,assign)float pitchMultiplier;  //音调
@property(nonatomic,assign)BOOL autoPlay;  //自动播放


+(TXSoundPlayer*)soundPlayerInstance;

-(void)play:(NSString*)text;


- (void)stopSpeaking;

- (void)pauseSpeaking;

- (void)continueSpeaking;

-(void)setDefault;

-(void)writeSoundSet;
@end
