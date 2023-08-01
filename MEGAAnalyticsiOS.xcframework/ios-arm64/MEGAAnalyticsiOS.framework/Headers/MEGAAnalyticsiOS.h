#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MEGAAOSAnalyticsEvent, MEGAAOSGeneralEvent, MEGAAOSItemSelectedEvent, MEGAAOSNotificationEvent, MEGAAOSScreenViewEvent, MEGAAOSTabSelectedEvent, MEGAAOSKotlinEnumCompanion, MEGAAOSKotlinEnum<E>, MEGAAOSDecodeSequenceMode, MEGAAOSKotlinArray<T>, MEGAAOSSerializersModule, MEGAAOSJsonDefault, MEGAAOSJsonElement, MEGAAOSJsonConfiguration, MEGAAOSJson, MEGAAOSKotlinNothing, MEGAAOSJsonElementCompanion, MEGAAOSJsonNamingStrategyBuiltins, MEGAAOSJsonPrimitiveCompanion, MEGAAOSJsonPrimitive, MEGAAOSJsonNull, MEGAAOSKotlinByteArray, MEGAAOSKotlinThrowable, MEGAAOSKotlinException, MEGAAOSKotlinRuntimeException, MEGAAOSKotlinIllegalArgumentException, MEGAAOSSerializationException, MEGAAOSAbstractPolymorphicSerializer<T>, MEGAAOSAbstractCollectionSerializer<Element, Collection, Builder>, MEGAAOSTaggedDecoder<Tag>, MEGAAOSTaggedEncoder<Tag>, MEGAAOSSerialKind, MEGAAOSPolymorphicKind, MEGAAOSPolymorphicKindOPEN, MEGAAOSPolymorphicKindSEALED, MEGAAOSPrimitiveKind, MEGAAOSPrimitiveKindBOOLEAN, MEGAAOSPrimitiveKindBYTE, MEGAAOSPrimitiveKindCHAR, MEGAAOSPrimitiveKindDOUBLE, MEGAAOSPrimitiveKindFLOAT, MEGAAOSPrimitiveKindINT, MEGAAOSPrimitiveKindLONG, MEGAAOSPrimitiveKindSHORT, MEGAAOSPrimitiveKindSTRING, MEGAAOSSerialKindCONTEXTUAL, MEGAAOSSerialKindENUM, MEGAAOSStructureKind, MEGAAOSStructureKindCLASS, MEGAAOSStructureKindLIST, MEGAAOSStructureKindMAP, MEGAAOSStructureKindOBJECT, MEGAAOSLongAsStringSerializer, MEGAAOSCompositeDecoderCompanion, MEGAAOSAlbumContentScreenEvent, MEGAAOSAlbumContentShareLinkMenuToolbarEvent, MEGAAOSAlbumDeselectAllEvent, MEGAAOSAlbumListShareLinkMenuItemEvent, MEGAAOSAlbumSelectedSelectionType, MEGAAOSAlbumsTabEvent, MEGAAOSChatScreenEvent, MEGAAOSChatsTabEvent, MEGAAOSCloudDriveScreenEvent, MEGAAOSCreateNewAlbumDialogEvent, MEGAAOSDeleteAlbumCancelButtonPressedEvent, MEGAAOSDeleteAlbumConfirmButtonPressedEvent, MEGAAOSDeleteAlbumsConfirmationDialogEvent, MEGAAOSHomeScreenEvent, MEGAAOSIncomingSharesTabEvent, MEGAAOSLinkConfirmPasswordFileButtonPressedEvent, MEGAAOSLinkConfirmPasswordFolderButtonPressedEvent, MEGAAOSLinkGetLinkForNodesMenuItemEvent, MEGAAOSLinkGetLinkForNodesMenuToolbarEvent, MEGAAOSLinkManageLinkTapFileMenuItemEvent, MEGAAOSLinkManageLinkTapFileMenuToolbarEvent, MEGAAOSLinkManageLinkTapFolderMenuItemEvent, MEGAAOSLinkManageLinkTapFolderMenuToolbarEvent, MEGAAOSLinkProFeatureSeeNotNowPlanFileButtonPressedEvent, MEGAAOSLinkProFeatureSeeNotNowPlanFileDialogEvent, MEGAAOSLinkProFeatureSeeNotNowPlanFolderButtonPressedEvent, MEGAAOSLinkProFeatureSeeNotNowPlanFolderDialogEvent, MEGAAOSLinkProFeatureSeePlanFileButtonPressedEvent, MEGAAOSLinkProFeatureSeePlanFileDialogEvent, MEGAAOSLinkProFeatureSeePlanFolderButtonPressedEvent, MEGAAOSLinkProFeatureSeePlanFolderDialogEvent, MEGAAOSLinkRemovePasswordFileButtonPressedEvent, MEGAAOSLinkRemovePasswordFolderButtonPressedEvent, MEGAAOSLinkResetPasswordFileButtonPressedEvent, MEGAAOSLinkResetPasswordFolderButtonPressedEvent, MEGAAOSLinkSendDecryptionKeyFileButtonPressedEvent, MEGAAOSLinkSendDecryptionKeyFolderButtonPressedEvent, MEGAAOSLinkSetExpiryDateFileButtonPressedEvent, MEGAAOSLinkSetExpiryDateFolderButtonPressedEvent, MEGAAOSLinkSetPasswordFileButtonPressedEvent, MEGAAOSLinkSetPasswordFolderButtonPressedEvent, MEGAAOSLinkShareLinkForNodesMenuItemEvent, MEGAAOSLinkShareLinkForNodesMenuToolbarEvent, MEGAAOSLinkShareLinkTapFileMenuItemEvent, MEGAAOSLinkShareLinkTapFileMenuToolbarEvent, MEGAAOSLinkShareLinkTapFolderMenuItemEvent, MEGAAOSLinkShareLinkTapFolderMenuToolbarEvent, MEGAAOSLinkSharesTabEvent, MEGAAOSMeetingsTabEvent, MEGAAOSMultipleAlbumLinksScreenEvent, MEGAAOSOfflineTabEvent, MEGAAOSOutgoingSharesTabEvent, MEGAAOSPhotoScreenEvent, MEGAAOSRecentsTabEvent, MEGAAOSRemoveLinksConfirmationDialogEvent, MEGAAOSSharedItemsScreenEvent, MEGAAOSSingleAlbumLinkScreenEvent, MEGAAOSSlideShowScreenEvent, MEGAAOSTimelineTabEvent, MEGAAOSJsonArrayBuilder, MEGAAOSJsonObjectBuilder, MEGAAOSSerializersModuleBuilder, MEGAAOSPolymorphicModuleBuilder<__contravariant Base>, MEGAAOSClassSerialDescriptorBuilder, MEGAAOSKotlinBooleanCompanion, MEGAAOSKotlinByteCompanion, MEGAAOSKotlinCharCompanion, MEGAAOSKotlinDoubleCompanion, MEGAAOSKotlinFloatCompanion, MEGAAOSKotlinIntCompanion, MEGAAOSKotlinLongCompanion, MEGAAOSKotlinShortCompanion, MEGAAOSKotlinStringCompanion, MEGAAOSKotlinUByteCompanion, MEGAAOSKotlinUIntCompanion, MEGAAOSKotlinULongCompanion, MEGAAOSKotlinUShortCompanion, MEGAAOSKotlinUnit, MEGAAOSKotlinDurationCompanion, MEGAAOSKotlinDurationUnit, MEGAAOSJsonBuilder, MEGAAOSKotlinIntArray, MEGAAOSKotlinIllegalStateException, MEGAAOSKotlinByteIterator, MEGAAOSKotlinKTypeProjection, MEGAAOSKotlinIntIterator, MEGAAOSKotlinKVariance, MEGAAOSKotlinKTypeProjectionCompanion;

