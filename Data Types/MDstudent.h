//
//  MDStudent.h
//  Data Types
//
//  Created by Maryna Delidova on 3/22/18.
//  Copyright © 2018 Maryna Delidova. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    
    MDGenderMale,
    MDGenderFemale
} MDGender;

@interface MDStudent : NSObject

@property (strong, nonatomic) NSString* name;

@property (assign, nonatomic) MDGender gender;

@end
