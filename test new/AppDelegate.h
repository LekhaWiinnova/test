//
//  AppDelegate.h
//  test new
//
//  Created by Wiinnova Mac User1 on 06/10/2017.
//  Copyright © 2017 wiinnova. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

