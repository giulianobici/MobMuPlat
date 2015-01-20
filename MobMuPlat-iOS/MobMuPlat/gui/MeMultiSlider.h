//
//  MeMultiSlider.h
//  MobMuPlat
//
//  Created by Daniel Iglesia on 3/28/13.
//  Copyright (c) 2013 Daniel Iglesia. All rights reserved.
//

#import "MeControl.h"

@interface MeMultiSlider : MeControl{
    UIView* box;
    NSMutableArray* headViewArray;
    float headWidth;
    int currHeadIndex;
}


@property(nonatomic) int range;
@property(nonatomic) NSMutableArray* valueArray;
@property(nonatomic) NSUInteger touchMode; //0=all values, 1=individual element index+value
@end