@protocol MEGAAOSPlatform, MEGAAOSKotlinSuspendFunction0, MEGAAOSEventIdentifier, MEGAAOSEventDataMapper, MEGAAOSButtonPressedEventIdentifier, MEGAAOSDialogDisplayedEventIdentifier, MEGAAOSGeneralEventIdentifier, MEGAAOSItemSelectedEventIdentifier, MEGAAOSMenuItemEventIdentifier, MEGAAOSNavigationEventIdentifier, MEGAAOSNotificationEventIdentifier, MEGAAOSScreenViewEventIdentifier, MEGAAOSTabSelectedEventIdentifier, MEGAAOSKotlinComparable, MEGAAOSDeserializationStrategy, MEGAAOSSerializationStrategy, MEGAAOSSerialFormat, MEGAAOSStringFormat, MEGAAOSJsonNamingStrategy, MEGAAOSEncoder, MEGAAOSSerialDescriptor, MEGAAOSDecoder, MEGAAOSKSerializer, MEGAAOSKotlinKClass, MEGAAOSCompositeDecoder, MEGAAOSCompositeEncoder, MEGAAOSKotlinIterator, MEGAAOSKotlinMapEntry, MEGAAOSSerializersModuleCollector, MEGAAOSKotlinAnnotation, MEGAAOSViewIdProvider, MEGAAOSEventSender, MEGAAOSKotlinKType, MEGAAOSBinaryFormat, MEGAAOSKotlinFunction, MEGAAOSKotlinKDeclarationContainer, MEGAAOSKotlinKAnnotatedElement, MEGAAOSKotlinKClassifier;

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
@interface MEGAAOSBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MEGAAOSBase (MEGAAOSBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MEGAAOSMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MEGAAOSMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMEGAAOSKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MEGAAOSNumber : NSNumber
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
@interface MEGAAOSByte : MEGAAOSNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MEGAAOSUByte : MEGAAOSNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MEGAAOSShort : MEGAAOSNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MEGAAOSUShort : MEGAAOSNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MEGAAOSInt : MEGAAOSNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MEGAAOSUInt : MEGAAOSNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MEGAAOSLong : MEGAAOSNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MEGAAOSULong : MEGAAOSNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MEGAAOSFloat : MEGAAOSNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MEGAAOSDouble : MEGAAOSNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MEGAAOSBoolean : MEGAAOSNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Platform")))
@protocol MEGAAOSPlatform
@required
@property (readonly) int32_t baseIdentifier __attribute__((swift_name("baseIdentifier")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface MEGAAOSIOSPlatform : MEGAAOSBase <MEGAAOSPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int32_t baseIdentifier __attribute__((swift_name("baseIdentifier")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventGenerator")))
@interface MEGAAOSEventGenerator : MEGAAOSBase
- (instancetype)initWithViewIdProvider:(id<MEGAAOSKotlinSuspendFunction0>)viewIdProvider __attribute__((swift_name("init(viewIdProvider:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)generateEventEventIdentifier:(id<MEGAAOSEventIdentifier>)eventIdentifier completionHandler:(void (^)(MEGAAOSAnalyticsEvent * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("generateEvent(eventIdentifier:completionHandler:)")));
@end

__attribute__((swift_name("EventIdentifier")))
@protocol MEGAAOSEventIdentifier
@required
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ButtonPressedEventIdentifier")))
@protocol MEGAAOSButtonPressedEventIdentifier <MEGAAOSEventIdentifier>
@required
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end

__attribute__((swift_name("DialogDisplayedEventIdentifier")))
@protocol MEGAAOSDialogDisplayedEventIdentifier <MEGAAOSEventIdentifier>
@required
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end

__attribute__((swift_name("GeneralEventIdentifier")))
@protocol MEGAAOSGeneralEventIdentifier <MEGAAOSEventIdentifier>
@required
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@end

__attribute__((swift_name("ItemSelectedEventIdentifier")))
@protocol MEGAAOSItemSelectedEventIdentifier <MEGAAOSEventIdentifier>
@required
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@end

__attribute__((swift_name("MenuItemEventIdentifier")))
@protocol MEGAAOSMenuItemEventIdentifier <MEGAAOSEventIdentifier>
@required
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString * _Nullable menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end

__attribute__((swift_name("NavigationEventIdentifier")))
@protocol MEGAAOSNavigationEventIdentifier <MEGAAOSEventIdentifier>
@required
@property (readonly) NSString * _Nullable destination __attribute__((swift_name("destination")));
@property (readonly) NSString * _Nullable navigationElementType __attribute__((swift_name("navigationElementType")));
@end

__attribute__((swift_name("NotificationEventIdentifier")))
@protocol MEGAAOSNotificationEventIdentifier <MEGAAOSEventIdentifier>
@required
@end

__attribute__((swift_name("ScreenViewEventIdentifier")))
@protocol MEGAAOSScreenViewEventIdentifier <MEGAAOSEventIdentifier>
@required
@end

__attribute__((swift_name("TabSelectedEventIdentifier")))
@protocol MEGAAOSTabSelectedEventIdentifier <MEGAAOSEventIdentifier>
@required
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@end

__attribute__((swift_name("AnalyticsEvent")))
@interface MEGAAOSAnalyticsEvent : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)getEventIdentifier __attribute__((swift_name("getEventIdentifier()")));
- (NSString *)getEventMessageMapper:(id<MEGAAOSEventDataMapper>)mapper __attribute__((swift_name("getEventMessage(mapper:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ButtonPressedEvent")))
@interface MEGAAOSButtonPressedEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSButtonPressedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSButtonPressedEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DialogDisplayedEvent")))
@interface MEGAAOSDialogDisplayedEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSDialogDisplayedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSDialogDisplayedEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeneralEvent")))
@interface MEGAAOSGeneralEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSGeneralEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSGeneralEvent *)doCopyEventIdentifier:(id<MEGAAOSGeneralEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("doCopy(eventIdentifier:viewId:)")));
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
@property (readonly) id<MEGAAOSGeneralEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectedEvent")))
@interface MEGAAOSItemSelectedEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSItemSelectedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSItemSelectedEvent *)doCopyEventIdentifier:(id<MEGAAOSItemSelectedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("doCopy(eventIdentifier:viewId:)")));
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
@property (readonly) id<MEGAAOSItemSelectedEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuItemEvent")))
@interface MEGAAOSMenuItemEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSMenuItemEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSMenuItemEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationEvent")))
@interface MEGAAOSNavigationEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSNavigationEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSNavigationEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationEvent")))
@interface MEGAAOSNotificationEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSNotificationEventIdentifier>)eventIdentifier __attribute__((swift_name("init(eventIdentifier:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSNotificationEvent *)doCopyEventIdentifier:(id<MEGAAOSNotificationEventIdentifier>)eventIdentifier __attribute__((swift_name("doCopy(eventIdentifier:)")));
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
@property (readonly) id<MEGAAOSNotificationEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenViewEvent")))
@interface MEGAAOSScreenViewEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSScreenViewEventIdentifier>)eventIdentifier viewId:(NSString *)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSScreenViewEvent *)doCopyEventIdentifier:(id<MEGAAOSScreenViewEventIdentifier>)eventIdentifier viewId:(NSString *)viewId __attribute__((swift_name("doCopy(eventIdentifier:viewId:)")));
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
@property (readonly) id<MEGAAOSScreenViewEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString *viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TabSelectedEvent")))
@interface MEGAAOSTabSelectedEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSTabSelectedEventIdentifier>)eventIdentifier viewId:(NSString *)viewId __attribute__((swift_name("init(eventIdentifier:viewId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSTabSelectedEvent *)doCopyEventIdentifier:(id<MEGAAOSTabSelectedEventIdentifier>)eventIdentifier viewId:(NSString *)viewId __attribute__((swift_name("doCopy(eventIdentifier:viewId:)")));
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
@property (readonly) id<MEGAAOSTabSelectedEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString *viewId __attribute__((swift_name("viewId")));
@end

__attribute__((swift_name("EventDataMapper")))
@protocol MEGAAOSEventDataMapper
@required
- (NSString *)mapDataEventData:(NSDictionary<NSString *, id> *)eventData __attribute__((swift_name("mapData(eventData:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonMapper")))
@interface MEGAAOSJsonMapper : MEGAAOSBase <MEGAAOSEventDataMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)mapDataEventData:(NSDictionary<NSString *, id> *)eventData __attribute__((swift_name("mapData(eventData:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MEGAAOSKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MEGAAOSKotlinEnum<E> : MEGAAOSBase <MEGAAOSKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MEGAAOSKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
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
@interface MEGAAOSDecodeSequenceMode : MEGAAOSKotlinEnum<MEGAAOSDecodeSequenceMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSDecodeSequenceMode *whitespaceSeparated __attribute__((swift_name("whitespaceSeparated")));
@property (class, readonly) MEGAAOSDecodeSequenceMode *arrayWrapped __attribute__((swift_name("arrayWrapped")));
@property (class, readonly) MEGAAOSDecodeSequenceMode *autoDetect __attribute__((swift_name("autoDetect")));
+ (MEGAAOSKotlinArray<MEGAAOSDecodeSequenceMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("SerialFormat")))
@protocol MEGAAOSSerialFormat
@required
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("StringFormat")))
@protocol MEGAAOSStringFormat <MEGAAOSSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Json")))
@interface MEGAAOSJson : MEGAAOSBase <MEGAAOSStringFormat>
@property (class, readonly, getter=companion) MEGAAOSJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer element:(MEGAAOSJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (MEGAAOSJsonElement *)encodeToJsonElementSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (MEGAAOSJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) MEGAAOSJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Json.Default")))
@interface MEGAAOSJsonDefault : MEGAAOSJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonDefault *shared __attribute__((swift_name("shared")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("JsonArray")))
@interface MEGAAOSJsonArray : NSObject
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonArrayBuilder")))
@interface MEGAAOSJsonArrayBuilder : MEGAAOSBase
- (BOOL)addElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("add(element:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addAllElements:(id)elements __attribute__((swift_name("addAll(elements:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonBuilder")))
@interface MEGAAOSJsonBuilder : MEGAAOSBase
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
@property id<MEGAAOSJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonConfiguration")))
@interface MEGAAOSJsonConfiguration : MEGAAOSBase
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
@property (readonly) id<MEGAAOSJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
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
@protocol MEGAAOSSerializationStrategy
@required
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("DeserializationStrategy")))
@protocol MEGAAOSDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("KSerializer")))
@protocol MEGAAOSKSerializer <MEGAAOSSerializationStrategy, MEGAAOSDeserializationStrategy>
@required
@end

__attribute__((swift_name("JsonContentPolymorphicSerializer")))
@interface MEGAAOSJsonContentPolymorphicSerializer<T> : MEGAAOSBase <MEGAAOSKSerializer>
- (instancetype)initWithBaseClass:(id<MEGAAOSKotlinKClass>)baseClass __attribute__((swift_name("init(baseClass:)"))) __attribute__((objc_designated_initializer));
- (T)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<MEGAAOSDeserializationStrategy>)selectDeserializerElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("selectDeserializer(element:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Decoder")))
@protocol MEGAAOSDecoder
@required
- (id<MEGAAOSCompositeDecoder>)beginStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MEGAAOSDecoder>)decodeInlineDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
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
- (MEGAAOSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("CompositeDecoder")))
@protocol MEGAAOSCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MEGAAOSDecoder>)decodeInlineElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("JsonDecoder")))
@protocol MEGAAOSJsonDecoder <MEGAAOSDecoder, MEGAAOSCompositeDecoder>
@required
- (MEGAAOSJsonElement *)decodeJsonElement __attribute__((swift_name("decodeJsonElement()")));
@property (readonly) MEGAAOSJson *json __attribute__((swift_name("json")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("JsonElement")))
@interface MEGAAOSJsonElement : MEGAAOSBase
@property (class, readonly, getter=companion) MEGAAOSJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElement.Companion")))
@interface MEGAAOSJsonElementCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Encoder")))
@protocol MEGAAOSEncoder
@required
- (id<MEGAAOSCompositeEncoder>)beginCollectionDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MEGAAOSCompositeEncoder>)beginStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MEGAAOSEncoder>)encodeInlineDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
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
- (void)encodeNullableSerializableValueSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("CompositeEncoder")))
@protocol MEGAAOSCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MEGAAOSEncoder>)encodeInlineElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("JsonEncoder")))
@protocol MEGAAOSJsonEncoder <MEGAAOSEncoder, MEGAAOSCompositeEncoder>
@required
- (void)encodeJsonElementElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("encodeJsonElement(element:)")));
@property (readonly) MEGAAOSJson *json __attribute__((swift_name("json")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("JsonNamingStrategy")))
@protocol MEGAAOSJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonNamingStrategyBuiltins")))
@interface MEGAAOSJsonNamingStrategyBuiltins : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)builtins __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonNamingStrategyBuiltins *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<MEGAAOSJsonNamingStrategy> SnakeCase __attribute__((swift_name("SnakeCase")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonPrimitiveSerializer))
*/
__attribute__((swift_name("JsonPrimitive")))
@interface MEGAAOSJsonPrimitive : MEGAAOSJsonElement
@property (class, readonly, getter=companion) MEGAAOSJsonPrimitiveCompanion *companion __attribute__((swift_name("companion")));
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
@interface MEGAAOSJsonNull : MEGAAOSJsonPrimitive
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonNull __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonNull *shared __attribute__((swift_name("shared")));
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MEGAAOSKSerializer>)serializerTypeParamsSerializers:(MEGAAOSKotlinArray<id<MEGAAOSKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("JsonObject")))
@interface MEGAAOSJsonObject : NSObject
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonObjectBuilder")))
@interface MEGAAOSJsonObjectBuilder : MEGAAOSBase
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key element:(MEGAAOSJsonElement *)element __attribute__((swift_name("put(key:element:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonPrimitive.Companion")))
@interface MEGAAOSJsonPrimitiveCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonPrimitiveCompanion *shared __attribute__((swift_name("shared")));
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("JsonTransformingSerializer")))
@interface MEGAAOSJsonTransformingSerializer<T> : MEGAAOSBase <MEGAAOSKSerializer>
- (instancetype)initWithTSerializer:(id<MEGAAOSKSerializer>)tSerializer __attribute__((swift_name("init(tSerializer:)"))) __attribute__((objc_designated_initializer));
- (T)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MEGAAOSJsonElement *)transformDeserializeElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("transformDeserialize(element:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MEGAAOSJsonElement *)transformSerializeElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("transformSerialize(element:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("BinaryFormat")))
@protocol MEGAAOSBinaryFormat <MEGAAOSSerialFormat>
@required
- (id _Nullable)decodeFromByteArrayDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer bytes:(MEGAAOSKotlinByteArray *)bytes __attribute__((swift_name("decodeFromByteArray(deserializer:bytes:)")));
- (MEGAAOSKotlinByteArray *)encodeToByteArraySerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToByteArray(serializer:value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextualSerializer")))
@interface MEGAAOSContextualSerializer<T> : MEGAAOSBase <MEGAAOSKSerializer>
- (instancetype)initWithSerializableClass:(id<MEGAAOSKotlinKClass>)serializableClass __attribute__((swift_name("init(serializableClass:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSerializableClass:(id<MEGAAOSKotlinKClass>)serializableClass fallbackSerializer:(id<MEGAAOSKSerializer> _Nullable)fallbackSerializer typeArgumentsSerializers:(MEGAAOSKotlinArray<id<MEGAAOSKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("init(serializableClass:fallbackSerializer:typeArgumentsSerializers:)"))) __attribute__((objc_designated_initializer));
- (T)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MEGAAOSKotlinThrowable : MEGAAOSBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MEGAAOSKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MEGAAOSKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface MEGAAOSKotlinException : MEGAAOSKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MEGAAOSKotlinRuntimeException : MEGAAOSKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface MEGAAOSKotlinIllegalArgumentException : MEGAAOSKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("SerializationException")))
@interface MEGAAOSSerializationException : MEGAAOSKotlinIllegalArgumentException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissingFieldException")))
@interface MEGAAOSMissingFieldException : MEGAAOSSerializationException
- (instancetype)initWithMissingFields:(NSArray<NSString *> *)missingFields serialName:(NSString *)serialName __attribute__((swift_name("init(missingFields:serialName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMissingField:(NSString *)missingField serialName:(NSString *)serialName __attribute__((swift_name("init(missingField:serialName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMissingFields:(NSArray<NSString *> *)missingFields message:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(missingFields:message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSArray<NSString *> *missingFields __attribute__((swift_name("missingFields")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("AbstractPolymorphicSerializer")))
@interface MEGAAOSAbstractPolymorphicSerializer<T> : MEGAAOSBase <MEGAAOSKSerializer>
- (T)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id<MEGAAOSDeserializationStrategy> _Nullable)findPolymorphicSerializerOrNullDecoder:(id<MEGAAOSCompositeDecoder>)decoder klassName:(NSString * _Nullable)klassName __attribute__((swift_name("findPolymorphicSerializerOrNull(decoder:klassName:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id<MEGAAOSSerializationStrategy> _Nullable)findPolymorphicSerializerOrNullEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("findPolymorphicSerializerOrNull(encoder:value:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAAOSKotlinKClass> baseClass __attribute__((swift_name("baseClass")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicSerializer")))
@interface MEGAAOSPolymorphicSerializer<T> : MEGAAOSAbstractPolymorphicSerializer<T>
- (instancetype)initWithBaseClass:(id<MEGAAOSKotlinKClass>)baseClass __attribute__((swift_name("init(baseClass:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MEGAAOSKotlinKClass> baseClass __attribute__((swift_name("baseClass")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SealedClassSerializer")))
@interface MEGAAOSSealedClassSerializer<T> : MEGAAOSAbstractPolymorphicSerializer<T>
- (instancetype)initWithSerialName:(NSString *)serialName baseClass:(id<MEGAAOSKotlinKClass>)baseClass subclasses:(MEGAAOSKotlinArray<id<MEGAAOSKotlinKClass>> *)subclasses subclassSerializers:(MEGAAOSKotlinArray<id<MEGAAOSKSerializer>> *)subclassSerializers __attribute__((swift_name("init(serialName:baseClass:subclasses:subclassSerializers:)"))) __attribute__((objc_designated_initializer));
- (id<MEGAAOSDeserializationStrategy> _Nullable)findPolymorphicSerializerOrNullDecoder:(id<MEGAAOSCompositeDecoder>)decoder klassName:(NSString * _Nullable)klassName __attribute__((swift_name("findPolymorphicSerializerOrNull(decoder:klassName:)")));
- (id<MEGAAOSSerializationStrategy> _Nullable)findPolymorphicSerializerOrNullEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("findPolymorphicSerializerOrNull(encoder:value:)")));
@property (readonly) id<MEGAAOSKotlinKClass> baseClass __attribute__((swift_name("baseClass")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("AbstractCollectionSerializer")))
@interface MEGAAOSAbstractCollectionSerializer<Element, Collection, Builder> : MEGAAOSBase <MEGAAOSKSerializer>

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Builder _Nullable)builder __attribute__((swift_name("builder()")));
- (Collection _Nullable)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (Collection _Nullable)mergeDecoder:(id<MEGAAOSDecoder>)decoder previous:(Collection _Nullable)previous __attribute__((swift_name("merge(decoder:previous:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readAllDecoder:(id<MEGAAOSCompositeDecoder>)decoder builder:(Builder _Nullable)builder startIndex:(int32_t)startIndex size:(int32_t)size __attribute__((swift_name("readAll(decoder:builder:startIndex:size:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readElementDecoder:(id<MEGAAOSCompositeDecoder>)decoder index:(int32_t)index builder:(Builder _Nullable)builder checkIndex:(BOOL)checkIndex __attribute__((swift_name("readElement(decoder:index:builder:checkIndex:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(Collection _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

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
- (id<MEGAAOSKotlinIterator>)collectionIterator:(Collection _Nullable)receiver __attribute__((swift_name("collectionIterator(_:)")));

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
@protocol MEGAAOSGeneratedSerializer <MEGAAOSKSerializer>
@required
- (MEGAAOSKotlinArray<id<MEGAAOSKSerializer>> *)childSerializers __attribute__((swift_name("childSerializers()")));
- (MEGAAOSKotlinArray<id<MEGAAOSKSerializer>> *)typeParametersSerializers __attribute__((swift_name("typeParametersSerializers()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("MapLikeSerializer")))
@interface MEGAAOSMapLikeSerializer<Key, Value, Collection, Builder> : MEGAAOSAbstractCollectionSerializer<id<MEGAAOSKotlinMapEntry>, Collection, MEGAAOSMutableDictionary<id, id> *>

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readAllDecoder:(id<MEGAAOSCompositeDecoder>)decoder builder:(MEGAAOSMutableDictionary<id, id> *)builder startIndex:(int32_t)startIndex size:(int32_t)size __attribute__((swift_name("readAll(decoder:builder:startIndex:size:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readElementDecoder:(id<MEGAAOSCompositeDecoder>)decoder index:(int32_t)index builder:(MEGAAOSMutableDictionary<id, id> *)builder checkIndex:(BOOL)checkIndex __attribute__((swift_name("readElement(decoder:index:builder:checkIndex:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(Collection _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)insertKeyValuePair:(MEGAAOSMutableDictionary<id, id> *)receiver index:(int32_t)index key:(Key _Nullable)key value:(Value _Nullable)value __attribute__((swift_name("insertKeyValuePair(_:index:key:value:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@property (readonly) id<MEGAAOSKSerializer> keySerializer __attribute__((swift_name("keySerializer")));
@property (readonly) id<MEGAAOSKSerializer> valueSerializer __attribute__((swift_name("valueSerializer")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("TaggedDecoder")))
@interface MEGAAOSTaggedDecoder<Tag> : MEGAAOSBase <MEGAAOSDecoder, MEGAAOSCompositeDecoder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MEGAAOSCompositeDecoder>)beginStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)doCopyTagsToOther:(MEGAAOSTaggedDecoder<Tag> *)other __attribute__((swift_name("doCopyTagsTo(other:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (BOOL)decodeBooleanElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (int8_t)decodeByteElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (unichar)decodeCharElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (double)decodeDoubleElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeEnumEnumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (float)decodeFloatElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MEGAAOSDecoder>)decodeInlineDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (id<MEGAAOSDecoder>)decodeInlineElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int32_t)decodeIntElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (int64_t)decodeLongElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MEGAAOSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)decodeSerializableValueDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableValue(deserializer:previousValue:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (int16_t)decodeShortElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (NSString *)decodeStringElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

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
- (int32_t)decodeTaggedEnumTag:(Tag _Nullable)tag enumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeTaggedEnum(tag:enumDescriptor:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (float)decodeTaggedFloatTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedFloat(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<MEGAAOSDecoder>)decodeTaggedInlineTag:(Tag _Nullable)tag inlineDescriptor:(id<MEGAAOSSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeTaggedInline(tag:inlineDescriptor:)")));

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
- (MEGAAOSKotlinNothing * _Nullable)decodeTaggedNullTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedNull(tag:)")));

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
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

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
- (Tag _Nullable)getTag:(id<MEGAAOSSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) Tag _Nullable currentTag __attribute__((swift_name("currentTag")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) Tag _Nullable currentTagOrNull __attribute__((swift_name("currentTagOrNull")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("NamedValueDecoder")))
@interface MEGAAOSNamedValueDecoder : MEGAAOSTaggedDecoder<NSString *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)composeNameParentName:(NSString *)parentName childName:(NSString *)childName __attribute__((swift_name("composeName(parentName:childName:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)elementNameDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("elementName(descriptor:index:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)nestedNestedName:(NSString *)nestedName __attribute__((swift_name("nested(nestedName:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)getTag:(id<MEGAAOSSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("TaggedEncoder")))
@interface MEGAAOSTaggedEncoder<Tag> : MEGAAOSBase <MEGAAOSEncoder, MEGAAOSCompositeEncoder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MEGAAOSCompositeEncoder>)beginStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeBooleanElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeByteElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeCharElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeDoubleElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeEnumEnumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeFloatElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MEGAAOSEncoder>)encodeInlineDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (id<MEGAAOSEncoder>)encodeInlineElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeIntElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeLongElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeShortElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeStringElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

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
- (void)encodeTaggedEnumTag:(Tag _Nullable)tag enumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor ordinal:(int32_t)ordinal __attribute__((swift_name("encodeTaggedEnum(tag:enumDescriptor:ordinal:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedFloatTag:(Tag _Nullable)tag value:(float)value __attribute__((swift_name("encodeTaggedFloat(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<MEGAAOSEncoder>)encodeTaggedInlineTag:(Tag _Nullable)tag inlineDescriptor:(id<MEGAAOSSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeTaggedInline(tag:inlineDescriptor:)")));

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
- (void)endEncodeDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endEncode(descriptor:)")));
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

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
- (Tag _Nullable)getTag:(id<MEGAAOSSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) Tag _Nullable currentTag __attribute__((swift_name("currentTag")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) Tag _Nullable currentTagOrNull __attribute__((swift_name("currentTagOrNull")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("NamedValueEncoder")))
@interface MEGAAOSNamedValueEncoder : MEGAAOSTaggedEncoder<NSString *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)composeNameParentName:(NSString *)parentName childName:(NSString *)childName __attribute__((swift_name("composeName(parentName:childName:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)elementNameDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("elementName(descriptor:index:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)nestedNestedName:(NSString *)nestedName __attribute__((swift_name("nested(nestedName:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)getTag:(id<MEGAAOSSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicModuleBuilder")))
@interface MEGAAOSPolymorphicModuleBuilder<__contravariant Base> : MEGAAOSBase
- (void)defaultDefaultSerializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("default(defaultSerializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: defaultDeserializer")));
- (void)defaultDeserializerDefaultDeserializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("defaultDeserializer(defaultDeserializerProvider:)")));
- (void)subclassSubclass:(id<MEGAAOSKotlinKClass>)subclass serializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("subclass(subclass:serializer:)")));
@end

__attribute__((swift_name("SerializersModule")))
@interface MEGAAOSSerializersModule : MEGAAOSBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MEGAAOSSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSKSerializer> _Nullable)getContextualKClass:(id<MEGAAOSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MEGAAOSKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("SerializersModuleCollector")))
@protocol MEGAAOSSerializersModuleCollector
@required
- (void)contextualKClass:(id<MEGAAOSKotlinKClass>)kClass provider:(id<MEGAAOSKSerializer> (^)(NSArray<id<MEGAAOSKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MEGAAOSKotlinKClass>)kClass serializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass actualClass:(id<MEGAAOSKotlinKClass>)actualClass actualSerializer:(id<MEGAAOSKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultDeserializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultDeserializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultSerializerProvider:(id<MEGAAOSSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersModuleBuilder")))
@interface MEGAAOSSerializersModuleBuilder : MEGAAOSBase <MEGAAOSSerializersModuleCollector>
- (void)contextualKClass:(id<MEGAAOSKotlinKClass>)kClass provider:(id<MEGAAOSKSerializer> (^)(NSArray<id<MEGAAOSKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MEGAAOSKotlinKClass>)kClass serializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)includeModule:(MEGAAOSSerializersModule *)module __attribute__((swift_name("include(module:)")));
- (void)polymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass actualClass:(id<MEGAAOSKotlinKClass>)actualClass actualSerializer:(id<MEGAAOSKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultDeserializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultSerializerProvider:(id<MEGAAOSSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClassSerialDescriptorBuilder")))
@interface MEGAAOSClassSerialDescriptorBuilder : MEGAAOSBase
- (void)elementElementName:(NSString *)elementName descriptor:(id<MEGAAOSSerialDescriptor>)descriptor annotations:(NSArray<id<MEGAAOSKotlinAnnotation>> *)annotations isOptional:(BOOL)isOptional __attribute__((swift_name("element(elementName:descriptor:annotations:isOptional:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property NSArray<id<MEGAAOSKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

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
@interface MEGAAOSSerialKind : MEGAAOSBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("PolymorphicKind")))
@interface MEGAAOSPolymorphicKind : MEGAAOSSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicKind.OPEN")))
@interface MEGAAOSPolymorphicKindOPEN : MEGAAOSPolymorphicKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oPEN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPolymorphicKindOPEN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicKind.SEALED")))
@interface MEGAAOSPolymorphicKindSEALED : MEGAAOSPolymorphicKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sEALED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPolymorphicKindSEALED *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("PrimitiveKind")))
@interface MEGAAOSPrimitiveKind : MEGAAOSSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.BOOLEAN")))
@interface MEGAAOSPrimitiveKindBOOLEAN : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bOOLEAN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindBOOLEAN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.BYTE")))
@interface MEGAAOSPrimitiveKindBYTE : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bYTE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindBYTE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.CHAR")))
@interface MEGAAOSPrimitiveKindCHAR : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cHAR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindCHAR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.DOUBLE")))
@interface MEGAAOSPrimitiveKindDOUBLE : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dOUBLE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindDOUBLE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.FLOAT")))
@interface MEGAAOSPrimitiveKindFLOAT : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fLOAT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindFLOAT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.INT")))
@interface MEGAAOSPrimitiveKindINT : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iNT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindINT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.LONG")))
@interface MEGAAOSPrimitiveKindLONG : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lONG __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindLONG *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.SHORT")))
@interface MEGAAOSPrimitiveKindSHORT : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sHORT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindSHORT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.STRING")))
@interface MEGAAOSPrimitiveKindSTRING : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTRING __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindSTRING *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("SerialDescriptor")))
@protocol MEGAAOSSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MEGAAOSKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

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
@property (readonly) NSArray<id<MEGAAOSKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

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
@property (readonly) MEGAAOSSerialKind *kind __attribute__((swift_name("kind")));

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
@interface MEGAAOSSerialKindCONTEXTUAL : MEGAAOSSerialKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONTEXTUAL __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSerialKindCONTEXTUAL *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialKind.ENUM")))
@interface MEGAAOSSerialKindENUM : MEGAAOSSerialKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eNUM __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSerialKindENUM *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("StructureKind")))
@interface MEGAAOSStructureKind : MEGAAOSSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.CLASS")))
@interface MEGAAOSStructureKindCLASS : MEGAAOSStructureKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cLASS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSStructureKindCLASS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.LIST")))
@interface MEGAAOSStructureKindLIST : MEGAAOSStructureKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lIST __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSStructureKindLIST *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.MAP")))
@interface MEGAAOSStructureKindMAP : MEGAAOSStructureKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mAP __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSStructureKindMAP *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.OBJECT")))
@interface MEGAAOSStructureKindOBJECT : MEGAAOSStructureKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oBJECT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSStructureKindOBJECT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LongAsStringSerializer")))
@interface MEGAAOSLongAsStringSerializer : MEGAAOSBase <MEGAAOSKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)longAsStringSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLongAsStringSerializer *shared __attribute__((swift_name("shared")));
- (MEGAAOSLong *)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(MEGAAOSLong *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("AbstractDecoder")))
@interface MEGAAOSAbstractDecoder : MEGAAOSBase <MEGAAOSDecoder, MEGAAOSCompositeDecoder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MEGAAOSCompositeDecoder>)beginStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (BOOL)decodeBooleanElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (int8_t)decodeByteElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (unichar)decodeCharElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (double)decodeDoubleElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeEnumEnumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (float)decodeFloatElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MEGAAOSDecoder>)decodeInlineDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (id<MEGAAOSDecoder>)decodeInlineElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int32_t)decodeIntElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (int64_t)decodeLongElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MEGAAOSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableValue(deserializer:previousValue:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (int16_t)decodeShortElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (NSString *)decodeStringElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (id)decodeValue __attribute__((swift_name("decodeValue()")));
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("AbstractEncoder")))
@interface MEGAAOSAbstractEncoder : MEGAAOSBase <MEGAAOSEncoder, MEGAAOSCompositeEncoder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MEGAAOSCompositeEncoder>)beginStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeBooleanElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeByteElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeCharElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeDoubleElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (BOOL)encodeElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeElement(descriptor:index:)")));
- (void)encodeEnumEnumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeFloatElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MEGAAOSEncoder>)encodeInlineDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (id<MEGAAOSEncoder>)encodeInlineElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeIntElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeLongElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeShortElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeStringElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)encodeValueValue:(id)value __attribute__((swift_name("encodeValue(value:)")));
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("ChunkedDecoder")))
@protocol MEGAAOSChunkedDecoder
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)decodeStringChunkedConsumeChunk:(void (^)(NSString *))consumeChunk __attribute__((swift_name("decodeStringChunked(consumeChunk:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositeDecoderCompanion")))
@interface MEGAAOSCompositeDecoderCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCompositeDecoderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DECODE_DONE __attribute__((swift_name("DECODE_DONE")));
@property (readonly) int32_t UNKNOWN_NAME __attribute__((swift_name("UNKNOWN_NAME")));
@end

__attribute__((swift_name("AlbumContentScreen")))
@protocol MEGAAOSAlbumContentScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumContentScreenEvent")))
@interface MEGAAOSAlbumContentScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumContentScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumContentScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumContentShareLinkMenuToolbar")))
@protocol MEGAAOSAlbumContentShareLinkMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumContentShareLinkMenuToolbarEvent")))
@interface MEGAAOSAlbumContentShareLinkMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumContentShareLinkMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumContentShareLinkMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumDeselectAll")))
@interface MEGAAOSAlbumDeselectAll : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumDeselectAllEvent")))
@interface MEGAAOSAlbumDeselectAllEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumDeselectAllEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumDeselectAllEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumListShareLinkMenuItem")))
@protocol MEGAAOSAlbumListShareLinkMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumListShareLinkMenuItemEvent")))
@interface MEGAAOSAlbumListShareLinkMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumListShareLinkMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumListShareLinkMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumSelectAll")))
@interface MEGAAOSAlbumSelectAll : MEGAAOSBase
- (instancetype)initWithAlbumsCount:(int32_t)albumsCount __attribute__((swift_name("init(albumsCount:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t albumsCount __attribute__((swift_name("albumsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumSelectAllEvent")))
@interface MEGAAOSAlbumSelectAllEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
- (instancetype)initWithAlbumsCount:(int32_t)albumsCount __attribute__((swift_name("init(albumsCount:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumSelected")))
@interface MEGAAOSAlbumSelected : MEGAAOSBase
- (instancetype)initWithSelectionType:(MEGAAOSAlbumSelectedSelectionType *)selectionType __attribute__((swift_name("init(selectionType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSAlbumSelectedSelectionType *selectionType __attribute__((swift_name("selectionType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumSelected.SelectionType")))
@interface MEGAAOSAlbumSelectedSelectionType : MEGAAOSKotlinEnum<MEGAAOSAlbumSelectedSelectionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSAlbumSelectedSelectionType *single __attribute__((swift_name("single")));
@property (class, readonly) MEGAAOSAlbumSelectedSelectionType *multiadd __attribute__((swift_name("multiadd")));
@property (class, readonly) MEGAAOSAlbumSelectedSelectionType *multiremove __attribute__((swift_name("multiremove")));
+ (MEGAAOSKotlinArray<MEGAAOSAlbumSelectedSelectionType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumSelectedEvent")))
@interface MEGAAOSAlbumSelectedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
- (instancetype)initWithSelectionType:(MEGAAOSAlbumSelectedSelectionType *)selectionType __attribute__((swift_name("init(selectionType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumsTab")))
@protocol MEGAAOSAlbumsTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumsTabEvent")))
@interface MEGAAOSAlbumsTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumsTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumsTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatScreen")))
@protocol MEGAAOSChatScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatScreenEvent")))
@interface MEGAAOSChatScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatsTab")))
@protocol MEGAAOSChatsTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatsTabEvent")))
@interface MEGAAOSChatsTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatsTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatsTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CloudDriveScreen")))
@protocol MEGAAOSCloudDriveScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudDriveScreenEvent")))
@interface MEGAAOSCloudDriveScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cloudDriveScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCloudDriveScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CreateNewAlbumDialog")))
@protocol MEGAAOSCreateNewAlbumDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateNewAlbumDialogEvent")))
@interface MEGAAOSCreateNewAlbumDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createNewAlbumDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCreateNewAlbumDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("DeleteAlbumCancelButtonPressed")))
@protocol MEGAAOSDeleteAlbumCancelButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAlbumCancelButtonPressedEvent")))
@interface MEGAAOSDeleteAlbumCancelButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deleteAlbumCancelButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSDeleteAlbumCancelButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("DeleteAlbumConfirmButtonPressed")))
@protocol MEGAAOSDeleteAlbumConfirmButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAlbumConfirmButtonPressedEvent")))
@interface MEGAAOSDeleteAlbumConfirmButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deleteAlbumConfirmButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSDeleteAlbumConfirmButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("DeleteAlbumsConfirmationDialog")))
@protocol MEGAAOSDeleteAlbumsConfirmationDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAlbumsConfirmationDialogEvent")))
@interface MEGAAOSDeleteAlbumsConfirmationDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deleteAlbumsConfirmationDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSDeleteAlbumsConfirmationDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ExampleButtonPress")))
@protocol MEGAAOSExampleButtonPress
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExampleComplexGeneralEvent")))
@interface MEGAAOSExampleComplexGeneralEvent : MEGAAOSBase
- (instancetype)initWithFoo:(NSString * _Nullable)foo bar:(int32_t)bar fooBar:(int32_t)fooBar __attribute__((swift_name("init(foo:bar:fooBar:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t bar __attribute__((swift_name("bar")));
@property (readonly) NSString * _Nullable foo __attribute__((swift_name("foo")));
@property (readonly) int32_t fooBar __attribute__((swift_name("fooBar")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExampleComplexItemSelected")))
@interface MEGAAOSExampleComplexItemSelected : MEGAAOSBase
- (instancetype)initWithFoo:(NSString * _Nullable)foo bar:(int32_t)bar fooBar:(int32_t)fooBar __attribute__((swift_name("init(foo:bar:fooBar:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t bar __attribute__((swift_name("bar")));
@property (readonly) NSString * _Nullable foo __attribute__((swift_name("foo")));
@property (readonly) int32_t fooBar __attribute__((swift_name("fooBar")));
@end

__attribute__((swift_name("ExampleDialogDisplayed")))
@protocol MEGAAOSExampleDialogDisplayed
@required
@end

__attribute__((swift_name("ExampleMenuItemSelected")))
@protocol MEGAAOSExampleMenuItemSelected
@required
@end

__attribute__((swift_name("ExampleNavigation")))
@protocol MEGAAOSExampleNavigation
@required
@end

__attribute__((swift_name("ExampleNotification")))
@protocol MEGAAOSExampleNotification
@required
@end

__attribute__((swift_name("ExampleScreen")))
@protocol MEGAAOSExampleScreen
@required
@end

__attribute__((swift_name("ExampleSimpleGeneralEvent")))
@protocol MEGAAOSExampleSimpleGeneralEvent
@required
@end

__attribute__((swift_name("ExampleSimpleItemSelected")))
@protocol MEGAAOSExampleSimpleItemSelected
@required
@end

__attribute__((swift_name("ExampleTabSelected")))
@protocol MEGAAOSExampleTabSelected
@required
@end

__attribute__((swift_name("ExcludedClass")))
@protocol MEGAAOSExcludedClass
@required
@end

__attribute__((swift_name("HomeScreen")))
@protocol MEGAAOSHomeScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeScreenEvent")))
@interface MEGAAOSHomeScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("IncomingSharesTab")))
@protocol MEGAAOSIncomingSharesTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IncomingSharesTabEvent")))
@interface MEGAAOSIncomingSharesTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)incomingSharesTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSIncomingSharesTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkConfirmPasswordFileButtonPressed")))
@protocol MEGAAOSLinkConfirmPasswordFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkConfirmPasswordFileButtonPressedEvent")))
@interface MEGAAOSLinkConfirmPasswordFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkConfirmPasswordFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkConfirmPasswordFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkConfirmPasswordFolderButtonPressed")))
@protocol MEGAAOSLinkConfirmPasswordFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkConfirmPasswordFolderButtonPressedEvent")))
@interface MEGAAOSLinkConfirmPasswordFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkConfirmPasswordFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkConfirmPasswordFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkGetLinkForNodesMenuItem")))
@protocol MEGAAOSLinkGetLinkForNodesMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkGetLinkForNodesMenuItemEvent")))
@interface MEGAAOSLinkGetLinkForNodesMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkGetLinkForNodesMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkGetLinkForNodesMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkGetLinkForNodesMenuToolbar")))
@protocol MEGAAOSLinkGetLinkForNodesMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkGetLinkForNodesMenuToolbarEvent")))
@interface MEGAAOSLinkGetLinkForNodesMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkGetLinkForNodesMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkGetLinkForNodesMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkManageLinkTapFileMenuItem")))
@protocol MEGAAOSLinkManageLinkTapFileMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkManageLinkTapFileMenuItemEvent")))
@interface MEGAAOSLinkManageLinkTapFileMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkManageLinkTapFileMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkManageLinkTapFileMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkManageLinkTapFileMenuToolbar")))
@protocol MEGAAOSLinkManageLinkTapFileMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkManageLinkTapFileMenuToolbarEvent")))
@interface MEGAAOSLinkManageLinkTapFileMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkManageLinkTapFileMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkManageLinkTapFileMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkManageLinkTapFolderMenuItem")))
@protocol MEGAAOSLinkManageLinkTapFolderMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkManageLinkTapFolderMenuItemEvent")))
@interface MEGAAOSLinkManageLinkTapFolderMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkManageLinkTapFolderMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkManageLinkTapFolderMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkManageLinkTapFolderMenuToolbar")))
@protocol MEGAAOSLinkManageLinkTapFolderMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkManageLinkTapFolderMenuToolbarEvent")))
@interface MEGAAOSLinkManageLinkTapFolderMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkManageLinkTapFolderMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkManageLinkTapFolderMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFileButtonPressed")))
@protocol MEGAAOSLinkProFeatureSeeNotNowPlanFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFileButtonPressedEvent")))
@interface MEGAAOSLinkProFeatureSeeNotNowPlanFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeeNotNowPlanFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeeNotNowPlanFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFileDialog")))
@protocol MEGAAOSLinkProFeatureSeeNotNowPlanFileDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFileDialogEvent")))
@interface MEGAAOSLinkProFeatureSeeNotNowPlanFileDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeeNotNowPlanFileDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeeNotNowPlanFileDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFolderButtonPressed")))
@protocol MEGAAOSLinkProFeatureSeeNotNowPlanFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFolderButtonPressedEvent")))
@interface MEGAAOSLinkProFeatureSeeNotNowPlanFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeeNotNowPlanFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeeNotNowPlanFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFolderDialog")))
@protocol MEGAAOSLinkProFeatureSeeNotNowPlanFolderDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFolderDialogEvent")))
@interface MEGAAOSLinkProFeatureSeeNotNowPlanFolderDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeeNotNowPlanFolderDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeeNotNowPlanFolderDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeePlanFileButtonPressed")))
@protocol MEGAAOSLinkProFeatureSeePlanFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeePlanFileButtonPressedEvent")))
@interface MEGAAOSLinkProFeatureSeePlanFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeePlanFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeePlanFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeePlanFileDialog")))
@protocol MEGAAOSLinkProFeatureSeePlanFileDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeePlanFileDialogEvent")))
@interface MEGAAOSLinkProFeatureSeePlanFileDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeePlanFileDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeePlanFileDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeePlanFolderButtonPressed")))
@protocol MEGAAOSLinkProFeatureSeePlanFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeePlanFolderButtonPressedEvent")))
@interface MEGAAOSLinkProFeatureSeePlanFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeePlanFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeePlanFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeePlanFolderDialog")))
@protocol MEGAAOSLinkProFeatureSeePlanFolderDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeePlanFolderDialogEvent")))
@interface MEGAAOSLinkProFeatureSeePlanFolderDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeePlanFolderDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeePlanFolderDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkRemovePasswordFileButtonPressed")))
@protocol MEGAAOSLinkRemovePasswordFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkRemovePasswordFileButtonPressedEvent")))
@interface MEGAAOSLinkRemovePasswordFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkRemovePasswordFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkRemovePasswordFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkRemovePasswordFolderButtonPressed")))
@protocol MEGAAOSLinkRemovePasswordFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkRemovePasswordFolderButtonPressedEvent")))
@interface MEGAAOSLinkRemovePasswordFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkRemovePasswordFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkRemovePasswordFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkResetPasswordFileButtonPressed")))
@protocol MEGAAOSLinkResetPasswordFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkResetPasswordFileButtonPressedEvent")))
@interface MEGAAOSLinkResetPasswordFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkResetPasswordFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkResetPasswordFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkResetPasswordFolderButtonPressed")))
@protocol MEGAAOSLinkResetPasswordFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkResetPasswordFolderButtonPressedEvent")))
@interface MEGAAOSLinkResetPasswordFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkResetPasswordFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkResetPasswordFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSendDecryptionKeyFileButtonPressed")))
@protocol MEGAAOSLinkSendDecryptionKeyFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSendDecryptionKeyFileButtonPressedEvent")))
@interface MEGAAOSLinkSendDecryptionKeyFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSendDecryptionKeyFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkSendDecryptionKeyFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSendDecryptionKeyFolderButtonPressed")))
@protocol MEGAAOSLinkSendDecryptionKeyFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSendDecryptionKeyFolderButtonPressedEvent")))
@interface MEGAAOSLinkSendDecryptionKeyFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSendDecryptionKeyFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkSendDecryptionKeyFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSetExpiryDateFileButtonPressed")))
@protocol MEGAAOSLinkSetExpiryDateFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSetExpiryDateFileButtonPressedEvent")))
@interface MEGAAOSLinkSetExpiryDateFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSetExpiryDateFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkSetExpiryDateFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSetExpiryDateFolderButtonPressed")))
@protocol MEGAAOSLinkSetExpiryDateFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSetExpiryDateFolderButtonPressedEvent")))
@interface MEGAAOSLinkSetExpiryDateFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSetExpiryDateFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkSetExpiryDateFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSetPasswordFileButtonPressed")))
@protocol MEGAAOSLinkSetPasswordFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSetPasswordFileButtonPressedEvent")))
@interface MEGAAOSLinkSetPasswordFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSetPasswordFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkSetPasswordFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSetPasswordFolderButtonPressed")))
@protocol MEGAAOSLinkSetPasswordFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSetPasswordFolderButtonPressedEvent")))
@interface MEGAAOSLinkSetPasswordFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSetPasswordFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkSetPasswordFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkForNodesMenuItem")))
@protocol MEGAAOSLinkShareLinkForNodesMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkForNodesMenuItemEvent")))
@interface MEGAAOSLinkShareLinkForNodesMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkForNodesMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkShareLinkForNodesMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkForNodesMenuToolbar")))
@protocol MEGAAOSLinkShareLinkForNodesMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkForNodesMenuToolbarEvent")))
@interface MEGAAOSLinkShareLinkForNodesMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkForNodesMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkShareLinkForNodesMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkTapFileMenuItem")))
@protocol MEGAAOSLinkShareLinkTapFileMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkTapFileMenuItemEvent")))
@interface MEGAAOSLinkShareLinkTapFileMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkTapFileMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkShareLinkTapFileMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkTapFileMenuToolbar")))
@protocol MEGAAOSLinkShareLinkTapFileMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkTapFileMenuToolbarEvent")))
@interface MEGAAOSLinkShareLinkTapFileMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkTapFileMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkShareLinkTapFileMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkTapFolderMenuItem")))
@protocol MEGAAOSLinkShareLinkTapFolderMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkTapFolderMenuItemEvent")))
@interface MEGAAOSLinkShareLinkTapFolderMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkTapFolderMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkShareLinkTapFolderMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkTapFolderMenuToolbar")))
@protocol MEGAAOSLinkShareLinkTapFolderMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkTapFolderMenuToolbarEvent")))
@interface MEGAAOSLinkShareLinkTapFolderMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkTapFolderMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkShareLinkTapFolderMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSharesTab")))
@protocol MEGAAOSLinkSharesTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSharesTabEvent")))
@interface MEGAAOSLinkSharesTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSharesTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkSharesTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("MeetingsTab")))
@protocol MEGAAOSMeetingsTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingsTabEvent")))
@interface MEGAAOSMeetingsTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)meetingsTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSMeetingsTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("MultipleAlbumLinksScreen")))
@protocol MEGAAOSMultipleAlbumLinksScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultipleAlbumLinksScreenEvent")))
@interface MEGAAOSMultipleAlbumLinksScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)multipleAlbumLinksScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSMultipleAlbumLinksScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OfflineTab")))
@protocol MEGAAOSOfflineTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OfflineTabEvent")))
@interface MEGAAOSOfflineTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)offlineTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSOfflineTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OutgoingSharesTab")))
@protocol MEGAAOSOutgoingSharesTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutgoingSharesTabEvent")))
@interface MEGAAOSOutgoingSharesTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)outgoingSharesTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSOutgoingSharesTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("PhotoScreen")))
@protocol MEGAAOSPhotoScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoScreenEvent")))
@interface MEGAAOSPhotoScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)photoScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPhotoScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("RecentsTab")))
@protocol MEGAAOSRecentsTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecentsTabEvent")))
@interface MEGAAOSRecentsTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recentsTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSRecentsTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("RemoveLinksConfirmationDialog")))
@protocol MEGAAOSRemoveLinksConfirmationDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveLinksConfirmationDialogEvent")))
@interface MEGAAOSRemoveLinksConfirmationDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)removeLinksConfirmationDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSRemoveLinksConfirmationDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SharedItemsScreen")))
@protocol MEGAAOSSharedItemsScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedItemsScreenEvent")))
@interface MEGAAOSSharedItemsScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sharedItemsScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSharedItemsScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SingleAlbumLinkScreen")))
@protocol MEGAAOSSingleAlbumLinkScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingleAlbumLinkScreenEvent")))
@interface MEGAAOSSingleAlbumLinkScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)singleAlbumLinkScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSingleAlbumLinkScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SlideShowScreen")))
@protocol MEGAAOSSlideShowScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideShowScreenEvent")))
@interface MEGAAOSSlideShowScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)slideShowScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSlideShowScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("TimelineTab")))
@protocol MEGAAOSTimelineTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimelineTabEvent")))
@interface MEGAAOSTimelineTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)timelineTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSTimelineTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("EventSender")))
@protocol MEGAAOSEventSender
@required
- (void)sendEventEventId:(int32_t)eventId message:(NSString *)message viewId:(NSString * _Nullable)viewId __attribute__((swift_name("sendEvent(eventId:message:viewId:)")));
@end

__attribute__((swift_name("ViewIdProvider")))
@protocol MEGAAOSViewIdProvider
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getViewIdentifierWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getViewIdentifier(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tracker")))
@interface MEGAAOSTracker : MEGAAOSBase
- (instancetype)initWithViewIdProvider:(id<MEGAAOSViewIdProvider>)viewIdProvider eventSender:(id<MEGAAOSEventSender>)eventSender __attribute__((swift_name("init(viewIdProvider:eventSender:)"))) __attribute__((objc_designated_initializer));
- (void)trackEventEventIdentifier:(id<MEGAAOSEventIdentifier>)eventIdentifier __attribute__((swift_name("trackEvent(eventIdentifier:)")));
@end

@interface MEGAAOSJsonPrimitive (Extensions)
@property (readonly) BOOL boolean __attribute__((swift_name("boolean")));
@property (readonly) MEGAAOSBoolean * _Nullable booleanOrNull __attribute__((swift_name("booleanOrNull")));
@property (readonly) NSString * _Nullable contentOrNull __attribute__((swift_name("contentOrNull")));
@property (readonly, getter=double) double double_ __attribute__((swift_name("double_")));
@property (readonly) MEGAAOSDouble * _Nullable doubleOrNull __attribute__((swift_name("doubleOrNull")));
@property (readonly, getter=float) float float_ __attribute__((swift_name("float_")));
@property (readonly) MEGAAOSFloat * _Nullable floatOrNull __attribute__((swift_name("floatOrNull")));
@property (readonly, getter=int) int32_t int_ __attribute__((swift_name("int_")));
@property (readonly) MEGAAOSInt * _Nullable intOrNull __attribute__((swift_name("intOrNull")));
@property (readonly, getter=long) int64_t long_ __attribute__((swift_name("long_")));
@property (readonly) MEGAAOSLong * _Nullable longOrNull __attribute__((swift_name("longOrNull")));
@end

@interface MEGAAOSJsonElement (Extensions)
@property (readonly) NSArray<MEGAAOSJsonElement *> *jsonArray __attribute__((swift_name("jsonArray")));
@property (readonly) MEGAAOSJsonNull *jsonNull __attribute__((swift_name("jsonNull")));
@property (readonly) NSDictionary<NSString *, MEGAAOSJsonElement *> *jsonObject __attribute__((swift_name("jsonObject")));
@property (readonly) MEGAAOSJsonPrimitive *jsonPrimitive __attribute__((swift_name("jsonPrimitive")));
@end

@interface MEGAAOSJsonArrayBuilder (Extensions)
- (BOOL)addValue:(MEGAAOSBoolean * _Nullable)value __attribute__((swift_name("add(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addValue_:(MEGAAOSKotlinNothing * _Nullable)value __attribute__((swift_name("add(value_:)")));
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
- (BOOL)addJsonArrayBuilderAction:(void (^)(MEGAAOSJsonArrayBuilder *))builderAction __attribute__((swift_name("addJsonArray(builderAction:)")));
- (BOOL)addJsonObjectBuilderAction:(void (^)(MEGAAOSJsonObjectBuilder *))builderAction __attribute__((swift_name("addJsonObject(builderAction:)")));
@end

@interface MEGAAOSJson (Extensions)
- (id _Nullable)decodeFromJsonElementJson:(MEGAAOSJsonElement *)json __attribute__((swift_name("decodeFromJsonElement(json:)")));
- (MEGAAOSJsonElement *)encodeToJsonElementValue:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (MEGAAOSJsonElement *)decodeStringToJsonTreeDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer source:(NSString *)source __attribute__((swift_name("decodeStringToJsonTree(deserializer:source:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id _Nullable)readJsonElement:(MEGAAOSJsonElement *)element deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer __attribute__((swift_name("readJson(element:deserializer:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (MEGAAOSJsonElement *)writeJsonValue:(id _Nullable)value serializer:(id<MEGAAOSSerializationStrategy>)serializer __attribute__((swift_name("writeJson(value:serializer:)")));
@end

@interface MEGAAOSJsonObjectBuilder (Extensions)
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key value:(MEGAAOSBoolean * _Nullable)value __attribute__((swift_name("put(key:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key value_:(MEGAAOSKotlinNothing * _Nullable)value __attribute__((swift_name("put(key:value_:)")));
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key value__:(id _Nullable)value __attribute__((swift_name("put(key:value__:)")));
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key value___:(NSString * _Nullable)value __attribute__((swift_name("put(key:value___:)")));
- (MEGAAOSJsonElement * _Nullable)putJsonArrayKey:(NSString *)key builderAction:(void (^)(MEGAAOSJsonArrayBuilder *))builderAction __attribute__((swift_name("putJsonArray(key:builderAction:)")));
- (MEGAAOSJsonElement * _Nullable)putJsonObjectKey:(NSString *)key builderAction:(void (^)(MEGAAOSJsonObjectBuilder *))builderAction __attribute__((swift_name("putJsonObject(key:builderAction:)")));
@end

@interface MEGAAOSAbstractPolymorphicSerializer (Extensions)

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id<MEGAAOSDeserializationStrategy>)findPolymorphicSerializerDecoder:(id<MEGAAOSCompositeDecoder>)decoder klassName:(NSString * _Nullable)klassName __attribute__((swift_name("findPolymorphicSerializer(decoder:klassName:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id<MEGAAOSSerializationStrategy>)findPolymorphicSerializerEncoder:(id<MEGAAOSEncoder>)encoder value:(id)value __attribute__((swift_name("findPolymorphicSerializer(encoder:value:)")));
@end

@interface MEGAAOSSerializersModule (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSKSerializer>)serializerKClass:(id<MEGAAOSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MEGAAOSKSerializer>> *)typeArgumentsSerializers isNullable:(BOOL)isNullable __attribute__((swift_name("serializer(kClass:typeArgumentsSerializers:isNullable:)")));
- (id<MEGAAOSKSerializer>)serializerType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serializer(type:)")));
- (id<MEGAAOSKSerializer> _Nullable)serializerOrNullType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serializerOrNull(type:)")));
- (MEGAAOSSerializersModule *)overwriteWithOther:(MEGAAOSSerializersModule *)other __attribute__((swift_name("overwriteWith(other:)")));
- (MEGAAOSSerializersModule *)plusOther:(MEGAAOSSerializersModule *)other __attribute__((swift_name("plus(other:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSSerialDescriptor> _Nullable)getContextualDescriptorDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("getContextualDescriptor(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MEGAAOSSerialDescriptor>> *)getPolymorphicDescriptorsDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("getPolymorphicDescriptors(descriptor:)")));
@end

@interface MEGAAOSSerializersModuleBuilder (Extensions)
- (void)contextualSerializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("contextual(serializer:)")));
- (void)polymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass baseSerializer:(id<MEGAAOSKSerializer> _Nullable)baseSerializer builderAction:(void (^)(MEGAAOSPolymorphicModuleBuilder<id> *))builderAction __attribute__((swift_name("polymorphic(baseClass:baseSerializer:builderAction:)")));
@end

@interface MEGAAOSPolymorphicModuleBuilder (Extensions)
- (void)subclassClazz:(id<MEGAAOSKotlinKClass>)clazz __attribute__((swift_name("subclass(clazz:)")));
- (void)subclassSerializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("subclass(serializer:)")));
@end

@interface MEGAAOSClassSerialDescriptorBuilder (Extensions)
- (void)elementElementName:(NSString *)elementName annotations:(NSArray<id<MEGAAOSKotlinAnnotation>> *)annotations isOptional:(BOOL)isOptional __attribute__((swift_name("element(elementName:annotations:isOptional:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinBoolean.Companion")))
@interface MEGAAOSKotlinBooleanCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinBooleanCompanion *shared __attribute__((swift_name("shared")));
@end

@interface MEGAAOSKotlinBooleanCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByte.Companion")))
@interface MEGAAOSKotlinByteCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinByteCompanion *shared __attribute__((swift_name("shared")));
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

@interface MEGAAOSKotlinByteCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinChar.Companion")))
@interface MEGAAOSKotlinCharCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinCharCompanion *shared __attribute__((swift_name("shared")));
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

@interface MEGAAOSKotlinCharCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDouble.Companion")))
@interface MEGAAOSKotlinDoubleCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinDoubleCompanion *shared __attribute__((swift_name("shared")));
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

@interface MEGAAOSKotlinDoubleCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloat.Companion")))
@interface MEGAAOSKotlinFloatCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinFloatCompanion *shared __attribute__((swift_name("shared")));
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

@interface MEGAAOSKotlinFloatCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinInt.Companion")))
@interface MEGAAOSKotlinIntCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinIntCompanion *shared __attribute__((swift_name("shared")));
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

@interface MEGAAOSKotlinIntCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLong.Companion")))
@interface MEGAAOSKotlinLongCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinLongCompanion *shared __attribute__((swift_name("shared")));
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

@interface MEGAAOSKotlinLongCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinShort.Companion")))
@interface MEGAAOSKotlinShortCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinShortCompanion *shared __attribute__((swift_name("shared")));
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

@interface MEGAAOSKotlinShortCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinString.Companion")))
@interface MEGAAOSKotlinStringCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinStringCompanion *shared __attribute__((swift_name("shared")));
@end

@interface MEGAAOSKotlinStringCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUByte.Companion")))
@interface MEGAAOSKotlinUByteCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinUByteCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) uint8_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) uint8_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinUByteCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUInt.Companion")))
@interface MEGAAOSKotlinUIntCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinUIntCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) uint32_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) uint32_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinUIntCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinULong.Companion")))
@interface MEGAAOSKotlinULongCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinULongCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) uint64_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) uint64_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinULongCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUShort.Companion")))
@interface MEGAAOSKotlinUShortCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinUShortCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) uint16_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) uint16_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinUShortCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MEGAAOSKotlinUnit : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

@interface MEGAAOSKotlinUnit (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDuration.Companion")))
@interface MEGAAOSKotlinDurationCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinDurationCompanion *shared __attribute__((swift_name("shared")));
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
- (double)convertValue:(double)value sourceUnit:(MEGAAOSKotlinDurationUnit *)sourceUnit targetUnit:(MEGAAOSKotlinDurationUnit *)targetUnit __attribute__((swift_name("convert(value:sourceUnit:targetUnit:)")));

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

@interface MEGAAOSKotlinDurationCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface MEGAAOSPlatform_iosKt : MEGAAOSBase
+ (id<MEGAAOSPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonKt")))
@interface MEGAAOSJsonKt : MEGAAOSBase
+ (MEGAAOSJson *)JsonFrom:(MEGAAOSJson *)from builderAction:(void (^)(MEGAAOSJsonBuilder *))builderAction __attribute__((swift_name("Json(from:builderAction:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElementKt")))
@interface MEGAAOSJsonElementKt : MEGAAOSBase
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue:(MEGAAOSBoolean * _Nullable)value __attribute__((swift_name("JsonPrimitive(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAAOSJsonNull *)JsonPrimitiveValue_:(MEGAAOSKotlinNothing * _Nullable)value __attribute__((swift_name("JsonPrimitive(value_:)")));
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue__:(id _Nullable)value __attribute__((swift_name("JsonPrimitive(value__:)")));
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue___:(NSString * _Nullable)value __attribute__((swift_name("JsonPrimitive(value___:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue____:(uint8_t)value __attribute__((swift_name("JsonPrimitive(value____:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue_____:(uint32_t)value __attribute__((swift_name("JsonPrimitive(value_____:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue______:(uint64_t)value __attribute__((swift_name("JsonPrimitive(value______:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue_______:(uint16_t)value __attribute__((swift_name("JsonPrimitive(value_______:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAAOSJsonPrimitive *)JsonUnquotedLiteralValue:(NSString * _Nullable)value __attribute__((swift_name("JsonUnquotedLiteral(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElementBuildersKt")))
@interface MEGAAOSJsonElementBuildersKt : MEGAAOSBase
+ (NSArray<MEGAAOSJsonElement *> *)buildJsonArrayBuilderAction:(void (^)(MEGAAOSJsonArrayBuilder *))builderAction __attribute__((swift_name("buildJsonArray(builderAction:)")));
+ (NSDictionary<NSString *, MEGAAOSJsonElement *> *)buildJsonObjectBuilderAction:(void (^)(MEGAAOSJsonObjectBuilder *))builderAction __attribute__((swift_name("buildJsonObject(builderAction:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersKt")))
@interface MEGAAOSSerializersKt : MEGAAOSBase
+ (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)serializerKClass:(id<MEGAAOSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MEGAAOSKSerializer>> *)typeArgumentsSerializers isNullable:(BOOL)isNullable __attribute__((swift_name("serializer(kClass:typeArgumentsSerializers:isNullable:)")));
+ (id<MEGAAOSKSerializer>)serializerType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serializer(type:)")));
+ (id<MEGAAOSKSerializer> _Nullable)serializerOrNullType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serializerOrNull(type:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)serializer:(id<MEGAAOSKotlinKClass>)receiver __attribute__((swift_name("serializer(_:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAAOSKSerializer> _Nullable)serializerOrNull:(id<MEGAAOSKotlinKClass>)receiver __attribute__((swift_name("serializerOrNull(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialFormatKt")))
@interface MEGAAOSSerialFormatKt : MEGAAOSBase
+ (id _Nullable)decodeFromByteArray:(id<MEGAAOSBinaryFormat>)receiver bytes:(MEGAAOSKotlinByteArray *)bytes __attribute__((swift_name("decodeFromByteArray(_:bytes:)")));
+ (id _Nullable)decodeFromHexString:(id<MEGAAOSBinaryFormat>)receiver hex:(NSString *)hex __attribute__((swift_name("decodeFromHexString(_:hex:)")));
+ (id _Nullable)decodeFromHexString:(id<MEGAAOSBinaryFormat>)receiver deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer hex:(NSString *)hex __attribute__((swift_name("decodeFromHexString(_:deserializer:hex:)")));
+ (id _Nullable)decodeFromString:(id<MEGAAOSStringFormat>)receiver string:(NSString *)string __attribute__((swift_name("decodeFromString(_:string:)")));
+ (MEGAAOSKotlinByteArray *)encodeToByteArray:(id<MEGAAOSBinaryFormat>)receiver value:(id _Nullable)value __attribute__((swift_name("encodeToByteArray(_:value:)")));
+ (NSString *)encodeToHexString:(id<MEGAAOSBinaryFormat>)receiver value:(id _Nullable)value __attribute__((swift_name("encodeToHexString(_:value:)")));
+ (NSString *)encodeToHexString:(id<MEGAAOSBinaryFormat>)receiver serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToHexString(_:serializer:value:)")));
+ (NSString *)encodeToString:(id<MEGAAOSStringFormat>)receiver value:(id _Nullable)value __attribute__((swift_name("encodeToString(_:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InlineClassDescriptorKt")))
@interface MEGAAOSInlineClassDescriptorKt : MEGAAOSBase

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)InlinePrimitiveDescriptorName:(NSString *)name primitiveSerializer:(id<MEGAAOSKSerializer>)primitiveSerializer __attribute__((swift_name("InlinePrimitiveDescriptor(name:primitiveSerializer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginExceptionsKt")))
@interface MEGAAOSPluginExceptionsKt : MEGAAOSBase

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (void)throwArrayMissingFieldExceptionSeenArray:(MEGAAOSKotlinIntArray *)seenArray goldenMaskArray:(MEGAAOSKotlinIntArray *)goldenMaskArray descriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("throwArrayMissingFieldException(seenArray:goldenMaskArray:descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (void)throwMissingFieldExceptionSeen:(int32_t)seen goldenMask:(int32_t)goldenMask descriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("throwMissingFieldException(seen:goldenMask:descriptor:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonInternalDependenciesKt")))
@interface MEGAAOSJsonInternalDependenciesKt : MEGAAOSBase

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (NSSet<NSString *> *)jsonCachedSerialNames:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("jsonCachedSerialNames(_:)"))) __attribute__((unavailable("Should not be used")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersModuleKt")))
@interface MEGAAOSSerializersModuleKt : MEGAAOSBase
@property (class, readonly) MEGAAOSSerializersModule *EmptySerializersModule __attribute__((swift_name("EmptySerializersModule"))) __attribute__((deprecated("Deprecated in the favour of 'EmptySerializersModule()'")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersModuleBuildersKt")))
@interface MEGAAOSSerializersModuleBuildersKt : MEGAAOSBase
+ (MEGAAOSSerializersModule *)EmptySerializersModule __attribute__((swift_name("EmptySerializersModule()")));
+ (MEGAAOSSerializersModule *)SerializersModuleBuilderAction:(void (^)(MEGAAOSSerializersModuleBuilder *))builderAction __attribute__((swift_name("SerializersModule(builderAction:)")));
+ (MEGAAOSSerializersModule *)serializersModuleOfKClass:(id<MEGAAOSKotlinKClass>)kClass serializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializersModuleOf(kClass:serializer:)")));
+ (MEGAAOSSerializersModule *)serializersModuleOfSerializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializersModuleOf(serializer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextAwareKt")))
@interface MEGAAOSContextAwareKt : MEGAAOSBase
+ (id<MEGAAOSKotlinKClass> _Nullable)capturedKClass:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("capturedKClass(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialDescriptorKt")))
@interface MEGAAOSSerialDescriptorKt : MEGAAOSBase
+ (id)elementDescriptors:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("elementDescriptors(_:)")));
+ (id)elementNames:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("elementNames(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialDescriptorsKt")))
@interface MEGAAOSSerialDescriptorsKt : MEGAAOSBase
+ (id<MEGAAOSSerialDescriptor>)nullable:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("nullable(_:)")));
+ (id<MEGAAOSSerialDescriptor>)PrimitiveSerialDescriptorSerialName:(NSString *)serialName kind:(MEGAAOSPrimitiveKind *)kind __attribute__((swift_name("PrimitiveSerialDescriptor(serialName:kind:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)SerialDescriptorSerialName:(NSString *)serialName original:(id<MEGAAOSSerialDescriptor>)original __attribute__((swift_name("SerialDescriptor(serialName:original:)")));
+ (id<MEGAAOSSerialDescriptor>)buildClassSerialDescriptorSerialName:(NSString *)serialName typeParameters:(MEGAAOSKotlinArray<id<MEGAAOSSerialDescriptor>> *)typeParameters builderAction:(void (^)(MEGAAOSClassSerialDescriptorBuilder *))builderAction __attribute__((swift_name("buildClassSerialDescriptor(serialName:typeParameters:builderAction:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)buildSerialDescriptorSerialName:(NSString *)serialName kind:(MEGAAOSSerialKind *)kind typeParameters:(MEGAAOSKotlinArray<id<MEGAAOSSerialDescriptor>> *)typeParameters builder:(void (^)(MEGAAOSClassSerialDescriptorBuilder *))builder __attribute__((swift_name("buildSerialDescriptor(serialName:kind:typeParameters:builder:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)listSerialDescriptor __attribute__((swift_name("listSerialDescriptor()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)listSerialDescriptorElementDescriptor:(id<MEGAAOSSerialDescriptor>)elementDescriptor __attribute__((swift_name("listSerialDescriptor(elementDescriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)mapSerialDescriptor __attribute__((swift_name("mapSerialDescriptor()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)mapSerialDescriptorKeyDescriptor:(id<MEGAAOSSerialDescriptor>)keyDescriptor valueDescriptor:(id<MEGAAOSSerialDescriptor>)valueDescriptor __attribute__((swift_name("mapSerialDescriptor(keyDescriptor:valueDescriptor:)")));
+ (id<MEGAAOSSerialDescriptor>)serialDescriptor __attribute__((swift_name("serialDescriptor()")));
+ (id<MEGAAOSSerialDescriptor>)serialDescriptorType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serialDescriptor(type:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)setSerialDescriptor __attribute__((swift_name("setSerialDescriptor()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)setSerialDescriptorElementDescriptor:(id<MEGAAOSSerialDescriptor>)elementDescriptor __attribute__((swift_name("setSerialDescriptor(elementDescriptor:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuiltinSerializersKt")))
@interface MEGAAOSBuiltinSerializersKt : MEGAAOSBase
+ (id<MEGAAOSKSerializer>)nullable:(id<MEGAAOSKSerializer>)receiver __attribute__((swift_name("nullable(_:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)ArraySerializerKClass:(id<MEGAAOSKotlinKClass>)kClass elementSerializer:(id<MEGAAOSKSerializer>)elementSerializer __attribute__((swift_name("ArraySerializer(kClass:elementSerializer:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)ArraySerializerElementSerializer:(id<MEGAAOSKSerializer>)elementSerializer __attribute__((swift_name("ArraySerializer(elementSerializer:)")));
+ (id<MEGAAOSKSerializer>)BooleanArraySerializer __attribute__((swift_name("BooleanArraySerializer()")));
+ (id<MEGAAOSKSerializer>)ByteArraySerializer __attribute__((swift_name("ByteArraySerializer()")));
+ (id<MEGAAOSKSerializer>)CharArraySerializer __attribute__((swift_name("CharArraySerializer()")));
+ (id<MEGAAOSKSerializer>)DoubleArraySerializer __attribute__((swift_name("DoubleArraySerializer()")));
+ (id<MEGAAOSKSerializer>)FloatArraySerializer __attribute__((swift_name("FloatArraySerializer()")));
+ (id<MEGAAOSKSerializer>)IntArraySerializer __attribute__((swift_name("IntArraySerializer()")));
+ (id<MEGAAOSKSerializer>)ListSerializerElementSerializer:(id<MEGAAOSKSerializer>)elementSerializer __attribute__((swift_name("ListSerializer(elementSerializer:)")));
+ (id<MEGAAOSKSerializer>)LongArraySerializer __attribute__((swift_name("LongArraySerializer()")));
+ (id<MEGAAOSKSerializer>)MapEntrySerializerKeySerializer:(id<MEGAAOSKSerializer>)keySerializer valueSerializer:(id<MEGAAOSKSerializer>)valueSerializer __attribute__((swift_name("MapEntrySerializer(keySerializer:valueSerializer:)")));
+ (id<MEGAAOSKSerializer>)MapSerializerKeySerializer:(id<MEGAAOSKSerializer>)keySerializer valueSerializer:(id<MEGAAOSKSerializer>)valueSerializer __attribute__((swift_name("MapSerializer(keySerializer:valueSerializer:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)NothingSerializer __attribute__((swift_name("NothingSerializer()")));
+ (id<MEGAAOSKSerializer>)PairSerializerKeySerializer:(id<MEGAAOSKSerializer>)keySerializer valueSerializer:(id<MEGAAOSKSerializer>)valueSerializer __attribute__((swift_name("PairSerializer(keySerializer:valueSerializer:)")));
+ (id<MEGAAOSKSerializer>)SetSerializerElementSerializer:(id<MEGAAOSKSerializer>)elementSerializer __attribute__((swift_name("SetSerializer(elementSerializer:)")));
+ (id<MEGAAOSKSerializer>)ShortArraySerializer __attribute__((swift_name("ShortArraySerializer()")));
+ (id<MEGAAOSKSerializer>)TripleSerializerASerializer:(id<MEGAAOSKSerializer>)aSerializer bSerializer:(id<MEGAAOSKSerializer>)bSerializer cSerializer:(id<MEGAAOSKSerializer>)cSerializer __attribute__((swift_name("TripleSerializer(aSerializer:bSerializer:cSerializer:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAAOSKSerializer>)UByteArraySerializer __attribute__((swift_name("UByteArraySerializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAAOSKSerializer>)UIntArraySerializer __attribute__((swift_name("UIntArraySerializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAAOSKSerializer>)ULongArraySerializer __attribute__((swift_name("ULongArraySerializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAAOSKSerializer>)UShortArraySerializer __attribute__((swift_name("UShortArraySerializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecodingKt")))
@interface MEGAAOSDecodingKt : MEGAAOSBase
+ (id _Nullable)decodeStructure:(id<MEGAAOSDecoder>)receiver descriptor:(id<MEGAAOSSerialDescriptor>)descriptor block:(id _Nullable (^)(id<MEGAAOSCompositeDecoder>))block __attribute__((swift_name("decodeStructure(_:descriptor:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncodingKt")))
@interface MEGAAOSEncodingKt : MEGAAOSBase
+ (void)encodeCollection:(id<MEGAAOSEncoder>)receiver descriptor:(id<MEGAAOSSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize block:(void (^)(id<MEGAAOSCompositeEncoder>))block __attribute__((swift_name("encodeCollection(_:descriptor:collectionSize:block:)")));
+ (void)encodeCollection:(id<MEGAAOSEncoder>)receiver descriptor:(id<MEGAAOSSerialDescriptor>)descriptor collection:(id)collection block:(void (^)(id<MEGAAOSCompositeEncoder>, MEGAAOSInt *, id _Nullable))block __attribute__((swift_name("encodeCollection(_:descriptor:collection:block:)")));
+ (void)encodeStructure:(id<MEGAAOSEncoder>)receiver descriptor:(id<MEGAAOSSerialDescriptor>)descriptor block:(void (^)(id<MEGAAOSCompositeEncoder>))block __attribute__((swift_name("encodeStructure(_:descriptor:block:)")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol MEGAAOSKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol MEGAAOSKotlinSuspendFunction0 <MEGAAOSKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MEGAAOSKotlinIllegalStateException : MEGAAOSKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MEGAAOSKotlinCancellationException : MEGAAOSKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MEGAAOSKotlinEnumCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MEGAAOSKotlinArray<T> : MEGAAOSBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MEGAAOSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MEGAAOSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MEGAAOSKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MEGAAOSKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol MEGAAOSKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol MEGAAOSKotlinKClass <MEGAAOSKotlinKDeclarationContainer, MEGAAOSKotlinKAnnotatedElement, MEGAAOSKotlinKClassifier>
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
@interface MEGAAOSKotlinNothing : MEGAAOSBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MEGAAOSKotlinByteArray : MEGAAOSBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MEGAAOSByte *(^)(MEGAAOSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MEGAAOSKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MEGAAOSKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol MEGAAOSKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MEGAAOSKotlinAnnotation
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol MEGAAOSKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<MEGAAOSKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<MEGAAOSKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.6")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDurationUnit")))
@interface MEGAAOSKotlinDurationUnit : MEGAAOSKotlinEnum<MEGAAOSKotlinDurationUnit *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSKotlinDurationUnit *nanoseconds __attribute__((swift_name("nanoseconds")));
@property (class, readonly) MEGAAOSKotlinDurationUnit *microseconds __attribute__((swift_name("microseconds")));
@property (class, readonly) MEGAAOSKotlinDurationUnit *milliseconds __attribute__((swift_name("milliseconds")));
@property (class, readonly) MEGAAOSKotlinDurationUnit *seconds __attribute__((swift_name("seconds")));
@property (class, readonly) MEGAAOSKotlinDurationUnit *minutes __attribute__((swift_name("minutes")));
@property (class, readonly) MEGAAOSKotlinDurationUnit *hours __attribute__((swift_name("hours")));
@property (class, readonly) MEGAAOSKotlinDurationUnit *days __attribute__((swift_name("days")));
+ (MEGAAOSKotlinArray<MEGAAOSKotlinDurationUnit *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface MEGAAOSKotlinIntArray : MEGAAOSBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MEGAAOSInt *(^)(MEGAAOSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MEGAAOSKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface MEGAAOSKotlinByteIterator : MEGAAOSBase <MEGAAOSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MEGAAOSByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface MEGAAOSKotlinKTypeProjection : MEGAAOSBase
- (instancetype)initWithVariance:(MEGAAOSKotlinKVariance * _Nullable)variance type:(id<MEGAAOSKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MEGAAOSKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (MEGAAOSKotlinKTypeProjection *)doCopyVariance:(MEGAAOSKotlinKVariance * _Nullable)variance type:(id<MEGAAOSKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MEGAAOSKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) MEGAAOSKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface MEGAAOSKotlinIntIterator : MEGAAOSBase <MEGAAOSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MEGAAOSInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface MEGAAOSKotlinKVariance : MEGAAOSKotlinEnum<MEGAAOSKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) MEGAAOSKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) MEGAAOSKotlinKVariance *out __attribute__((swift_name("out")));
+ (MEGAAOSKotlinArray<MEGAAOSKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface MEGAAOSKotlinKTypeProjectionCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MEGAAOSKotlinKTypeProjection *)contravariantType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MEGAAOSKotlinKTypeProjection *)covariantType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MEGAAOSKotlinKTypeProjection *)invariantType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) MEGAAOSKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
