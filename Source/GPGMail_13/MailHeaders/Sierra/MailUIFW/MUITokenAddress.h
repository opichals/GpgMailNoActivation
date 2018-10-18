//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "CNAutocompleteFetchDelegate-Protocol.h"
//#import "NSCopying.h"
#import "MUITokenAddressDelegate-Protocol.h"

@class ABCNContact, ABGroup, CNAutocompleteStore, NSArray, NSMenu, NSString, NSTextView, NSTokenField;


@interface MUITokenAddress : NSObject <CNAutocompleteFetchDelegate, NSCopying>
{
    BOOL _shouldRefreshNameIfPossible;	// 8 = 0x8
    id <MUITokenAddressDelegate> _delegate;	// 16 = 0x10
    NSTokenField *_tokenField;	// 24 = 0x18
    NSTextView *_textView;	// 32 = 0x20
    ABCNContact *_contact;	// 40 = 0x28
    ABGroup *_group;	// 48 = 0x30
    NSString *_recentRawAddress;	// 56 = 0x38
    NSString *_recentName;	// 64 = 0x40
    NSString *_currentRawAddress;	// 72 = 0x48
    NSString *_currentName;	// 80 = 0x50
    long long _tokenStyle;	// 88 = 0x58
    id <CNCancelable> _autocompletionSearchRequest;	// 96 = 0x60
    CNAutocompleteStore *_autocompleteStore;	// 104 = 0x68
}

+ (id)_contactsCache;	// IMP=0x000000000001c404
+ (void)writeTokens:(id)arg1 toPasteboard:(id)arg2;	// IMP=0x000000000001acba
+ (id)keyPathsForValuesAffectingIsExternal;	// IMP=0x000000000001a4de
+ (id)tokenWithAddress:(id)arg1 isRecent:(BOOL)arg2 contact:(id)arg3;	// IMP=0x000000000001997c
+ (id)tokenWithAddress:(id)arg1;	// IMP=0x0000000000019912
+ (BOOL)addressIsExternal:(id)arg1;	// IMP=0x00000000000196c8
@property(readonly, nonatomic) CNAutocompleteStore *autocompleteStore; // @synthesize autocompleteStore=_autocompleteStore;
@property(retain, nonatomic) id <CNCancelable> autocompletionSearchRequest; // @synthesize autocompletionSearchRequest=_autocompletionSearchRequest;
@property(nonatomic) BOOL shouldRefreshNameIfPossible; // @synthesize shouldRefreshNameIfPossible=_shouldRefreshNameIfPossible;
@property(nonatomic) long long tokenStyle; // @synthesize tokenStyle=_tokenStyle;
@property(copy, nonatomic) NSString *currentName; // @synthesize currentName=_currentName;
@property(copy, nonatomic) NSString *currentRawAddress; // @synthesize currentRawAddress=_currentRawAddress;
@property(copy, nonatomic) NSString *recentName; // @synthesize recentName=_recentName;
@property(copy, nonatomic) NSString *recentRawAddress; // @synthesize recentRawAddress=_recentRawAddress;
@property(retain, nonatomic) ABGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) ABCNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak NSTokenField *tokenField; // @synthesize tokenField=_tokenField;
@property(retain, nonatomic) id <MUITokenAddressDelegate> delegate; // @synthesize delegate=_delegate;
//- (void).cxx_destruct;	// IMP=0x000000000001ff2c
- (void)searchForToken:(id)arg1;	// IMP=0x000000000001fc91
- (void)removeFromAddressHistory:(id)arg1;	// IMP=0x000000000001f7bb
- (void)expandGroupAddress:(id)arg1;	// IMP=0x000000000001f300
- (void)openNewMessage:(id)arg1;	// IMP=0x000000000001f2b2
- (void)addToVIPSenders:(id)arg1;	// IMP=0x000000000001f261
- (void)removeFromVIPSenders:(id)arg1;	// IMP=0x000000000001f210
- (void)openInContacts:(id)arg1;	// IMP=0x000000000001f064
- (void)openPersonCard:(id)arg1;	// IMP=0x000000000001ed9b
- (void)addToContacts:(id)arg1;	// IMP=0x000000000001ea94
- (void)copyAddressToClipboard:(id)arg1;	// IMP=0x000000000001e9b9
- (void)removeAddress:(id)arg1;	// IMP=0x000000000001e865
- (void)editAddress:(id)arg1;	// IMP=0x000000000001e73b
- (void)changeAddress:(id)arg1;	// IMP=0x000000000001e699
- (id)_tokenForTokenAddress:(id)arg1;	// IMP=0x000000000001e39e
- (BOOL)validateMenuItem:(id)arg1;	// IMP=0x000000000001e35a
@property(readonly, nonatomic) NSMenu *menu;
@property(readonly, copy, nonatomic) NSArray *expandedTokens;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000001c871
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;	// IMP=0x000000000001c593
- (void)_refreshToken;	// IMP=0x000000000001c483
- (void)_contactsChanged:(id)arg1;	// IMP=0x000000000001c14f
- (id)_contactForEmail:(id)arg1;	// IMP=0x000000000001bdd5
- (void)_getAddressAndNameFromRecord;	// IMP=0x000000000001bc94
- (void)_getRecordFromAddress;	// IMP=0x000000000001b261
- (void)getRecordFromAddress;	// IMP=0x000000000001b10d
- (id)_contactsOperationQueue;	// IMP=0x000000000001b08e
- (void)writeToPasteboard:(id)arg1;	// IMP=0x000000000001aca6
- (void)_writeToPasteboard:(id)arg1 forceAddressOnly:(BOOL)arg2;	// IMP=0x000000000001aad3
- (BOOL)writeToPasteboard:(id)arg1 type:(id)arg2;	// IMP=0x000000000001aa83
- (BOOL)_writeToPasteboard:(id)arg1 type:(id)arg2 forceAddressOnly:(BOOL)arg3;	// IMP=0x000000000001a846
@property(readonly, copy, nonatomic) NSArray *writablePasteboardTypes;
- (id)_suggestionSerializedRepresentation;	// IMP=0x000000000001a729
- (id)suggestionWithGenius:(id)arg1;	// IMP=0x000000000001a58d
- (id)toolTipWithMode:(long long)arg1;	// IMP=0x000000000001a562
@property(readonly, nonatomic) BOOL isExternal;
- (id)displayStringWithMode:(long long)arg1;	// IMP=0x000000000001a20a
@property(readonly, copy, nonatomic) NSString *formattedAddress;
- (id)_contactNameFormatter;	// IMP=0x000000000001a13a
- (id)_formattedRecentAddress;	// IMP=0x000000000001a0aa
- (id)_formattedCurrentAddress;	// IMP=0x000000000001a01a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000019e9f
- (void)dealloc;	// IMP=0x0000000000019df6
- (void)_muiTokenAddressCommonInit;	// IMP=0x0000000000019d57
- (id)init;	// IMP=0x0000000000019d12
- (id)initWithGroup:(id)arg1;	// IMP=0x0000000000019c8a
- (id)initWithAddress:(id)arg1 isRecent:(BOOL)arg2 contact:(id)arg3;	// IMP=0x0000000000019ac4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
