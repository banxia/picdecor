//
//  ViewController.h
//  PicDecor
//
//  Created by jin jianxiong on 12/1/14.
//  Copyright (c) 2014 jjx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VCImageEditing.h"

@interface ViewController : UIViewController{

    IBOutlet VCImageEditing *vcImageEditing;

}


-(IBAction)doCameraBtn:(id)sender;
-(IBAction)doPhotoAlbumBtn:(id)sender;

@end
