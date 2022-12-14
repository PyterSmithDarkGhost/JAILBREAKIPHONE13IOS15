/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 21, 2022 at 6:51:04 AM Pacific Standard Time
* Operating System: Version 15.2.1 (Build 19C63)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation.h>
//#import <CoreServices/CoreServices-Structs.h>
//#import <libobjc.A.dylib/NSCopying.h>
//#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _LSApplicationState : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	unsigned long long _stateFlags;
	int _ratingRank;
	unsigned long long _installType;

}

@property (nonatomic,readonly) unsigned long long installType; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isRemovedSystemApp,nonatomic,readonly) BOOL removedSystemApp; 
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked; 
@property (getter=isAlwaysAvailable,nonatomic,readonly) BOOL alwaysAvailable; 
@property (getter=isDowngraded,nonatomic,readonly) BOOL downgraded; 
+(BOOL)supportsSecureCoding;
-(BOOL)isInstalled;
-(void)addStateFlag:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isRemovedSystemApp;
-(unsigned long long)installType;
-(BOOL)isPlaceholder;
-(BOOL)isRestricted;
-(BOOL)isBlocked;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg1 stateFlags:(unsigned long long)arg2 ratingRank:(int)arg3 installType:(unsigned long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)isDowngraded;
-(BOOL)isAlwaysAvailable;
-(BOOL)isValid;
@end

