//
//  Configure.h
//  MarkLite
//
//  Created by zhubch on 11/9/15.
//  Copyright © 2015 zhubch. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Configure : NSObject <NSCoding>

@property (nonatomic,strong) NSMutableArray *fileHisory;

@property (nonatomic,strong) NSDictionary *launchOptions;

@property (nonatomic,strong) NSString *style;

@property (nonatomic,strong) NSString *themeColor;

@property (nonatomic,strong) NSDictionary *highlightColor;

@property (nonatomic,assign) BOOL keyboardAssist;

+ (instancetype)sharedConfigure;

- (BOOL)saveToFile;

@end
