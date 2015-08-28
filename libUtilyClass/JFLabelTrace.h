//
//  JFLabelTrace.h
//  GuessImageWar
//
//  Created by ran on 14-2-12.
//  Copyright (c) 2014年 com.lelechat.GuessImageWar. All rights reserved.
//

#import <UIKit/UIKit.h>

#define TEXTFONTWITHSIZE(asizevalue)    [UIFont fontWithName:@"DFPHaiBaoW12" size:asizevalue]
#define TEXTHEITIWITHSIZE(asize)        [UIFont fontWithName:@"Heiti SC" size:asize]
#define TEXTCOMMONCOLORSecond           [UIColor colorWithRed:0x3a*1.0/255.0 green:0x23*1.0/255.0 blue:0x0a*1.0/255.0 alpha:1]


@interface JFLabelTrace : UILabel
- (id)initWithFrame:(CGRect)frame withShadowColor:(UIColor*)shadowcolor offset:(CGSize)offset  textColor:(UIColor*)textColor;
@property(nonatomic,retain)UIColor  *textShadowColor;
@end
