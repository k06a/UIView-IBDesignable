//
//  UIView+IBDesignable.h
//  Pinder
//
//  Created by Anton Bukov on 31.10.15.
//  Copyright (c) 2015 Happy Santa. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface UIView (IBDesignable)

@property (nonatomic, assign) IBInspectable BOOL layerShouldRasterize;
@property (nonatomic, assign) IBInspectable BOOL layerMasksToBounds;
@property (nonatomic, assign) IBInspectable CGFloat layerCornerRadius;
@property (nonatomic, assign) IBInspectable CGFloat layerBorderWidth;
@property (nonatomic, strong) IBInspectable UIColor *layerBorderColor;

@property (nonatomic, strong) IBInspectable UIColor *layerShadowColor;
@property (nonatomic, assign) IBInspectable CGFloat layerShadowOpacity;
@property (nonatomic, assign) IBInspectable CGFloat layerShadowRadius;
@property (nonatomic, assign) IBInspectable CGSize layerShadowOffset;

@end

//

IB_DESIGNABLE
@interface UILabel (IBDesignable)

@property (nonatomic, assign) IBInspectable CGFloat paragraphLineHeight;

@end
