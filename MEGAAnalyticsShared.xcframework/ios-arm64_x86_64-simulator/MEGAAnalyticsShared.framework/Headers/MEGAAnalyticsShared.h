#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MEGAASAnalyticsEvent, MEGAASGeneralEvent, MEGAASItemSelectedEvent, MEGAASNotificationEvent, MEGAASScreenViewEvent, MEGAASTabSelectedEvent, MEGAASKotlinEnumCompanion, MEGAASKotlinEnum<E>, MEGAASDecodeSequenceMode, MEGAASKotlinArray<T>, MEGAASSerializersModule, MEGAASJsonDefault, MEGAASJsonElement, MEGAASJsonConfiguration, MEGAASJson, MEGAASKotlinNothing, MEGAASJsonElementCompanion, MEGAASJsonNamingStrategyBuiltins, MEGAASJsonPrimitiveCompanion, MEGAASJsonPrimitive, MEGAASJsonNull, MEGAASKotlinByteArray, MEGAASKotlinThrowable, MEGAASKotlinException, MEGAASKotlinRuntimeException, MEGAASKotlinIllegalArgumentException, MEGAASSerializationException, MEGAASAbstractPolymorphicSerializer<T>, MEGAASAbstractCollectionSerializer<Element, Collection, Builder>, MEGAASTaggedDecoder<Tag>, MEGAASTaggedEncoder<Tag>, MEGAASSerialKind, MEGAASPolymorphicKind, MEGAASPolymorphicKindOPEN, MEGAASPolymorphicKindSEALED, MEGAASPrimitiveKind, MEGAASPrimitiveKindBOOLEAN, MEGAASPrimitiveKindBYTE, MEGAASPrimitiveKindCHAR, MEGAASPrimitiveKindDOUBLE, MEGAASPrimitiveKindFLOAT, MEGAASPrimitiveKindINT, MEGAASPrimitiveKindLONG, MEGAASPrimitiveKindSHORT, MEGAASPrimitiveKindSTRING, MEGAASSerialKindCONTEXTUAL, MEGAASSerialKindENUM, MEGAASStructureKind, MEGAASStructureKindCLASS, MEGAASStructureKindLIST, MEGAASStructureKindMAP, MEGAASStructureKindOBJECT, MEGAASLongAsStringSerializer, MEGAASCompositeDecoderCompanion, MEGAASAlbumsTabEvent, MEGAASChatScreenEvent, MEGAASChatsTabEvent, MEGAASCloudDriveScreenEvent, MEGAASCreateNewAlbumDialogEvent, MEGAASDeleteAlbumCancelButtonPressedEvent, MEGAASDeleteAlbumConfirmButtonPressedEvent, MEGAASDeleteAlbumsConfirmationDialogEvent, MEGAASHomeScreenEvent, MEGAASIncomingSharesTabEvent, MEGAASLinkConfirmPasswordFileButtonPressedEvent, MEGAASLinkConfirmPasswordFolderButtonPressedEvent, MEGAASLinkGetLinkForNodesMenuItemEvent, MEGAASLinkGetLinkForNodesMenuToolbarEvent, MEGAASLinkManageLinkTapFileMenuItemEvent, MEGAASLinkManageLinkTapFileMenuToolbarEvent, MEGAASLinkManageLinkTapFolderMenuItemEvent, MEGAASLinkManageLinkTapFolderMenuToolbarEvent, MEGAASLinkProFeatureSeeNotNowPlanFileButtonPressedEvent, MEGAASLinkProFeatureSeeNotNowPlanFileDialogEvent, MEGAASLinkProFeatureSeeNotNowPlanFolderButtonPressedEvent, MEGAASLinkProFeatureSeeNotNowPlanFolderDialogEvent, MEGAASLinkProFeatureSeePlanFileButtonPressedEvent, MEGAASLinkProFeatureSeePlanFileDialogEvent, MEGAASLinkProFeatureSeePlanFolderButtonPressedEvent, MEGAASLinkProFeatureSeePlanFolderDialogEvent, MEGAASLinkRemovePasswordFileButtonPressedEvent, MEGAASLinkRemovePasswordFolderButtonPressedEvent, MEGAASLinkResetPasswordFileButtonPressedEvent, MEGAASLinkResetPasswordFolderButtonPressedEvent, MEGAASLinkSendDecryptionKeyFileButtonPressedEvent, MEGAASLinkSendDecryptionKeyFolderButtonPressedEvent, MEGAASLinkSetExpiryDateFileButtonPressedEvent, MEGAASLinkSetExpiryDateFolderButtonPressedEvent, MEGAASLinkSetPasswordFileButtonPressedEvent, MEGAASLinkSetPasswordFolderButtonPressedEvent, MEGAASLinkShareLinkForNodesMenuItemEvent, MEGAASLinkShareLinkForNodesMenuToolbarEvent, MEGAASLinkShareLinkTapFileMenuItemEvent, MEGAASLinkShareLinkTapFileMenuToolbarEvent, MEGAASLinkShareLinkTapFolderMenuItemEvent, MEGAASLinkShareLinkTapFolderMenuToolbarEvent, MEGAASLinkSharesTabEvent, MEGAASMeetingsTabEvent, MEGAASOfflineTabEvent, MEGAASOutgoingSharesTabEvent, MEGAASPhotoScreenEvent, MEGAASRecentsTabEvent, MEGAASRemoveLinksConfirmationDialogEvent, MEGAASSharedItemsScreenEvent, MEGAASSlideShowScreenEvent, MEGAASTimelineTabEvent, MEGAASJsonArrayBuilder, MEGAASJsonObjectBuilder, MEGAASSerializersModuleBuilder, MEGAASPolymorphicModuleBuilder<__contravariant Base>, MEGAASClassSerialDescriptorBuilder, MEGAASKotlinBooleanCompanion, MEGAASKotlinByteCompanion, MEGAASKotlinCharCompanion, MEGAASKotlinDoubleCompanion, MEGAASKotlinFloatCompanion, MEGAASKotlinIntCompanion, MEGAASKotlinLongCompanion, MEGAASKotlinShortCompanion, MEGAASKotlinStringCompanion, MEGAASKotlinUByteCompanion, MEGAASKotlinUIntCompanion, MEGAASKotlinULongCompanion, MEGAASKotlinUShortCompanion, MEGAASKotlinUnit, MEGAASKotlinDurationCompanion, MEGAASKotlinDurationUnit, MEGAASJsonBuilder, MEGAASKotlinIntArray, MEGAASKotlinIllegalStateException, MEGAASKotlinByteIterator, MEGAASKotlinKTypeProjection, MEGAASKotlinIntIterator, MEGAASKotlinKVariance, MEGAASKotlinKTypeProjectionCompanion;

@protocol MEGAASPlatform, MEGAASKotlinSuspendFunction0, MEGAASEventIdentifier, MEGAASEventDataMapper, MEGAASButtonPressedEventIdentifier, MEGAASDialogDisplayedEventIdentifier, MEGAASGeneralEventIdentifier, MEGAASItemSelectedEventIdentifier, MEGAASMenuItemEventIdentifier, MEGAASNavigationEventIdentifier, MEGAASNotificationEventIdentifier, MEGAASScreenViewEventIdentifier, MEGAASTabSelectedEventIdentifier, MEGAASKotlinComparable, MEGAASDeserializationStrategy, MEGAASSerializationStrategy, MEGAASSerialFormat, MEGAASStringFormat, MEGAASJsonNamingStrategy, MEGAASEncoder, MEGAASSerialDescriptor, MEGAASDecoder, MEGAASKSerializer, MEGAASKotlinKClass, MEGAASCompositeDecoder, MEGAASCompositeEncoder, MEGAASKotlinIterator, MEGAASKotlinMapEntry, MEGAASSerializersModuleCollector, MEGAASKotlinAnnotation, MEGAASViewIdProvider, MEGAASEventSender, MEGAASKotlinKType, MEGAASBinaryFormat, MEGAASKotlinFunction, MEGAASKotlinKDeclarationContainer, MEGAASKotlinKAnnotatedElement, MEGAASKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MEGAASBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MEGAASBase (MEGAASBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MEGAASMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MEGAASMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMEGAASKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MEGAASNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MEGAASByte : MEGAASNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MEGAASUByte : MEGAASNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MEGAASShort : MEGAASNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MEGAASUShort : MEGAASNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MEGAASInt : MEGAASNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MEGAASUInt : MEGAASNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MEGAASLong : MEGAASNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MEGAASULong : MEGAASNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MEGAASFloat : MEGAASNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MEGAASDouble : MEGAASNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MEGAASBoolean : MEGAASNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Platform")))
@protocol MEGAASPlatform
@required
@property (readonly) int32_t baseIdentifier __attribute__((swift_name("baseIdentifier")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface MEGAASIOSPlatform : MEGAASBase <MEGAASPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int32_t baseIdentifier __attribute__((swift_name("baseIdentifier")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventGenerator")))
@interface MEGAASEventGenerator : MEGAASBase
- (instancetype)initWithViewIdProvider:(id<MEGAASKotlinSuspendFunction0>)viewIdProvider __attribute__((swift_name("init(viewIdProvider:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)generateEventEventIdentifier:(id<MEGAASEventIdentifier>)eventIdentifier completionHandler:(void (^)(MEGAASAnalyticsEvent * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("generateEvent(eventIdentifier:completionHandler:)")));
@end

__attribute__((swift_name("EventIdentifier")))
@protocol MEGAASEventIdentifier
@required
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ButtonPressedEventIdentifier")))
@protocol MEGAASButtonPressedEventIdentifier <MEGAASEventIdentifier>
@required
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end

__attribute__((swift_name("DialogDisplayedEventIdentifier")))
@protocol MEGAASDialogDisplayedEventIdentifier <MEGAASEventIdentifier>
@required
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end

__attribute__((swift_name("GeneralEventIdentifier")))
@protocol MEGAASGeneralEventIdentifier <MEGAASEventIdentifier>
@required
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@end

__attribute__((swift_name("ItemSelectedEventIdentifier")))
@protocol MEGAASItemSelectedEventIdentifier <MEGAASEventIdentifier>
@required
@property (readonly) NSDictionary<NSString *, id> * _Nullable info __attribute__((swift_name("info")));
@end

__attribute__((swift_name("MenuItemEventIdentifier")))
@protocol MEGAASMenuItemEventIdentifier <MEGAASEventIdentifier>
@required
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString * _Nullable menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end

__attribute__((swift_name("NavigationEventIdentifier")))
@protocol MEGAASNavigationEventIdentifier <MEGAASEventIdentifier>
@required
@property (readonly) NSString * _Nullable destination __attribute__((swift_name("destination")));
@property (readonly) NSString * _Nullable navigationElementType __attribute__((swift_name("navigationElementType")));
@end

__attribute__((swift_name("NotificationEventIdentifier")))
@protocol MEGAASNotificationEventIdentifier <MEGAASEventIdentifier>
@required
@end

__attribute__((swift_name("ScreenViewEventIdentifier")))
@protocol MEGAASScreenViewEventIdentifier <MEGAASEventIdentifier>
@required
@end

__attribute__((swift_name("TabSelectedEventIdentifier")))
@protocol MEGAASTabSelectedEventIdentifier <MEGAASEventIdentifier>
@required
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@end

__attribute__((swift_name("AnalyticsEvent")))
@interface MEGAASAnalyticsEvent : MEGAASBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)getEventIdentifier __attribute__((swift_name("getEventIdentifier()")));
- (NSString *)getEventMessageMapper:(id<MEGAASEventDataMapper>)mapper __attribute__((swift_name("getEventMessage(mapper:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAASEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ButtonPressedEvent")))
@interface MEGAASButtonPressedEvent : MEGAASAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAASButtonPressedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAASButtonPressedEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DialogDisplayedEvent")))
@interface MEGAASDialogDisplayedEvent : MEGAASAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAASDialogDisplayedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAASDialogDisplayedEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeneralEvent")))
@interface MEGAASGeneralEvent : MEGAASAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAASGeneralEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAASGeneralEvent *)doCopyEventIdentifier:(id<MEGAASGeneralEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("doCopy(eventIdentifier:viewId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAASGeneralEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectedEvent")))
@interface MEGAASItemSelectedEvent : MEGAASAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAASItemSelectedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAASItemSelectedEvent *)doCopyEventIdentifier:(id<MEGAASItemSelectedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("doCopy(eventIdentifier:viewId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAASItemSelectedEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuItemEvent")))
@interface MEGAASMenuItemEvent : MEGAASAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAASMenuItemEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAASMenuItemEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationEvent")))
@interface MEGAASNavigationEvent : MEGAASAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAASNavigationEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAASNavigationEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationEvent")))
@interface MEGAASNotificationEvent : MEGAASAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAASNotificationEventIdentifier>)eventIdentifier __attribute__((swift_name("init(eventIdentifier:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAASNotificationEvent *)doCopyEventIdentifier:(id<MEGAASNotificationEventIdentifier>)eventIdentifier __attribute__((swift_name("doCopy(eventIdentifier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAASNotificationEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenViewEvent")))
@interface MEGAASScreenViewEvent : MEGAASAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAASScreenViewEventIdentifier>)eventIdentifier viewId:(NSString *)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAASScreenViewEvent *)doCopyEventIdentifier:(id<MEGAASScreenViewEventIdentifier>)eventIdentifier viewId:(NSString *)viewId __attribute__((swift_name("doCopy(eventIdentifier:viewId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAASScreenViewEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString *viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TabSelectedEvent")))
@interface MEGAASTabSelectedEvent : MEGAASAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAASTabSelectedEventIdentifier>)eventIdentifier viewId:(NSString *)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAASTabSelectedEvent *)doCopyEventIdentifier:(id<MEGAASTabSelectedEventIdentifier>)eventIdentifier viewId:(NSString *)viewId __attribute__((swift_name("doCopy(eventIdentifier:viewId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAASTabSelectedEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString *viewId __attribute__((swift_name("viewId")));
@end

__attribute__((swift_name("EventDataMapper")))
@protocol MEGAASEventDataMapper
@required
- (NSString *)mapDataEventData:(NSDictionary<NSString *, id> *)eventData __attribute__((swift_name("mapData(eventData:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonMapper")))
@interface MEGAASJsonMapper : MEGAASBase <MEGAASEventDataMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)mapDataEventData:(NSDictionary<NSString *, id> *)eventData __attribute__((swift_name("mapData(eventData:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MEGAASKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MEGAASKotlinEnum<E> : MEGAASBase <MEGAASKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MEGAASKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecodeSequenceMode")))
@interface MEGAASDecodeSequenceMode : MEGAASKotlinEnum<MEGAASDecodeSequenceMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAASDecodeSequenceMode *whitespaceSeparated __attribute__((swift_name("whitespaceSeparated")));
@property (class, readonly) MEGAASDecodeSequenceMode *arrayWrapped __attribute__((swift_name("arrayWrapped")));
@property (class, readonly) MEGAASDecodeSequenceMode *autoDetect __attribute__((swift_name("autoDetect")));
+ (MEGAASKotlinArray<MEGAASDecodeSequenceMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("SerialFormat")))
@protocol MEGAASSerialFormat
@required
@property (readonly) MEGAASSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("StringFormat")))
@protocol MEGAASStringFormat <MEGAASSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<MEGAASDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<MEGAASSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Json")))
@interface MEGAASJson : MEGAASBase <MEGAASStringFormat>
@property (class, readonly, getter=companion) MEGAASJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<MEGAASDeserializationStrategy>)deserializer element:(MEGAASJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<MEGAASDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (MEGAASJsonElement *)encodeToJsonElementSerializer:(id<MEGAASSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<MEGAASSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (MEGAASJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) MEGAASJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) MEGAASSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Json.Default")))
@interface MEGAASJsonDefault : MEGAASJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASJsonDefault *shared __attribute__((swift_name("shared")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("JsonArray")))
@interface MEGAASJsonArray : NSObject
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonArrayBuilder")))
@interface MEGAASJsonArrayBuilder : MEGAASBase
- (BOOL)addElement:(MEGAASJsonElement *)element __attribute__((swift_name("add(element:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addAllElements:(id)elements __attribute__((swift_name("addAll(elements:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonBuilder")))
@interface MEGAASJsonBuilder : MEGAASBase
@property BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property id<MEGAASJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property MEGAASSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonConfiguration")))
@interface MEGAASJsonConfiguration : MEGAASBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<MEGAASJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("SerializationStrategy")))
@protocol MEGAASSerializationStrategy
@required
- (void)serializeEncoder:(id<MEGAASEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAASSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("DeserializationStrategy")))
@protocol MEGAASDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MEGAASDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MEGAASSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("KSerializer")))
@protocol MEGAASKSerializer <MEGAASSerializationStrategy, MEGAASDeserializationStrategy>
@required
@end

