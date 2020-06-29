//
//  FITPoint+Init.h
//  Fit
//
//  Created by Jelle Vandebeeck on 13/01/2018.
//  Copyright © 2018 Jelle Vandebeeck. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "FITPoint.h"

#include "fit_record_mesg.hpp"
#include "fit_segment_point_mesg.hpp"

@interface FITPoint (Init)

- (instancetype)initWithRecord:(fit::RecordMesg)record;
- (instancetype)initWithSegmentPoint:(fit::SegmentPointMesg)segmentPoint;

@end
