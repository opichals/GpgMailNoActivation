//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "NSCopying.h"

@class MFSyncedSignatureContentsFile, NSData, NSString, WebArchive;

@interface MFSignature : NSObject <NSCopying>
{
    NSString *_name;	// 8 = 0x8
    NSData *_webArchiveData;	// 16 = 0x10
    BOOL _isRich;	// 24 = 0x18
    BOOL _isSavedAsRich;	// 25 = 0x19
    BOOL _isDirty;	// 26 = 0x1a
    NSString *_uniqueId;	// 32 = 0x20
    MFSyncedSignatureContentsFile *_syncedFile;	// 40 = 0x28
}

@property(readonly, nonatomic) MFSyncedSignatureContentsFile *syncedFile; // @synthesize syncedFile=_syncedFile;
@property(nonatomic) BOOL isDirty; // @synthesize isDirty=_isDirty;
@property(readonly, nonatomic) BOOL isSavedAsRich; // @synthesize isSavedAsRich=_isSavedAsRich;
@property(readonly, copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;	// IMP=0x000000000024ee12
- (unsigned long long)hash;	// IMP=0x000000000024ed78
- (BOOL)isEqual:(id)arg1;	// IMP=0x000000000024ecaf
@property(nonatomic) BOOL isRich;
@property(copy, nonatomic) WebArchive *webArchive;
- (void)_makeWebArchiveDataIfNeeded;	// IMP=0x000000000024e8a9
@property(readonly, copy, nonatomic) NSData *webArchiveData;
- (void)reloadFromDisk;	// IMP=0x000000000024e79f
@property(copy, nonatomic) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024e53f
- (id)dictionaryRepresentation;	// IMP=0x000000000024e427
- (void)removeContentFromDisk;	// IMP=0x000000000024e3cd
- (BOOL)saveContentToDisk;	// IMP=0x000000000024e222
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000024dffe
- (id)init;	// IMP=0x000000000024df89
- (id)initWithName:(id)arg1;	// IMP=0x000000000024def2
- (id)initWithName:(id)arg1 uniqueId:(id)arg2;	// IMP=0x000000000024ddd8

@end

