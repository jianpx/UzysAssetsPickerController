//
//  UzysAppearanceConfig.h
//  UzysAssetsPickerController
//
//  Created by jianpx on 8/26/14.
//  Copyright (c) 2014 Uzys. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UzysAppearanceConfig : NSObject
//selected photo/video checkmark
@property (nonatomic, strong) NSString *assetSelectedImageName;
//deselected photo/video checkmark
@property (nonatomic, strong) NSString *assetDeselectedImageName;
@property (nonatomic, strong) NSString *assetsGroupSelectedImageName;
@property (nonatomic, strong) NSString *cameraImageName;
@property (nonatomic, strong) UIColor *finishSelectionButtonColor;

+ (instancetype)sharedConfig;
@end
