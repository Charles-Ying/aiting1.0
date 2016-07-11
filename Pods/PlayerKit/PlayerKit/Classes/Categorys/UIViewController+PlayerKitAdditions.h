//
//  UIViewController+PlayerKitAdditions.h
//  PlayerKit
//
//  Created by Jack MacBook on 15/12/31.
//  Copyright © 2016年 嗨，我是曾宪华(@xhzengAIB)，曾加入YY Inc.担任高级移动开发工程师，拍立秀App联合创始人，热衷于简洁、而富有理性的事物 QQ:543413507 主页:http://zengxianhua.com All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerKitPlayerViewProtocol.h"

@interface UIViewController (PlayerKitAdditions)

- (void)showPlayerInWindowWithMediaPath:(NSString *)mediaPath;
- (void)showPlayerInWindowWithMediaPath:(NSString *)mediaPath title:(NSString *)title;

- (void)showPlayerInViewController:(UIViewController *)viewController mediaPath:(NSString *)mediaPath;
- (void)showPlayerInViewController:(UIViewController *)viewController mediaPath:(NSString *)mediaPath title:(NSString *)title;

- (void)showCustomPlayerView:(UIView <PlayerKitPlayerViewProtocol> *)playerView inWindowWithMediaPath:(NSString *)mediaPath;
- (void)showCustomPlayerView:(UIView <PlayerKitPlayerViewProtocol> *)playerView inWindowWithMediaPath:(NSString *)mediaPath title:(NSString *)title;

- (void)dismissPlayer;

@end
