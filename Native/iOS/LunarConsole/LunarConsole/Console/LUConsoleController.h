//
//  LUConsoleController.h
//  LunarConsole
//
//  Created by Alex Lementuev on 11/26/16.
//  Copyright © 2016 Space Madness. All rights reserved.
//

#import "LUViewController.h"

@class LUConsolePlugin;
@class LUConsoleController;

@protocol LUConsoleControllerDelegate <NSObject>

@optional
- (void)consoleControllerDidOpen:(LUConsoleController *)controller;
- (void)consoleControllerDidClose:(LUConsoleController *)controller;

@end

@interface LUConsoleController : LUViewController

@property (nonatomic, weak) id<LUConsoleControllerDelegate> delegate;

+ (instancetype)controllerWithPlugin:(LUConsolePlugin *)plugin;
- (instancetype)initWithPlugin:(LUConsolePlugin *)plugin;

@end