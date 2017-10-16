//
//  AppDelegate.h
//  Mapping_multi
//
//  Created by Suprasoft on 16/10/17.
//  Copyright © 2017 Suprasoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

