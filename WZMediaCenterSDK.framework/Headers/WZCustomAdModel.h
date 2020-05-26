//
//  WZCustomAdModel.h
//  WZMediaCenterSDK
//
//  Created by likun on 2020/5/26.
//  Copyright © 2020 LIKUN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WZCustomAdModel : NSObject

/// 活动页面地址
@property (nonatomic,strong) NSString *activityUrl;
/// 广告素材地址
@property (nonatomic,strong) NSString *imageUrl;
/// 广告素材标题
@property (nonatomic,strong) NSString *extTitle;
/// 广告素材描述
@property (nonatomic,strong) NSString *extDesc;
/// 广告素材曝光上报url
@property (nonatomic,strong) NSString *reportExposureUrl;
/// 广告素材点击上报url
@property (nonatomic,strong) NSString *reportClickUrl;
@end


