/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <MusicLibrary/MLPhotoDCFFileGroup.h>
#import "PLImageWriterDelegate.h"


@interface MLPhotoDCFFileGroup (CameraAdditions) <PLImageWriterDelegate>
-(void)_invokeCompletionSelectorForJob:(id)job error:(id)error;
// in a protocol: -(void)imageWriterCompletedJob:(id)job withError:(id)error;
-(void)setImage:(id)image previewImage:(id)image2 type:(CFStringRef)type extension:(id)extension exifProperties:(id)properties date:(id)date imageData:(CFDataRef)data completionTarget:(id)target completionSelector:(SEL)selector contextInfo:(void*)info;
// in a protocol: -(void)imageWriterCompletedVideoJob:(id)job withError:(id)error;
-(void)processVideoWithMetadata:(id)metadata target:(id)target completionSelector:(SEL)selector progressStack:(XXStruct_z8YKPA*)stack;
-(void)regenerateVideoThumbnailsWithCompletionTarget:(id)completionTarget creationDate:(id)date completionSelector:(SEL)selector progressStack:(XXStruct_z8YKPA*)stack;
-(void)processVideoAtPath:(id)path createCopy:(BOOL)copy completionTarget:(id)target completionSelector:(SEL)selector contextInfo:(void*)info;
@end

