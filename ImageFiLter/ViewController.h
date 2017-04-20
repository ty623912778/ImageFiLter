//
//  ViewController.h
//  ImageFiLter
//
//  Created by mac on 2017/4/20.
//  Copyright © 2017年 mac. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <UIKit/UIKit.h>
#import <CoreImage/CoreImage.h>
#import "GPUImage.h"

@interface ViewController : UIViewController {
    
}

@property(nonatomic, strong) NSMutableArray *filterList;
@property(nonatomic, strong) UIImage *originalImage;
@property(nonatomic, strong) UIButton *selectedFilterButton;
@property (nonatomic, strong) UIImageView *imageView;
@property(nonatomic, strong) UIView *filterView;



/**
 *  滤镜视频
 *
 */
- (void)initFilterView;



/**
 *  创建滤镜
 *
 */
- (void)crateFilters;




/**
 *  点击滤镜效果
 *
 */
-(void)filterButtonClick:(id)sender;



/**
 *  图片进行滤镜添加操作
 *
 *   要处理的图片
 *   原始颜色查找表图片名
 *
 *   返回滤镜后的图片
 */
- (UIImage *)filterImage:(UIImage *)originalImage withLUTNamed:(NSString *)lutName;

@end

