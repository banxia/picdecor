//
//  VCImageEditing.h
//  PicDecor
//
//  Created by jin jianxiong on 22/1/14.
//  Copyright (c) 2014 jjx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VCDecorations.h"

@interface VCImageEditing : UIViewController{
    
    IBOutlet UIImageView *ivEditingImage;
    
}

-(IBAction)doDecorateBtn:(id)sender;
-(IBAction)doEmailBtn:(id)sender;

@end