__attribute__((swift_name("JsonContentPolymorphicSerializer")))
@interface MEGAASJsonContentPolymorphicSerializer<T> : MEGAASBase <MEGAASKSerializer>
- (instancetype)initWithBaseClass:(id<MEGAASKotlinKClass>)baseClass __attribute__((swift_name("init(baseClass:)"))) __attribute__((objc_designated_initializer));
- (T)deserializeDecoder:(id<MEGAASDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<MEGAASDeserializationStrategy>)selectDeserializerElement:(MEGAASJsonElement *)element __attribute__((swift_name("selectDeserializer(element:)")));
- (void)serializeEncoder:(id<MEGAASEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAASSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Decoder")))
@protocol MEGAASDecoder
@required
- (id<MEGAASCompositeDecoder>)beginStructureDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MEGAASSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MEGAASDecoder>)decodeInlineDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MEGAASKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MEGAASDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MEGAASDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MEGAASSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("CompositeDecoder")))
@protocol MEGAASCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MEGAASDecoder>)decodeInlineElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAASDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAASDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MEGAASSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("JsonDecoder")))
@protocol MEGAASJsonDecoder <MEGAASDecoder, MEGAASCompositeDecoder>
@required
- (MEGAASJsonElement *)decodeJsonElement __attribute__((swift_name("decodeJsonElement()")));
@property (readonly) MEGAASJson *json __attribute__((swift_name("json")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("JsonElement")))
@interface MEGAASJsonElement : MEGAASBase
@property (class, readonly, getter=companion) MEGAASJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElement.Companion")))
@interface MEGAASJsonElementCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Encoder")))
@protocol MEGAASEncoder
@required
- (id<MEGAASCompositeEncoder>)beginCollectionDescriptor:(id<MEGAASSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MEGAASCompositeEncoder>)beginStructureDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MEGAASSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MEGAASEncoder>)encodeInlineDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MEGAASSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MEGAASSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MEGAASSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("CompositeEncoder")))
@protocol MEGAASCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MEGAASEncoder>)encodeInlineElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAASSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAASSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MEGAASSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("JsonEncoder")))
@protocol MEGAASJsonEncoder <MEGAASEncoder, MEGAASCompositeEncoder>
@required
- (void)encodeJsonElementElement:(MEGAASJsonElement *)element __attribute__((swift_name("encodeJsonElement(element:)")));
@property (readonly) MEGAASJson *json __attribute__((swift_name("json")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("JsonNamingStrategy")))
@protocol MEGAASJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<MEGAASSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonNamingStrategyBuiltins")))
@interface MEGAASJsonNamingStrategyBuiltins : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)builtins __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASJsonNamingStrategyBuiltins *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<MEGAASJsonNamingStrategy> SnakeCase __attribute__((swift_name("SnakeCase")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonPrimitiveSerializer))
*/
__attribute__((swift_name("JsonPrimitive")))
@interface MEGAASJsonPrimitive : MEGAASJsonElement
@property (class, readonly, getter=companion) MEGAASJsonPrimitiveCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonNullSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonNull")))
@interface MEGAASJsonNull : MEGAASJsonPrimitive
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonNull __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASJsonNull *shared __attribute__((swift_name("shared")));
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MEGAASKSerializer>)serializerTypeParamsSerializers:(MEGAASKotlinArray<id<MEGAASKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("JsonObject")))
@interface MEGAASJsonObject : NSObject
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonObjectBuilder")))
@interface MEGAASJsonObjectBuilder : MEGAASBase
- (MEGAASJsonElement * _Nullable)putKey:(NSString *)key element:(MEGAASJsonElement *)element __attribute__((swift_name("put(key:element:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonPrimitive.Companion")))
@interface MEGAASJsonPrimitiveCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASJsonPrimitiveCompanion *shared __attribute__((swift_name("shared")));
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("JsonTransformingSerializer")))
@interface MEGAASJsonTransformingSerializer<T> : MEGAASBase <MEGAASKSerializer>
- (instancetype)initWithTSerializer:(id<MEGAASKSerializer>)tSerializer __attribute__((swift_name("init(tSerializer:)"))) __attribute__((objc_designated_initializer));
- (T)deserializeDecoder:(id<MEGAASDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MEGAASEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MEGAASJsonElement *)transformDeserializeElement:(MEGAASJsonElement *)element __attribute__((swift_name("transformDeserialize(element:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MEGAASJsonElement *)transformSerializeElement:(MEGAASJsonElement *)element __attribute__((swift_name("transformSerialize(element:)")));
@property (readonly) id<MEGAASSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("BinaryFormat")))
@protocol MEGAASBinaryFormat <MEGAASSerialFormat>
@required
- (id _Nullable)decodeFromByteArrayDeserializer:(id<MEGAASDeserializationStrategy>)deserializer bytes:(MEGAASKotlinByteArray *)bytes __attribute__((swift_name("decodeFromByteArray(deserializer:bytes:)")));
- (MEGAASKotlinByteArray *)encodeToByteArraySerializer:(id<MEGAASSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToByteArray(serializer:value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextualSerializer")))
@interface MEGAASContextualSerializer<T> : MEGAASBase <MEGAASKSerializer>
- (instancetype)initWithSerializableClass:(id<MEGAASKotlinKClass>)serializableClass __attribute__((swift_name("init(serializableClass:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSerializableClass:(id<MEGAASKotlinKClass>)serializableClass fallbackSerializer:(id<MEGAASKSerializer> _Nullable)fallbackSerializer typeArgumentsSerializers:(MEGAASKotlinArray<id<MEGAASKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("init(serializableClass:fallbackSerializer:typeArgumentsSerializers:)"))) __attribute__((objc_designated_initializer));
- (T)deserializeDecoder:(id<MEGAASDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MEGAASEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAASSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MEGAASKotlinThrowable : MEGAASBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MEGAASKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MEGAASKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface MEGAASKotlinException : MEGAASKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MEGAASKotlinRuntimeException : MEGAASKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface MEGAASKotlinIllegalArgumentException : MEGAASKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("SerializationException")))
@interface MEGAASSerializationException : MEGAASKotlinIllegalArgumentException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissingFieldException")))
@interface MEGAASMissingFieldException : MEGAASSerializationException
- (instancetype)initWithMissingFields:(NSArray<NSString *> *)missingFields serialName:(NSString *)serialName __attribute__((swift_name("init(missingFields:serialName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMissingField:(NSString *)missingField serialName:(NSString *)serialName __attribute__((swift_name("init(missingField:serialName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMissingFields:(NSArray<NSString *> *)missingFields message:(NSString * _Nullable)message cause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(missingFields:message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSArray<NSString *> *missingFields __attribute__((swift_name("missingFields")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("AbstractPolymorphicSerializer")))
@interface MEGAASAbstractPolymorphicSerializer<T> : MEGAASBase <MEGAASKSerializer>
- (T)deserializeDecoder:(id<MEGAASDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id<MEGAASDeserializationStrategy> _Nullable)findPolymorphicSerializerOrNullDecoder:(id<MEGAASCompositeDecoder>)decoder klassName:(NSString * _Nullable)klassName __attribute__((swift_name("findPolymorphicSerializerOrNull(decoder:klassName:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id<MEGAASSerializationStrategy> _Nullable)findPolymorphicSerializerOrNullEncoder:(id<MEGAASEncoder>)encoder value:(T)value __attribute__((swift_name("findPolymorphicSerializerOrNull(encoder:value:)")));
- (void)serializeEncoder:(id<MEGAASEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAASKotlinKClass> baseClass __attribute__((swift_name("baseClass")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicSerializer")))
@interface MEGAASPolymorphicSerializer<T> : MEGAASAbstractPolymorphicSerializer<T>
- (instancetype)initWithBaseClass:(id<MEGAASKotlinKClass>)baseClass __attribute__((swift_name("init(baseClass:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MEGAASKotlinKClass> baseClass __attribute__((swift_name("baseClass")));
@property (readonly) id<MEGAASSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SealedClassSerializer")))
@interface MEGAASSealedClassSerializer<T> : MEGAASAbstractPolymorphicSerializer<T>
- (instancetype)initWithSerialName:(NSString *)serialName baseClass:(id<MEGAASKotlinKClass>)baseClass subclasses:(MEGAASKotlinArray<id<MEGAASKotlinKClass>> *)subclasses subclassSerializers:(MEGAASKotlinArray<id<MEGAASKSerializer>> *)subclassSerializers __attribute__((swift_name("init(serialName:baseClass:subclasses:subclassSerializers:)"))) __attribute__((objc_designated_initializer));
- (id<MEGAASDeserializationStrategy> _Nullable)findPolymorphicSerializerOrNullDecoder:(id<MEGAASCompositeDecoder>)decoder klassName:(NSString * _Nullable)klassName __attribute__((swift_name("findPolymorphicSerializerOrNull(decoder:klassName:)")));
- (id<MEGAASSerializationStrategy> _Nullable)findPolymorphicSerializerOrNullEncoder:(id<MEGAASEncoder>)encoder value:(T)value __attribute__((swift_name("findPolymorphicSerializerOrNull(encoder:value:)")));
@property (readonly) id<MEGAASKotlinKClass> baseClass __attribute__((swift_name("baseClass")));
@property (readonly) id<MEGAASSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("AbstractCollectionSerializer")))
@interface MEGAASAbstractCollectionSerializer<Element, Collection, Builder> : MEGAASBase <MEGAASKSerializer>

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Builder _Nullable)builder __attribute__((swift_name("builder()")));
- (Collection _Nullable)deserializeDecoder:(id<MEGAASDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (Collection _Nullable)mergeDecoder:(id<MEGAASDecoder>)decoder previous:(Collection _Nullable)previous __attribute__((swift_name("merge(decoder:previous:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readAllDecoder:(id<MEGAASCompositeDecoder>)decoder builder:(Builder _Nullable)builder startIndex:(int32_t)startIndex size:(int32_t)size __attribute__((swift_name("readAll(decoder:builder:startIndex:size:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readElementDecoder:(id<MEGAASCompositeDecoder>)decoder index:(int32_t)index builder:(Builder _Nullable)builder checkIndex:(BOOL)checkIndex __attribute__((swift_name("readElement(decoder:index:builder:checkIndex:)")));
- (void)serializeEncoder:(id<MEGAASEncoder>)encoder value:(Collection _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)builderSize:(Builder _Nullable)receiver __attribute__((swift_name("builderSize(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)checkCapacity:(Builder _Nullable)receiver size:(int32_t)size __attribute__((swift_name("checkCapacity(_:size:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<MEGAASKotlinIterator>)collectionIterator:(Collection _Nullable)receiver __attribute__((swift_name("collectionIterator(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)collectionSize:(Collection _Nullable)receiver __attribute__((swift_name("collectionSize(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Builder _Nullable)toBuilder:(Collection _Nullable)receiver __attribute__((swift_name("toBuilder(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Collection _Nullable)toResult:(Builder _Nullable)receiver __attribute__((swift_name("toResult(_:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("GeneratedSerializer")))
@protocol MEGAASGeneratedSerializer <MEGAASKSerializer>
@required
- (MEGAASKotlinArray<id<MEGAASKSerializer>> *)childSerializers __attribute__((swift_name("childSerializers()")));
- (MEGAASKotlinArray<id<MEGAASKSerializer>> *)typeParametersSerializers __attribute__((swift_name("typeParametersSerializers()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("MapLikeSerializer")))
@interface MEGAASMapLikeSerializer<Key, Value, Collection, Builder> : MEGAASAbstractCollectionSerializer<id<MEGAASKotlinMapEntry>, Collection, MEGAASMutableDictionary<id, id> *>

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readAllDecoder:(id<MEGAASCompositeDecoder>)decoder builder:(MEGAASMutableDictionary<id, id> *)builder startIndex:(int32_t)startIndex size:(int32_t)size __attribute__((swift_name("readAll(decoder:builder:startIndex:size:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readElementDecoder:(id<MEGAASCompositeDecoder>)decoder index:(int32_t)index builder:(MEGAASMutableDictionary<id, id> *)builder checkIndex:(BOOL)checkIndex __attribute__((swift_name("readElement(decoder:index:builder:checkIndex:)")));
- (void)serializeEncoder:(id<MEGAASEncoder>)encoder value:(Collection _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)insertKeyValuePair:(MEGAASMutableDictionary<id, id> *)receiver index:(int32_t)index key:(Key _Nullable)key value:(Value _Nullable)value __attribute__((swift_name("insertKeyValuePair(_:index:key:value:)")));
@property (readonly) id<MEGAASSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@property (readonly) id<MEGAASKSerializer> keySerializer __attribute__((swift_name("keySerializer")));
@property (readonly) id<MEGAASKSerializer> valueSerializer __attribute__((swift_name("valueSerializer")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("TaggedDecoder")))
@interface MEGAASTaggedDecoder<Tag> : MEGAASBase <MEGAASDecoder, MEGAASCompositeDecoder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MEGAASCompositeDecoder>)beginStructureDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)doCopyTagsToOther:(MEGAASTaggedDecoder<Tag> *)other __attribute__((swift_name("doCopyTagsTo(other:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (BOOL)decodeBooleanElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (int8_t)decodeByteElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (unichar)decodeCharElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (double)decodeDoubleElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeEnumEnumDescriptor:(id<MEGAASSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (float)decodeFloatElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MEGAASDecoder>)decodeInlineDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (id<MEGAASDecoder>)decodeInlineElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int32_t)decodeIntElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (int64_t)decodeLongElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MEGAASKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAASDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAASDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)decodeSerializableValueDeserializer:(id<MEGAASDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableValue(deserializer:previousValue:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (int16_t)decodeShortElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (NSString *)decodeStringElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)decodeTaggedBooleanTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedBoolean(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int8_t)decodeTaggedByteTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedByte(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (unichar)decodeTaggedCharTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedChar(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (double)decodeTaggedDoubleTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedDouble(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)decodeTaggedEnumTag:(Tag _Nullable)tag enumDescriptor:(id<MEGAASSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeTaggedEnum(tag:enumDescriptor:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (float)decodeTaggedFloatTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedFloat(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<MEGAASDecoder>)decodeTaggedInlineTag:(Tag _Nullable)tag inlineDescriptor:(id<MEGAASSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeTaggedInline(tag:inlineDescriptor:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)decodeTaggedIntTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedInt(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int64_t)decodeTaggedLongTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedLong(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)decodeTaggedNotNullMarkTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedNotNullMark(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MEGAASKotlinNothing * _Nullable)decodeTaggedNullTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedNull(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int16_t)decodeTaggedShortTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedShort(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)decodeTaggedStringTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedString(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id)decodeTaggedValueTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedValue(tag:)")));
- (void)endStructureDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Tag _Nullable)popTag __attribute__((swift_name("popTag()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)pushTagName:(Tag _Nullable)name __attribute__((swift_name("pushTag(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Tag _Nullable)getTag:(id<MEGAASSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) Tag _Nullable currentTag __attribute__((swift_name("currentTag")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) Tag _Nullable currentTagOrNull __attribute__((swift_name("currentTagOrNull")));
@property (readonly) MEGAASSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("NamedValueDecoder")))
@interface MEGAASNamedValueDecoder : MEGAASTaggedDecoder<NSString *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)composeNameParentName:(NSString *)parentName childName:(NSString *)childName __attribute__((swift_name("composeName(parentName:childName:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)elementNameDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("elementName(descriptor:index:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)nestedNestedName:(NSString *)nestedName __attribute__((swift_name("nested(nestedName:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)getTag:(id<MEGAASSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("TaggedEncoder")))
@interface MEGAASTaggedEncoder<Tag> : MEGAASBase <MEGAASEncoder, MEGAASCompositeEncoder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MEGAASCompositeEncoder>)beginStructureDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeBooleanElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeByteElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeCharElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeDoubleElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeEnumEnumDescriptor:(id<MEGAASSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeFloatElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MEGAASEncoder>)encodeInlineDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (id<MEGAASEncoder>)encodeInlineElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeIntElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeLongElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAASSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAASSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeShortElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeStringElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedBooleanTag:(Tag _Nullable)tag value:(BOOL)value __attribute__((swift_name("encodeTaggedBoolean(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedByteTag:(Tag _Nullable)tag value:(int8_t)value __attribute__((swift_name("encodeTaggedByte(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedCharTag:(Tag _Nullable)tag value:(unichar)value __attribute__((swift_name("encodeTaggedChar(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedDoubleTag:(Tag _Nullable)tag value:(double)value __attribute__((swift_name("encodeTaggedDouble(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedEnumTag:(Tag _Nullable)tag enumDescriptor:(id<MEGAASSerialDescriptor>)enumDescriptor ordinal:(int32_t)ordinal __attribute__((swift_name("encodeTaggedEnum(tag:enumDescriptor:ordinal:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedFloatTag:(Tag _Nullable)tag value:(float)value __attribute__((swift_name("encodeTaggedFloat(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<MEGAASEncoder>)encodeTaggedInlineTag:(Tag _Nullable)tag inlineDescriptor:(id<MEGAASSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeTaggedInline(tag:inlineDescriptor:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedIntTag:(Tag _Nullable)tag value:(int32_t)value __attribute__((swift_name("encodeTaggedInt(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedLongTag:(Tag _Nullable)tag value:(int64_t)value __attribute__((swift_name("encodeTaggedLong(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedNonNullMarkTag:(Tag _Nullable)tag __attribute__((swift_name("encodeTaggedNonNullMark(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedNullTag:(Tag _Nullable)tag __attribute__((swift_name("encodeTaggedNull(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedShortTag:(Tag _Nullable)tag value:(int16_t)value __attribute__((swift_name("encodeTaggedShort(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedStringTag:(Tag _Nullable)tag value:(NSString *)value __attribute__((swift_name("encodeTaggedString(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedValueTag:(Tag _Nullable)tag value:(id)value __attribute__((swift_name("encodeTaggedValue(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)endEncodeDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("endEncode(descriptor:)")));
- (void)endStructureDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Tag _Nullable)popTag __attribute__((swift_name("popTag()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)pushTagName:(Tag _Nullable)name __attribute__((swift_name("pushTag(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Tag _Nullable)getTag:(id<MEGAASSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) Tag _Nullable currentTag __attribute__((swift_name("currentTag")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) Tag _Nullable currentTagOrNull __attribute__((swift_name("currentTagOrNull")));
@property (readonly) MEGAASSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("NamedValueEncoder")))
@interface MEGAASNamedValueEncoder : MEGAASTaggedEncoder<NSString *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)composeNameParentName:(NSString *)parentName childName:(NSString *)childName __attribute__((swift_name("composeName(parentName:childName:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)elementNameDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("elementName(descriptor:index:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)nestedNestedName:(NSString *)nestedName __attribute__((swift_name("nested(nestedName:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)getTag:(id<MEGAASSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicModuleBuilder")))
@interface MEGAASPolymorphicModuleBuilder<__contravariant Base> : MEGAASBase
- (void)defaultDefaultSerializerProvider:(id<MEGAASDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("default(defaultSerializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: defaultDeserializer")));
- (void)defaultDeserializerDefaultDeserializerProvider:(id<MEGAASDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("defaultDeserializer(defaultDeserializerProvider:)")));
- (void)subclassSubclass:(id<MEGAASKotlinKClass>)subclass serializer:(id<MEGAASKSerializer>)serializer __attribute__((swift_name("subclass(subclass:serializer:)")));
@end

__attribute__((swift_name("SerializersModule")))
@interface MEGAASSerializersModule : MEGAASBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MEGAASSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAASKSerializer> _Nullable)getContextualKClass:(id<MEGAASKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MEGAASKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAASSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MEGAASKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAASDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MEGAASKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("SerializersModuleCollector")))
@protocol MEGAASSerializersModuleCollector
@required
- (void)contextualKClass:(id<MEGAASKotlinKClass>)kClass provider:(id<MEGAASKSerializer> (^)(NSArray<id<MEGAASKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MEGAASKotlinKClass>)kClass serializer:(id<MEGAASKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MEGAASKotlinKClass>)baseClass actualClass:(id<MEGAASKotlinKClass>)actualClass actualSerializer:(id<MEGAASKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MEGAASKotlinKClass>)baseClass defaultDeserializerProvider:(id<MEGAASDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MEGAASKotlinKClass>)baseClass defaultDeserializerProvider:(id<MEGAASDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MEGAASKotlinKClass>)baseClass defaultSerializerProvider:(id<MEGAASSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersModuleBuilder")))
@interface MEGAASSerializersModuleBuilder : MEGAASBase <MEGAASSerializersModuleCollector>
- (void)contextualKClass:(id<MEGAASKotlinKClass>)kClass provider:(id<MEGAASKSerializer> (^)(NSArray<id<MEGAASKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MEGAASKotlinKClass>)kClass serializer:(id<MEGAASKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)includeModule:(MEGAASSerializersModule *)module __attribute__((swift_name("include(module:)")));
- (void)polymorphicBaseClass:(id<MEGAASKotlinKClass>)baseClass actualClass:(id<MEGAASKotlinKClass>)actualClass actualSerializer:(id<MEGAASKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MEGAASKotlinKClass>)baseClass defaultDeserializerProvider:(id<MEGAASDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MEGAASKotlinKClass>)baseClass defaultSerializerProvider:(id<MEGAASSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClassSerialDescriptorBuilder")))
@interface MEGAASClassSerialDescriptorBuilder : MEGAASBase
- (void)elementElementName:(NSString *)elementName descriptor:(id<MEGAASSerialDescriptor>)descriptor annotations:(NSArray<id<MEGAASKotlinAnnotation>> *)annotations isOptional:(BOOL)isOptional __attribute__((swift_name("element(elementName:descriptor:annotations:isOptional:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property NSArray<id<MEGAASKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property BOOL isNullable __attribute__((swift_name("isNullable"))) __attribute__((unavailable("isNullable inside buildSerialDescriptor is deprecated. Please use SerialDescriptor.nullable extension on a builder result.")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("SerialKind")))
@interface MEGAASSerialKind : MEGAASBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("PolymorphicKind")))
@interface MEGAASPolymorphicKind : MEGAASSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicKind.OPEN")))
@interface MEGAASPolymorphicKindOPEN : MEGAASPolymorphicKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oPEN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASPolymorphicKindOPEN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicKind.SEALED")))
@interface MEGAASPolymorphicKindSEALED : MEGAASPolymorphicKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sEALED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASPolymorphicKindSEALED *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("PrimitiveKind")))
@interface MEGAASPrimitiveKind : MEGAASSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.BOOLEAN")))
@interface MEGAASPrimitiveKindBOOLEAN : MEGAASPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bOOLEAN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASPrimitiveKindBOOLEAN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.BYTE")))
@interface MEGAASPrimitiveKindBYTE : MEGAASPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bYTE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASPrimitiveKindBYTE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.CHAR")))
@interface MEGAASPrimitiveKindCHAR : MEGAASPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cHAR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASPrimitiveKindCHAR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.DOUBLE")))
@interface MEGAASPrimitiveKindDOUBLE : MEGAASPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dOUBLE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASPrimitiveKindDOUBLE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.FLOAT")))
@interface MEGAASPrimitiveKindFLOAT : MEGAASPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fLOAT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASPrimitiveKindFLOAT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.INT")))
@interface MEGAASPrimitiveKindINT : MEGAASPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iNT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASPrimitiveKindINT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.LONG")))
@interface MEGAASPrimitiveKindLONG : MEGAASPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lONG __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASPrimitiveKindLONG *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.SHORT")))
@interface MEGAASPrimitiveKindSHORT : MEGAASPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sHORT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASPrimitiveKindSHORT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.STRING")))
@interface MEGAASPrimitiveKindSTRING : MEGAASPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTRING __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASPrimitiveKindSTRING *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("SerialDescriptor")))
@protocol MEGAASSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MEGAASKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAASSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<MEGAASKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) MEGAASSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialKind.CONTEXTUAL")))
@interface MEGAASSerialKindCONTEXTUAL : MEGAASSerialKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONTEXTUAL __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASSerialKindCONTEXTUAL *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialKind.ENUM")))
@interface MEGAASSerialKindENUM : MEGAASSerialKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eNUM __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASSerialKindENUM *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("StructureKind")))
@interface MEGAASStructureKind : MEGAASSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.CLASS")))
@interface MEGAASStructureKindCLASS : MEGAASStructureKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cLASS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASStructureKindCLASS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.LIST")))
@interface MEGAASStructureKindLIST : MEGAASStructureKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lIST __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASStructureKindLIST *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.MAP")))
@interface MEGAASStructureKindMAP : MEGAASStructureKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mAP __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASStructureKindMAP *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.OBJECT")))
@interface MEGAASStructureKindOBJECT : MEGAASStructureKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oBJECT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASStructureKindOBJECT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LongAsStringSerializer")))
@interface MEGAASLongAsStringSerializer : MEGAASBase <MEGAASKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)longAsStringSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLongAsStringSerializer *shared __attribute__((swift_name("shared")));
- (MEGAASLong *)deserializeDecoder:(id<MEGAASDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MEGAASEncoder>)encoder value:(MEGAASLong *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAASSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("AbstractDecoder")))
@interface MEGAASAbstractDecoder : MEGAASBase <MEGAASDecoder, MEGAASCompositeDecoder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MEGAASCompositeDecoder>)beginStructureDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (BOOL)decodeBooleanElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (int8_t)decodeByteElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (unichar)decodeCharElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (double)decodeDoubleElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeEnumEnumDescriptor:(id<MEGAASSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (float)decodeFloatElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MEGAASDecoder>)decodeInlineDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (id<MEGAASDecoder>)decodeInlineElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int32_t)decodeIntElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (int64_t)decodeLongElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MEGAASKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAASDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAASDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MEGAASDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableValue(deserializer:previousValue:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (int16_t)decodeShortElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (NSString *)decodeStringElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (id)decodeValue __attribute__((swift_name("decodeValue()")));
- (void)endStructureDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("AbstractEncoder")))
@interface MEGAASAbstractEncoder : MEGAASBase <MEGAASEncoder, MEGAASCompositeEncoder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MEGAASCompositeEncoder>)beginStructureDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeBooleanElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeByteElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeCharElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeDoubleElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (BOOL)encodeElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeElement(descriptor:index:)")));
- (void)encodeEnumEnumDescriptor:(id<MEGAASSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeFloatElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MEGAASEncoder>)encodeInlineDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (id<MEGAASEncoder>)encodeInlineElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeIntElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeLongElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAASSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAASSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeShortElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeStringElementDescriptor:(id<MEGAASSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)encodeValueValue:(id)value __attribute__((swift_name("encodeValue(value:)")));
- (void)endStructureDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("ChunkedDecoder")))
@protocol MEGAASChunkedDecoder
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)decodeStringChunkedConsumeChunk:(void (^)(NSString *))consumeChunk __attribute__((swift_name("decodeStringChunked(consumeChunk:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositeDecoderCompanion")))
@interface MEGAASCompositeDecoderCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASCompositeDecoderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DECODE_DONE __attribute__((swift_name("DECODE_DONE")));
@property (readonly) int32_t UNKNOWN_NAME __attribute__((swift_name("UNKNOWN_NAME")));
@end

__attribute__((swift_name("AlbumsTab")))
@protocol MEGAASAlbumsTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumsTabEvent")))
@interface MEGAASAlbumsTabEvent : MEGAASBase <MEGAASTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumsTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASAlbumsTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatScreen")))
@protocol MEGAASChatScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatScreenEvent")))
@interface MEGAASChatScreenEvent : MEGAASBase <MEGAASScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASChatScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatsTab")))
@protocol MEGAASChatsTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatsTabEvent")))
@interface MEGAASChatsTabEvent : MEGAASBase <MEGAASTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatsTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASChatsTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CloudDriveScreen")))
@protocol MEGAASCloudDriveScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudDriveScreenEvent")))
@interface MEGAASCloudDriveScreenEvent : MEGAASBase <MEGAASScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cloudDriveScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASCloudDriveScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CreateNewAlbumDialog")))
@protocol MEGAASCreateNewAlbumDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateNewAlbumDialogEvent")))
@interface MEGAASCreateNewAlbumDialogEvent : MEGAASBase <MEGAASDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createNewAlbumDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASCreateNewAlbumDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("DeleteAlbumCancelButtonPressed")))
@protocol MEGAASDeleteAlbumCancelButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAlbumCancelButtonPressedEvent")))
@interface MEGAASDeleteAlbumCancelButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deleteAlbumCancelButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASDeleteAlbumCancelButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("DeleteAlbumConfirmButtonPressed")))
@protocol MEGAASDeleteAlbumConfirmButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAlbumConfirmButtonPressedEvent")))
@interface MEGAASDeleteAlbumConfirmButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deleteAlbumConfirmButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASDeleteAlbumConfirmButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("DeleteAlbumsConfirmationDialog")))
@protocol MEGAASDeleteAlbumsConfirmationDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAlbumsConfirmationDialogEvent")))
@interface MEGAASDeleteAlbumsConfirmationDialogEvent : MEGAASBase <MEGAASDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deleteAlbumsConfirmationDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASDeleteAlbumsConfirmationDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ExampleButtonPress")))
@protocol MEGAASExampleButtonPress
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExampleComplexGeneralEvent")))
@interface MEGAASExampleComplexGeneralEvent : MEGAASBase
- (instancetype)initWithFoo:(NSString * _Nullable)foo bar:(int32_t)bar fooBar:(int32_t)fooBar __attribute__((swift_name("init(foo:bar:fooBar:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t bar __attribute__((swift_name("bar")));
@property (readonly) NSString * _Nullable foo __attribute__((swift_name("foo")));
@property (readonly) int32_t fooBar __attribute__((swift_name("fooBar")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExampleComplexItemSelected")))
@interface MEGAASExampleComplexItemSelected : MEGAASBase
- (instancetype)initWithFoo:(NSString * _Nullable)foo bar:(int32_t)bar fooBar:(int32_t)fooBar __attribute__((swift_name("init(foo:bar:fooBar:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t bar __attribute__((swift_name("bar")));
@property (readonly) NSString * _Nullable foo __attribute__((swift_name("foo")));
@property (readonly) int32_t fooBar __attribute__((swift_name("fooBar")));
@end

__attribute__((swift_name("ExampleDialogDisplayed")))
@protocol MEGAASExampleDialogDisplayed
@required
@end

__attribute__((swift_name("ExampleMenuItemSelected")))
@protocol MEGAASExampleMenuItemSelected
@required
@end

__attribute__((swift_name("ExampleNavigation")))
@protocol MEGAASExampleNavigation
@required
@end

__attribute__((swift_name("ExampleNotification")))
@protocol MEGAASExampleNotification
@required
@end

__attribute__((swift_name("ExampleScreen")))
@protocol MEGAASExampleScreen
@required
@end

__attribute__((swift_name("ExampleSimpleGeneralEvent")))
@protocol MEGAASExampleSimpleGeneralEvent
@required
@end

__attribute__((swift_name("ExampleSimpleItemSelected")))
@protocol MEGAASExampleSimpleItemSelected
@required
@end

__attribute__((swift_name("ExampleTabSelected")))
@protocol MEGAASExampleTabSelected
@required
@end

__attribute__((swift_name("ExcludedClass")))
@protocol MEGAASExcludedClass
@required
@end

__attribute__((swift_name("HomeScreen")))
@protocol MEGAASHomeScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeScreenEvent")))
@interface MEGAASHomeScreenEvent : MEGAASBase <MEGAASScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASHomeScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("IncomingSharesTab")))
@protocol MEGAASIncomingSharesTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IncomingSharesTabEvent")))
@interface MEGAASIncomingSharesTabEvent : MEGAASBase <MEGAASTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)incomingSharesTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASIncomingSharesTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkConfirmPasswordFileButtonPressed")))
@protocol MEGAASLinkConfirmPasswordFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkConfirmPasswordFileButtonPressedEvent")))
@interface MEGAASLinkConfirmPasswordFileButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkConfirmPasswordFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkConfirmPasswordFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkConfirmPasswordFolderButtonPressed")))
@protocol MEGAASLinkConfirmPasswordFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkConfirmPasswordFolderButtonPressedEvent")))
@interface MEGAASLinkConfirmPasswordFolderButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkConfirmPasswordFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkConfirmPasswordFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkGetLinkForNodesMenuItem")))
@protocol MEGAASLinkGetLinkForNodesMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkGetLinkForNodesMenuItemEvent")))
@interface MEGAASLinkGetLinkForNodesMenuItemEvent : MEGAASBase <MEGAASMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkGetLinkForNodesMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkGetLinkForNodesMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkGetLinkForNodesMenuToolbar")))
@protocol MEGAASLinkGetLinkForNodesMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkGetLinkForNodesMenuToolbarEvent")))
@interface MEGAASLinkGetLinkForNodesMenuToolbarEvent : MEGAASBase <MEGAASMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkGetLinkForNodesMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkGetLinkForNodesMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkManageLinkTapFileMenuItem")))
@protocol MEGAASLinkManageLinkTapFileMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkManageLinkTapFileMenuItemEvent")))
@interface MEGAASLinkManageLinkTapFileMenuItemEvent : MEGAASBase <MEGAASMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkManageLinkTapFileMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkManageLinkTapFileMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkManageLinkTapFileMenuToolbar")))
@protocol MEGAASLinkManageLinkTapFileMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkManageLinkTapFileMenuToolbarEvent")))
@interface MEGAASLinkManageLinkTapFileMenuToolbarEvent : MEGAASBase <MEGAASMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkManageLinkTapFileMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkManageLinkTapFileMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkManageLinkTapFolderMenuItem")))
@protocol MEGAASLinkManageLinkTapFolderMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkManageLinkTapFolderMenuItemEvent")))
@interface MEGAASLinkManageLinkTapFolderMenuItemEvent : MEGAASBase <MEGAASMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkManageLinkTapFolderMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkManageLinkTapFolderMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkManageLinkTapFolderMenuToolbar")))
@protocol MEGAASLinkManageLinkTapFolderMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkManageLinkTapFolderMenuToolbarEvent")))
@interface MEGAASLinkManageLinkTapFolderMenuToolbarEvent : MEGAASBase <MEGAASMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkManageLinkTapFolderMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkManageLinkTapFolderMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFileButtonPressed")))
@protocol MEGAASLinkProFeatureSeeNotNowPlanFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFileButtonPressedEvent")))
@interface MEGAASLinkProFeatureSeeNotNowPlanFileButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeeNotNowPlanFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkProFeatureSeeNotNowPlanFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFileDialog")))
@protocol MEGAASLinkProFeatureSeeNotNowPlanFileDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFileDialogEvent")))
@interface MEGAASLinkProFeatureSeeNotNowPlanFileDialogEvent : MEGAASBase <MEGAASDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeeNotNowPlanFileDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkProFeatureSeeNotNowPlanFileDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFolderButtonPressed")))
@protocol MEGAASLinkProFeatureSeeNotNowPlanFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFolderButtonPressedEvent")))
@interface MEGAASLinkProFeatureSeeNotNowPlanFolderButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeeNotNowPlanFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkProFeatureSeeNotNowPlanFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFolderDialog")))
@protocol MEGAASLinkProFeatureSeeNotNowPlanFolderDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFolderDialogEvent")))
@interface MEGAASLinkProFeatureSeeNotNowPlanFolderDialogEvent : MEGAASBase <MEGAASDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeeNotNowPlanFolderDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkProFeatureSeeNotNowPlanFolderDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeePlanFileButtonPressed")))
@protocol MEGAASLinkProFeatureSeePlanFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeePlanFileButtonPressedEvent")))
@interface MEGAASLinkProFeatureSeePlanFileButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeePlanFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkProFeatureSeePlanFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeePlanFileDialog")))
@protocol MEGAASLinkProFeatureSeePlanFileDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeePlanFileDialogEvent")))
@interface MEGAASLinkProFeatureSeePlanFileDialogEvent : MEGAASBase <MEGAASDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeePlanFileDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkProFeatureSeePlanFileDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeePlanFolderButtonPressed")))
@protocol MEGAASLinkProFeatureSeePlanFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeePlanFolderButtonPressedEvent")))
@interface MEGAASLinkProFeatureSeePlanFolderButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeePlanFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkProFeatureSeePlanFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeePlanFolderDialog")))
@protocol MEGAASLinkProFeatureSeePlanFolderDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeePlanFolderDialogEvent")))
@interface MEGAASLinkProFeatureSeePlanFolderDialogEvent : MEGAASBase <MEGAASDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeePlanFolderDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkProFeatureSeePlanFolderDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkRemovePasswordFileButtonPressed")))
@protocol MEGAASLinkRemovePasswordFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkRemovePasswordFileButtonPressedEvent")))
@interface MEGAASLinkRemovePasswordFileButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkRemovePasswordFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkRemovePasswordFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkRemovePasswordFolderButtonPressed")))
@protocol MEGAASLinkRemovePasswordFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkRemovePasswordFolderButtonPressedEvent")))
@interface MEGAASLinkRemovePasswordFolderButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkRemovePasswordFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkRemovePasswordFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkResetPasswordFileButtonPressed")))
@protocol MEGAASLinkResetPasswordFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkResetPasswordFileButtonPressedEvent")))
@interface MEGAASLinkResetPasswordFileButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkResetPasswordFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkResetPasswordFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkResetPasswordFolderButtonPressed")))
@protocol MEGAASLinkResetPasswordFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkResetPasswordFolderButtonPressedEvent")))
@interface MEGAASLinkResetPasswordFolderButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkResetPasswordFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkResetPasswordFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSendDecryptionKeyFileButtonPressed")))
@protocol MEGAASLinkSendDecryptionKeyFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSendDecryptionKeyFileButtonPressedEvent")))
@interface MEGAASLinkSendDecryptionKeyFileButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSendDecryptionKeyFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkSendDecryptionKeyFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSendDecryptionKeyFolderButtonPressed")))
@protocol MEGAASLinkSendDecryptionKeyFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSendDecryptionKeyFolderButtonPressedEvent")))
@interface MEGAASLinkSendDecryptionKeyFolderButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSendDecryptionKeyFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkSendDecryptionKeyFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSetExpiryDateFileButtonPressed")))
@protocol MEGAASLinkSetExpiryDateFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSetExpiryDateFileButtonPressedEvent")))
@interface MEGAASLinkSetExpiryDateFileButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSetExpiryDateFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkSetExpiryDateFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSetExpiryDateFolderButtonPressed")))
@protocol MEGAASLinkSetExpiryDateFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSetExpiryDateFolderButtonPressedEvent")))
@interface MEGAASLinkSetExpiryDateFolderButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSetExpiryDateFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkSetExpiryDateFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSetPasswordFileButtonPressed")))
@protocol MEGAASLinkSetPasswordFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSetPasswordFileButtonPressedEvent")))
@interface MEGAASLinkSetPasswordFileButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSetPasswordFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkSetPasswordFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSetPasswordFolderButtonPressed")))
@protocol MEGAASLinkSetPasswordFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSetPasswordFolderButtonPressedEvent")))
@interface MEGAASLinkSetPasswordFolderButtonPressedEvent : MEGAASBase <MEGAASButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSetPasswordFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkSetPasswordFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkForNodesMenuItem")))
@protocol MEGAASLinkShareLinkForNodesMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkForNodesMenuItemEvent")))
@interface MEGAASLinkShareLinkForNodesMenuItemEvent : MEGAASBase <MEGAASMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkForNodesMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkShareLinkForNodesMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkForNodesMenuToolbar")))
@protocol MEGAASLinkShareLinkForNodesMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkForNodesMenuToolbarEvent")))
@interface MEGAASLinkShareLinkForNodesMenuToolbarEvent : MEGAASBase <MEGAASMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkForNodesMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkShareLinkForNodesMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkTapFileMenuItem")))
@protocol MEGAASLinkShareLinkTapFileMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkTapFileMenuItemEvent")))
@interface MEGAASLinkShareLinkTapFileMenuItemEvent : MEGAASBase <MEGAASMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkTapFileMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkShareLinkTapFileMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkTapFileMenuToolbar")))
@protocol MEGAASLinkShareLinkTapFileMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkTapFileMenuToolbarEvent")))
@interface MEGAASLinkShareLinkTapFileMenuToolbarEvent : MEGAASBase <MEGAASMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkTapFileMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkShareLinkTapFileMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkTapFolderMenuItem")))
@protocol MEGAASLinkShareLinkTapFolderMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkTapFolderMenuItemEvent")))
@interface MEGAASLinkShareLinkTapFolderMenuItemEvent : MEGAASBase <MEGAASMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkTapFolderMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkShareLinkTapFolderMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkTapFolderMenuToolbar")))
@protocol MEGAASLinkShareLinkTapFolderMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkTapFolderMenuToolbarEvent")))
@interface MEGAASLinkShareLinkTapFolderMenuToolbarEvent : MEGAASBase <MEGAASMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkTapFolderMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkShareLinkTapFolderMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSharesTab")))
@protocol MEGAASLinkSharesTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSharesTabEvent")))
@interface MEGAASLinkSharesTabEvent : MEGAASBase <MEGAASTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSharesTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASLinkSharesTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("MeetingsTab")))
@protocol MEGAASMeetingsTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingsTabEvent")))
@interface MEGAASMeetingsTabEvent : MEGAASBase <MEGAASTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)meetingsTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASMeetingsTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OfflineTab")))
@protocol MEGAASOfflineTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OfflineTabEvent")))
@interface MEGAASOfflineTabEvent : MEGAASBase <MEGAASTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)offlineTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASOfflineTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OutgoingSharesTab")))
@protocol MEGAASOutgoingSharesTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutgoingSharesTabEvent")))
@interface MEGAASOutgoingSharesTabEvent : MEGAASBase <MEGAASTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)outgoingSharesTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASOutgoingSharesTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("PhotoScreen")))
@protocol MEGAASPhotoScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoScreenEvent")))
@interface MEGAASPhotoScreenEvent : MEGAASBase <MEGAASScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)photoScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASPhotoScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("RecentsTab")))
@protocol MEGAASRecentsTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecentsTabEvent")))
@interface MEGAASRecentsTabEvent : MEGAASBase <MEGAASTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recentsTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASRecentsTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("RemoveLinksConfirmationDialog")))
@protocol MEGAASRemoveLinksConfirmationDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveLinksConfirmationDialogEvent")))
@interface MEGAASRemoveLinksConfirmationDialogEvent : MEGAASBase <MEGAASDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)removeLinksConfirmationDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASRemoveLinksConfirmationDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SharedItemsScreen")))
@protocol MEGAASSharedItemsScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedItemsScreenEvent")))
@interface MEGAASSharedItemsScreenEvent : MEGAASBase <MEGAASScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sharedItemsScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASSharedItemsScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SlideShowScreen")))
@protocol MEGAASSlideShowScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideShowScreenEvent")))
@interface MEGAASSlideShowScreenEvent : MEGAASBase <MEGAASScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)slideShowScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASSlideShowScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("TimelineTab")))
@protocol MEGAASTimelineTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimelineTabEvent")))
@interface MEGAASTimelineTabEvent : MEGAASBase <MEGAASTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)timelineTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASTimelineTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("EventSender")))
@protocol MEGAASEventSender
@required
- (void)sendEventEventId:(int32_t)eventId message:(NSString *)message viewId:(NSString * _Nullable)viewId __attribute__((swift_name("sendEvent(eventId:message:viewId:)")));
@end

__attribute__((swift_name("ViewIdProvider")))
@protocol MEGAASViewIdProvider
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getViewIdentifierWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getViewIdentifier(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tracker")))
@interface MEGAASTracker : MEGAASBase
- (instancetype)initWithViewIdProvider:(id<MEGAASViewIdProvider>)viewIdProvider eventSender:(id<MEGAASEventSender>)eventSender __attribute__((swift_name("init(viewIdProvider:eventSender:)"))) __attribute__((objc_designated_initializer));
- (void)trackEventEventIdentifier:(id<MEGAASEventIdentifier>)eventIdentifier __attribute__((swift_name("trackEvent(eventIdentifier:)")));
@end

@interface MEGAASJsonPrimitive (Extensions)
@property (readonly) BOOL boolean __attribute__((swift_name("boolean")));
@property (readonly) MEGAASBoolean * _Nullable booleanOrNull __attribute__((swift_name("booleanOrNull")));
@property (readonly) NSString * _Nullable contentOrNull __attribute__((swift_name("contentOrNull")));
@property (readonly, getter=double) double double_ __attribute__((swift_name("double_")));
@property (readonly) MEGAASDouble * _Nullable doubleOrNull __attribute__((swift_name("doubleOrNull")));
@property (readonly, getter=float) float float_ __attribute__((swift_name("float_")));
@property (readonly) MEGAASFloat * _Nullable floatOrNull __attribute__((swift_name("floatOrNull")));
@property (readonly, getter=int) int32_t int_ __attribute__((swift_name("int_")));
@property (readonly) MEGAASInt * _Nullable intOrNull __attribute__((swift_name("intOrNull")));
@property (readonly, getter=long) int64_t long_ __attribute__((swift_name("long_")));
@property (readonly) MEGAASLong * _Nullable longOrNull __attribute__((swift_name("longOrNull")));
@end

@interface MEGAASJsonElement (Extensions)
@property (readonly) NSArray<MEGAASJsonElement *> *jsonArray __attribute__((swift_name("jsonArray")));
@property (readonly) MEGAASJsonNull *jsonNull __attribute__((swift_name("jsonNull")));
@property (readonly) NSDictionary<NSString *, MEGAASJsonElement *> *jsonObject __attribute__((swift_name("jsonObject")));
@property (readonly) MEGAASJsonPrimitive *jsonPrimitive __attribute__((swift_name("jsonPrimitive")));
@end

@interface MEGAASJsonArrayBuilder (Extensions)
- (BOOL)addValue:(MEGAASBoolean * _Nullable)value __attribute__((swift_name("add(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addValue_:(MEGAASKotlinNothing * _Nullable)value __attribute__((swift_name("add(value_:)")));
- (BOOL)addValue__:(id _Nullable)value __attribute__((swift_name("add(value__:)")));
- (BOOL)addValue___:(NSString * _Nullable)value __attribute__((swift_name("add(value___:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmName(name="addAllBooleans")
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addAllValues:(id)values __attribute__((swift_name("addAll(values:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmName(name="addAllNumbers")
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addAllValues_:(id)values __attribute__((swift_name("addAll(values_:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmName(name="addAllStrings")
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addAllValues__:(id)values __attribute__((swift_name("addAll(values__:)")));
- (BOOL)addJsonArrayBuilderAction:(void (^)(MEGAASJsonArrayBuilder *))builderAction __attribute__((swift_name("addJsonArray(builderAction:)")));
- (BOOL)addJsonObjectBuilderAction:(void (^)(MEGAASJsonObjectBuilder *))builderAction __attribute__((swift_name("addJsonObject(builderAction:)")));
@end

@interface MEGAASJson (Extensions)
- (id _Nullable)decodeFromJsonElementJson:(MEGAASJsonElement *)json __attribute__((swift_name("decodeFromJsonElement(json:)")));
- (MEGAASJsonElement *)encodeToJsonElementValue:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (MEGAASJsonElement *)decodeStringToJsonTreeDeserializer:(id<MEGAASDeserializationStrategy>)deserializer source:(NSString *)source __attribute__((swift_name("decodeStringToJsonTree(deserializer:source:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id _Nullable)readJsonElement:(MEGAASJsonElement *)element deserializer:(id<MEGAASDeserializationStrategy>)deserializer __attribute__((swift_name("readJson(element:deserializer:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (MEGAASJsonElement *)writeJsonValue:(id _Nullable)value serializer:(id<MEGAASSerializationStrategy>)serializer __attribute__((swift_name("writeJson(value:serializer:)")));
@end

@interface MEGAASJsonObjectBuilder (Extensions)
- (MEGAASJsonElement * _Nullable)putKey:(NSString *)key value:(MEGAASBoolean * _Nullable)value __attribute__((swift_name("put(key:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MEGAASJsonElement * _Nullable)putKey:(NSString *)key value_:(MEGAASKotlinNothing * _Nullable)value __attribute__((swift_name("put(key:value_:)")));
- (MEGAASJsonElement * _Nullable)putKey:(NSString *)key value__:(id _Nullable)value __attribute__((swift_name("put(key:value__:)")));
- (MEGAASJsonElement * _Nullable)putKey:(NSString *)key value___:(NSString * _Nullable)value __attribute__((swift_name("put(key:value___:)")));
- (MEGAASJsonElement * _Nullable)putJsonArrayKey:(NSString *)key builderAction:(void (^)(MEGAASJsonArrayBuilder *))builderAction __attribute__((swift_name("putJsonArray(key:builderAction:)")));
- (MEGAASJsonElement * _Nullable)putJsonObjectKey:(NSString *)key builderAction:(void (^)(MEGAASJsonObjectBuilder *))builderAction __attribute__((swift_name("putJsonObject(key:builderAction:)")));
@end

@interface MEGAASAbstractPolymorphicSerializer (Extensions)

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id<MEGAASDeserializationStrategy>)findPolymorphicSerializerDecoder:(id<MEGAASCompositeDecoder>)decoder klassName:(NSString * _Nullable)klassName __attribute__((swift_name("findPolymorphicSerializer(decoder:klassName:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id<MEGAASSerializationStrategy>)findPolymorphicSerializerEncoder:(id<MEGAASEncoder>)encoder value:(id)value __attribute__((swift_name("findPolymorphicSerializer(encoder:value:)")));
@end

@interface MEGAASSerializersModule (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAASKSerializer>)serializerKClass:(id<MEGAASKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MEGAASKSerializer>> *)typeArgumentsSerializers isNullable:(BOOL)isNullable __attribute__((swift_name("serializer(kClass:typeArgumentsSerializers:isNullable:)")));
- (id<MEGAASKSerializer>)serializerType:(id<MEGAASKotlinKType>)type __attribute__((swift_name("serializer(type:)")));
- (id<MEGAASKSerializer> _Nullable)serializerOrNullType:(id<MEGAASKotlinKType>)type __attribute__((swift_name("serializerOrNull(type:)")));
- (MEGAASSerializersModule *)overwriteWithOther:(MEGAASSerializersModule *)other __attribute__((swift_name("overwriteWith(other:)")));
- (MEGAASSerializersModule *)plusOther:(MEGAASSerializersModule *)other __attribute__((swift_name("plus(other:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAASSerialDescriptor> _Nullable)getContextualDescriptorDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("getContextualDescriptor(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MEGAASSerialDescriptor>> *)getPolymorphicDescriptorsDescriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("getPolymorphicDescriptors(descriptor:)")));
@end

@interface MEGAASSerializersModuleBuilder (Extensions)
- (void)contextualSerializer:(id<MEGAASKSerializer>)serializer __attribute__((swift_name("contextual(serializer:)")));
- (void)polymorphicBaseClass:(id<MEGAASKotlinKClass>)baseClass baseSerializer:(id<MEGAASKSerializer> _Nullable)baseSerializer builderAction:(void (^)(MEGAASPolymorphicModuleBuilder<id> *))builderAction __attribute__((swift_name("polymorphic(baseClass:baseSerializer:builderAction:)")));
@end

@interface MEGAASPolymorphicModuleBuilder (Extensions)
- (void)subclassClazz:(id<MEGAASKotlinKClass>)clazz __attribute__((swift_name("subclass(clazz:)")));
- (void)subclassSerializer:(id<MEGAASKSerializer>)serializer __attribute__((swift_name("subclass(serializer:)")));
@end

@interface MEGAASClassSerialDescriptorBuilder (Extensions)
- (void)elementElementName:(NSString *)elementName annotations:(NSArray<id<MEGAASKotlinAnnotation>> *)annotations isOptional:(BOOL)isOptional __attribute__((swift_name("element(elementName:annotations:isOptional:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinBoolean.Companion")))
@interface MEGAASKotlinBooleanCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinBooleanCompanion *shared __attribute__((swift_name("shared")));
@end

@interface MEGAASKotlinBooleanCompanion (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByte.Companion")))
@interface MEGAASKotlinByteCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinByteCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int8_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) int8_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAASKotlinByteCompanion (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinChar.Companion")))
@interface MEGAASKotlinCharCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinCharCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_CODE_POINT __attribute__((swift_name("MAX_CODE_POINT")));
@property (readonly) unichar MAX_HIGH_SURROGATE __attribute__((swift_name("MAX_HIGH_SURROGATE")));
@property (readonly) unichar MAX_LOW_SURROGATE __attribute__((swift_name("MAX_LOW_SURROGATE")));
@property (readonly) int32_t MAX_RADIX __attribute__((swift_name("MAX_RADIX")));
@property (readonly) unichar MAX_SURROGATE __attribute__((swift_name("MAX_SURROGATE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) unichar MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) int32_t MIN_CODE_POINT __attribute__((swift_name("MIN_CODE_POINT")));
@property (readonly) unichar MIN_HIGH_SURROGATE __attribute__((swift_name("MIN_HIGH_SURROGATE")));
@property (readonly) unichar MIN_LOW_SURROGATE __attribute__((swift_name("MIN_LOW_SURROGATE")));
@property (readonly) int32_t MIN_RADIX __attribute__((swift_name("MIN_RADIX")));
@property (readonly) int32_t MIN_SUPPLEMENTARY_CODE_POINT __attribute__((swift_name("MIN_SUPPLEMENTARY_CODE_POINT")));
@property (readonly) unichar MIN_SURROGATE __attribute__((swift_name("MIN_SURROGATE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) unichar MIN_VALUE __attribute__((swift_name("MIN_VALUE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAASKotlinCharCompanion (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDouble.Companion")))
@interface MEGAASKotlinDoubleCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinDoubleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) double MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) double MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) double NEGATIVE_INFINITY __attribute__((swift_name("NEGATIVE_INFINITY")));
@property (readonly) double NaN __attribute__((swift_name("NaN")));
@property (readonly) double POSITIVE_INFINITY __attribute__((swift_name("POSITIVE_INFINITY")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAASKotlinDoubleCompanion (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloat.Companion")))
@interface MEGAASKotlinFloatCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinFloatCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) float MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) float MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) float NEGATIVE_INFINITY __attribute__((swift_name("NEGATIVE_INFINITY")));
@property (readonly) float NaN __attribute__((swift_name("NaN")));
@property (readonly) float POSITIVE_INFINITY __attribute__((swift_name("POSITIVE_INFINITY")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAASKotlinFloatCompanion (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinInt.Companion")))
@interface MEGAASKotlinIntCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinIntCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) int32_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAASKotlinIntCompanion (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLong.Companion")))
@interface MEGAASKotlinLongCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinLongCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int64_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) int64_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAASKotlinLongCompanion (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinShort.Companion")))
@interface MEGAASKotlinShortCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinShortCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int16_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) int16_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAASKotlinShortCompanion (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinString.Companion")))
@interface MEGAASKotlinStringCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinStringCompanion *shared __attribute__((swift_name("shared")));
@end

@interface MEGAASKotlinStringCompanion (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUByte.Companion")))
@interface MEGAASKotlinUByteCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinUByteCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) uint8_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) uint8_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAASKotlinUByteCompanion (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUInt.Companion")))
@interface MEGAASKotlinUIntCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinUIntCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) uint32_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) uint32_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAASKotlinUIntCompanion (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinULong.Companion")))
@interface MEGAASKotlinULongCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinULongCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) uint64_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) uint64_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAASKotlinULongCompanion (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUShort.Companion")))
@interface MEGAASKotlinUShortCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinUShortCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) uint16_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) uint16_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAASKotlinUShortCompanion (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MEGAASKotlinUnit : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

@interface MEGAASKotlinUnit (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDuration.Companion")))
@interface MEGAASKotlinDurationCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinDurationCompanion *shared __attribute__((swift_name("shared")));
- (int64_t)days:(double)receiver __attribute__((swift_name("days(_:)")));
- (int64_t)days_:(int32_t)receiver __attribute__((swift_name("days(__:)")));
- (int64_t)days__:(int64_t)receiver __attribute__((swift_name("days(___:)")));
- (int64_t)hours:(double)receiver __attribute__((swift_name("hours(_:)")));
- (int64_t)hours_:(int32_t)receiver __attribute__((swift_name("hours(__:)")));
- (int64_t)hours__:(int64_t)receiver __attribute__((swift_name("hours(___:)")));
- (int64_t)microseconds:(double)receiver __attribute__((swift_name("microseconds(_:)")));
- (int64_t)microseconds_:(int32_t)receiver __attribute__((swift_name("microseconds(__:)")));
- (int64_t)microseconds__:(int64_t)receiver __attribute__((swift_name("microseconds(___:)")));
- (int64_t)milliseconds:(double)receiver __attribute__((swift_name("milliseconds(_:)")));
- (int64_t)milliseconds_:(int32_t)receiver __attribute__((swift_name("milliseconds(__:)")));
- (int64_t)milliseconds__:(int64_t)receiver __attribute__((swift_name("milliseconds(___:)")));
- (int64_t)minutes:(double)receiver __attribute__((swift_name("minutes(_:)")));
- (int64_t)minutes_:(int32_t)receiver __attribute__((swift_name("minutes(__:)")));
- (int64_t)minutes__:(int64_t)receiver __attribute__((swift_name("minutes(___:)")));
- (int64_t)nanoseconds:(double)receiver __attribute__((swift_name("nanoseconds(_:)")));
- (int64_t)nanoseconds_:(int32_t)receiver __attribute__((swift_name("nanoseconds(__:)")));
- (int64_t)nanoseconds__:(int64_t)receiver __attribute__((swift_name("nanoseconds(___:)")));
- (int64_t)seconds:(double)receiver __attribute__((swift_name("seconds(_:)")));
- (int64_t)seconds_:(int32_t)receiver __attribute__((swift_name("seconds(__:)")));
- (int64_t)seconds__:(int64_t)receiver __attribute__((swift_name("seconds(___:)")));

/**
 * @note annotations
 *   kotlin.time.ExperimentalTime
*/
- (double)convertValue:(double)value sourceUnit:(MEGAASKotlinDurationUnit *)sourceUnit targetUnit:(MEGAASKotlinDurationUnit *)targetUnit __attribute__((swift_name("convert(value:sourceUnit:targetUnit:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)daysValue:(double)value __attribute__((swift_name("days(value:)"))) __attribute__((unavailable("Use 'Double.days' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)daysValue_:(int32_t)value __attribute__((swift_name("days(value_:)"))) __attribute__((unavailable("Use 'Int.days' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)daysValue__:(int64_t)value __attribute__((swift_name("days(value__:)"))) __attribute__((unavailable("Use 'Long.days' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)hoursValue:(double)value __attribute__((swift_name("hours(value:)"))) __attribute__((unavailable("Use 'Double.hours' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)hoursValue_:(int32_t)value __attribute__((swift_name("hours(value_:)"))) __attribute__((unavailable("Use 'Int.hours' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)hoursValue__:(int64_t)value __attribute__((swift_name("hours(value__:)"))) __attribute__((unavailable("Use 'Long.hours' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)microsecondsValue:(double)value __attribute__((swift_name("microseconds(value:)"))) __attribute__((unavailable("Use 'Double.microseconds' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)microsecondsValue_:(int32_t)value __attribute__((swift_name("microseconds(value_:)"))) __attribute__((unavailable("Use 'Int.microseconds' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)microsecondsValue__:(int64_t)value __attribute__((swift_name("microseconds(value__:)"))) __attribute__((unavailable("Use 'Long.microseconds' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)millisecondsValue:(double)value __attribute__((swift_name("milliseconds(value:)"))) __attribute__((unavailable("Use 'Double.milliseconds' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)millisecondsValue_:(int32_t)value __attribute__((swift_name("milliseconds(value_:)"))) __attribute__((unavailable("Use 'Int.milliseconds' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)millisecondsValue__:(int64_t)value __attribute__((swift_name("milliseconds(value__:)"))) __attribute__((unavailable("Use 'Long.milliseconds' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)minutesValue:(double)value __attribute__((swift_name("minutes(value:)"))) __attribute__((unavailable("Use 'Double.minutes' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)minutesValue_:(int32_t)value __attribute__((swift_name("minutes(value_:)"))) __attribute__((unavailable("Use 'Int.minutes' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)minutesValue__:(int64_t)value __attribute__((swift_name("minutes(value__:)"))) __attribute__((unavailable("Use 'Long.minutes' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)nanosecondsValue:(double)value __attribute__((swift_name("nanoseconds(value:)"))) __attribute__((unavailable("Use 'Double.nanoseconds' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)nanosecondsValue_:(int32_t)value __attribute__((swift_name("nanoseconds(value_:)"))) __attribute__((unavailable("Use 'Int.nanoseconds' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)nanosecondsValue__:(int64_t)value __attribute__((swift_name("nanoseconds(value__:)"))) __attribute__((unavailable("Use 'Long.nanoseconds' extension property from Duration.Companion instead.")));
- (int64_t)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
- (int64_t)parseIsoStringValue:(NSString *)value __attribute__((swift_name("parseIsoString(value:)")));
- (id _Nullable)parseIsoStringOrNullValue:(NSString *)value __attribute__((swift_name("parseIsoStringOrNull(value:)")));
- (id _Nullable)parseOrNullValue:(NSString *)value __attribute__((swift_name("parseOrNull(value:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)secondsValue:(double)value __attribute__((swift_name("seconds(value:)"))) __attribute__((unavailable("Use 'Double.seconds' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)secondsValue_:(int32_t)value __attribute__((swift_name("seconds(value_:)"))) __attribute__((unavailable("Use 'Int.seconds' extension property from Duration.Companion instead.")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.5")
 *   kotlin.time.ExperimentalTime
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.6", errorSince="1.8")
*/
- (int64_t)secondsValue__:(int64_t)value __attribute__((swift_name("seconds(value__:)"))) __attribute__((unavailable("Use 'Long.seconds' extension property from Duration.Companion instead.")));
@property (readonly) int64_t INFINITE __attribute__((swift_name("INFINITE")));
@property (readonly) int64_t ZERO __attribute__((swift_name("ZERO")));
@end

@interface MEGAASKotlinDurationCompanion (Extensions)
- (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface MEGAASPlatform_iosKt : MEGAASBase
+ (id<MEGAASPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonKt")))
@interface MEGAASJsonKt : MEGAASBase
+ (MEGAASJson *)JsonFrom:(MEGAASJson *)from builderAction:(void (^)(MEGAASJsonBuilder *))builderAction __attribute__((swift_name("Json(from:builderAction:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElementKt")))
@interface MEGAASJsonElementKt : MEGAASBase
+ (MEGAASJsonPrimitive *)JsonPrimitiveValue:(MEGAASBoolean * _Nullable)value __attribute__((swift_name("JsonPrimitive(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAASJsonNull *)JsonPrimitiveValue_:(MEGAASKotlinNothing * _Nullable)value __attribute__((swift_name("JsonPrimitive(value_:)")));
+ (MEGAASJsonPrimitive *)JsonPrimitiveValue__:(id _Nullable)value __attribute__((swift_name("JsonPrimitive(value__:)")));
+ (MEGAASJsonPrimitive *)JsonPrimitiveValue___:(NSString * _Nullable)value __attribute__((swift_name("JsonPrimitive(value___:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAASJsonPrimitive *)JsonPrimitiveValue____:(uint8_t)value __attribute__((swift_name("JsonPrimitive(value____:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAASJsonPrimitive *)JsonPrimitiveValue_____:(uint32_t)value __attribute__((swift_name("JsonPrimitive(value_____:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAASJsonPrimitive *)JsonPrimitiveValue______:(uint64_t)value __attribute__((swift_name("JsonPrimitive(value______:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAASJsonPrimitive *)JsonPrimitiveValue_______:(uint16_t)value __attribute__((swift_name("JsonPrimitive(value_______:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAASJsonPrimitive *)JsonUnquotedLiteralValue:(NSString * _Nullable)value __attribute__((swift_name("JsonUnquotedLiteral(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElementBuildersKt")))
@interface MEGAASJsonElementBuildersKt : MEGAASBase
+ (NSArray<MEGAASJsonElement *> *)buildJsonArrayBuilderAction:(void (^)(MEGAASJsonArrayBuilder *))builderAction __attribute__((swift_name("buildJsonArray(builderAction:)")));
+ (NSDictionary<NSString *, MEGAASJsonElement *> *)buildJsonObjectBuilderAction:(void (^)(MEGAASJsonObjectBuilder *))builderAction __attribute__((swift_name("buildJsonObject(builderAction:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersKt")))
@interface MEGAASSerializersKt : MEGAASBase
+ (id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAASKSerializer>)serializerKClass:(id<MEGAASKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MEGAASKSerializer>> *)typeArgumentsSerializers isNullable:(BOOL)isNullable __attribute__((swift_name("serializer(kClass:typeArgumentsSerializers:isNullable:)")));
+ (id<MEGAASKSerializer>)serializerType:(id<MEGAASKotlinKType>)type __attribute__((swift_name("serializer(type:)")));
+ (id<MEGAASKSerializer> _Nullable)serializerOrNullType:(id<MEGAASKotlinKType>)type __attribute__((swift_name("serializerOrNull(type:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAASKSerializer>)serializer:(id<MEGAASKotlinKClass>)receiver __attribute__((swift_name("serializer(_:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAASKSerializer> _Nullable)serializerOrNull:(id<MEGAASKotlinKClass>)receiver __attribute__((swift_name("serializerOrNull(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialFormatKt")))
@interface MEGAASSerialFormatKt : MEGAASBase
+ (id _Nullable)decodeFromByteArray:(id<MEGAASBinaryFormat>)receiver bytes:(MEGAASKotlinByteArray *)bytes __attribute__((swift_name("decodeFromByteArray(_:bytes:)")));
+ (id _Nullable)decodeFromHexString:(id<MEGAASBinaryFormat>)receiver hex:(NSString *)hex __attribute__((swift_name("decodeFromHexString(_:hex:)")));
+ (id _Nullable)decodeFromHexString:(id<MEGAASBinaryFormat>)receiver deserializer:(id<MEGAASDeserializationStrategy>)deserializer hex:(NSString *)hex __attribute__((swift_name("decodeFromHexString(_:deserializer:hex:)")));
+ (id _Nullable)decodeFromString:(id<MEGAASStringFormat>)receiver string:(NSString *)string __attribute__((swift_name("decodeFromString(_:string:)")));
+ (MEGAASKotlinByteArray *)encodeToByteArray:(id<MEGAASBinaryFormat>)receiver value:(id _Nullable)value __attribute__((swift_name("encodeToByteArray(_:value:)")));
+ (NSString *)encodeToHexString:(id<MEGAASBinaryFormat>)receiver value:(id _Nullable)value __attribute__((swift_name("encodeToHexString(_:value:)")));
+ (NSString *)encodeToHexString:(id<MEGAASBinaryFormat>)receiver serializer:(id<MEGAASSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToHexString(_:serializer:value:)")));
+ (NSString *)encodeToString:(id<MEGAASStringFormat>)receiver value:(id _Nullable)value __attribute__((swift_name("encodeToString(_:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InlineClassDescriptorKt")))
@interface MEGAASInlineClassDescriptorKt : MEGAASBase

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAASSerialDescriptor>)InlinePrimitiveDescriptorName:(NSString *)name primitiveSerializer:(id<MEGAASKSerializer>)primitiveSerializer __attribute__((swift_name("InlinePrimitiveDescriptor(name:primitiveSerializer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginExceptionsKt")))
@interface MEGAASPluginExceptionsKt : MEGAASBase

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (void)throwArrayMissingFieldExceptionSeenArray:(MEGAASKotlinIntArray *)seenArray goldenMaskArray:(MEGAASKotlinIntArray *)goldenMaskArray descriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("throwArrayMissingFieldException(seenArray:goldenMaskArray:descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (void)throwMissingFieldExceptionSeen:(int32_t)seen goldenMask:(int32_t)goldenMask descriptor:(id<MEGAASSerialDescriptor>)descriptor __attribute__((swift_name("throwMissingFieldException(seen:goldenMask:descriptor:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonInternalDependenciesKt")))
@interface MEGAASJsonInternalDependenciesKt : MEGAASBase

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (NSSet<NSString *> *)jsonCachedSerialNames:(id<MEGAASSerialDescriptor>)receiver __attribute__((swift_name("jsonCachedSerialNames(_:)"))) __attribute__((unavailable("Should not be used")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersModuleKt")))
@interface MEGAASSerializersModuleKt : MEGAASBase
@property (class, readonly) MEGAASSerializersModule *EmptySerializersModule __attribute__((swift_name("EmptySerializersModule"))) __attribute__((deprecated("Deprecated in the favour of 'EmptySerializersModule()'")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersModuleBuildersKt")))
@interface MEGAASSerializersModuleBuildersKt : MEGAASBase
+ (MEGAASSerializersModule *)EmptySerializersModule __attribute__((swift_name("EmptySerializersModule()")));
+ (MEGAASSerializersModule *)SerializersModuleBuilderAction:(void (^)(MEGAASSerializersModuleBuilder *))builderAction __attribute__((swift_name("SerializersModule(builderAction:)")));
+ (MEGAASSerializersModule *)serializersModuleOfKClass:(id<MEGAASKotlinKClass>)kClass serializer:(id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializersModuleOf(kClass:serializer:)")));
+ (MEGAASSerializersModule *)serializersModuleOfSerializer:(id<MEGAASKSerializer>)serializer __attribute__((swift_name("serializersModuleOf(serializer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextAwareKt")))
@interface MEGAASContextAwareKt : MEGAASBase
+ (id<MEGAASKotlinKClass> _Nullable)capturedKClass:(id<MEGAASSerialDescriptor>)receiver __attribute__((swift_name("capturedKClass(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialDescriptorKt")))
@interface MEGAASSerialDescriptorKt : MEGAASBase
+ (id)elementDescriptors:(id<MEGAASSerialDescriptor>)receiver __attribute__((swift_name("elementDescriptors(_:)")));
+ (id)elementNames:(id<MEGAASSerialDescriptor>)receiver __attribute__((swift_name("elementNames(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialDescriptorsKt")))
@interface MEGAASSerialDescriptorsKt : MEGAASBase
+ (id<MEGAASSerialDescriptor>)nullable:(id<MEGAASSerialDescriptor>)receiver __attribute__((swift_name("nullable(_:)")));
+ (id<MEGAASSerialDescriptor>)PrimitiveSerialDescriptorSerialName:(NSString *)serialName kind:(MEGAASPrimitiveKind *)kind __attribute__((swift_name("PrimitiveSerialDescriptor(serialName:kind:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAASSerialDescriptor>)SerialDescriptorSerialName:(NSString *)serialName original:(id<MEGAASSerialDescriptor>)original __attribute__((swift_name("SerialDescriptor(serialName:original:)")));
+ (id<MEGAASSerialDescriptor>)buildClassSerialDescriptorSerialName:(NSString *)serialName typeParameters:(MEGAASKotlinArray<id<MEGAASSerialDescriptor>> *)typeParameters builderAction:(void (^)(MEGAASClassSerialDescriptorBuilder *))builderAction __attribute__((swift_name("buildClassSerialDescriptor(serialName:typeParameters:builderAction:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAASSerialDescriptor>)buildSerialDescriptorSerialName:(NSString *)serialName kind:(MEGAASSerialKind *)kind typeParameters:(MEGAASKotlinArray<id<MEGAASSerialDescriptor>> *)typeParameters builder:(void (^)(MEGAASClassSerialDescriptorBuilder *))builder __attribute__((swift_name("buildSerialDescriptor(serialName:kind:typeParameters:builder:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAASSerialDescriptor>)listSerialDescriptor __attribute__((swift_name("listSerialDescriptor()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAASSerialDescriptor>)listSerialDescriptorElementDescriptor:(id<MEGAASSerialDescriptor>)elementDescriptor __attribute__((swift_name("listSerialDescriptor(elementDescriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAASSerialDescriptor>)mapSerialDescriptor __attribute__((swift_name("mapSerialDescriptor()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAASSerialDescriptor>)mapSerialDescriptorKeyDescriptor:(id<MEGAASSerialDescriptor>)keyDescriptor valueDescriptor:(id<MEGAASSerialDescriptor>)valueDescriptor __attribute__((swift_name("mapSerialDescriptor(keyDescriptor:valueDescriptor:)")));
+ (id<MEGAASSerialDescriptor>)serialDescriptor __attribute__((swift_name("serialDescriptor()")));
+ (id<MEGAASSerialDescriptor>)serialDescriptorType:(id<MEGAASKotlinKType>)type __attribute__((swift_name("serialDescriptor(type:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAASSerialDescriptor>)setSerialDescriptor __attribute__((swift_name("setSerialDescriptor()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAASSerialDescriptor>)setSerialDescriptorElementDescriptor:(id<MEGAASSerialDescriptor>)elementDescriptor __attribute__((swift_name("setSerialDescriptor(elementDescriptor:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuiltinSerializersKt")))
@interface MEGAASBuiltinSerializersKt : MEGAASBase
+ (id<MEGAASKSerializer>)nullable:(id<MEGAASKSerializer>)receiver __attribute__((swift_name("nullable(_:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAASKSerializer>)ArraySerializerKClass:(id<MEGAASKotlinKClass>)kClass elementSerializer:(id<MEGAASKSerializer>)elementSerializer __attribute__((swift_name("ArraySerializer(kClass:elementSerializer:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAASKSerializer>)ArraySerializerElementSerializer:(id<MEGAASKSerializer>)elementSerializer __attribute__((swift_name("ArraySerializer(elementSerializer:)")));
+ (id<MEGAASKSerializer>)BooleanArraySerializer __attribute__((swift_name("BooleanArraySerializer()")));
+ (id<MEGAASKSerializer>)ByteArraySerializer __attribute__((swift_name("ByteArraySerializer()")));
+ (id<MEGAASKSerializer>)CharArraySerializer __attribute__((swift_name("CharArraySerializer()")));
+ (id<MEGAASKSerializer>)DoubleArraySerializer __attribute__((swift_name("DoubleArraySerializer()")));
+ (id<MEGAASKSerializer>)FloatArraySerializer __attribute__((swift_name("FloatArraySerializer()")));
+ (id<MEGAASKSerializer>)IntArraySerializer __attribute__((swift_name("IntArraySerializer()")));
+ (id<MEGAASKSerializer>)ListSerializerElementSerializer:(id<MEGAASKSerializer>)elementSerializer __attribute__((swift_name("ListSerializer(elementSerializer:)")));
+ (id<MEGAASKSerializer>)LongArraySerializer __attribute__((swift_name("LongArraySerializer()")));
+ (id<MEGAASKSerializer>)MapEntrySerializerKeySerializer:(id<MEGAASKSerializer>)keySerializer valueSerializer:(id<MEGAASKSerializer>)valueSerializer __attribute__((swift_name("MapEntrySerializer(keySerializer:valueSerializer:)")));
+ (id<MEGAASKSerializer>)MapSerializerKeySerializer:(id<MEGAASKSerializer>)keySerializer valueSerializer:(id<MEGAASKSerializer>)valueSerializer __attribute__((swift_name("MapSerializer(keySerializer:valueSerializer:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAASKSerializer>)NothingSerializer __attribute__((swift_name("NothingSerializer()")));
+ (id<MEGAASKSerializer>)PairSerializerKeySerializer:(id<MEGAASKSerializer>)keySerializer valueSerializer:(id<MEGAASKSerializer>)valueSerializer __attribute__((swift_name("PairSerializer(keySerializer:valueSerializer:)")));
+ (id<MEGAASKSerializer>)SetSerializerElementSerializer:(id<MEGAASKSerializer>)elementSerializer __attribute__((swift_name("SetSerializer(elementSerializer:)")));
+ (id<MEGAASKSerializer>)ShortArraySerializer __attribute__((swift_name("ShortArraySerializer()")));
+ (id<MEGAASKSerializer>)TripleSerializerASerializer:(id<MEGAASKSerializer>)aSerializer bSerializer:(id<MEGAASKSerializer>)bSerializer cSerializer:(id<MEGAASKSerializer>)cSerializer __attribute__((swift_name("TripleSerializer(aSerializer:bSerializer:cSerializer:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAASKSerializer>)UByteArraySerializer __attribute__((swift_name("UByteArraySerializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAASKSerializer>)UIntArraySerializer __attribute__((swift_name("UIntArraySerializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAASKSerializer>)ULongArraySerializer __attribute__((swift_name("ULongArraySerializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAASKSerializer>)UShortArraySerializer __attribute__((swift_name("UShortArraySerializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecodingKt")))
@interface MEGAASDecodingKt : MEGAASBase
+ (id _Nullable)decodeStructure:(id<MEGAASDecoder>)receiver descriptor:(id<MEGAASSerialDescriptor>)descriptor block:(id _Nullable (^)(id<MEGAASCompositeDecoder>))block __attribute__((swift_name("decodeStructure(_:descriptor:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncodingKt")))
@interface MEGAASEncodingKt : MEGAASBase
+ (void)encodeCollection:(id<MEGAASEncoder>)receiver descriptor:(id<MEGAASSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize block:(void (^)(id<MEGAASCompositeEncoder>))block __attribute__((swift_name("encodeCollection(_:descriptor:collectionSize:block:)")));
+ (void)encodeCollection:(id<MEGAASEncoder>)receiver descriptor:(id<MEGAASSerialDescriptor>)descriptor collection:(id)collection block:(void (^)(id<MEGAASCompositeEncoder>, MEGAASInt *, id _Nullable))block __attribute__((swift_name("encodeCollection(_:descriptor:collection:block:)")));
+ (void)encodeStructure:(id<MEGAASEncoder>)receiver descriptor:(id<MEGAASSerialDescriptor>)descriptor block:(void (^)(id<MEGAASCompositeEncoder>))block __attribute__((swift_name("encodeStructure(_:descriptor:block:)")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol MEGAASKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol MEGAASKotlinSuspendFunction0 <MEGAASKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MEGAASKotlinIllegalStateException : MEGAASKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MEGAASKotlinCancellationException : MEGAASKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAASKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MEGAASKotlinEnumCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MEGAASKotlinArray<T> : MEGAASBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MEGAASInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MEGAASKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MEGAASKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MEGAASKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol MEGAASKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol MEGAASKotlinKClass <MEGAASKotlinKDeclarationContainer, MEGAASKotlinKAnnotatedElement, MEGAASKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MEGAASKotlinNothing : MEGAASBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MEGAASKotlinByteArray : MEGAASBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MEGAASByte *(^)(MEGAASInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MEGAASKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MEGAASKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol MEGAASKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MEGAASKotlinAnnotation
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol MEGAASKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<MEGAASKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<MEGAASKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.6")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDurationUnit")))
@interface MEGAASKotlinDurationUnit : MEGAASKotlinEnum<MEGAASKotlinDurationUnit *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAASKotlinDurationUnit *nanoseconds __attribute__((swift_name("nanoseconds")));
@property (class, readonly) MEGAASKotlinDurationUnit *microseconds __attribute__((swift_name("microseconds")));
@property (class, readonly) MEGAASKotlinDurationUnit *milliseconds __attribute__((swift_name("milliseconds")));
@property (class, readonly) MEGAASKotlinDurationUnit *seconds __attribute__((swift_name("seconds")));
@property (class, readonly) MEGAASKotlinDurationUnit *minutes __attribute__((swift_name("minutes")));
@property (class, readonly) MEGAASKotlinDurationUnit *hours __attribute__((swift_name("hours")));
@property (class, readonly) MEGAASKotlinDurationUnit *days __attribute__((swift_name("days")));
+ (MEGAASKotlinArray<MEGAASKotlinDurationUnit *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface MEGAASKotlinIntArray : MEGAASBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MEGAASInt *(^)(MEGAASInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MEGAASKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface MEGAASKotlinByteIterator : MEGAASBase <MEGAASKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MEGAASByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface MEGAASKotlinKTypeProjection : MEGAASBase
- (instancetype)initWithVariance:(MEGAASKotlinKVariance * _Nullable)variance type:(id<MEGAASKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MEGAASKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (MEGAASKotlinKTypeProjection *)doCopyVariance:(MEGAASKotlinKVariance * _Nullable)variance type:(id<MEGAASKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MEGAASKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) MEGAASKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface MEGAASKotlinIntIterator : MEGAASBase <MEGAASKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MEGAASInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface MEGAASKotlinKVariance : MEGAASKotlinEnum<MEGAASKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAASKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) MEGAASKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) MEGAASKotlinKVariance *out __attribute__((swift_name("out")));
+ (MEGAASKotlinArray<MEGAASKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface MEGAASKotlinKTypeProjectionCompanion : MEGAASBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAASKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MEGAASKotlinKTypeProjection *)contravariantType:(id<MEGAASKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MEGAASKotlinKTypeProjection *)covariantType:(id<MEGAASKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MEGAASKotlinKTypeProjection *)invariantType:(id<MEGAASKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) MEGAASKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
