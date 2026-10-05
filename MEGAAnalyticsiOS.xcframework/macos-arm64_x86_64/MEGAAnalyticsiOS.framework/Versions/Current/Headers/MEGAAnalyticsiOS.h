#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MEGAAOSAbstractCollectionSerializer<Element, Collection, Builder>, MEGAAOSAbstractPolymorphicSerializer<T>, MEGAAOSAlbumSelectedSelectionType, MEGAAOSAnalyticsEvent, MEGAAOSAppIdentifier, MEGAAOSAudioPlayStartedAuthStatus, MEGAAOSAudioPlayStartedLinkType, MEGAAOSAudioPlaybackFailedAuthStatus, MEGAAOSAudioPlaybackStartedAuthStatus, MEGAAOSChatImageAttachmentItemSelectedSelectionType, MEGAAOSClassDiscriminatorMode, MEGAAOSClassSerialDescriptorBuilder, MEGAAOSCompositeDecoderCompanion, MEGAAOSDecodeSequenceMode, MEGAAOSDeviceCenterItemClickedItemType, MEGAAOSFileOpenFileOpenContext, MEGAAOSGeneralEvent, MEGAAOSInstantComponentSerializer, MEGAAOSInternalJsonWriterCompanion, MEGAAOSItemSelectedEvent, MEGAAOSJson, MEGAAOSJsonArrayBuilder, MEGAAOSJsonBuilder, MEGAAOSJsonConfiguration, MEGAAOSJsonDefault, MEGAAOSJsonElement, MEGAAOSJsonElementCompanion, MEGAAOSJsonException, MEGAAOSJsonNamingStrategyBuiltins, MEGAAOSJsonNull, MEGAAOSJsonObjectBuilder, MEGAAOSJsonPrimitive, MEGAAOSJsonPrimitiveCompanion, MEGAAOSKotlinArray<T>, MEGAAOSKotlinBooleanCompanion, MEGAAOSKotlinByteArray, MEGAAOSKotlinByteCompanion, MEGAAOSKotlinByteIterator, MEGAAOSKotlinCharArray, MEGAAOSKotlinCharCompanion, MEGAAOSKotlinCharIterator, MEGAAOSKotlinDoubleCompanion, MEGAAOSKotlinDurationCompanion, MEGAAOSKotlinDurationUnit, MEGAAOSKotlinEnum<E>, MEGAAOSKotlinEnumCompanion, MEGAAOSKotlinException, MEGAAOSKotlinFloatCompanion, MEGAAOSKotlinIllegalArgumentException, MEGAAOSKotlinIllegalStateException, MEGAAOSKotlinInstant, MEGAAOSKotlinInstantCompanion, MEGAAOSKotlinIntArray, MEGAAOSKotlinIntCompanion, MEGAAOSKotlinIntIterator, MEGAAOSKotlinKTypeProjection, MEGAAOSKotlinKTypeProjectionCompanion, MEGAAOSKotlinKVariance, MEGAAOSKotlinLongCompanion, MEGAAOSKotlinNothing, MEGAAOSKotlinRuntimeException, MEGAAOSKotlinShortCompanion, MEGAAOSKotlinStringCompanion, MEGAAOSKotlinThrowable, MEGAAOSKotlinUByteCompanion, MEGAAOSKotlinUIntCompanion, MEGAAOSKotlinULongCompanion, MEGAAOSKotlinUShortCompanion, MEGAAOSKotlinUnit, MEGAAOSKotlinUuid, MEGAAOSKotlinUuidCompanion, MEGAAOSLongAsStringSerializer, MEGAAOSMissingFieldException, MEGAAOSNotificationEvent, MEGAAOSPhotoItemSelectedSelectionType, MEGAAOSPolymorphicKind, MEGAAOSPolymorphicKindOPEN, MEGAAOSPolymorphicKindSEALED, MEGAAOSPolymorphicModuleBuilder<__contravariant Base>, MEGAAOSPrimitiveKind, MEGAAOSPrimitiveKindBOOLEAN, MEGAAOSPrimitiveKindBYTE, MEGAAOSPrimitiveKindCHAR, MEGAAOSPrimitiveKindDOUBLE, MEGAAOSPrimitiveKindFLOAT, MEGAAOSPrimitiveKindINT, MEGAAOSPrimitiveKindLONG, MEGAAOSPrimitiveKindSHORT, MEGAAOSPrimitiveKindSTRING, MEGAAOSScreenViewEvent, MEGAAOSSearchItemSelectedSearchItemType, MEGAAOSSerialKind, MEGAAOSSerialKindCONTEXTUAL, MEGAAOSSerialKindENUM, MEGAAOSSerializationException, MEGAAOSSerializersModule, MEGAAOSSerializersModuleBuilder, MEGAAOSShareLinkOpenedAuthStatus, MEGAAOSShareLinkOpenedLinkType, MEGAAOSStructureKind, MEGAAOSStructureKindCLASS, MEGAAOSStructureKindLIST, MEGAAOSStructureKindMAP, MEGAAOSStructureKindOBJECT, MEGAAOSSyncOptionSelectedSelectionType, MEGAAOSSyncPowerOptionSelectedSelectionType, MEGAAOSTabSelectedEvent, MEGAAOSTaggedDecoder<Tag>, MEGAAOSTaggedEncoder<Tag>, MEGAAOSVideoPlayStartedAuthStatus, MEGAAOSVideoPlayStartedLinkType, MEGAAOSVideoPlaybackFirstFrameNewVPVideoPlaybackScenario, MEGAAOSVideoPlaybackFirstFrameVideoPlaybackScenario, MEGAAOSVideoPlaybackStallNewVPVideoPlaybackScenario, MEGAAOSVideoPlaybackStallVideoPlaybackScenario, MEGAAOSVideoPlaybackStartupFailureNewVPVideoPlaybackScenario, MEGAAOSVideoPlaybackStartupFailureVideoPlaybackScenario;

@protocol MEGAAOSBinaryFormat, MEGAAOSButtonPressedEventIdentifier, MEGAAOSCompositeDecoder, MEGAAOSCompositeEncoder, MEGAAOSDecoder, MEGAAOSDeserializationStrategy, MEGAAOSDialogDisplayedEventIdentifier, MEGAAOSEncoder, MEGAAOSEventDataMapper, MEGAAOSEventIdentifier, MEGAAOSEventSender, MEGAAOSGeneralEventIdentifier, MEGAAOSGestureEventIdentifier, MEGAAOSInternalJsonReader, MEGAAOSInternalJsonWriter, MEGAAOSItemSelectedEventIdentifier, MEGAAOSJsonNamingStrategy, MEGAAOSKSerializer, MEGAAOSKotlinAnnotation, MEGAAOSKotlinComparable, MEGAAOSKotlinComparator, MEGAAOSKotlinFunction, MEGAAOSKotlinIterator, MEGAAOSKotlinKAnnotatedElement, MEGAAOSKotlinKClass, MEGAAOSKotlinKClassifier, MEGAAOSKotlinKDeclarationContainer, MEGAAOSKotlinKType, MEGAAOSKotlinMapEntry, MEGAAOSKotlinSequence, MEGAAOSKotlinSuspendFunction0, MEGAAOSLegacyEventIdentifier, MEGAAOSMenuItemEventIdentifier, MEGAAOSNavigationEventIdentifier, MEGAAOSNotificationEventIdentifier, MEGAAOSPlatform, MEGAAOSScreenViewEventIdentifier, MEGAAOSSerialDescriptor, MEGAAOSSerialFormat, MEGAAOSSerializationStrategy, MEGAAOSSerializersModuleCollector, MEGAAOSStringFormat, MEGAAOSTabSelectedEventIdentifier, MEGAAOSViewIdProvider;

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


/**
 * Represents an instance of a serialization format
 * that can interact with [KSerializer] and is a supertype of all entry points for a serialization.
 * It does not impose any restrictions on a serialized form or underlying storage, neither it exposes them.
 *
 * Concrete data types and API for user-interaction are responsibility of a concrete subclass or subinterface,
 * for example [StringFormat], [BinaryFormat] or `Json`.
 *
 * Typically, formats have their specific [Encoder] and [Decoder] implementations
 * as private classes and do not expose them.
 *
 * ### Exception types for `SerialFormat` implementation
 *
 * Methods responsible for format-specific encoding and decoding are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors. It is recommended to throw subtypes of [SerializationException]
 * for encoder and decoder specific errors and [IllegalArgumentException] for input
 * and output validation-specific errors.
 *
 * For formats
 *
 * ### Not stable for inheritance
 *
 * `SerialFormat` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * It is safe to operate with instances of `SerialFormat` and call its methods.
 */
__attribute__((swift_name("SerialFormat")))
@protocol MEGAAOSSerialFormat
@required

/**
 * Contains all serializers registered by format user for [Contextual] and [Polymorphic] serialization.
 *
 * The same module should be exposed in the format's [Encoder] and [Decoder].
 */
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerialFormat] that allows conversions to and from [ByteArray] via [encodeToByteArray] and [decodeFromByteArray] methods.
 *
 * ### Not stable for inheritance
 *
 * `BinaryFormat` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * It is safe to operate with instances of `BinaryFormat` and call its methods.
 */
__attribute__((swift_name("BinaryFormat")))
@protocol MEGAAOSBinaryFormat <MEGAAOSSerialFormat>
@required

/**
 * Decodes and deserializes the given [byte array][bytes] to the value of type [T] using the given [deserializer].
 *
 * @throws SerializationException in case of any decoding-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 */
- (id _Nullable)decodeFromByteArrayDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer bytes:(MEGAAOSKotlinByteArray *)bytes __attribute__((swift_name("decodeFromByteArray(deserializer:bytes:)")));

/**
 * Serializes and encodes the given [value] to byte array using the given [serializer].
 *
 * @throws SerializationException in case of any encoding-specific error
 * @throws IllegalArgumentException if the encoded input does not comply format's specification
 */
- (MEGAAOSKotlinByteArray *)encodeToByteArraySerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToByteArray(serializer:value:)")));
@end


/**
 * Serialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual serialization process, defined by the implementation
 * of the [serialize] method.
 *
 * [serialize] method takes an instance of [T] and transforms it into its serial form (a sequence of primitives),
 * calling the corresponding [Encoder] methods.
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("SerializationStrategy")))
@protocol MEGAAOSSerializationStrategy
@required

/**
 * Serializes the [value] of type [T] using the format that is represented by the given [encoder].
 * [serialize] method is format-agnostic and operates with a high-level structured [Encoder] API.
 * Throws [SerializationException] if value cannot be serialized.
 *
 * Example of serialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * @throws SerializationException in case of any serialization-specific error
 * @throws IllegalArgumentException if the supplied input does not comply encoder's specification
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Describes the structure of the serializable representation of [T], produced
 * by this serializer.
 */
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Deserialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual deserialization process, defined by the implementation
 * of the [deserialize] method.
 *
 * [deserialize] method takes an instance of [Decoder], and, knowing the serial form of the [T],
 * invokes primitive retrieval methods on the decoder and then transforms the received primitives
 * to an instance of [T].
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("DeserializationStrategy")))
@protocol MEGAAOSDeserializationStrategy
@required

/**
 * Deserializes the value of type [T] using the format that is represented by the given [decoder].
 * [deserialize] method is format-agnostic and operates with a high-level structured [Decoder] API.
 * As long as most of the formats imply an arbitrary order of properties, deserializer should be able
 * to decode these properties in an arbitrary order and in a format-agnostic way.
 * For that purposes, [CompositeDecoder.decodeElementIndex]-based loop is used: decoder firstly
 * signals property at which index it is ready to decode and then expects caller to decode
 * property with the given index.
 *
 * Throws [SerializationException] if value cannot be deserialized.
 *
 * Example of deserialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun deserialize(decoder: Decoder): MyData = decoder.decodeStructure(descriptor) {
 *     // decodeStructure decodes beginning and end of the structure
 *     var int: Int? = null
 *     var list: List<String>? = null
 *     loop@ while (true) {
 *         when (val index = decodeElementIndex(descriptor)) {
 *             DECODE_DONE -> break@loop
 *             0 -> {
 *                 // Decode 'int' property as Int
 *                 int = decodeIntElement(descriptor, index = 0)
 *             }
 *             1 -> {
 *                 // Decode 'stringList' property as List<String>
 *                 list = decodeSerializableElement(descriptor, index = 1, serializer<List<String>>())
 *             }
 *             else -> throw SerializationException("Unexpected index $index")
 *         }
 *      }
 *     if (int == null || list == null) throwMissingFieldException()
 *     // Always use 0 as a value for alwaysZero property because we decided to do so.
 *     return MyData(int, list, alwaysZero = 0L)
 * }
 * ```
 *
 * @throws MissingFieldException if non-optional fields were not found during deserialization
 * @throws SerializationException in case of any deserialization-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (id _Nullable)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Describes the structure of the serializable representation of [T], that current
 * deserializer is able to deserialize.
 */
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * KSerializer is responsible for the representation of a serial form of a type [T]
 * in terms of [encoders][Encoder] and [decoders][Decoder] and for constructing and deconstructing [T]
 * from/to a sequence of encoding primitives. For classes marked with [@Serializable][Serializable], can be
 * obtained from generated companion extension `.serializer()` or from [serializer<T>()][serializer] function.
 *
 * Serialization is decoupled from the encoding process to make it completely format-agnostic.
 * Serialization represents a type as its serial form and is abstracted from the actual
 * format (whether its JSON, ProtoBuf or a hashing) and unaware of the underlying storage
 * (whether it is a string builder, byte array or a network socket), while
 * encoding/decoding is abstracted from a particular type and its serial form and is responsible
 * for transforming primitives ("here in an int property 'foo'" call from a serializer) into a particular
 * format-specific representation ("for a given int, append a property name in quotation marks,
 * then append a colon, then append an actual value" for JSON) and how to retrieve a primitive
 * ("give me an int that is 'foo' property") from the underlying representation ("expect the next string to be 'foo',
 * parse it, then parse colon, then parse a string until the next comma as an int and return it).
 *
 * Serial form consists of a structural description, declared by the [descriptor] and
 * actual serialization and deserialization processes, defined by the corresponding
 * [serialize] and [deserialize] methods implementation.
 *
 * Structural description specifies how the [T] is represented in the serial form:
 * its [kind][SerialKind] (e.g. whether it is represented as a primitive, a list or a class),
 * its [elements][SerialDescriptor.elementNames] and their [positional names][SerialDescriptor.getElementName].
 *
 * Serialization process is defined as a sequence of calls to an [Encoder], and transforms a type [T]
 * into a stream of format-agnostic primitives that represent [T], such as "here is an int, here is a double
 * and here is another nested object". It can be demonstrated by the example:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * // .. serialize method of a corresponding serializer
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * Deserialization process is symmetric and uses [Decoder].
 *
 * ### Exception types for `KSerializer` implementation
 *
 * Implementations of [serialize] and [deserialize] methods are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors.
 *
 * For serializer implementations, it is recommended to throw subclasses of [SerializationException] for
 * any serialization-specific errors related to invalid or unsupported format of the data
 * and [IllegalStateException] for errors during validation of the data.
 */
__attribute__((swift_name("KSerializer")))
@protocol MEGAAOSKSerializer <MEGAAOSSerializationStrategy, MEGAAOSDeserializationStrategy>
@required
@end


/**
 * This class provides support for retrieving a serializer in runtime, instead of using the one precompiled by the serialization plugin.
 * This serializer is enabled by [Contextual] or [UseContextualSerialization].
 *
 * Typical usage of `ContextualSerializer` would be a serialization of a class which does not have
 * static serializer (e.g. Java class or class from 3rd party library);
 * or desire to override serialized class form in one dedicated output format.
 *
 * Serializers are being looked for in a [SerializersModule] from the target [Encoder] or [Decoder], using statically known [KClass].
 * To create a serial module, use [SerializersModule] factory function.
 * To pass it to encoder and decoder, refer to particular [SerialFormat]'s documentation.
 *
 * Usage of contextual serializer can be demonstrated by the following example:
 * ```
 * import java.util.Date
 *
 * @Serializable
 * class ClassWithDate(val data: String, @Contextual val timestamp: Date)
 *
 * val moduleForDate = serializersModuleOf(MyISO8601DateSerializer)
 * val json = Json { serializersModule = moduleForDate }
 * json.encodeToString(ClassWithDate("foo", Date())
 * ```
 *
 * If type of the property marked with `@Contextual` is `@Serializable` by itself, the plugin-generated serializer is
 * used as a fallback if no serializers associated with a given type is registered in the module.
 * The fallback serializer is determined by the static type of the property, not by its actual type.
 *
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
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
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
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MEGAAOSKotlinRuntimeException : MEGAAOSKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface MEGAAOSKotlinIllegalArgumentException : MEGAAOSKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * A generic exception indicating the problem in serialization or deserialization process.
 *
 * This is a generic exception type that can be thrown during problems at any stage of the serialization,
 * including encoding, decoding, serialization, deserialization, and validation.
 * [SerialFormat] implementors should throw subclasses of this exception at any unexpected event,
 * whether it is a malformed input or unsupported class layout.
 *
 * [SerializationException] is a subclass of [IllegalArgumentException] for the sake of consistency and user-defined validation:
 * Any serialization exception is triggered by the illegal input, whether
 * it is a serializer that does not support specific structure or an invalid input.
 *
 * It is also an established pattern to validate input in user's classes in the following manner:
 * ```
 * @Serializable
 * class User(val age: Int, val name: String) {
 *     init {
 *         require(age > 0) { ... }
 *         require(name.isNotBlank()) { ... }
 *     }
 * }
 *
 * Json.decodeFromString<User>("""{"age": -100, "name": ""}""") // throws IllegalArgumentException from require()
 * ```
 * While clearly being serialization error (when compromised data was deserialized),
 * Kotlin way is to throw `IllegalArgumentException` here instead of using library-specific `SerializationException`.
 *
 * For general "catch-all" patterns around deserialization of potentially
 * untrusted/invalid/corrupted data it is recommended to catch `IllegalArgumentException` type
 * to avoid catching irrelevant to serialization errors such as `OutOfMemoryError` or domain-specific ones.
 */
__attribute__((swift_name("SerializationException")))
@interface MEGAAOSSerializationException : MEGAAOSKotlinIllegalArgumentException

/**
 * Creates an instance of [SerializationException] without any details.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Creates an instance of [SerializationException] without any details.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Creates an instance of [SerializationException] with the specified detail [message].
 */
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));

/**
 * Creates an instance of [SerializationException] with the specified [cause].
 */
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));

/**
 * Creates an instance of [SerializationException] with the specified detail [message], and the given [cause].
 */
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * Thrown when [KSerializer] did not receive a non-optional property from [CompositeDecoder] and [CompositeDecoder.decodeElementIndex]
 * had already returned [CompositeDecoder.DECODE_DONE].
 *
 * [MissingFieldException] is thrown on missing field from all [auto-generated][Serializable] serializers and it
 * is recommended to throw this exception from user-defined serializers.
 *
 * [MissingFieldException] is constructed from the following properties:
 * - [missingFields] -- fields that were required for the deserialization but have not been found.
 *   They are always non-empty and their names match the corresponding names in [SerialDescriptor.elementNames]
 * - [serialName] -- a serial name of the enclosing class that failed to get deserialized.
 *   Matches the corresponding [SerialDescriptor.serialName].
 *
 * @see SerializationException
 * @see KSerializer
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissingFieldException")))
@interface MEGAAOSMissingFieldException : MEGAAOSSerializationException

/**
 * Creates an instance of [MissingFieldException] for the given [missingField] and [serialName] of
 * the corresponding serializer.
 */
- (instancetype)initWithMissingField:(NSString *)missingField serialName:(NSString *)serialName __attribute__((swift_name("init(missingField:serialName:)"))) __attribute__((objc_designated_initializer));

/**
 * Creates an instance of [MissingFieldException] for the given [missingFields] and [serialName] of
 * the corresponding serializer.
 */
- (instancetype)initWithMissingFields:(NSArray<NSString *> *)missingFields serialName:(NSString *)serialName __attribute__((swift_name("init(missingFields:serialName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMissingFields:(NSArray<NSString *> *)missingFields message:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(missingFields:message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Use constructor which accepts serialName parameter")));

/**
 * Creates an instance of [SerializationException] without any details.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * Creates an instance of [SerializationException] with the specified detail [message].
 */
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * Creates an instance of [SerializationException] with the specified [cause].
 */
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * Creates an instance of [SerializationException] with the specified detail [message], and the given [cause].
 */
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * List of fields that were required but not found during deserialization.
 * Contains at least one element.
 */
@property (readonly) NSArray<NSString *> *missingFields __attribute__((swift_name("missingFields")));

/**
 * Returns a serial name of a serializable class that cannot be deserialized due to missing fields.
 * Typically, equal to the [SerialDescriptor.serialName] of the serializable class.
 *
 * However, in cases the class was compiled with an old Kotlin serialization plugin,
 * its serial name may be unavailable and this property is `null`.
 */
@property (readonly) NSString * _Nullable serialName __attribute__((swift_name("serialName")));
@end


/**
 * Base class for providing multiplatform polymorphic serialization.
 *
 * This class cannot be implemented by library users. To learn how to use it for your case,
 * please refer to [PolymorphicSerializer] for interfaces/abstract classes and [SealedClassSerializer] for sealed classes.
 *
 * By default, without special support from [Encoder], polymorphic types are serialized as list with
 * two elements: class [serial name][SerialDescriptor.serialName] (String) and the object itself.
 * Serial name equals to fully qualified class name by default and can be changed via @[SerialName] annotation.
 *
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("AbstractPolymorphicSerializer")))
@interface MEGAAOSAbstractPolymorphicSerializer<T> : MEGAAOSBase <MEGAAOSKSerializer>
- (T)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Lookups an actual serializer for given [klassName] withing the current [base class][baseClass].
 * May use context from the [decoder].
 *
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id<MEGAAOSDeserializationStrategy> _Nullable)findPolymorphicSerializerOrNullDecoder:(id<MEGAAOSCompositeDecoder>)decoder klassName:(NSString * _Nullable)klassName __attribute__((swift_name("findPolymorphicSerializerOrNull(decoder:klassName:)")));

/**
 * Lookups an actual serializer for given [value] within the current [base class][baseClass].
 * May use context from the [encoder].
 *
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id<MEGAAOSSerializationStrategy> _Nullable)findPolymorphicSerializerOrNullEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("findPolymorphicSerializerOrNull(encoder:value:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Base class for all classes that this polymorphic serializer can serialize or deserialize.
 */
@property (readonly) id<MEGAAOSKotlinKClass> baseClass __attribute__((swift_name("baseClass")));
@end


/**
 * This class provides support for multiplatform polymorphic serialization for interfaces and abstract classes.
 *
 * To avoid the most common security pitfalls and reflective lookup (and potential load) of an arbitrary class,
 * all serializable implementations of any polymorphic type must be [registered][SerializersModuleBuilder.polymorphic]
 * in advance in the scope of base polymorphic type, efficiently preventing unbounded polymorphic serialization
 * of an arbitrary type.
 *
 * Polymorphic serialization is enabled automatically by default for interfaces and [Serializable] abstract classes.
 * To enable this feature explicitly on other types, use `@SerializableWith(PolymorphicSerializer::class)`
 * or [Polymorphic] annotation on the property.
 *
 * Usage of the polymorphic serialization can be demonstrated by the following example:
 * ```
 * abstract class BaseRequest()
 * @Serializable
 * data class RequestA(val id: Int): BaseRequest()
 * @Serializable
 * data class RequestB(val s: String): BaseRequest()
 *
 * abstract class BaseResponse()
 * @Serializable
 * data class ResponseC(val payload: Long): BaseResponse()
 * @Serializable
 * data class ResponseD(val payload: ByteArray): BaseResponse()
 *
 * @Serializable
 * data class Message(
 *     @Polymorphic val request: BaseRequest,
 *     @Polymorphic val response: BaseResponse
 * )
 * ```
 * In this example, both request and response in `Message` are serializable with [PolymorphicSerializer].
 *
 * `BaseRequest` and `BaseResponse` are base classes and they are captured during compile time by the plugin.
 * Yet [PolymorphicSerializer] for `BaseRequest` should only allow `RequestA` and `RequestB` serializers, and none of the response's serializers.
 *
 * This is achieved via special registration function in the module:
 * ```
 * val requestAndResponseModule = SerializersModule {
 *     polymorphic(BaseRequest::class) {
 *         subclass(RequestA::class)
 *         subclass(RequestB::class)
 *     }
 *     polymorphic(BaseResponse::class) {
 *         subclass(ResponseC::class)
 *         subclass(ResponseD::class)
 *     }
 * }
 * ```
 *
 * @see SerializersModule
 * @see SerializersModuleBuilder.polymorphic
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicSerializer")))
@interface MEGAAOSPolymorphicSerializer<T> : MEGAAOSAbstractPolymorphicSerializer<T>
- (instancetype)initWithBaseClass:(id<MEGAAOSKotlinKClass>)baseClass __attribute__((swift_name("init(baseClass:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MEGAAOSKotlinKClass> baseClass __attribute__((swift_name("baseClass")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * This class provides support for multiplatform polymorphic serialization of sealed classes.
 *
 * In contrary to [PolymorphicSerializer], all known subclasses with serializers must be passed
 * in `subclasses` and `subSerializers` constructor parameters.
 * If a subclass is a sealed class itself, all its subclasses are registered as well.
 *
 * If a sealed hierarchy is marked with [@Serializable][Serializable], an instance of this class is provided automatically.
 * In most of the cases, you won't need to perform any manual setup:
 *
 * ```
 * @Serializable
 * sealed class SimpleSealed {
 *     @Serializable
 *     public data class SubSealedA(val s: String) : SimpleSealed()
 *
 *     @Serializable
 *     public data class SubSealedB(val i: Int) : SimpleSealed()
 * }
 *
 * // will perform correct polymorphic serialization and deserialization:
 * Json.encodeToString(SimpleSealed.serializer(), SubSealedA("foo"))
 * ```
 *
 * However, it is possible to register additional subclasses using regular [SerializersModule].
 * It is required when one of the subclasses is an abstract class itself:
 *
 * ```
 * @Serializable
 * sealed class ProtocolWithAbstractClass {
 *     @Serializable
 *     abstract class Message : ProtocolWithAbstractClass() {
 *         @Serializable
 *         data class StringMessage(val description: String, val message: String) : Message()
 *
 *         @Serializable
 *         data class IntMessage(val description: String, val message: Int) : Message()
 *     }
 *
 *     @Serializable
 *     data class ErrorMessage(val error: String) : ProtocolWithAbstractClass()
 * }
 * ```
 *
 * In this case, `ErrorMessage` would be registered automatically by the plugin,
 * but `StringMessage` and `IntMessage` require manual registration, as described in [PolymorphicSerializer] documentation:
 *
 * ```
 * val abstractContext = SerializersModule {
 *     polymorphic(ProtocolWithAbstractClass::class) {
 *         subclass(ProtocolWithAbstractClass.Message.IntMessage::class)
 *         subclass(ProtocolWithAbstractClass.Message.StringMessage::class)
 *         // no need to register ProtocolWithAbstractClass.ErrorMessage
 *     }
 * }
 * ```
 *
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
 * [SerialFormat] that allows conversions to and from [String] via [encodeToString] and [decodeFromString] methods.
 *
 * ### Not stable for inheritance
 *
 * `StringFormat` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * It is safe to operate with instances of `StringFormat` and call its methods.
 */
__attribute__((swift_name("StringFormat")))
@protocol MEGAAOSStringFormat <MEGAAOSSerialFormat>
@required

/**
 * Decodes and deserializes the given [string] to the value of type [T] using the given [deserializer].
 *
 * @throws SerializationException in case of any decoding-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 */
- (id _Nullable)decodeFromStringDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));

/**
 * Serializes and encodes the given [value] to string using the given [serializer].
 *
 * @throws SerializationException in case of any encoding-specific error
 * @throws IllegalArgumentException if the encoded input does not comply format's specification
 */
- (NSString *)encodeToStringSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end


/**
 * Serializer that encodes and decodes [Instant] as its second and nanosecond components of the Unix time.
 *
 * JSON example: `{"epochSeconds":1607505416,"nanosecondsOfSecond":124000}`.
 *
 * @note annotations
 *   kotlin.time.ExperimentalTime
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstantComponentSerializer")))
@interface MEGAAOSInstantComponentSerializer : MEGAAOSBase <MEGAAOSKSerializer>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Serializer that encodes and decodes [Instant] as its second and nanosecond components of the Unix time.
 *
 * JSON example: `{"epochSeconds":1607505416,"nanosecondsOfSecond":124000}`.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)instantComponentSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInstantComponentSerializer *shared __attribute__((swift_name("shared")));
- (MEGAAOSKotlinInstant *)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(MEGAAOSKotlinInstant *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Serializer that encodes and decodes [Long] as its string representation.
 *
 * Intended to be used for interoperability with external clients (mainly JavaScript ones),
 * where numbers can't be parsed correctly if they exceed
 * [`abs(2^53-1)`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Number/MAX_SAFE_INTEGER).
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LongAsStringSerializer")))
@interface MEGAAOSLongAsStringSerializer : MEGAAOSBase <MEGAAOSKSerializer>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Serializer that encodes and decodes [Long] as its string representation.
 *
 * Intended to be used for interoperability with external clients (mainly JavaScript ones),
 * where numbers can't be parsed correctly if they exceed
 * [`abs(2^53-1)`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Number/MAX_SAFE_INTEGER).
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)longAsStringSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLongAsStringSerializer *shared __attribute__((swift_name("shared")));
- (MEGAAOSLong *)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(MEGAAOSLong *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Builder for [SerialDescriptor] for user-defined serializers.
 *
 * Both explicit builder functions and implicit (using reified type-parameters) are present and are equivalent.
 * For example, `element<Int?>("nullableIntField")` is indistinguishable from
 * `element("nullableIntField", IntSerializer.descriptor.nullable)` and
 * from `element("nullableIntField", descriptor<Int?>)`.
 *
 * Please refer to [SerialDescriptor] builder function for a complete example.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClassSerialDescriptorBuilder")))
@interface MEGAAOSClassSerialDescriptorBuilder : MEGAAOSBase

/**
 * Add an element with a given [name][elementName], [descriptor],
 * type annotations and optionality the resulting descriptor.
 *
 * Example of usage:
 * ```
 * class Data(
 *     val intField: Int? = null, // Optional, has default value
 *     @ProtoNumber(1) val longField: Long
 * )
 *
 * // Corresponding descriptor
 * SerialDescriptor("package.Data") {
 *     element<Int?>("intField", isOptional = true)
 *     element<Long>("longField", annotations = listOf(protoIdAnnotationInstance))
 * }
 * ```
 */
- (void)elementElementName:(NSString *)elementName descriptor:(id<MEGAAOSSerialDescriptor>)descriptor annotations:(NSArray<id<MEGAAOSKotlinAnnotation>> *)annotations isOptional:(BOOL)isOptional __attribute__((swift_name("element(elementName:descriptor:annotations:isOptional:)")));

/**
 * [Serial][SerialInfo] annotations on a target type.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property NSArray<id<MEGAAOSKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * Indicates that serializer associated with the current serial descriptor
 * support nullable types, meaning that it should declare nullable type
 * in its [KSerializer] type parameter and handle nulls during encoding and decoding.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property BOOL isNullable __attribute__((swift_name("isNullable"))) __attribute__((unavailable("isNullable inside buildSerialDescriptor is deprecated. Please use SerialDescriptor.nullable extension on a builder result.")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * Serial kind is an intrinsic property of [SerialDescriptor] that indicates how
 * the corresponding type is structurally represented by its serializer.
 *
 * Kind is used by serialization formats to determine how exactly the given type
 * should be serialized. For example, JSON format detects the kind of the value and,
 * depending on that, may write it as a plain value for primitive kinds, open a
 * curly brace '{' for class-like structures and square bracket '[' for list- and array- like structures.
 *
 * Kinds are used both during serialization, to serialize a value properly and statically, and
 * to introspect the type structure or build serialization schema.
 *
 * Kind should match the structure of the serialized form, not the structure of the corresponding Kotlin class.
 * Meaning that if serializable class `class IntPair(val left: Int, val right: Int)` is represented by the serializer
 * as a single `Long` value, its descriptor should have [PrimitiveKind.LONG] without nested elements even though the class itself
 * represents a structure with two primitive fields.
 */
__attribute__((swift_name("SerialKind")))
@interface MEGAAOSSerialKind : MEGAAOSBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Polymorphic kind represents a (bounded) polymorphic value, that is referred
 * by some base class or interface, but its structure is defined by one of the possible implementations.
 * Polymorphic kind is, by its definition, a union kind and is extracted to its own subtype to emphasize
 * bounded and sealed polymorphism common property: not knowing the actual type statically and requiring
 * formats to additionally encode it.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("PolymorphicKind")))
@interface MEGAAOSPolymorphicKind : MEGAAOSSerialKind
@end


/**
 * Open polymorphic kind represents statically unknown type that is hidden behind a given base class or interface.
 * [PolymorphicSerializer] can be used as an example of polymorphic serialization.
 *
 * Due to security concerns and typical mistakes that arises from polymorphic serialization, by default
 * `kotlinx.serialization` provides only bounded polymorphic serialization, forcing users to register all possible
 * serializers for a given base class or interface.
 *
 * To introspect descriptor of this kind (e.g. list possible subclasses), an instance of [SerializersModule] is required.
 * See [capturedKClass] extension property for more details.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicKind.OPEN")))
@interface MEGAAOSPolymorphicKindOPEN : MEGAAOSPolymorphicKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Open polymorphic kind represents statically unknown type that is hidden behind a given base class or interface.
 * [PolymorphicSerializer] can be used as an example of polymorphic serialization.
 *
 * Due to security concerns and typical mistakes that arises from polymorphic serialization, by default
 * `kotlinx.serialization` provides only bounded polymorphic serialization, forcing users to register all possible
 * serializers for a given base class or interface.
 *
 * To introspect descriptor of this kind (e.g. list possible subclasses), an instance of [SerializersModule] is required.
 * See [capturedKClass] extension property for more details.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oPEN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPolymorphicKindOPEN *shared __attribute__((swift_name("shared")));
@end


/**
 * Sealed kind represents Kotlin sealed classes, where all subclasses are known statically at the moment of declaration.
 * [SealedClassSerializer] can be used as an example of sealed serialization.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicKind.SEALED")))
@interface MEGAAOSPolymorphicKindSEALED : MEGAAOSPolymorphicKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Sealed kind represents Kotlin sealed classes, where all subclasses are known statically at the moment of declaration.
 * [SealedClassSerializer] can be used as an example of sealed serialization.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sEALED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPolymorphicKindSEALED *shared __attribute__((swift_name("shared")));
@end


/**
 * Values of primitive kinds usually are represented as a single value.
 * All default serializers for Kotlin [primitives types](https://kotlinlang.org/docs/tutorials/kotlin-for-py/primitive-data-types-and-their-limitations.html)
 * and [String] have primitive kind.
 *
 * ### Serializers interaction
 *
 * Serialization formats typically handle these kinds by calling a corresponding primitive method on encoder or decoder.
 * For example, if the following serializable class `class Color(val red: Byte, val green: Byte, val blue: Byte)` is represented by your serializer
 * as a single [Int] value, a typical serializer will serialize its value in the following manner:
 * ```
 * val intValue = color.rgbToInt()
 * encoder.encodeInt(intValue)
 * ```
 * and a corresponding [Decoder] counterpart.
 *
 * ### Implementation note
 *
 * Serial descriptors for primitive kinds are not expected to have any nested elements, thus its element count should be zero.
 * If a class is represented as a primitive value, its corresponding serial name *should not* be equal to the corresponding primitive type name.
 * For the `Color` example, represented as single [Int], its descriptor should have [INT] kind, zero elements and serial name **not equals**
 * to `kotlin.Int`: `PrimitiveDescriptor("my.package.ColorAsInt", PrimitiveKind.INT)`
 */
__attribute__((swift_name("PrimitiveKind")))
@interface MEGAAOSPrimitiveKind : MEGAAOSSerialKind
@end


/**
 * Primitive kind that represents a boolean `true`/`false` value.
 * Corresponding Kotlin primitive is [Boolean].
 * Corresponding encoder and decoder methods are [Encoder.encodeBoolean] and [Decoder.decodeBoolean].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.BOOLEAN")))
@interface MEGAAOSPrimitiveKindBOOLEAN : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Primitive kind that represents a boolean `true`/`false` value.
 * Corresponding Kotlin primitive is [Boolean].
 * Corresponding encoder and decoder methods are [Encoder.encodeBoolean] and [Decoder.decodeBoolean].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bOOLEAN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindBOOLEAN *shared __attribute__((swift_name("shared")));
@end


/**
 * Primitive kind that represents a single byte value.
 * Corresponding Kotlin primitive is [Byte].
 * Corresponding encoder and decoder methods are [Encoder.encodeByte] and [Decoder.decodeByte].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.BYTE")))
@interface MEGAAOSPrimitiveKindBYTE : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Primitive kind that represents a single byte value.
 * Corresponding Kotlin primitive is [Byte].
 * Corresponding encoder and decoder methods are [Encoder.encodeByte] and [Decoder.decodeByte].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bYTE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindBYTE *shared __attribute__((swift_name("shared")));
@end


/**
 * Primitive kind that represents a 16-bit unicode character value.
 * Corresponding Kotlin primitive is [Char].
 * Corresponding encoder and decoder methods are [Encoder.encodeChar] and [Decoder.decodeChar].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.CHAR")))
@interface MEGAAOSPrimitiveKindCHAR : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Primitive kind that represents a 16-bit unicode character value.
 * Corresponding Kotlin primitive is [Char].
 * Corresponding encoder and decoder methods are [Encoder.encodeChar] and [Decoder.decodeChar].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cHAR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindCHAR *shared __attribute__((swift_name("shared")));
@end


/**
 * Primitive kind that represents a 64-bit IEEE 754 floating point value.
 * Corresponding Kotlin primitive is [Double].
 * Corresponding encoder and decoder methods are [Encoder.encodeDouble] and [Decoder.decodeDouble].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.DOUBLE")))
@interface MEGAAOSPrimitiveKindDOUBLE : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Primitive kind that represents a 64-bit IEEE 754 floating point value.
 * Corresponding Kotlin primitive is [Double].
 * Corresponding encoder and decoder methods are [Encoder.encodeDouble] and [Decoder.decodeDouble].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dOUBLE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindDOUBLE *shared __attribute__((swift_name("shared")));
@end


/**
 * Primitive kind that represents a 32-bit IEEE 754 floating point value.
 * Corresponding Kotlin primitive is [Float].
 * Corresponding encoder and decoder methods are [Encoder.encodeFloat] and [Decoder.decodeFloat].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.FLOAT")))
@interface MEGAAOSPrimitiveKindFLOAT : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Primitive kind that represents a 32-bit IEEE 754 floating point value.
 * Corresponding Kotlin primitive is [Float].
 * Corresponding encoder and decoder methods are [Encoder.encodeFloat] and [Decoder.decodeFloat].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fLOAT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindFLOAT *shared __attribute__((swift_name("shared")));
@end


/**
 * Primitive kind that represents a 32-bit int value.
 * Corresponding Kotlin primitive is [Int].
 * Corresponding encoder and decoder methods are [Encoder.encodeInt] and [Decoder.decodeInt].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.INT")))
@interface MEGAAOSPrimitiveKindINT : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Primitive kind that represents a 32-bit int value.
 * Corresponding Kotlin primitive is [Int].
 * Corresponding encoder and decoder methods are [Encoder.encodeInt] and [Decoder.decodeInt].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iNT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindINT *shared __attribute__((swift_name("shared")));
@end


/**
 * Primitive kind that represents a 64-bit long value.
 * Corresponding Kotlin primitive is [Long].
 * Corresponding encoder and decoder methods are [Encoder.encodeLong] and [Decoder.decodeLong].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.LONG")))
@interface MEGAAOSPrimitiveKindLONG : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Primitive kind that represents a 64-bit long value.
 * Corresponding Kotlin primitive is [Long].
 * Corresponding encoder and decoder methods are [Encoder.encodeLong] and [Decoder.decodeLong].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lONG __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindLONG *shared __attribute__((swift_name("shared")));
@end


/**
 * Primitive kind that represents a 16-bit short value.
 * Corresponding Kotlin primitive is [Short].
 * Corresponding encoder and decoder methods are [Encoder.encodeShort] and [Decoder.decodeShort].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.SHORT")))
@interface MEGAAOSPrimitiveKindSHORT : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Primitive kind that represents a 16-bit short value.
 * Corresponding Kotlin primitive is [Short].
 * Corresponding encoder and decoder methods are [Encoder.encodeShort] and [Decoder.decodeShort].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sHORT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindSHORT *shared __attribute__((swift_name("shared")));
@end


/**
 * Primitive kind that represents a string value.
 * Corresponding Kotlin primitive is [String].
 * Corresponding encoder and decoder methods are [Encoder.encodeString] and [Decoder.decodeString].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.STRING")))
@interface MEGAAOSPrimitiveKindSTRING : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Primitive kind that represents a string value.
 * Corresponding Kotlin primitive is [String].
 * Corresponding encoder and decoder methods are [Encoder.encodeString] and [Decoder.decodeString].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTRING __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindSTRING *shared __attribute__((swift_name("shared")));
@end


/**
 * Serial descriptor is an inherent property of [KSerializer] that describes the structure of the serializable type.
 * The structure of the serializable type is not only the characteristic of the type itself, but also of the serializer as well,
 * meaning that one type can have multiple descriptors that have completely different structures.
 *
 * For example, the class `class Color(val rgb: Int)` can have multiple serializable representations,
 * such as `{"rgb": 255}`, `"#0000FF"`, `[0, 0, 255]` and `{"red": 0, "green": 0, "blue": 255}`.
 * Representations are determined by serializers, and each such serializer has its own descriptor that identifies
 * each structure in a distinguishable and format-agnostic manner.
 *
 * ### Structure
 * Serial descriptor is identified by its [name][serialName] and consists of a kind, potentially empty set of
 * children elements, and additional metadata.
 *
 * * [serialName] uniquely identifies the descriptor (and the corresponding serializer) for non-generic types.
 *   For generic types, the actual type substitution is omitted from the string representation, and the name
 *   identifies the family of the serializers without type substitutions. However, type substitution is accounted for
 *   in [equals] and [hashCode] operations, meaning that descriptors of generic classes with the same name but different type
 *   arguments are not equal to each other.
 *   [serialName] is typically used to specify the type of the target class during serialization of polymorphic and sealed
 *   classes, for observability and diagnostics.
 * * [Kind][SerialKind] defines what this descriptor represents: primitive, enum, object, collection, etc.
 * * Children elements are represented as serial descriptors as well and define the structure of the type's elements.
 * * Metadata carries additional information, such as [nullability][nullable], [optionality][isElementOptional]
 *   and [serial annotations][getElementAnnotations].
 *
 * ### Usages
 * There are two general usages of the descriptors: THE serialization process and serialization introspection.
 *
 * #### Serialization
 * Serial descriptor is used as a bridge between decoders/encoders and serializers.
 * When asking for a next element, the serializer provides an expected descriptor to the decoder, and,
 * based on the descriptor content, the decoder decides how to parse its input.
 * In JSON, for example, when the encoder is asked to encode the next element and this element
 * is a subtype of [List], the encoder receives a descriptor with [StructureKind.LIST] and, based on that,
 * first writes an opening square bracket before writing the content of the list.
 *
 * Serial descriptor _encapsulates_ the structure of the data, so serializers can be free from
 * format-specific details. `ListSerializer` knows nothing about JSON and square brackets, providing
 * only the structure of the data and delegating encoding decision to the format itself.
 *
 * #### Introspection
 * Another usage of a serial descriptor is type introspection without its serialization.
 * Introspection can be used to check whether the given serializable class complies the
 * corresponding scheme and to generate JSON or ProtoBuf schema from the given class.
 *
 * ### Indices
 * Serial descriptor API operates with children indices.
 * For the fixed-size structures, such as regular classes, index is represented by a value in
 * the range from zero to [elementsCount] and represent and index of the property in this class.
 * Consequently, primitives do not have children and their element count is zero.
 *
 * For collections and maps indices do not have a fixed bound. Regular collections descriptors usually
 * have one element (`T`, maps have two, one for keys and one for values), but potentially unlimited
 * number of actual children values. Valid indices range is not known statically,
 * and implementations of such a descriptor should provide consistent and unbounded names and indices.
 *
 * In practice, for regular classes it is allowed to invoke `getElement*(index)` methods
 * with an index from `0` to [elementsCount] range and the element at the particular index corresponds to the
 * serializable property at the given position.
 * For collections and maps, index parameter for `getElement*(index)` methods is effectively bounded
 * by the maximal number of collection/map elements.
 *
 * ### Thread-safety and mutability
 * Serial descriptor implementation should be immutable and, thus, thread-safe.
 *
 * ### Equality and caching
 * Serial descriptor can be used as a unique identifier for format-specific data or schemas and
 * this implies the following restrictions on its `equals` and `hashCode`:
 *
 * An [equals] implementation should use both [serialName] and elements structure.
 * Comparing [elementDescriptors] directly is discouraged,
 * because it may cause a stack overflow error, e.g., if a serializable class `T` contains elements of type `T`.
 * To avoid it, a serial descriptor implementation should compare only descriptors
 * of class' type parameters, in a way that `serializer<Box<Int>>().descriptor != serializer<Box<String>>().descriptor`.
 * If type parameters are equal, descriptor structure should be compared by using children elements
 * descriptors' [serialName]s, which correspond to class names
 * (do not confuse with elements' own names, which correspond to properties' names); and/or other [SerialDescriptor]
 * properties, such as [kind].
 * An example of [equals] implementation:
 * ```
 * if (this === other) return true
 * if (other::class != this::class) return false
 * if (serialName != other.serialName) return false
 * if (!typeParametersAreEqual(other)) return false
 * if (this.elementDescriptors().map { it.serialName } != other.elementDescriptors().map { it.serialName }) return false
 * return true
 * ```
 *
 * [hashCode] implementation should use the same properties for computing the result.
 *
 * ### User-defined serial descriptors
 * The best way to define a custom descriptor is to use [buildClassSerialDescriptor] builder function, where
 * for each serializable property the corresponding element is declared.
 *
 * Example:
 * ```
 * // Class with custom serializer and custom serial descriptor
 * class Data(
 *     val intField: Int, // This field is ignored by custom serializer
 *     val longField: Long, // This field is written as long, but in serialized form is named as "_longField"
 *     val stringList: List<String> // This field is written as regular list of strings
 * )
 *
 * // Descriptor for such class:
 * buildClassSerialDescriptor("my.package.Data") {
 *     // intField is deliberately ignored by serializer -- not present in the descriptor as well
 *     element<Long>("_longField") // longField is named as _longField
 *     element("stringField", listSerialDescriptor<String>())
 * }
 *
 * // Example of 'serialize' function for such descriptor
 * override fun serialize(encoder: Encoder, value: Data) {
 *     encoder.encodeStructure(descriptor) {
 *         encodeLongElement(descriptor, 0, value.longField) // Will be written as "_longField" because descriptor's child at index 0 says so
 *         encodeSerializableElement(descriptor, 1, ListSerializer(String.serializer()), value.stringList)
 *     }
 * }
 * ```
 *
 * For classes that are represented as a single primitive value, [PrimitiveSerialDescriptor] builder function can be used instead.
 *
 * ### Consistency violations
 * An implementation of [SerialDescriptor] should be consistent with the implementation of the corresponding [KSerializer].
 * Yet it is not type-checked statically, thus making it possible to declare a non-consistent implementation of descriptor and serializer.
 * In such cases, the behavior of an underlying format is unspecified and may lead to both runtime errors and encoding of
 * corrupted data that is impossible to decode back.
 *
 * ### Not for implementation
 *
 * `SerialDescriptor` interface should not be implemented in 3rd party libraries, as new methods
 * might be added to this interface when kotlinx.serialization adds support for new Kotlin features.
 * This interface is safe to use and construct via [buildClassSerialDescriptor], [PrimitiveSerialDescriptor], and `SerialDescriptor` factory function.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/serialization/SealedSerializationApi)])
*/
__attribute__((swift_name("SerialDescriptor")))
@protocol MEGAAOSSerialDescriptor
@required

/**
 * Returns serial annotations of the child element at the given [index].
 * This method differs from `getElementDescriptor(index).annotations` by reporting only
 * element-specific annotations:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (NSArray<id<MEGAAOSKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * Retrieves the descriptor of the child element for the given [index].
 * For the property of type `T` on the position `i`, `getElementDescriptor(i)` yields the same result
 * as for `T.serializer().descriptor`, if the serializer for this property is not explicitly overridden
 * with `@Serializable(with = ...`)`, [Polymorphic] or [Contextual].
 * This method can be used to completely introspect the type that the current descriptor describes.
 *
 * Example:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementDescriptor(0).serialName // Returns "Nested"
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 *
 * @throws IndexOutOfBoundsException for illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (id<MEGAAOSSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * Returns an index in the children list of the given element by its name or [CompositeDecoder.UNKNOWN_NAME]
 * if there is no such element.
 * The resulting index, if it is not [CompositeDecoder.UNKNOWN_NAME], is guaranteed to be usable with [getElementName].
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.getElementIndex("name") // Returns 0
 * userDescriptor.getElementIndex("alias") // Returns 1
 * userDescriptor.getElementIndex("lastName") // Returns CompositeDecoder.UNKNOWN_NAME = -3
 * ```
 */
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * Returns a positional name of the child at the given [index].
 * Positional name represents a corresponding property name in the class, associated with
 * the current descriptor.
 *
 * Do not confuse with [serialName], which returns class name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive)
 */
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * Whether the element at the given [index] is optional (can be absent in serialized form).
 * For generated descriptors, all elements that have a corresponding default parameter value are
 * marked as optional. Custom serializers can treat optional values in a serialization-specific manner
 * without a default parameters constraint.
 *
 * Example of optionality:
 * ```
 * @Serializable
 * class Holder(
 *     val a: Int, // isElementOptional(0) == false
 *     val b: Int?, // isElementOptional(1) == false
 *     val c: Int? = null, // isElementOptional(2) == true
 *     val d: List<Int>, // isElementOptional(3) == false
 *     val e: List<Int> = listOf(1), // isElementOptional(4) == true
 * )
 * ```
 * Returns `false` for valid indices of collections, maps, and enums.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * Returns serial annotations of the associated class.
 * Serial annotations can be used to specify additional metadata that may be used during serialization.
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * Do not confuse with [getElementAnnotations]:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 */
@property (readonly) NSArray<id<MEGAAOSKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * The number of elements this descriptor describes, besides from the class itself.
 * [elementsCount] describes the number of **semantic** elements, not the number
 * of actual fields/properties in the serialized form, even though they frequently match.
 *
 * For example, for the following class
 * `class Complex(val real: Long, val imaginary: Long)` the corresponding descriptor
 * and the serialized form both have two elements, while for `List<Int>`
 * the corresponding descriptor has a single element (`IntDescriptor`, the type of list element),
 * but from zero up to `Int.MAX_VALUE` values in the serialized form:
 *
 * ```
 * @Serializable
 * class Complex(val real: Long, val imaginary: Long)
 *
 * Complex.serializer().descriptor.elementsCount // Returns 2
 *
 * @Serializable
 * class OuterList(val list: List<Int>)
 *
 * OuterList.serializer().descriptor.getElementDescriptor(0).elementsCount // Returns 1
 * ```
 */
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * Returns `true` if this descriptor describes a serializable value class which underlying value
 * is serialized directly.
 *
 * This property is true for serializable `@JvmInline value` classes:
 * ```
 * @Serializable
 * class User(val name: Name)
 *
 * @Serializable
 * @JvmInline
 * value class Name(val value: String)
 *
 * User.serializer().descriptor.isInline // false
 * User.serializer().descriptor.getElementDescriptor(0).isInline // true
 * Name.serializer().descriptor.isInline // true
 * ```
 */
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * Whether the descriptor describes a nullable type.
 * Returns `true` if associated serializer can serialize/deserialize nullable elements of the described type.
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.isNullable // Returns false
 * userDescriptor.getElementDescriptor(0).isNullable // Returns false
 * userDescriptor.getElementDescriptor(1).isNullable // Returns true
 * ```
 */
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * The kind of the serialized form that determines **the shape** of the serialized data.
 * Formats use serial kind to add and parse serializer-agnostic metadata to the result.
 *
 * For example, JSON format wraps [classes][StructureKind.CLASS] and [StructureKind.MAP] into
 * brackets, while ProtoBuf just serialize these types in separate ways.
 *
 * Kind should be consistent with the implementation, for example, if it is a [primitive][PrimitiveKind],
 * then its element count should be zero and vice versa.
 *
 * Example of introspecting kinds:
 *
 * ```
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.kind // Returns StructureKind.CLASS
 * userDescriptor.getElementDescriptor(0).kind // Returns PrimitiveKind.STRING
 * ```
 */
@property (readonly) MEGAAOSSerialKind *kind __attribute__((swift_name("kind")));

/**
 * Serial name of the descriptor that identifies a pair of the associated serializer and target class.
 *
 * For generated and default serializers, the serial name is equal to the corresponding class's fully qualified name
 * or, if overridden, [SerialName].
 * Custom serializers should provide a unique serial name that identifies both the serializable class and
 * the serializer itself, ignoring type arguments if they are present, for example: `my.package.LongAsTrimmedString`.
 *
 * Do not confuse with [getElementName], which returns property name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 */
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * Represents an "unknown" type that will be known only at the moment of the serialization.
 * Effectively it defers the choice of the serializer to a moment of the serialization, and can
 * be used for [contextual][Contextual] serialization.
 *
 * To introspect descriptor of this kind, an instance of [SerializersModule] is required.
 * See [capturedKClass] extension property for more details.
 * However, if possible options are known statically (e.g. for sealed classes), they can be
 * enumerated in child descriptors similarly to [ENUM].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialKind.CONTEXTUAL")))
@interface MEGAAOSSerialKindCONTEXTUAL : MEGAAOSSerialKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represents an "unknown" type that will be known only at the moment of the serialization.
 * Effectively it defers the choice of the serializer to a moment of the serialization, and can
 * be used for [contextual][Contextual] serialization.
 *
 * To introspect descriptor of this kind, an instance of [SerializersModule] is required.
 * See [capturedKClass] extension property for more details.
 * However, if possible options are known statically (e.g. for sealed classes), they can be
 * enumerated in child descriptors similarly to [ENUM].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONTEXTUAL __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSerialKindCONTEXTUAL *shared __attribute__((swift_name("shared")));
@end


/**
 * Represents a Kotlin [Enum] with statically known values.
 * All enum values should be enumerated in descriptor elements.
 * Each element descriptor of a [Enum] kind represents an instance of a particular enum
 * and has an [StructureKind.OBJECT] kind.
 * Each [positional name][SerialDescriptor.getElementName] contains a corresponding enum element [name][Enum.name].
 *
 * Corresponding encoder and decoder methods are [Encoder.encodeEnum] and [Decoder.decodeEnum].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialKind.ENUM")))
@interface MEGAAOSSerialKindENUM : MEGAAOSSerialKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represents a Kotlin [Enum] with statically known values.
 * All enum values should be enumerated in descriptor elements.
 * Each element descriptor of a [Enum] kind represents an instance of a particular enum
 * and has an [StructureKind.OBJECT] kind.
 * Each [positional name][SerialDescriptor.getElementName] contains a corresponding enum element [name][Enum.name].
 *
 * Corresponding encoder and decoder methods are [Encoder.encodeEnum] and [Decoder.decodeEnum].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eNUM __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSerialKindENUM *shared __attribute__((swift_name("shared")));
@end


/**
 * Structure kind represents values with composite structure of nested elements of depth and arbitrary number.
 * We acknowledge following structured kinds:
 *
 * ### Regular classes
 * The most common case for serialization, that represents an arbitrary structure with fixed count of elements.
 * When the regular Kotlin class is marked as [Serializable], its descriptor kind will be [CLASS].
 *
 * ### Lists
 * [LIST] represent a structure with potentially unknown in advance number of elements of the same type.
 * All standard serializable [List] implementors and arrays are represented as [LIST] kind of the same type.
 *
 * ### Maps
 * [MAP] represent a structure with potentially unknown in advance number of key-value pairs of the same type.
 * All standard serializable [Map] implementors are represented as [Map] kind of the same type.
 *
 * ### Kotlin objects
 * A singleton object defined with `object` keyword with an [OBJECT] kind.
 * By default, objects are serialized as empty structures without any states and their identity is preserved
 * across serialization within the same process, so you always have the same instance of the object.
 *
 * ### Serializers interaction
 * Serialization formats typically handle these kinds by marking structure start and end.
 * E.g. the following serializable class `class IntHolder(myValue: Int)` of structure kind [CLASS] is handled by
 * serializer as the following call sequence:
 * ```
 * val composite = encoder.beginStructure(descriptor) // Denotes the start of the structure
 * composite.encodeIntElement(descriptor, index = 0, holder.myValue)
 * composite.endStructure(descriptor) // Denotes the end of the structure
 * ```
 * and its corresponding [Decoder] counterpart.
 *
 * ### Serial descriptor implementors note
 * These kinds can be used not only for collection and regular classes.
 * For example, provided serializer for [Map.Entry] represents it as [Map] type, so it is serialized
 * as `{"actualKey": "actualValue"}` map directly instead of `{"key": "actualKey", "value": "actualValue"}`
 */
__attribute__((swift_name("StructureKind")))
@interface MEGAAOSStructureKind : MEGAAOSSerialKind
@end


/**
 * Structure kind for regular classes with an arbitrary, but known statically, structure.
 * Serializers typically encode classes with calls to [Encoder.beginStructure] and [CompositeEncoder.endStructure],
 * writing the elements of the class between these calls.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.CLASS")))
@interface MEGAAOSStructureKindCLASS : MEGAAOSStructureKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Structure kind for regular classes with an arbitrary, but known statically, structure.
 * Serializers typically encode classes with calls to [Encoder.beginStructure] and [CompositeEncoder.endStructure],
 * writing the elements of the class between these calls.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cLASS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSStructureKindCLASS *shared __attribute__((swift_name("shared")));
@end


/**
 * Structure kind for lists and arrays of an arbitrary length.
 * Serializers typically encode classes with calls to [Encoder.beginCollection] and [CompositeEncoder.endStructure],
 * writing the elements of the list between these calls.
 * Built-in list serializers treat elements as homogeneous, though application-specific serializers may impose
 * application-specific restrictions on specific [LIST] types.
 *
 * Example of such application-specific serialization may be class `class ListOfThreeElements() : List<Any>`,
 * for which an author of the serializer knows that while it is `List<Any>`, in fact, is always has three elements
 * of a known type (e.g. the first is always a string, the second one is always an int etc.)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.LIST")))
@interface MEGAAOSStructureKindLIST : MEGAAOSStructureKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Structure kind for lists and arrays of an arbitrary length.
 * Serializers typically encode classes with calls to [Encoder.beginCollection] and [CompositeEncoder.endStructure],
 * writing the elements of the list between these calls.
 * Built-in list serializers treat elements as homogeneous, though application-specific serializers may impose
 * application-specific restrictions on specific [LIST] types.
 *
 * Example of such application-specific serialization may be class `class ListOfThreeElements() : List<Any>`,
 * for which an author of the serializer knows that while it is `List<Any>`, in fact, is always has three elements
 * of a known type (e.g. the first is always a string, the second one is always an int etc.)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lIST __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSStructureKindLIST *shared __attribute__((swift_name("shared")));
@end


/**
 * Structure kind for maps of an arbitrary length.
 * Serializers typically encode classes with calls to [Encoder.beginCollection] and [CompositeEncoder.endStructure],
 * writing the elements of the map between these calls.
 *
 * Built-in map serializers treat elements as homogeneous, though application-specific serializers may impose
 * application-specific restrictions on specific [MAP] types.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.MAP")))
@interface MEGAAOSStructureKindMAP : MEGAAOSStructureKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Structure kind for maps of an arbitrary length.
 * Serializers typically encode classes with calls to [Encoder.beginCollection] and [CompositeEncoder.endStructure],
 * writing the elements of the map between these calls.
 *
 * Built-in map serializers treat elements as homogeneous, though application-specific serializers may impose
 * application-specific restrictions on specific [MAP] types.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mAP __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSStructureKindMAP *shared __attribute__((swift_name("shared")));
@end


/**
 * Structure kind for singleton objects defined with `object` keyword.
 * By default, objects are serialized as empty structures without any state and their identity is preserved
 * across serialization within the same process, so you always have the same instance of the object.
 *
 * Empty structure is represented as a call to [Encoder.beginStructure] with the following [CompositeEncoder.endStructure]
 * without any intermediate encodings.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.OBJECT")))
@interface MEGAAOSStructureKindOBJECT : MEGAAOSStructureKind
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Structure kind for singleton objects defined with `object` keyword.
 * By default, objects are serialized as empty structures without any state and their identity is preserved
 * across serialization within the same process, so you always have the same instance of the object.
 *
 * Empty structure is represented as a call to [Encoder.beginStructure] with the following [CompositeEncoder.endStructure]
 * without any intermediate encodings.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oBJECT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSStructureKindOBJECT *shared __attribute__((swift_name("shared")));
@end


/**
 * Decoder is a core deserialization primitive that encapsulates the knowledge of the underlying
 * format and an underlying storage, exposing only structural methods to the deserializer, making it completely
 * format-agnostic. Deserialization process takes a decoder and asks him for a sequence of primitive elements,
 * defined by a deserializer serial form, while decoder knows how to retrieve these primitive elements from an actual format
 * representations.
 *
 * Decoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, the decoder represents input storage, and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization asks a decoder for a sequence of "give me an int, give me
 * a double, give me a list of strings and give me another object that is a nested int", while decoding
 * transforms this sequence into a format-specific commands such as "parse the part of the string until the next quotation mark
 * as an int to retrieve an int, parse everything within the next curly braces to retrieve elements of a nested object etc."
 *
 * The symmetric interface for the serialization process is [Encoder].
 *
 * ### Deserialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `decode*` methods (e.g. [decodeInt]) can be used directly.
 *
 * ### Deserialization. Structured types
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `decode*` methods are not that helpful, because format may not require a strict order of data
 * (e.g. JSON or XML), do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeDecoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = decoder.beginStructure(descriptor)
 * // Decode all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the decoder belongs to JSON format, then [beginStructure] will parse an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeDecoder] that is aware of colon separator,
 * that should be read after each key-value pair, whilst [CompositeDecoder.endStructure] will parse a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, missing control symbols or attributes, and unknown symbols,
 * [SerializationException] can be thrown by any decoder methods. It is recommended to declare a format-specific
 * subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `decode*` methods is not allowed and produces unspecified behavior.
 * After thrown exception, the current decoder is left in an arbitrary state, no longer suitable for further decoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following deserializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : DeserializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun deserializer(decoder: Decoder): StringHolder {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeElementIndex(descriptor) != 0)
 *            throw MissingFieldException("Field 'stringValue' is missing")
 *        // Decode the nested string value
 *        val value = composite.decodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This deserializer does not know anything about the underlying data and will work with any properly-implemented decoder.
 * JSON, for example, parses an opening bracket `{` during the `beginStructure` call, checks that the next key
 * after this bracket is `stringValue` (using the descriptor), returns the value after the colon as string value
 * and parses closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and parsing structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by a decoder.
 *
 * ### Decoder implementation
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatDecoder : Decoder {
 *
 *     ...
 *     override fun decodeDouble(): Double = decodeString().toDouble()
 *     override fun decodeInt(): Int = decodeString().toInt()
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Decoder` interface is not stable for inheritance in 3rd-party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Decoder")))
@protocol MEGAAOSDecoder
@required

/**
 * Decodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for decoding this very structure.
 *
 * Typically, classes, collections and maps are represented as a nested structure in a serialized form.
 * E.g. the following JSON
 * ```
 * {
 *     "a": 2,
 *     "b": { "nested": "c" }
 *     "c": [1, 2, 3],
 *     "d": null
 * }
 * ```
 * has three nested structures: the very beginning of the data, "b" value and "c" value.
 */
- (id<MEGAAOSCompositeDecoder>)beginStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Decodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));

/**
 * Decodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));

/**
 * Decodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));

/**
 * Decodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));

/**
 * Decodes a enum value and returns its index in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * underlying input "C", [decodeEnum] method should return `2` as a result.
 *
 * This method does not imply any restrictions on the input format,
 * the format is free to store the enum by its name, index, ordinal or any other enum representation.
 */
- (int32_t)decodeEnumEnumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a target value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`, the following sequence is used:
 * ```
 * thisDecoder.decodeInline(MyInt.serializer().descriptor).decodeInt()
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided [descriptor].
 * For example, when this function is called on `Json` decoder with
 * `UInt.serializer().descriptor`, the returned decoder is able to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 *
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<MEGAAOSDecoder>)decodeInlineDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));

/**
 * Decodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));

/**
 * Decodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * Returns `true` if the current value in decoder is not null, false otherwise.
 * This method is usually used to decode potentially nullable data:
 * ```
 * // Could be String? deserialize() method
 * public fun deserialize(decoder: Decoder): String? {
 *     if (decoder.decodeNotNullMark()) {
 *         return decoder.decodeString()
 *     } else {
 *         return decoder.decodeNull()
 *     }
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * Decodes the `null` value and returns it.
 *
 * It is expected that `decodeNotNullMark` was called
 * prior to `decodeNull` invocation and the case when it returned `true` was handled.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MEGAAOSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * Decodes the nullable value of type [T] by delegating the decoding process to the given [deserializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));

/**
 * Decodes the value of type [T] by delegating the decoding process to the given [deserializer].
 * For example, `decodeInt` call is equivalent to delegating integer decoding to [Int.serializer][Int.Companion.serializer]:
 * `decodeSerializableValue(Int.serializer())`
 */
- (id _Nullable)decodeSerializableValueDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));

/**
 * Decodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));

/**
 * Decodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [CompositeDecoder] is a part of decoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Decoder.beginStructure].
 *
 * Typically, for unordered data, [CompositeDecoder] is used by a serializer withing a [decodeElementIndex]-based
 * loop that decodes all the required data one-by-one in any order and then terminates by calling [endStructure].
 * Please refer to [decodeElementIndex] for example of such loop.
 *
 * All `decode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` argument is always the same as one used in [Decoder.beginStructure].
 *   * `index` of the element being decoded. For [sequential][decodeSequentially] decoding, it is always a monotonic
 *      sequence from `0` to `descriptor.elementsCount` and for indexing-loop it is always an index that [decodeElementIndex]
 *      has returned from the last call.
 *
 * The symmetric interface for the serialization process is [CompositeEncoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeDecoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("CompositeDecoder")))
@protocol MEGAAOSCompositeDecoder
@required

/**
 * Decodes a boolean value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BOOLEAN] kind.
 */
- (BOOL)decodeBooleanElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));

/**
 * Decodes a single byte value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BYTE] kind.
 */
- (int8_t)decodeByteElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));

/**
 * Decodes a 16-bit unicode character value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.CHAR] kind.
 */
- (unichar)decodeCharElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));

/**
 * Method to decode collection size that may be called before the collection decoding.
 * Collection type includes [Collection], [Map] and [Array] (including primitive arrays).
 * Method can return `-1` if the size is not known in advance, though for [sequential decoding][decodeSequentially]
 * knowing precise size is a mandatory requirement.
 */
- (int32_t)decodeCollectionSizeDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));

/**
 * Decodes a 64-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.DOUBLE] kind.
 */
- (double)decodeDoubleElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));

/**
 *  Decodes the index of the next element to be decoded.
 *  Index represents a position of the current element in the serial descriptor element that can be found
 *  with [SerialDescriptor.getElementIndex].
 *
 *  If this method returns non-negative index, the caller should call one of the `decode*Element` methods
 *  with a resulting index.
 *  Apart from positive values, this method can return [DECODE_DONE] to indicate that no more elements
 *  are left or [UNKNOWN_NAME] to indicate that symbol with an unknown name was encountered.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        var i: Int? = null
 *        var d: Double? = null
 *        while (true) {
 *            when (val index = composite.decodeElementIndex(descriptor)) {
 *                0 -> i = composite.decodeIntElement(descriptor, 0)
 *                1 -> d = composite.decodeDoubleElement(descriptor, 1)
 *                DECODE_DONE -> break // Input is over
 *                else -> error("Unexpected index: $index)
 *            }
 *        }
 *        composite.endStructure(descriptor)
 *        require(i != null && d != null)
 *        return MyPair(i, d)
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * The need in such a loop comes from unstructured nature of most serialization formats.
 * For example, JSON for the following input `{"d": 2.0, "i": 1}`, will first read `d` key with index `1`
 * and only after `i` with the index `0`.
 *
 * A potential implementation of this method for JSON format can be the following:
 * ```
 * fun decodeElementIndex(descriptor: SerialDescriptor): Int {
 *     // Ignore arrays
 *     val nextKey: String? = myStringJsonParser.nextKey()
 *     if (nextKey == null) return DECODE_DONE
 *     return descriptor.getElementIndex(nextKey) // getElementIndex can return UNKNOWN_NAME
 * }
 * ```
 *
 * If [decodeSequentially] returns `true`, the caller might skip calling this method.
 */
- (int32_t)decodeElementIndexDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.FLOAT] kind.
 */
- (float)decodeFloatElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisDecoder.decodeInlineElement(MyData.serializer().descriptor, 0).decodeInt()
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisDecoder.decodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer())
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided descriptor.
 * For example, when this function is called on `Json` decoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned decoder is able
 * to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Decoder.decodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<MEGAAOSDecoder>)decodeInlineElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));

/**
 * Decodes a 32-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.INT] kind.
 */
- (int32_t)decodeIntElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));

/**
 * Decodes a 64-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.LONG] kind.
 */
- (int64_t)decodeLongElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * Decodes nullable value of the type [T] with the given [deserializer].
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, efficiently using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Checks whether the current decoder supports strictly ordered decoding of the data
 * without calling to [decodeElementIndex].
 * If the method returns `true`, the caller might skip [decodeElementIndex] calls
 * and start invoking `decode*Element` directly, incrementing the index of the element one by one.
 * This method can be called by serializers (either generated or user-defined) as a performance optimization,
 * but there is no guarantee that the method will be ever called. Practically, it means that implementations
 * that may benefit from sequential decoding should also support a regular [decodeElementIndex]-based decoding as well.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeSequentially()) {
 *            val i = composite.decodeIntElement(descriptor, index = 0) // Mind the sequential indexing
 *            val d = composite.decodeIntElement(descriptor, index = 1)
 *            composite.endStructure(descriptor)
 *            return MyPair(i, d)
 *        } else {
 *            // Fallback to `decodeElementIndex` loop, refer to its documentation for details
 *        }
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * Sequential decoding is a performance optimization for formats with strictly ordered schema,
 * usually binary ones. Regular formats such as JSON or ProtoBuf cannot use this optimization,
 * because e.g. in the latter example, the same data can be represented both as
 * `{"i": 1, "d": 1.0}` and `{"d": 1.0, "i": 1}` (thus, unordered).
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));

/**
 * Decodes value of the type [T] with the given [deserializer].
 *
 * Implementations of [CompositeDecoder] may use their format-specific deserializers
 * for particular data types, e.g. handle [ByteArray] specifically if format is binary.
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, effectively using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 */
- (id _Nullable)decodeSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Decodes a 16-bit short value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.SHORT] kind.
 */
- (int16_t)decodeShortElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));

/**
 * Decodes a string value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.STRING] kind.
 */
- (NSString *)decodeStringElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * Denotes the end of the structure associated with current decoder.
 * For example, composite decoder of JSON format will expect (and parse)
 * a closing bracket in the underlying input.
 */
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Context of the current decoding process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * A skeleton implementation of both [Decoder] and [CompositeDecoder] that can be used
 * for simple formats and for testability purpose.
 * Most of the `decode*` methods have default implementation that delegates `decodeValue(value: Any) as TargetType`.
 * See [Decoder] documentation for information about each particular `decode*` method.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("AbstractDecoder")))
@interface MEGAAOSAbstractDecoder : MEGAAOSBase <MEGAAOSDecoder, MEGAAOSCompositeDecoder>

/**
 * A skeleton implementation of both [Decoder] and [CompositeDecoder] that can be used
 * for simple formats and for testability purpose.
 * Most of the `decode*` methods have default implementation that delegates `decodeValue(value: Any) as TargetType`.
 * See [Decoder] documentation for information about each particular `decode*` method.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A skeleton implementation of both [Decoder] and [CompositeDecoder] that can be used
 * for simple formats and for testability purpose.
 * Most of the `decode*` methods have default implementation that delegates `decodeValue(value: Any) as TargetType`.
 * See [Decoder] documentation for information about each particular `decode*` method.
 */
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

/**
 * Invoked to decode a value when specialized `decode*` method was not overridden.
 */
- (id)decodeValue __attribute__((swift_name("decodeValue()")));
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@end


/**
 * Encoder is a core serialization primitive that encapsulates the knowledge of the underlying
 * format and its storage, exposing only structural methods to the serializer, making it completely
 * format-agnostic. Serialization process transforms a single value into the sequence of its
 * primitive elements, also called its serial form, while encoding transforms these primitive elements into an actual
 * format representation: JSON string, ProtoBuf ByteArray, in-memory map representation etc.
 *
 * Encoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, encoder represents output storage and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization transforms a value into a sequence of "here is an int, here is
 * a double, here a list of strings and here is another object that is a nested int", while encoding
 * transforms this sequence into a format-specific commands such as "insert opening curly bracket
 * for a nested object start, insert a name of the value, and the value separated with colon for an int etc."
 *
 * The symmetric interface for the deserialization process is [Decoder].
 *
 * ### Serialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `encode*` methods (e.g. [encodeInt]) can be used directly.
 *
 * ### Serialization. Structured types.
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `encode*` methods are not that helpful, because they do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeEncoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = encoder.beginStructure(descriptor)
 * // Encoding all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the encoder belongs to JSON format, then [beginStructure] will write an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeEncoder] that is aware of colon separator,
 * that should be appended between each key-value pair, whilst [CompositeEncoder.endStructure] will write a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, conflicting serial names,
 * [SerializationException] can be thrown by any encoder methods.
 * It is recommended to declare a format-specific subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `encode*` methods is not allowed and produces unspecified behaviour.
 * After thrown exception, the current encoder is left in an arbitrary state, no longer suitable for further encoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following serializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : SerializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun serializer(encoder: Encoder, value: StringHolder) {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = encoder.beginStructure(descriptor)
 *        // Encode the nested string value
 *        composite.encodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This serializer does not know anything about the underlying storage and will work with any properly-implemented encoder.
 * JSON, for example, writes an opening bracket `{` during the `beginStructure` call, writes `stringValue` key along
 * with its value in `encodeStringElement` and writes the closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by an encoder.
 *
 * ### Encoder implementation.
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatEncoder : Encoder {
 *
 *     ...
 *     override fun encodeDouble(value: Double) = encodeString(value.toString())
 *     override fun encodeInt(value: Int) = encodeString(value.toString())
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Encoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Encoder")))
@protocol MEGAAOSEncoder
@required

/**
 * Encodes the beginning of the collection with size [collectionSize] and the given serializer of its type parameters.
 * This method has to be implemented only if you need to know collection size in advance, otherwise, [beginStructure] can be used.
 */
- (id<MEGAAOSCompositeEncoder>)beginCollectionDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));

/**
 * Encodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for encoding this very structure.
 * E.g the hierarchy:
 * ```
 * class StringHolder(val stringValue: String)
 * class Holder(val stringHolder: StringHolder)
 * ```
 *
 * with the following serialized form in JSON:
 * ```
 * {
 *   "stringHolder" : { "stringValue": "value" }
 * }
 * ```
 *
 * will be roughly represented as the following sequence of calls:
 * ```
 * // Holder serializer
 * fun serialize(encoder: Encoder, value: Holder) {
 *     val composite = encoder.beginStructure(descriptor) // the very first opening bracket '{'
 *     composite.encodeSerializableElement(descriptor, 0, value.stringHolder) // Serialize nested StringHolder
 *     composite.endStructure(descriptor) // The very last closing bracket
 * }
 *
 * // StringHolder serializer
 * fun serialize(encoder: Encoder, value: StringHolder) {
 *     val composite = encoder.beginStructure(descriptor) // One more '{' when the key "stringHolder" is already written
 *     composite.encodeStringElement(descriptor, 0, value.stringValue) // Serialize actual value
 *     composite.endStructure(descriptor) // Closing bracket
 * }
 * ```
 */
- (id<MEGAAOSCompositeEncoder>)beginStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Encodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));

/**
 * Encodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));

/**
 * Encodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));

/**
 * Encodes a enum value that is stored at the [index] in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * serializable value "C", [encodeEnum] method should be called with `2` as am index.
 *
 * This method does not imply any restrictions on the output format,
 * the format is free to store the enum by its name, index, ordinal or any other
 */
- (void)encodeEnumEnumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * Returns [Encoder] for encoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a serializable value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * the following sequence is used:
 * ```
 * thisEncoder.encodeInline(MyInt.serializer().descriptor).encodeInt(my)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on the provided [descriptor].
 * For example, when this function is called on Json encoder with `UInt.serializer().descriptor`, the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<MEGAAOSEncoder>)encodeInlineDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));

/**
 * Encodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));

/**
 * Encodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * Notifies the encoder that value of a nullable type that is
 * being serialized is not null. It should be called before writing a non-null value
 * of nullable type:
 * ```
 * // Could be String? serialize method
 * if (value != null) {
 *     encoder.encodeNotNullMark()
 *     encoder.encodeStringValue(value)
 * } else {
 *     encoder.encodeNull()
 * }
 * ```
 *
 * This method has a use in highly-performant binary formats and can
 * be safely ignore by most of the regular formats.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * Encodes `null` value.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * Encodes the nullable [value] of type [T] by delegating the encoding process to the given [serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));

/**
 * Encodes the [value] of type [T] by delegating the encoding process to the given [serializer].
 * For example, `encodeInt` call is equivalent to delegating integer encoding to [Int.serializer][Int.Companion.serializer]:
 * `encodeSerializableValue(Int.serializer())`
 */
- (void)encodeSerializableValueSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));

/**
 * Encodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));

/**
 * Encodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [CompositeEncoder] is a part of encoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Encoder.beginStructure].
 *
 * All `encode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` is always the same as one used in [Encoder.beginStructure]. While this parameter may seem redundant,
 *      it is required for efficient serialization process to avoid excessive field spilling.
 *      If you are writing your own format, you can safely ignore this parameter and use one used in `beginStructure`
 *      for simplicity.
 *   * `index` of the element being encoded. This element at this index in the descriptor should be associated with
 *      the one being written.
 *
 * The symmetric interface for the deserialization process is [CompositeDecoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeEncoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("CompositeEncoder")))
@protocol MEGAAOSCompositeEncoder
@required

/**
 * Encodes a boolean [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BOOLEAN] kind.
 */
- (void)encodeBooleanElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));

/**
 * Encodes a single byte [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BYTE] kind.
 */
- (void)encodeByteElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));

/**
 * Encodes a 16-bit unicode character [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.CHAR] kind.
 */
- (void)encodeCharElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.DOUBLE] kind.
 */
- (void)encodeDoubleElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.FLOAT] kind.
 */
- (void)encodeFloatElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * Returns [Encoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisEncoder.encodeInlineElement(MyData.serializer.descriptor, 0).encodeInt(my)
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisEncoder.encodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer(), myInt)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on provided descriptor.
 * For example, when this function is called on Json encoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Encoder.encodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<MEGAAOSEncoder>)encodeInlineElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));

/**
 * Encodes a 32-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.INT] kind.
 */
- (void)encodeIntElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.LONG] kind.
 */
- (void)encodeLongElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * Delegates nullable [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Delegates [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 */
- (void)encodeSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Encodes a 16-bit short [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.SHORT] kind.
 */
- (void)encodeShortElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));

/**
 * Encodes a string [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.STRING] kind.
 */
- (void)encodeStringElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * Denotes the end of the structure associated with current encoder.
 * For example, composite encoder of JSON format will write
 * a closing bracket in the underlying input and reduce the number of nesting for pretty printing.
 */
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Whether the format should encode values that are equal to the default values.
 * This method is used by plugin-generated serializers for properties with default values:
 * ```
 * @Serializable
 * class WithDefault(val int: Int = 42)
 * // serialize method
 * if (value.int != 42 || output.shouldEncodeElementDefault(serialDesc, 0)) {
 *    encoder.encodeIntElement(serialDesc, 0, value.int);
 * }
 * ```
 *
 * This method is never invoked for properties annotated with [EncodeDefault].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * A skeleton implementation of both [Encoder] and [CompositeEncoder] that can be used
 * for simple formats and for testability purpose.
 * Most of the `encode*` methods have default implementation that delegates `encodeValue(value: Any)`.
 * See [Encoder] documentation for information about each particular `encode*` method.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("AbstractEncoder")))
@interface MEGAAOSAbstractEncoder : MEGAAOSBase <MEGAAOSEncoder, MEGAAOSCompositeEncoder>

/**
 * A skeleton implementation of both [Encoder] and [CompositeEncoder] that can be used
 * for simple formats and for testability purpose.
 * Most of the `encode*` methods have default implementation that delegates `encodeValue(value: Any)`.
 * See [Encoder] documentation for information about each particular `encode*` method.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A skeleton implementation of both [Encoder] and [CompositeEncoder] that can be used
 * for simple formats and for testability purpose.
 * Most of the `encode*` methods have default implementation that delegates `encodeValue(value: Any)`.
 * See [Encoder] documentation for information about each particular `encode*` method.
 */
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

/**
 * Invoked before writing an element that is part of the structure to determine whether it should be encoded.
 * Element information can be obtained from the [descriptor] by the given [index].
 *
 * @return `true` if the value should be encoded, false otherwise
 */
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

/**
 * Invoked to encode a value when specialized `encode*` method was not overridden.
 */
- (void)encodeValueValue:(id)value __attribute__((swift_name("encodeValue(value:)")));
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@end


/**
 * This interface indicates that decoder supports consuming large strings by chunks via consumeChunk method.
 * Currently, only streaming json decoder implements this interface.
 * Please note that this interface is only applicable to streaming decoders. That means that it is not possible to use
 * some JsonTreeDecoder features like polymorphism with this interface.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("ChunkedDecoder")))
@protocol MEGAAOSChunkedDecoder
@required

/**
 * Method allows decoding a string value by fixed-size chunks.
 * Usable for handling very large strings that may not fit in memory.
 * Chunk size is guaranteed to not exceed 16384 chars (but it may be smaller than that).
 * Feeds string chunks to the provided consumer.
 *
 * @param consumeChunk - lambda function to handle string chunks
 *
 * Example usage:
 * ```
 * @Serializable(with = LargeStringSerializer::class)
 * data class LargeStringData(val largeString: String)
 *
 * @Serializable
 * data class ClassWithLargeStringDataField(val largeStringField: LargeStringData)
 *
 * object LargeStringSerializer : KSerializer<LargeStringData> {
 *     override val descriptor: SerialDescriptor = PrimitiveSerialDescriptor("LargeStringContent", PrimitiveKind.STRING)
 *
 *     override fun deserialize(decoder: Decoder): LargeStringData {
 *         require(decoder is ChunkedDecoder) { "Only chunked decoder supported" }
 *
 *         val tmpFile = createTempFile()
 *         val writer = FileWriter(tmpFile.toFile()).use {
 *             decoder.decodeStringChunked { chunk ->
 *                 writer.append(chunk)
 *             }
 *         }
 *         return LargeStringData("file://${tmpFile.absolutePathString()}")
 *     }
 * }
 * ```
 *
 * In this sample, we need to be able to handle a huge string coming from json. Instead of storing it in memory,
 * we offload it into a file and return the file name instead
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)decodeStringChunkedConsumeChunk:(void (^)(NSString *))consumeChunk __attribute__((swift_name("decodeStringChunked(consumeChunk:)")));
@end


/**
 * Results of [decodeElementIndex] used for decoding control flow.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositeDecoderCompanion")))
@interface MEGAAOSCompositeDecoderCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Results of [decodeElementIndex] used for decoding control flow.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCompositeDecoderCompanion *shared __attribute__((swift_name("shared")));

/**
 * Value returned by [decodeElementIndex] when the underlying input has no more data in the current structure.
 * When this value is returned, no methods of the decoder should be called but [endStructure].
 */
@property (readonly) int32_t DECODE_DONE __attribute__((swift_name("DECODE_DONE")));

/**
 * Value returned by [decodeElementIndex] when the format encountered an unknown element
 * (expected neither by the structure of serial descriptor, nor by the format itself).
 */
@property (readonly) int32_t UNKNOWN_NAME __attribute__((swift_name("UNKNOWN_NAME")));
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
- (Builder _Nullable)toBuilder:(Collection _Nullable)receiver __attribute__((swift_name("toBuilder(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Collection _Nullable)toResult:(Builder _Nullable)receiver __attribute__((swift_name("toResult(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ElementMarker")))
@interface MEGAAOSElementMarker : MEGAAOSBase
- (instancetype)initWithDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor readIfAbsent:(MEGAAOSBoolean *(^)(id<MEGAAOSSerialDescriptor>, MEGAAOSInt *))readIfAbsent __attribute__((swift_name("init(descriptor:readIfAbsent:)"))) __attribute__((objc_designated_initializer));
- (void)markIndex:(int32_t)index __attribute__((swift_name("mark(index:)")));
- (int32_t)nextUnmarkedIndex __attribute__((swift_name("nextUnmarkedIndex()")));
@end


/**
 * An interface for a [KSerializer] instance generated by the compiler plugin.
 *
 * Should not be implemented manually or used directly.
 *
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
- (void)insertKeyValuePair:(MEGAAOSMutableDictionary<id, id> *)receiver index:(int32_t)index key:(Key _Nullable)key value:(Value _Nullable)value __attribute__((swift_name("insertKeyValuePair(_:index:key:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readAllDecoder:(id<MEGAAOSCompositeDecoder>)decoder builder:(MEGAAOSMutableDictionary<id, id> *)builder startIndex:(int32_t)startIndex size:(int32_t)size __attribute__((swift_name("readAll(decoder:builder:startIndex:size:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readElementDecoder:(id<MEGAAOSCompositeDecoder>)decoder index:(int32_t)index builder:(MEGAAOSMutableDictionary<id, id> *)builder checkIndex:(BOOL)checkIndex __attribute__((swift_name("readElement(decoder:index:builder:checkIndex:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(Collection _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
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
- (Tag _Nullable)getTag:(id<MEGAAOSSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));

/**
 * @note annotations
 *   kotlin.IgnorableReturnValue
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Tag _Nullable)popTag __attribute__((swift_name("popTag()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)pushTagName:(Tag _Nullable)name __attribute__((swift_name("pushTag(name:)")));

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
- (NSString *)getTag:(id<MEGAAOSSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)nestedNestedName:(NSString *)nestedName __attribute__((swift_name("nested(nestedName:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)renderTagStack __attribute__((swift_name("renderTagStack()")));
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
 * Format-specific replacement for [endStructure], because latter is overridden to manipulate tag stack.
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)endEncodeDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endEncode(descriptor:)")));
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Provides a tag object for given serial descriptor and index.
 * Tag object allows associating given user information with a particular element of composite serializable entity.
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Tag _Nullable)getTag:(id<MEGAAOSSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));

/**
 * @note annotations
 *   kotlin.IgnorableReturnValue
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Tag _Nullable)popTag __attribute__((swift_name("popTag()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)pushTagName:(Tag _Nullable)name __attribute__((swift_name("pushTag(name:)")));

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
- (NSString *)getTag:(id<MEGAAOSSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)nestedNestedName:(NSString *)nestedName __attribute__((swift_name("nested(nestedName:)")));
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
 * Defines which classes and objects should have their serial name included in the json as so-called class discriminator.
 *
 * Class discriminator is a JSON field added by kotlinx.serialization that has [JsonBuilder.classDiscriminator] as a key (`type` by default),
 * and class' serial name as a value (fully qualified name by default, can be changed with [SerialName] annotation).
 *
 * Class discriminator is important for serializing and deserializing [polymorphic class hierarchies](https://github.com/Kotlin/kotlinx.serialization/blob/master/docs/polymorphism.md#sealed-classes).
 * Default [ClassDiscriminatorMode.POLYMORPHIC] mode adds discriminator only to polymorphic classes.
 * This behavior can be changed to match various JSON schemas.
 *
 * @see JsonBuilder.classDiscriminator
 * @see JsonBuilder.classDiscriminatorMode
 * @see Polymorphic
 * @see PolymorphicSerializer
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClassDiscriminatorMode")))
@interface MEGAAOSClassDiscriminatorMode : MEGAAOSKotlinEnum<MEGAAOSClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Defines which classes and objects should have their serial name included in the json as so-called class discriminator.
 *
 * Class discriminator is a JSON field added by kotlinx.serialization that has [JsonBuilder.classDiscriminator] as a key (`type` by default),
 * and class' serial name as a value (fully qualified name by default, can be changed with [SerialName] annotation).
 *
 * Class discriminator is important for serializing and deserializing [polymorphic class hierarchies](https://github.com/Kotlin/kotlinx.serialization/blob/master/docs/polymorphism.md#sealed-classes).
 * Default [ClassDiscriminatorMode.POLYMORPHIC] mode adds discriminator only to polymorphic classes.
 * This behavior can be changed to match various JSON schemas.
 *
 * @see JsonBuilder.classDiscriminator
 * @see JsonBuilder.classDiscriminatorMode
 * @see Polymorphic
 * @see PolymorphicSerializer
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) MEGAAOSClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) MEGAAOSClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (MEGAAOSKotlinArray<MEGAAOSClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Description of JSON input shape used for decoding to sequence.
 *
 * The sequence represents a stream of objects parsed one by one;
 * [DecodeSequenceMode] defines a separator between these objects.
 * Typically, these objects are not separated by meaningful characters ([WHITESPACE_SEPARATED]),
 * or the whole stream is a large array of objects separated with commas ([ARRAY_WRAPPED]).
 *
 * It is used in `Json.decodeToSequence` family of functions:
 * ```
 * @Serializable
 * data class Game(val name: String)
 * val input = """{"name": "Gothic"} {"name": "Planescape"} {"name": "Fallout"}"""
 * // On multiplatform, Okio's Source can be used
 * val inputStream = ByteArrayInputStream(input.encodeToByteArray())
 *
 * val sequence = Json.decodeToSequence<Game>(inputStream, DecodeSequenceMode.WHITESPACE_SEPARATED)
 * // Prints Game(name=Gothic), Game(name=Planescape) and Game(name=Fallout)
 * for (game in sequence) {
 *     println(game)
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecodeSequenceMode")))
@interface MEGAAOSDecodeSequenceMode : MEGAAOSKotlinEnum<MEGAAOSDecodeSequenceMode *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Description of JSON input shape used for decoding to sequence.
 *
 * The sequence represents a stream of objects parsed one by one;
 * [DecodeSequenceMode] defines a separator between these objects.
 * Typically, these objects are not separated by meaningful characters ([WHITESPACE_SEPARATED]),
 * or the whole stream is a large array of objects separated with commas ([ARRAY_WRAPPED]).
 *
 * It is used in `Json.decodeToSequence` family of functions:
 * ```
 * @Serializable
 * data class Game(val name: String)
 * val input = """{"name": "Gothic"} {"name": "Planescape"} {"name": "Fallout"}"""
 * // On multiplatform, Okio's Source can be used
 * val inputStream = ByteArrayInputStream(input.encodeToByteArray())
 *
 * val sequence = Json.decodeToSequence<Game>(inputStream, DecodeSequenceMode.WHITESPACE_SEPARATED)
 * // Prints Game(name=Gothic), Game(name=Planescape) and Game(name=Fallout)
 * for (game in sequence) {
 *     println(game)
 * }
 * ```
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSDecodeSequenceMode *whitespaceSeparated __attribute__((swift_name("whitespaceSeparated")));
@property (class, readonly) MEGAAOSDecodeSequenceMode *arrayWrapped __attribute__((swift_name("arrayWrapped")));
@property (class, readonly) MEGAAOSDecodeSequenceMode *autoDetect __attribute__((swift_name("autoDetect")));
+ (MEGAAOSKotlinArray<MEGAAOSDecodeSequenceMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSDecodeSequenceMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * The main entry point to work with JSON serialization.
 * It is typically used by constructing an application-specific instance, with configured JSON-specific behaviour
 * and, if necessary, registered in [SerializersModule] custom serializers.
 * `Json` instance can be configured in its `Json {}` factory function using [JsonBuilder].
 * For demonstration purposes or trivial usages, Json [companion][Json.Default] can be used instead.
 *
 * Then constructed instance can be used either as regular [SerialFormat] or [StringFormat]
 * or for converting objects to [JsonElement] back and forth.
 *
 * This is the only serial format which has the first-class [JsonElement] support.
 * Any serializable class can be serialized to or from [JsonElement] with [Json.decodeFromJsonElement] and [Json.encodeToJsonElement] respectively or
 * serialize properties of [JsonElement] type.
 *
 * Example of usage:
 * ```
 * @Serializable
 * data class Data(val id: Int, val data: String, val extensions: JsonElement)
 *
 * val json = Json { ignoreUnknownKeys = true }
 * val instance = Data(42, "some data", buildJsonObject { put("key", "value") })
 *
 * // Plain Json usage: returns '{"id": 42, "some data", "extensions": {"key": "value" } }'
 * val jsonString: String = json.encodeToString(instance)
 *
 * // JsonElement serialization, specific for JSON format
 * val jsonElement: JsonElement = json.encodeToJsonElement(instance)
 *
 * // Deserialize from string
 * val deserialized: Data = json.decodeFromString<Data>(jsonString)
 *
 * // Deserialize from json element, JSON-specific
 * val deserializedFromElement: Data = json.decodeFromJsonElement<Data>(jsonElement)
 *
 *  // Deserialize from string to JSON tree, JSON-specific
 * val deserializedElement: JsonElement = json.parseToJsonElement(jsonString)
 *
 * // Deserialize a stream of a single item from an input stream
 * val sequence = Json.decodeToSequence<Data>(ByteArrayInputStream(jsonString.encodeToByteArray()))
 * for (item in sequence) {
 *     println(item) // Prints deserialized Data value
 * }
 * ```
 *
 * Json instance also exposes its [configuration] that can be used in custom serializers
 * that rely on [JsonDecoder] and [JsonEncoder] for customizable behaviour.
 *
 * Json format configuration can be refined using the corresponding constructor:
 * ```
 * val defaultJson = Json {
 *     encodeDefaults = true
 *     ignoreUnknownKeys = true
 * }
 * // Will inherit the properties of defaultJson
 * val debugEndpointJson = Json(defaultJson) {
 *     // ignoreUnknownKeys and encodeDefaults are set to true
 *     prettyPrint = true
 * }
 * ```
 */
__attribute__((swift_name("Json")))
@interface MEGAAOSJson : MEGAAOSBase <MEGAAOSStringFormat>
@property (class, readonly, getter=companion) MEGAAOSJsonDefault *companion __attribute__((swift_name("companion")));

/**
 * Deserializes the given [element] into a value of type [T] using the given [deserializer].
 *
 * @throws [SerializationException] if the given JSON element is not a valid JSON input for the type [T]
 * @throws [IllegalArgumentException] if the decoded input cannot be represented as a valid instance of type [T]
 */
- (id _Nullable)decodeFromJsonElementDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer element:(MEGAAOSJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));

/**
 * Decodes and deserializes the given JSON [string] to the value of type [T] using deserializer
 * retrieved from the reified type parameter.
 * Example:
 * ```
 * @Serializable
 * data class Project(val name: String, val language: String)
 * //  Project(name=kotlinx.serialization, language=Kotlin)
 * println(Json.decodeFromString<Project>("""{"name":"kotlinx.serialization","language":"Kotlin"}"""))
 * ```
 *
 * @throws SerializationException in case of any decoding-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 */
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));

/**
 * Deserializes the given JSON [string] into a value of type [T] using the given [deserializer].
 * Example:
 * ```
 * @Serializable
 * data class Project(val name: String, val language: String)
 * //  Project(name=kotlinx.serialization, language=Kotlin)
 * println(Json.decodeFromString(Project.serializer(), """{"name":"kotlinx.serialization","language":"Kotlin"}"""))
 * ```
 *
 * @throws [SerializationException] if the given JSON string is not a valid JSON input for the type [T]
 * @throws [IllegalArgumentException] if the decoded input cannot be represented as a valid instance of type [T]
 */
- (id _Nullable)decodeFromStringDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));

/**
 * Serializes the given [value] into an equivalent [JsonElement] using the given [serializer]
 *
 * @throws [SerializationException] if the given value cannot be serialized to JSON
 */
- (MEGAAOSJsonElement *)encodeToJsonElementSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));

/**
 * Serializes the [value] of type [T] into an equivalent JSON using serializer
 * retrieved from the reified type parameter.
 *
 * Example of usage:
 * ```
 * @Serializable
 * class Project(val name: String, val language: String)
 *
 * val data = Project("kotlinx.serialization", "Kotlin")
 *
 * // Prints {"name":"kotlinx.serialization","language":"Kotlin"}
 * println(Json.encodeToString(data))
 * ```
 *
 * @throws [SerializationException] if the given value cannot be serialized to JSON.
 */
- (NSString *)encodeToStringValue:(id _Nullable)value __attribute__((swift_name("encodeToString(value:)")));

/**
 * Serializes the [value] into an equivalent JSON using the given [serializer].
 * This method is recommended to be used with an explicit serializer (e.g. the custom or third-party one),
 * otherwise the `encodeToString(value: T)` version might be preferred as the most concise one.
 *
 * Example of usage:
 * ```
 * @Serializable
 * class Project(val name: String, val language: String)
 *
 * val data = Project("kotlinx.serialization", "Kotlin")
 *
 * // Prints {"name":"kotlinx.serialization","language":"Kotlin"}
 * println(Json.encodeToString(Project.serializer(), data))
 * // The same as Json.encodeToString<T>(value: T) overload
 * println(Json.encodeToString(data))
 * ```
 *
 * @throws [SerializationException] if the given value cannot be serialized to JSON.
 */
- (NSString *)encodeToStringSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));

/**
 * Deserializes the given JSON [string] into a corresponding [JsonElement] representation.
 *
 * @throws [SerializationException] if the given string is not a valid JSON
 */
- (MEGAAOSJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) MEGAAOSJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * The default instance of [Json] with default configuration.
 *
 * Example of usage:
 * ```
 * @Serializable
 * class Project(val name: String, val language: String)
 *
 * val data = Project("kotlinx.serialization", "Kotlin")
 * // Prints {"name":"kotlinx.serialization","language":"Kotlin"}
 * println(Json.encodeToString(data))
 * ```
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Json.Default")))
@interface MEGAAOSJsonDefault : MEGAAOSJson
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The default instance of [Json] with default configuration.
 *
 * Example of usage:
 * ```
 * @Serializable
 * class Project(val name: String, val language: String)
 *
 * val data = Project("kotlinx.serialization", "Kotlin")
 * // Prints {"name":"kotlinx.serialization","language":"Kotlin"}
 * println(Json.encodeToString(data))
 * ```
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * Class representing JSON array, consisting of indexed values, where value is arbitrary [JsonElement]
 *
 * Since this class also implements [List] interface, you can use
 * traditional methods like [List.get] or [List.getOrNull] to obtain Json elements.
 */
__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("JsonArray")))
@interface MEGAAOSJsonArray : NSObject
@end


/**
 * DSL builder for a [JsonArray]. To create an instance of builder, use [buildJsonArray] build function.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonArrayBuilder")))
@interface MEGAAOSJsonArrayBuilder : MEGAAOSBase

/**
 * Adds the given JSON [element] to a resulting JSON array.
 *
 * Always returns `true` similarly to [ArrayList] specification.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (BOOL)addElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("add(element:)")));

/**
 * Adds the given JSON [elements] to a resulting JSON array.
 *
 * @return `true` if the list was changed as the result of the operation.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addAllElements:(id)elements __attribute__((swift_name("addAll(elements:)")));
@end


/**
 * Builder of the [Json] instance provided by `Json { ... }` factory function:
 *
 * ```
 * val json = Json { // this: JsonBuilder
 *     encodeDefaults = true
 *     ignoreUnknownKeys = true
 * }
 * ```
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonBuilder")))
@interface MEGAAOSJsonBuilder : MEGAAOSBase

/**
 * Allows parser to accept C/Java-style comments in JSON input.
 *
 * Comments are being skipped and are not stored anywhere; this setting does not affect encoding in any way.
 *
 * More specifically, a comment is a substring that is not a part of JSON key or value, conforming to one of those:
 *
 * 1. Starts with `//` characters and ends with a newline character `\n`.
 * 2. Starts with `**` characters and ends with `**` characters. Nesting block comments
 *  is not supported: no matter how many `**` characters you have, first `**` will end the comment.
 *
 *  `false` by default.
 */
@property BOOL allowComments __attribute__((swift_name("allowComments")));

/**
 * Removes JSON specification restriction on special floating-point values such as `NaN` and `Infinity`
 * and enables their serialization and deserialization as float literals without quotes.
 * When enabling it, please ensure that the receiving party will be able to encode and decode these special values.
 * This option affects both encoding and decoding.
 * `false` by default.
 *
 * Example of usage:
 * ```
 * val floats = listOf(1.0, 2.0, Double.NaN, Double.NEGATIVE_INFINITY)
 * val json = Json { allowSpecialFloatingPointValues = true }
 * // Prints [1.0,2.0,NaN,-Infinity]
 * println(json.encodeToString(floats))
 * // Prints [1.0, 2.0, NaN, -Infinity]
 * println(json.decodeFromString<List<Double>>("[1.0,2.0,NaN,-Infinity]"))
 * ```
 */
@property BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));

/**
 * Enables structured objects to be serialized as map keys by
 * changing serialized form of the map from JSON object (key-value pairs) to flat array like `[k1, v1, k2, v2]`.
 * `false` by default.
 */
@property BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * Allows parser to accept trailing (ending) commas in JSON objects and arrays,
 * making inputs like `[1, 2, 3,]` and `{"key": "value",}` valid.
 * Does not affect encoding.
 * `false` by default.
 */
@property BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));

/**
 * Name of the class descriptor property for polymorphic serialization.
 * `type` by default.
 *
 * Note that if your class has any serial names that are equal to [classDiscriminator]
 * (e.g., `@Serializable class Foo(val type: String)`), an [IllegalArgumentException] will be thrown from `Json {}` builder.
 * You can disable this check and class discriminator inclusion with [ClassDiscriminatorMode.NONE], but kotlinx.serialization will not be
 * able to deserialize such data back.
 *
 * @see classDiscriminatorMode
 */
@property NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * Defines which classes and objects should have class discriminator added to the output.
 * [ClassDiscriminatorMode.POLYMORPHIC] by default.
 *
 * Other modes are generally intended to produce JSON for consumption by third-party libraries,
 * therefore, this setting does not affect the deserialization process.
 *
 * @see classDiscriminator
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property MEGAAOSClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));

/**
 * Enables coercing incorrect JSON values in the following cases:
 *
 *   1. JSON value is `null` but the property type is non-nullable.
 *   2. Property type is an enum type, but JSON value contains an unknown enum member.
 *
 * Coerced values are treated as missing; they are replaced either with a default property value if it exists, or with a `null` if [explicitNulls] flag
 * is set to `false` and a property is nullable (for enums).
 *
 * Example of usage:
 * ```
 * enum class Choice { A, B, C }
 *
 * @Serializable
 * data class Example1(val a: String = "default", b: Choice = Choice.A, c: Choice? = null)
 *
 * val coercingJson = Json { coerceInputValues = true }
 * // Decodes Example1("default", Choice.A, null) instance
 * coercingJson.decodeFromString<Example1>("""{"a": null, "b": "unknown", "c": "unknown"}""")
 *
 * @Serializable
 * data class Example2(val c: Choice?)
 *
 * val coercingImplicitJson = Json(coercingJson) { explicitNulls = false }
 * // Decodes Example2(null) instance.
 * coercingImplicitJson.decodeFromString<Example1>("""{"c": "unknown"}""")
 * ```
 *
 * `false` by default.
 */
@property BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * Enables decoding enum values in a case-insensitive manner.
 * Encoding is not affected by this option.
 *
 * It affects both enum serial names and alternative names (specified with the [JsonNames] annotation).
 * Example of usage:
 * ```
 * enum class E { VALUE_A, @JsonNames("ALTERNATIVE") VALUE_B }
 *
 * @Serializable
 * data class Outer(val enums: List<E>)
 *
 * val json = Json { decodeEnumsCaseInsensitive = true }
 * // Prints [VALUE_A, VALUE_B]
 * println(json.decodeFromString<Outer>("""{"enums":["Value_A", "alternative"]}""").enums)
 * // Will fail with SerializationException: no such enum as 'Value_A'
 * Json.decodeFromString<Outer>("""{"enums":["Value_A", "alternative"]}""")
 * ```
 *
 * With this feature enabled, it is no longer possible to decode enum values that have the same name in a lowercase form.
 * The following code will throw a serialization exception:
 * ```
 * enum class CaseSensitiveEnum { One, ONE }
 * val json = Json { decodeEnumsCaseInsensitive = true }
 * // Fails with SerializationException: The suggested name 'one' for enum value ONE is already one of the names for enum value One
 * json.decodeFromString<CaseSensitiveEnum>("ONE")
 * ```
 */
@property BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));

/**
 * Specifies whether default values of Kotlin properties should be encoded.
 * `false` by default.
 *
 * Example:
 * ```
 * @Serializable
 * class Project(val name: String, val language: String = "kotlin")
 *
 * // Prints {"name":"test-project"}
 * println(Json.encodeToString(Project("test-project")))
 *
 * // Prints {"name":"test-project","language":"kotlin"}
 * val withDefaults = Json { encodeDefaults = true }
 * println(withDefaults.encodeToString(Project("test-project")))
 * ```
 *
 * This option does not affect decoding.
 */
@property BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * Specifies whether actual input data should be included in exception messages.
 *
 * When `false`, exception messages will not contain sensitive input data that could be logged
 * or exposed in error reporting systems. This is the default and recommended setting for production
 * environments where input data may contain sensitive or confidential information.
 * With this setting disabled, [JsonDecodingException.input] will be null and [JsonDecodingException.path]
 * will have `<debug info disabled>` where `Map` keys are supposed to be.
 *
 * When `true`, exception messages will include the actual input data that caused the error,
 * which can be helpful for debugging purposes during development.
 *
 * While in experimental stage, this flag is `true` by default.
 * It will be changed to `false` when API stabilizes to assume data is sensitive and unsafe by default.
 *
 * Example of usage:
 * ```
 * @Serializable
 * data class User(val name: String, val age: Int)
 *
 * val json = Json { exceptionsWithDebugInfo = false }
 * // Exception message will not contain the invalid input string
 * json.decodeFromString<User>("""{"name":"John","age":"invalid"}""")
 *
 * val debugJson = Json { exceptionsWithDebugInfo = true }
 * // Exception message will include `JSON Input: {"name":"John","age":"invalid"}` line
 * debugJson.decodeFromString<User>("""{"name":"John","age":"invalid"}""")
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property BOOL exceptionsWithDebugInfo __attribute__((swift_name("exceptionsWithDebugInfo")));

/**
 * Specifies whether `null` values should be encoded for nullable properties and must be present in JSON object
 * during decoding.
 *
 * When this flag is disabled properties with `null` values are not encoded;
 * during decoding, the absence of a field value is treated as `null` for nullable properties without a default value.
 *
 * `true` by default.
 *
 * It is possible to make decoder treat some invalid input data as the missing field to enhance the functionality of this flag.
 * See [coerceInputValues] documentation for details.
 *
 * Example of usage:
 * ```
 * @Serializable
 * data class Project(val name: String, val description: String?)
 * val implicitNulls = Json { explicitNulls = false }
 *
 * // Encoding
 * // Prints '{"name":"unknown","description":null}'. null is explicit
 * println(Json.encodeToString(Project("unknown", null)))
 * // Prints '{"name":"unknown"}', null is omitted
 * println(implicitNulls.encodeToString(Project("unknown", null)))
 *
 * // Decoding
 * // Prints Project(name=unknown, description=null)
 * println(implicitNulls.decodeFromString<Project>("""{"name":"unknown"}"""))
 * // Fails with "MissingFieldException: Field 'description' is required"
 * Json.decodeFromString<Project>("""{"name":"unknown"}""")
 * ```
 *
 * Exercise extra caution if you want to use this flag and have non-typical classes with properties
 * that are nullable, but have default value that is not `null`. In that case, encoding and decoding will not
 * be symmetrical if `null` is omitted from the output.
 * Example of such a pitfall:
 *
 * ```
 * @Serializable
 * data class Example(val nullable: String? = "non-null default")
 *
 * val json = Json { explicitNulls = false }
 *
 * val original = Example(null)
 * val s = json.encodeToString(original)
 * // prints "{}" because of explicitNulls flag
 * println(s)
 * val decoded = json.decodeFromString<Example>(s)
 * // Prints "non-null default" because default value is inserted since `nullable` field is missing in the input
 * println(decoded.nullable)
 * println(decoded != original) // true
 * ```
 */
@property BOOL explicitNulls __attribute__((swift_name("explicitNulls")));

/**
 * Specifies whether encounters of unknown properties in the input JSON
 * should be ignored instead of throwing [SerializationException].
 * `false` by default.
 *
 * Example of usage:
 * ```
 * @Serializable
 * data class Project(val name: String)
 * val withUnknownKeys = Json { ignoreUnknownKeys = true }
 * // Project(name=unknown), "version" is ignored completely
 * println(withUnknownKeys.decodeFromString<Project>("""{"name":"unknown", "version": 2.0}"""))
 * // Fails with "Encountered an unknown key 'version'"
 * Json.decodeFromString<Project>("""{"name":"unknown", "version": 2.0}""")
 * ```
 *
 * In case you wish to allow unknown properties only for specific class(es),
 * consider using [JsonIgnoreUnknownKeys] annotation instead of this configuration flag.
 *
 * @see JsonIgnoreUnknownKeys
 */
@property BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));

/**
 * Removes JSON specification restriction (RFC-4627) and makes parser
 * more liberal to the malformed input. In lenient mode, unquoted JSON keys and string values are allowed.
 *
 * Example of invalid JSON that is accepted with this flag set:
 * `{key: value}` can be parsed into `@Serializable class Data(val key: String)`.
 *
 * Its relaxations can be expanded in the future, so that lenient parser becomes even more
 * permissive to invalid values in the input.
 *
 * `false` by default.
 */
@property BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * Specifies [JsonNamingStrategy] that should be used for all properties in classes for serialization and deserialization.
 *
 * `null` by default.
 *
 * This strategy is applied for all entities that have [StructureKind.CLASS].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property id<MEGAAOSJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));

/**
 * Specifies whether resulting JSON should be pretty-printed: formatted and optimized for human readability.
 * `false` by default.
 *
 * Example of usage:
 * ```
 * @Serializable
 * class Key(val type: String, val opens: String)
 * val pretty = Json { prettyPrint = true }
 * **
 *  * Prints
 *  * {
 *  *     "type": "keycard",
 *  *     "opens": "secret door"
 *  * }
 *  **
 * println(pretty.encodeToString(Key("keycard", "secret door")))
 * ```
 */
@property BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * Specifies indent string to use with [prettyPrint] mode.
 * Only whitespace characters are allowed: ' ', '\n', '\r' or '\t'.
 * 4 spaces by default.
 */
@property NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));

/**
 * Module with contextual and polymorphic serializers to be used in the resulting [Json] instance.
 *
 * @see SerializersModule
 * @see Contextual
 * @see Polymorphic
 */
@property MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));

/**
 * Specifies whether Json instance makes use of [JsonNames] annotation.
 *
 * Disabling this flag when one does not use [JsonNames] at all may sometimes result in better performance,
 * particularly when a large count of fields is skipped with [ignoreUnknownKeys].
 * `true` by default.
 */
@property BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));

/**
 * Switches polymorphic serialization to the default array format.
 * This is an option for legacy JSON format and should not be generally used.
 * `false` by default.
 *
 * This option can only be used if [classDiscriminatorMode] in a default [ClassDiscriminatorMode.POLYMORPHIC] state.
 */
@property BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end


/**
 * Configuration of the current [Json] instance available through [Json.configuration]
 * and configured with [JsonBuilder] constructor.
 *
 * Can be used for debug purposes and for custom Json-specific serializers
 * via [JsonEncoder] and [JsonDecoder].
 *
 * Standalone configuration object is meaningless and can nor be used outside the
 * [Json], neither new [Json] instance can be created from it.
 *
 * Detailed description of each property is available in [JsonBuilder] class.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonConfiguration")))
@interface MEGAAOSJsonConfiguration : MEGAAOSBase

/** @suppress Dokka **/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property MEGAAOSClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property BOOL exceptionsWithDebugInfo __attribute__((swift_name("exceptionsWithDebugInfo")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<MEGAAOSJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end


/**
 * Base class for custom serializers that allows selecting polymorphic serializer
 * without a dedicated class discriminator, on a content basis.
 *
 * Usually, polymorphic serialization (represented by [PolymorphicSerializer] and [SealedClassSerializer])
 * requires a dedicated `"type"` property in the JSON to
 * determine actual serializer that is used to deserialize Kotlin class.
 *
 * However, sometimes (e.g. when interacting with external API) type property is not present in the input
 * and it is expected to guess the actual type by the shape of JSON, for example by the presence of specific key.
 * [JsonContentPolymorphicSerializer] provides a skeleton implementation for such strategy. Please note that
 * since JSON content is represented by [JsonElement] class and could be read only with [JsonDecoder] decoder,
 * this class works only with [Json] format.
 *
 * Deserialization happens in two stages: first, a value from the input JSON is read
 * to as a [JsonElement]. Second, [selectDeserializer] function is called to determine which serializer should be used.
 * The returned serializer is used to deserialize [JsonElement] back to Kotlin object.
 *
 * It is possible to serialize values this serializer. In that case, class discriminator property won't
 * be added to JSON stream, i.e., deserializing a class from the string and serializing it back yields the original string.
 * However, to determine a serializer, a standard polymorphic mechanism represented by [SerializersModule] is used.
 * For convenience, [serialize] method can lookup default serializer, but it is recommended to follow
 * standard procedure with [registering][SerializersModuleBuilder.polymorphic].
 *
 * Usage example:
 * ```
 * interface Payment {
 *     val amount: String
 * }
 *
 * @Serializable
 * data class SuccessfulPayment(override val amount: String, val date: String) : Payment
 *
 * @Serializable
 * data class RefundedPayment(override val amount: String, val date: String, val reason: String) : Payment
 *
 * object PaymentSerializer : JsonContentPolymorphicSerializer<Payment>(Payment::class) {
 *     override fun selectDeserializer(content: JsonElement) = when {
 *         "reason" in content.jsonObject -> RefundedPayment.serializer()
 *         else -> SuccessfulPayment.serializer()
 *     }
 * }
 *
 * // Now both statements will yield different subclasses of Payment:
 *
 * Json.decodeFromString(PaymentSerializer, """{"amount":"1.0","date":"03.02.2020"}""")
 * Json.decodeFromString(PaymentSerializer, """{"amount":"2.0","date":"03.02.2020","reason":"complaint"}""")
 * ```
 *
 * @param T A root type for all classes that could be possibly encountered during serialization and deserialization.
 * Must be non-final class or interface.
 * @param baseClass A class token for [T].
 */
__attribute__((swift_name("JsonContentPolymorphicSerializer")))
@interface MEGAAOSJsonContentPolymorphicSerializer<T> : MEGAAOSBase <MEGAAOSKSerializer>
- (instancetype)initWithBaseClass:(id<MEGAAOSKotlinKClass>)baseClass __attribute__((swift_name("init(baseClass:)"))) __attribute__((objc_designated_initializer));
- (T)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Determines a particular strategy for deserialization by looking on a parsed JSON [element].
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<MEGAAOSDeserializationStrategy>)selectDeserializerElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("selectDeserializer(element:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * A descriptor for this set of content-based serializers.
 * By default, it uses the name composed of [baseClass] simple name,
 * kind is set to [PolymorphicKind.SEALED] and contains 0 elements.
 *
 * However, this descriptor can be overridden to achieve better representation of custom transformed JSON shape
 * for schema generating/introspection purposes.
 */
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Decoder used by [Json] during deserialization.
 * This interface can be used to inject desired behaviour into a serialization process of [Json].
 *
 * Typical example of the usage:
 * ```
 * // Class representing Either<Left|Right>
 * sealed class Either {
 *     data class Left(val errorMsg: String) : Either()
 *     data class Right(val data: Payload) : Either()
 * }
 *
 * // Serializer injects custom behaviour by inspecting object content and writing
 * object EitherSerializer : KSerializer<Either> {
 *     override val descriptor: SerialDescriptor = buildSerialDescriptor("package.Either", PolymorphicKind.SEALED) {
 *          // ..
 *      }
 *
 *     override fun deserialize(decoder: Decoder): Either {
 *         val input = decoder as? JsonDecoder ?: throw SerializationException("This class can be decoded only by Json format")
 *         val tree = input.decodeJsonElement() as? JsonObject ?: throw SerializationException("Expected JsonObject")
 *         if ("error" in tree) return Either.Left(tree["error"]!!.jsonPrimitive.content)
 *         return Either.Right(input.json.decodeFromJsonElement(Payload.serializer(), tree))
 *     }
 *
 *     override fun serialize(encoder: Encoder, value: Either) {
 *         val output = encoder as? JsonEncoder ?: throw SerializationException("This class can be encoded only by Json format")
 *         val tree = when (value) {
 *           is Either.Left -> JsonObject(mapOf("error" to JsonPrimitive(value.errorMsg)))
 *           is Either.Right -> output.json.encodeToJsonElement(Payload.serializer(), value.data)
 *         }
 *         output.encodeJsonElement(tree)
 *     }
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `JsonDecoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 * Accepting this interface in your API methods, casting [Decoder] to [JsonDecoder] and invoking its
 * methods is considered stable.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/serialization/SealedSerializationApi)])
*/
__attribute__((swift_name("JsonDecoder")))
@protocol MEGAAOSJsonDecoder <MEGAAOSDecoder, MEGAAOSCompositeDecoder>
@required

/**
 * Decodes the next element in the current input as [JsonElement].
 * The type of the decoded element depends on the current state of the input and, when received
 * by [serializer][KSerializer] in its [KSerializer.serialize] method, the type of the token directly matches
 * the [kind][SerialDescriptor.kind].
 *
 * This method is allowed to invoke only as the part of the whole deserialization process of the class,
 * calling this method after invoking [beginStructure] or any `decode*` method will lead to unspecified behaviour.
 * For example:
 * ```
 * class Holder(val value: Int, val list: List<Int>())
 *
 * // Holder deserialize method
 * fun deserialize(decoder: Decoder): Holder {
 *     // Completely okay, the whole Holder object is read
 *     val jsonObject = (decoder as JsonDecoder).decodeJsonElement()
 *     // ...
 * }
 *
 * // Incorrect Holder deserialize method
 * fun deserialize(decoder: Decoder): Holder {
 *     // decode "value" key unconditionally
 *     decoder.decodeElementIndex(descriptor)
 *     val value = decode.decodeInt()
 *     // Incorrect, decoder is already in an intermediate state after decodeInt
 *     val json = (decoder as JsonDecoder).decodeJsonElement()
 *     // ...
 * }
 * ```
 */
- (MEGAAOSJsonElement *)decodeJsonElement __attribute__((swift_name("decodeJsonElement()")));

/**
 * An instance of the current [Json].
 */
@property (readonly) MEGAAOSJson *json __attribute__((swift_name("json")));
@end


/**
 * Base type for all JSON-specific exceptions thrown by [Json].
 *
 * [message] always includes [shortMessage]. It typically also includes a [hint] and additional exception-specific information,
 * such as [JsonDecodingException.path].
 *
 * The [shortMessage] is intended to be concise and aimed at the application users,
 * while [hint] may contain actionable advice for the developer, e.g., enabling a specific
 * configuration option.
 *
 * @property shortMessage short, human-readable description of the error.
 * @property hint optional suggestions for the developer that can help fix or diagnose the problem.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("JsonException")))
@interface MEGAAOSJsonException : MEGAAOSSerializationException

/**
 * Creates an instance of [SerializationException] without any details.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * Creates an instance of [SerializationException] with the specified detail [message].
 */
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * Creates an instance of [SerializationException] with the specified [cause].
 */
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * Creates an instance of [SerializationException] with the specified detail [message], and the given [cause].
 */
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString * _Nullable hint __attribute__((swift_name("hint")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *shortMessage __attribute__((swift_name("shortMessage")));
@end


/**
 * Thrown when [Json] fails to parse the given JSON or to deserialize it into a target type.
 *
 * The exception [message] is formatted to include, when available, the character [offset],
 * the JSON [path] to the failing element, a [hint] with actionable guidance, and a
 * minified excerpt of the original [input].
 *
 * Typical cases include malformed JSON, unexpected tokens, missing required fields,
 * or values that cannot be read for the declared type.
 *
 * Notes about properties:
 * - [offset]: zero-based character index in the input where the failure was detected,
 *   or `-1` when the position is unknown.
 * - [path]: JSON path to the element that failed to decode (e.g. `$.user.address[0].city`),
 *   when available.
 * - [input]: the original JSON input (or its minified excerpt in the message). Large inputs
 *   are shortened with context around [offset]. Input is provided on a best-effort basis,
 *   so it may be incomplete. Input is only included when [JsonConfiguration.exceptionsWithDebugInfo] is enabled.
 * - [hint]: optional suggestions for the developer, e.g., enabling certain [Json] configuration options.
 *
 * @property shortMessage short, human-readable description of the decoding error.
 * @property offset zero-based index of the error position in the input, or `-1` if unknown.
 * @property path JSON path to the failing element when available, or `null`.
 * @property input original input or its excerpt.
 * @property hint optional suggestions for the developer that can help fix or diagnose the problem.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonDecodingException")))
@interface MEGAAOSJsonDecodingException : MEGAAOSJsonException
@property (readonly) NSString * _Nullable hint __attribute__((swift_name("hint")));
@property (readonly) NSString * _Nullable input __attribute__((swift_name("input")));
@property (readonly) int32_t offset __attribute__((swift_name("offset")));
@property (readonly) NSString * _Nullable path __attribute__((swift_name("path")));
@property (readonly) NSString *shortMessage __attribute__((swift_name("shortMessage")));
@end


/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("JsonElement")))
@interface MEGAAOSJsonElement : MEGAAOSBase
@property (class, readonly, getter=companion) MEGAAOSJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElement.Companion")))
@interface MEGAAOSJsonElementCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonElementCompanion *shared __attribute__((swift_name("shared")));

/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 */
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Encoder used by [Json] during serialization.
 * This interface can be used to inject desired behaviour into a serialization process of [Json].
 *
 * Typical example of the usage:
 * ```
 * // Class representing Either<Left|Right>
 * sealed class Either {
 *     data class Left(val errorMsg: String) : Either()
 *     data class Right(val data: Payload) : Either()
 * }
 *
 * // Serializer injects custom behaviour by inspecting object content and writing
 * object EitherSerializer : KSerializer<Either> {
 *     override val descriptor: SerialDescriptor = buildSerialDescriptor("package.Either", PolymorphicKind.SEALED) {
 *          // ..
 *      }
 *
 *     override fun deserialize(decoder: Decoder): Either {
 *         val input = decoder as? JsonDecoder ?: throw SerializationException("This class can be decoded only by Json format")
 *         val tree = input.decodeJsonElement() as? JsonObject ?: throw SerializationException("Expected JsonObject")
 *         if ("error" in tree) return Either.Left(tree["error"]!!.jsonPrimitive.content)
 *         return Either.Right(input.json.decodeFromJsonElement(Payload.serializer(), tree))
 *     }
 *
 *     override fun serialize(encoder: Encoder, value: Either) {
 *         val output = encoder as? JsonEncoder ?: throw SerializationException("This class can be encoded only by Json format")
 *         val tree = when (value) {
 *           is Either.Left -> JsonObject(mapOf("error" to JsonPrimitve(value.errorMsg)))
 *           is Either.Right -> output.json.encodeToJsonElement(Payload.serializer(), value.data)
 *         }
 *         output.encodeJsonElement(tree)
 *     }
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `JsonEncoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 * Accepting this interface in your API methods, casting [Encoder] to [JsonEncoder] and invoking its
 * methods is considered stable.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/serialization/SealedSerializationApi)])
*/
__attribute__((swift_name("JsonEncoder")))
@protocol MEGAAOSJsonEncoder <MEGAAOSEncoder, MEGAAOSCompositeEncoder>
@required

/**
 * Appends the given JSON [element] to the current output.
 * This method is allowed to invoke only as the part of the whole serialization process of the class,
 * calling this method after invoking [beginStructure] or any `encode*` method will lead to unspecified behaviour
 * and may produce an invalid JSON result.
 * For example:
 * ```
 * class Holder(val value: Int, val list: List<Int>())
 *
 * // Holder serialize method
 * fun serialize(encoder: Encoder, value: Holder) {
 *     // Completely okay, the whole Holder object is read
 *     val jsonObject = JsonObject(...) // build a JsonObject from Holder
 *     (encoder as JsonEncoder).encodeJsonElement(jsonObject) // Write it
 * }
 *
 * // Incorrect Holder serialize method
 * fun serialize(encoder: Encoder, value: Holder) {
 *     val composite = encoder.beginStructure(descriptor)
 *     composite.encodeSerializableElement(descriptor, 0, Int.serializer(), value.value)
 *     val array = JsonArray(value.list)
 *     // Incorrect, encoder is already in an intermediate state after encodeSerializableElement
 *     (composite as JsonEncoder).encodeJsonElement(array)
 *     composite.endStructure(descriptor)
 *     // ...
 * }
 * ```
 */
- (void)encodeJsonElementElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("encodeJsonElement(element:)")));

/**
 * An instance of the current [Json].
 */
@property (readonly) MEGAAOSJson *json __attribute__((swift_name("json")));
@end


/**
 * Thrown when [Json] fails to encode a value to a JSON string.
 *
 * Typical cases include encountering values that cannot be represented in JSON
 * (e.g., non-finite floating-point numbers when they are not allowed) or using
 * unsupported types as map keys.
 *
 * The exception [message] includes [shortMessage] and, when present, a [hint] with
 * actionable guidance for the developer.
 *
 * @property shortMessage short, human-readable description of the encoding error.
 * @property classSerialName serial name of the affected class, if known.
 * @property hint optional suggestions for the developer that can help fix or diagnose the problem.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonEncodingException")))
@interface MEGAAOSJsonEncodingException : MEGAAOSJsonException
@property (readonly) NSString * _Nullable classSerialName __attribute__((swift_name("classSerialName")));
@property (readonly) NSString * _Nullable hint __attribute__((swift_name("hint")));
@property (readonly) NSString *shortMessage __attribute__((swift_name("shortMessage")));
@end


/**
 * Represents naming strategy — a transformer for serial names in a [Json] format.
 * Transformed serial names are used for both serialization and deserialization.
 * A naming strategy is always applied globally in the Json configuration builder
 * (see [JsonBuilder.namingStrategy]).
 *
 * Actual transformation happens in the [serialNameForJson] function.
 * It is possible to apply additional filtering inside the transformer using the `descriptor` parameter in [serialNameForJson].
 *
 * Original serial names are never used after transformation, so they are ignored in a Json input.
 * If the original serial name is present in the Json input but transformed is not,
 * [MissingFieldException] still would be thrown. If one wants to preserve the original serial name for deserialization,
 * one should use the [JsonNames] annotation, as its values are not transformed.
 *
 * ### Common pitfalls in conjunction with other Json features
 *
 * * Due to the nature of kotlinx.serialization framework, naming strategy transformation is applied to all properties regardless
 * of whether their serial name was taken from the property name or provided by @[SerialName] annotation.
 * Effectively, it means one cannot avoid transformation by explicitly specifying the serial name.
 *
 * * Collision of the transformed name with any other (transformed) properties serial names or any alternative names
 * specified with [JsonNames] will lead to a deserialization exception.
 *
 * * Naming strategies do not transform serial names of the types used for the polymorphism, as they always should be specified explicitly.
 * Values from [JsonClassDiscriminator] or global [JsonBuilder.classDiscriminator] also are not altered.
 *
 * ### Controversy about using global naming strategies
 *
 * Global naming strategies have one key trait that makes them a debatable and controversial topic:
 * They are very implicit. It means that by looking only at the definition of the class,
 * it is impossible to say which names it will have in the serialized form.
 * As a consequence, naming strategies are not friendly to refactorings. Programmer renaming `myId` to `userId` may forget
 * to rename `my_id`, and vice versa. Generally, any tools one can imagine work poorly with global naming strategies:
 * Find Usages/Rename in IDE, full-text search by grep, etc. For them, the original name and the transformed are two different things;
 * changing one without the other may introduce bugs in many unexpected ways.
 * The lack of a single place of definition, the inability to use automated tools, and more error-prone code lead
 * to greater maintenance efforts for code with global naming strategies.
 * However, there are cases where usage of naming strategies is inevitable, such as interop with an existing API or migrating a large codebase.
 * Therefore, one should carefully weigh the pros and cons before considering adding global naming strategies to an application.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("JsonNamingStrategy")))
@protocol MEGAAOSJsonNamingStrategy
@required

/**
 * Accepts an original [serialName] (defined by property name in the class or [SerialName] annotation) and returns
 * a transformed serial name which should be used for serialization and deserialization.
 *
 * Besides string manipulation operations, it is also possible to implement transformations that depend on the [descriptor]
 * and its element (defined by [elementIndex]) currently being serialized.
 * It is guaranteed that `descriptor.getElementName(elementIndex) == serialName`.
 * For example, one can choose different transformations depending on [SerialInfo]
 * annotations (see [SerialDescriptor.getElementAnnotations]) or element optionality (see [SerialDescriptor.isElementOptional]).
 *
 * Note that invocations of this function are cached for performance reasons.
 * Caching strategy is an implementation detail and should not be assumed as a part of the public API contract, as it may be changed in future releases.
 * Therefore, it is essential for this function to be pure: it should not have any side effects, and it should
 * return the same String for a given [descriptor], [elementIndex], and [serialName], regardless of the number of invocations.
 */
- (NSString *)serialNameForJsonDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end


/**
 * Contains basic, ready to use naming strategies.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonNamingStrategyBuiltins")))
@interface MEGAAOSJsonNamingStrategyBuiltins : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Contains basic, ready to use naming strategies.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)builtins __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonNamingStrategyBuiltins *shared __attribute__((swift_name("shared")));

/**
 * A strategy that transforms serial names from camel case to kebab case — lowercase characters with words separated by dashes.
 * The descriptor parameter is not used.
 *
 * **Transformation rules**
 *
 * Words' bounds are defined by uppercase characters. If there is a single uppercase char, it is transformed into lowercase one with a dash in front:
 * `twoWords` -> `two-words`. No dash is added if it was a beginning of the name: `MyProperty` -> `my-property`. Also, no dash is added if it was already there:
 * `camel-Case-WithDashes` -> `camel-case-with-dashes`.
 *
 * **Acronyms**
 *
 * Since acronym rules are quite complex, it is recommended to lowercase all acronyms in source code.
 * If there is an uppercase acronym — a sequence of uppercase chars — they are considered as a whole word from the start to second-to-last character of the sequence:
 * `URLMapping` -> `url-mapping`, `myHTTPAuth` -> `my-http-auth`. Non-letter characters allow the word to continue:
 * `myHTTP2APIKey` -> `my-http2-api-key`,  `myHTTP2fastApiKey` -> `my-http2fast-api-key`.
 *
 * **Note on cases**
 *
 * Whether a character is in upper case is determined by the result of [Char.isUpperCase] function.
 * Lowercase transformation is performed by [Char.lowercaseChar], not by [Char.lowercase],
 * and therefore does not support one-to-many and many-to-one character mappings.
 * See the documentation of these functions for details.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<MEGAAOSJsonNamingStrategy> KebabCase __attribute__((swift_name("KebabCase")));

/**
 * A strategy that transforms serial names from camel case to snake case — lowercase characters with words separated by underscores.
 * The descriptor parameter is not used.
 *
 * **Transformation rules**
 *
 * Words' bounds are defined by uppercase characters. If there is a single uppercase char, it is transformed into lowercase one with underscore in front:
 * `twoWords` -> `two_words`. No underscore is added if it was a beginning of the name: `MyProperty` -> `my_property`. Also, no underscore is added if it was already there:
 * `camel_Case_Underscores` -> `camel_case_underscores`.
 *
 * **Acronyms**
 *
 * Since acronym rules are quite complex, it is recommended to lowercase all acronyms in source code.
 * If there is an uppercase acronym — a sequence of uppercase chars — they are considered as a whole word from the start to second-to-last character of the sequence:
 * `URLMapping` -> `url_mapping`, `myHTTPAuth` -> `my_http_auth`. Non-letter characters allow the word to continue:
 * `myHTTP2APIKey` -> `my_http2_api_key`,  `myHTTP2fastApiKey` -> `my_http2fast_api_key`.
 *
 * **Note on cases**
 *
 * Whether a character is in upper case is determined by the result of [Char.isUpperCase] function.
 * Lowercase transformation is performed by [Char.lowercaseChar], not by [Char.lowercase],
 * and therefore does not support one-to-many and many-to-one character mappings.
 * See the documentation of these functions for details.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<MEGAAOSJsonNamingStrategy> SnakeCase __attribute__((swift_name("SnakeCase")));
@end


/**
 * Class representing JSON primitive value.
 * JSON primitives include numbers, strings, booleans and special null value [JsonNull].
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonPrimitiveSerializer))
*/
__attribute__((swift_name("JsonPrimitive")))
@interface MEGAAOSJsonPrimitive : MEGAAOSJsonElement
@property (class, readonly, getter=companion) MEGAAOSJsonPrimitiveCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Content of given element without quotes. For [JsonNull], this method returns a "null" string.
 * [JsonPrimitive.contentOrNull] should be used for [JsonNull] to get a `null`.
 */
@property (readonly) NSString *content __attribute__((swift_name("content")));

/**
 * Indicates whether the primitive was explicitly constructed from [String] and
 * whether it should be serialized as one. E.g. `JsonPrimitive("42")` is represented
 * by a string, while `JsonPrimitive(42)` is not.
 * These primitives will be serialized as `"42"` and `42` respectively.
 */
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
@end


/**
 * Class representing JSON `null` value
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonNullSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonNull")))
@interface MEGAAOSJsonNull : MEGAAOSJsonPrimitive
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Class representing JSON `null` value
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonNull __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonNull *shared __attribute__((swift_name("shared")));

/**
 * Class representing JSON `null` value
 */
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Class representing JSON `null` value
 */
- (id<MEGAAOSKSerializer>)serializerTypeParamsSerializers:(MEGAAOSKotlinArray<id<MEGAAOSKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
@end


/**
 * Class representing JSON object, consisting of name-value pairs, where value is arbitrary [JsonElement]
 *
 * Since this class also implements [Map] interface, you can use
 * traditional methods like [Map.get] or [Map.getValue] to obtain Json elements.
 */
__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("JsonObject")))
@interface MEGAAOSJsonObject : NSObject
@end


/**
 * DSL builder for a [JsonObject]. To create an instance of builder, use [buildJsonObject] build function.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonObjectBuilder")))
@interface MEGAAOSJsonObjectBuilder : MEGAAOSBase

/**
 * Add the given JSON [element] to a resulting JSON object using the given [key].
 *
 * Returns the previous value associated with [key], or `null` if the key was not present.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key element:(MEGAAOSJsonElement *)element __attribute__((swift_name("put(key:element:)")));
@end


/**
 * Class representing JSON primitive value.
 * JSON primitives include numbers, strings, booleans and special null value [JsonNull].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonPrimitive.Companion")))
@interface MEGAAOSJsonPrimitiveCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Class representing JSON primitive value.
 * JSON primitives include numbers, strings, booleans and special null value [JsonNull].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonPrimitiveCompanion *shared __attribute__((swift_name("shared")));

/**
 * Class representing JSON primitive value.
 * JSON primitives include numbers, strings, booleans and special null value [JsonNull].
 */
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Base class for custom serializers that allows manipulating an abstract JSON
 * representation of the class before serialization or deserialization.
 *
 * [JsonTransformingSerializer] provides capabilities to manipulate [JsonElement] representation
 * directly instead of interacting with [Encoder] and [Decoder] in order to apply a custom
 * transformation to the JSON.
 * Please note that this class expects that [Encoder] and [Decoder] are implemented by [JsonDecoder] and [JsonEncoder],
 * i.e. serializers derived from this class work only with [Json] format.
 *
 * There are two methods in which JSON transformation can be defined: [transformSerialize] and [transformDeserialize].
 * You can override one or both of them. Consult their documentation for details.
 *
 * Usage example:
 *
 * ```
 * @Serializable
 * data class Example(
 *     @Serializable(UnwrappingJsonListSerializer::class) val data: String
 * )
 * // Unwraps a list to a single object
 * object UnwrappingJsonListSerializer :
 *     JsonTransformingSerializer<String>(String.serializer()) {
 *     override fun transformDeserialize(element: JsonElement): JsonElement {
 *         if (element !is JsonArray) return element
 *         require(element.size == 1) { "Array size must be equal to 1 to unwrap it" }
 *         return element.first()
 *     }
 * }
 * // Now these functions both yield correct result:
 * Json.parse(Example.serializer(), """{"data":["str1"]}""")
 * Json.parse(Example.serializer(), """{"data":"str1"}""")
 * ```
 *
 * @param T A type for Kotlin property for which this serializer could be applied.
 *        **Not** the type that you may encounter in JSON. (e.g. if you unwrap a list
 *        to a single value `T`, use `T`, not `List<T>`)
 * @param tSerializer A serializer for type [T]. Determines [JsonElement] which is passed to [transformSerialize].
 *        Should be able to parse [JsonElement] from [transformDeserialize] function.
 *        Usually, default [serializer] is sufficient.
 */
__attribute__((swift_name("JsonTransformingSerializer")))
@interface MEGAAOSJsonTransformingSerializer<T> : MEGAAOSBase <MEGAAOSKSerializer>
- (instancetype)initWithTSerializer:(id<MEGAAOSKSerializer>)tSerializer __attribute__((swift_name("init(tSerializer:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(T _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Transformation that happens during [deserialize] call.
 * Does nothing by default.
 *
 * During deserialization, a value from JSON is firstly decoded to a [JsonElement],
 * user transformation in [transformDeserialize] is applied,
 * and then resulting [JsonElement] is deserialized to [T] with [tSerializer].
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MEGAAOSJsonElement *)transformDeserializeElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("transformDeserialize(element:)")));

/**
 * Transformation that happens during [serialize] call.
 * Does nothing by default.
 *
 * During serialization, a value of type [T] is serialized with [tSerializer] to a [JsonElement],
 * user transformation in [transformSerialize] is applied, and then resulting [JsonElement] is encoded to a JSON string.
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MEGAAOSJsonElement *)transformSerializeElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("transformSerialize(element:)")));

/**
 * A descriptor for this transformation.
 * By default, it delegates to [tSerializer]'s descriptor.
 *
 * However, this descriptor can be overridden to achieve better representation of the resulting JSON shape
 * for schema generating or introspection purposes.
 */
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("InternalJsonReader")))
@protocol MEGAAOSInternalJsonReader
@required
- (int32_t)readBuffer:(MEGAAOSKotlinCharArray *)buffer bufferOffset:(int32_t)bufferOffset count:(int32_t)count __attribute__((swift_name("read(buffer:bufferOffset:count:)")));
@end

__attribute__((swift_name("InternalJsonReaderCodePointImpl")))
@interface MEGAAOSInternalJsonReaderCodePointImpl : MEGAAOSBase <MEGAAOSInternalJsonReader>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (int32_t)nextCodePoint __attribute__((swift_name("nextCodePoint()")));
- (int32_t)readBuffer:(MEGAAOSKotlinCharArray *)buffer bufferOffset:(int32_t)bufferOffset count:(int32_t)count __attribute__((swift_name("read(buffer:bufferOffset:count:)")));
@end

__attribute__((swift_name("InternalJsonWriter")))
@protocol MEGAAOSInternalJsonWriter
@required
- (void)release_ __attribute__((swift_name("release()")));
- (void)writeText:(NSString *)text __attribute__((swift_name("write(text:)")));
- (void)writeCharChar:(unichar)char_ __attribute__((swift_name("writeChar(char:)")));
- (void)writeLongValue:(int64_t)value __attribute__((swift_name("writeLong(value:)")));
- (void)writeQuotedText:(NSString *)text __attribute__((swift_name("writeQuoted(text:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InternalJsonWriterCompanion")))
@interface MEGAAOSInternalJsonWriterCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInternalJsonWriterCompanion *shared __attribute__((swift_name("shared")));
- (void)doWriteEscapingText:(NSString *)text writeImpl:(void (^)(NSString *, MEGAAOSInt *, MEGAAOSInt *))writeImpl __attribute__((swift_name("doWriteEscaping(text:writeImpl:)")));
@end


/**
 * A builder which registers all its content for polymorphic serialization in the scope of the [base class][baseClass].
 * If [baseSerializer] is present, registers it as a serializer for [baseClass] (which will be used if base class is serializable).
 * Subclasses and its serializers can be added with [subclass] builder function.
 *
 * To obtain an instance of this builder, use [SerializersModuleBuilder.polymorphic] DSL function.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicModuleBuilder")))
@interface MEGAAOSPolymorphicModuleBuilder<__contravariant Base> : MEGAAOSBase

/**
 * Adds a default deserializers provider associated with the given [baseClass] to the resulting module.
 * This function affect only deserialization process. To avoid confusion, it was deprecated and replaced with [defaultDeserializer].
 * To affect serialization process, use [SerializersModuleBuilder.polymorphicDefaultSerializer].
 *
 * [defaultSerializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `JsonBuilder.useArrayPolymorphism` set to `false`)
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * Typically, if the class is not registered in advance, it is not possible to know the structure of the unknown
 * type and have a precise serializer, so the default serializer has limited capabilities.
 * If you're using `Json` format, you can get a structural access to the unknown data using `JsonContentPolymorphicSerializer`.
 *
 * @see defaultDeserializer
 * @see SerializersModuleBuilder.polymorphicDefaultSerializer
 */
- (void)defaultDefaultSerializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("default(defaultSerializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: defaultDeserializer")));

/**
 * Adds a default serializers provider associated with the given [baseClass] to the resulting module.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `JsonBuilder.useArrayPolymorphism` set to `false`)
 *
 * Default deserializers provider affects only deserialization process. To affect serialization process, use
 * [SerializersModuleBuilder.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * Typically, if the class is not registered in advance, it is not possible to know the structure of the unknown
 * type and have a precise serializer, so the default serializer has limited capabilities.
 * If you're using `Json` format, you can get a structural access to the unknown data using `JsonContentPolymorphicSerializer`.
 *
 * @see SerializersModuleBuilder.polymorphicDefaultSerializer
 */
- (void)defaultDeserializerDefaultDeserializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("defaultDeserializer(defaultDeserializerProvider:)")));

/**
 * Registers a [subclass] [serializer] in the resulting module under the [base class][Base].
 */
- (void)subclassSubclass:(id<MEGAAOSKotlinKClass>)subclass serializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("subclass(subclass:serializer:)")));

/**
 * Registers the child serializers for the sealed type [T] in the resulting module under the [base class][Base].
 * Please note that type `T` has to be sealed and have a standard serializer, if not a runtime error will be
 * thrown at registration time. If one of [T]'s subclasses is a sealed serializable class on its own, its
 * subclasses are registered recursively as well. If one of [T]'s subclasses is an open polymorphic class
 * an [IllegalArgumentException] is thrown.
 *
 * This function is a convenience function for the version that receives a serializer.
 *
 * Example:
 * ```
 * interface Base
 *
 * @Serializable
 * sealed interface Sub: Base
 *
 * @Serializable
 * class Sub1: Sub
 *
 * serializersModule {
 *   polymorphic(Base::class) {
 *      subclassesOfSealed<Sub>()
 *   }
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)subclassesOfSealed __attribute__((swift_name("subclassesOfSealed()")));

/**
 * Registers the child serializers for the sealed  type [T] in the resulting module under the [base class][Base].
 * Please note that type `T` has to be sealed and have a standard serializer, if not a runtime error will be
 * thrown at registration time. If one of [T]'s subclasses is a sealed serializable class on its own, its
 * subclasses are registered recursively as well. If one of [T]'s subclasses is an open polymorphic class
 * an [IllegalArgumentException] is thrown.
 *
 * Example:
 * ```kotlin
 * interface Base
 *
 * @Serializable
 * sealed interface Sub: Base
 *
 * @Serializable
 * class Sub1: Sub
 *
 * serializersModule {
 *   polymorphic(Base::class) {
 *      subclassesOfSealed(Sub.serializer())
 *   }
 * }
 * ```
 *
 * Note that if Sub1 is itself open polymorphic this is an error.
 *
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)subclassesOfSealedSerializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("subclassesOfSealed(serializer:)")));
@end


/**
 * [SerializersModule] is a collection of serializers used by [ContextualSerializer] and [PolymorphicSerializer]
 * to override or provide serializers at the runtime, whereas at the compile-time they provided by the serialization plugin.
 * It can be considered as a map where serializers can be found using their statically known KClasses.
 *
 * To enable runtime serializers resolution, one of the special annotations must be used on target types
 * ([Polymorphic] or [Contextual]), and a serial module with serializers should be used during construction of [SerialFormat].
 *
 * Serializers module can be built with `SerializersModule {}` builder function.
 * Empty module can be obtained with `EmptySerializersModule()` factory function.
 *
 * @see Contextual
 * @see Polymorphic
 */
__attribute__((swift_name("SerializersModule")))
@interface MEGAAOSSerializersModule : MEGAAOSBase

/**
 * Copies contents of this module to the given [collector].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MEGAAOSSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * Returns a contextual serializer associated with a given [kClass].
 * If given class has generic parameters and module has provider for [kClass],
 * [typeArgumentsSerializers] are used to create serializer.
 * This method is used in context-sensitive operations on a property marked with [Contextual] by a [ContextualSerializer].
 *
 * @see SerializersModuleBuilder.contextual
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSKSerializer> _Nullable)getContextualKClass:(id<MEGAAOSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MEGAAOSKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * Returns a polymorphic serializer registered for a class of the given [value] in the scope of [baseClass].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * Returns a polymorphic deserializer registered for a [serializedClassName] in the scope of [baseClass]
 * or default value constructed from [serializedClassName] if a default serializer provider was registered.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end


/**
 * [SerializersModuleCollector] can introspect and accumulate content of any [SerializersModule] via [SerializersModule.dumpTo],
 * using a visitor-like pattern: [contextual] and [polymorphic] functions are invoked for each registered serializer.
 *
 * ### Not stable for inheritance
 *
 * `SerializersModuleCollector` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("SerializersModuleCollector")))
@protocol MEGAAOSSerializersModuleCollector
@required

/**
 * Accept a provider, associated with generic [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<MEGAAOSKotlinKClass>)kClass provider:(id<MEGAAOSKSerializer> (^)(NSArray<id<MEGAAOSKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));

/**
 * Accept a serializer, associated with [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<MEGAAOSKotlinKClass>)kClass serializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));

/**
 * Accept a serializer, associated with [actualClass] for polymorphic serialization.
 */
- (void)polymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass actualClass:(id<MEGAAOSKotlinKClass>)actualClass actualSerializer:(id<MEGAAOSKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 *
 * This function affect only deserialization process. To avoid confusion, it was deprecated and replaced with [polymorphicDefaultDeserializer].
 * To affect serialization process, use [SerializersModuleCollector.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * @see SerializersModuleCollector.polymorphicDefaultDeserializer
 * @see SerializersModuleCollector.polymorphicDefaultSerializer
 */
- (void)polymorphicDefaultBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultDeserializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * Default deserializers provider affects only deserialization process. Serializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultSerializer] method.
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultDeserializerBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultDeserializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * Accept a default serializer provider, associated with the [baseClass] for polymorphic serialization.
 * [defaultSerializerProvider] is invoked when no polymorphic serializers for `value` in the scope of [baseClass] were found.
 *
 * Default serializers provider affects only serialization process. Deserializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultDeserializer] method.
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultSerializerBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultSerializerProvider:(id<MEGAAOSSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end


/**
 * A builder class for [SerializersModule] DSL. To create an instance of builder, use [SerializersModule] factory function.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersModuleBuilder")))
@interface MEGAAOSSerializersModuleBuilder : MEGAAOSBase <MEGAAOSSerializersModuleCollector>

/**
 * Registers [provider] associated with given generic [kClass] for contextual serialization.
 * When a serializer is requested from a module, provider is being called with type arguments serializers
 * of the particular [kClass] usage.
 *
 * Example:
 * ```
 * class Holder(@Contextual val boxI: Box<Int>, @Contextual val boxS: Box<String>)
 *
 * val module = SerializersModule {
 *   // args[0] contains Int.serializer() or String.serializer(), depending on the property
 *   contextual(Box::class) { args -> BoxSerializer(args[0]) }
 * }
 * ```
 *
 * Throws [SerializationException] if a module already has provider or serializer associated with a [kClass].
 * To overwrite an already registered serializer, [SerializersModule.overwriteWith] can be used.
 */
- (void)contextualKClass:(id<MEGAAOSKotlinKClass>)kClass provider:(id<MEGAAOSKSerializer> (^)(NSArray<id<MEGAAOSKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));

/**
 * Adds [serializer] associated with given [kClass] for contextual serialization.
 * If [kClass] has generic type parameters, consider registering provider instead.
 *
 * Throws [SerializationException] if a module already has serializer or provider associated with a [kClass].
 * To overwrite an already registered serializer, [SerializersModule.overwriteWith] can be used.
 */
- (void)contextualKClass:(id<MEGAAOSKotlinKClass>)kClass serializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));

/**
 * Copies the content of [module] module into the current builder.
 */
- (void)includeModule:(MEGAAOSSerializersModule *)module __attribute__((swift_name("include(module:)")));

/**
 * Adds [serializer][actualSerializer] associated with given [actualClass] in the scope of [baseClass] for polymorphic serialization.
 * Throws [SerializationException] if a module already has serializer associated with a [actualClass].
 * To overwrite an already registered serializer, [SerializersModule.overwriteWith] can be used.
 */
- (void)polymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass actualClass:(id<MEGAAOSKotlinKClass>)actualClass actualSerializer:(id<MEGAAOSKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));

/**
 * Adds a default deserializers provider associated with the given [baseClass] to the resulting module.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * Default deserializers provider affects only deserialization process. To affect serialization process, use
 * [SerializersModuleBuilder.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * @see PolymorphicModuleBuilder.defaultDeserializer
 */
- (void)polymorphicDefaultDeserializerBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultDeserializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * Adds a default serializers provider associated with the given [baseClass] to the resulting module.
 * [defaultSerializerProvider] is invoked when no polymorphic serializers for `value` in the scope of [baseClass] were found.
 *
 * Default serializers provider affects only serialization process. To affect deserialization process, use
 * [SerializersModuleBuilder.polymorphicDefaultDeserializer].
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultSerializerBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultSerializerProvider:(id<MEGAAOSSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end


/**
 * Platform
 */
__attribute__((swift_name("Platform")))
@protocol MEGAAOSPlatform
@required

/**
 * Base identifier
 */
@property (readonly) int32_t baseIdentifier __attribute__((swift_name("baseIdentifier")));

/**
 * Name
 */
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * macos platform
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MacOSPlatform")))
@interface MEGAAOSMacOSPlatform : MEGAAOSBase <MEGAAOSPlatform>

/**
 * macos platform
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * macos platform
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Base identifier
 */
@property (readonly) int32_t baseIdentifier __attribute__((swift_name("baseIdentifier")));

/**
 * Name
 */
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * Event generator
 *
 * @property viewIdProvider
 * @property appIdentifier
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventGenerator")))
@interface MEGAAOSEventGenerator : MEGAAOSBase
- (instancetype)initWithViewIdProvider:(id<MEGAAOSKotlinSuspendFunction0>)viewIdProvider appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(viewIdProvider:appIdentifier:)"))) __attribute__((objc_designated_initializer));

/**
 * Generate event
 *
 * @param eventIdentifier
 * @return event
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)generateEventEventIdentifier:(id<MEGAAOSEventIdentifier>)eventIdentifier completionHandler:(void (^)(MEGAAOSAnalyticsEvent * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("generateEvent(eventIdentifier:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppIdentifier")))
@interface MEGAAOSAppIdentifier : MEGAAOSBase
- (instancetype)initWithId:(int32_t)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (MEGAAOSAppIdentifier *)doCopyId:(int32_t)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t identifier __attribute__((swift_name("identifier")));
@end


/**
 * Event identifier
 */
__attribute__((swift_name("EventIdentifier")))
@protocol MEGAAOSEventIdentifier
@required

/**
 * Event name
 */
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));

/**
 * Unique identifier
 */
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end


/**
 * Button pressed event identifier
 */
__attribute__((swift_name("ButtonPressedEventIdentifier")))
@protocol MEGAAOSButtonPressedEventIdentifier <MEGAAOSEventIdentifier>
@required

/**
 * Button name
 */
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));

/**
 * Dialog name
 */
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));

/**
 * Screen name
 */
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end


/**
 * Dialog displayed event identifier
 */
__attribute__((swift_name("DialogDisplayedEventIdentifier")))
@protocol MEGAAOSDialogDisplayedEventIdentifier <MEGAAOSEventIdentifier>
@required

/**
 * Dialog name
 */
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));

/**
 * Screen name
 */
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end


/**
 * General event identifier
 */
__attribute__((swift_name("GeneralEventIdentifier")))
@protocol MEGAAOSGeneralEventIdentifier <MEGAAOSEventIdentifier>
@required

/**
 * Info
 */
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@end


/**
 * Gesture event identifier
 */
__attribute__((swift_name("GestureEventIdentifier")))
@protocol MEGAAOSGestureEventIdentifier <MEGAAOSEventIdentifier>
@required

/**
 * Gesture name
 */
@property (readonly) NSString *gestureName __attribute__((swift_name("gestureName")));

/**
 * Screen name
 */
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end


/**
 * General event identifier
 */
__attribute__((swift_name("ItemSelectedEventIdentifier")))
@protocol MEGAAOSItemSelectedEventIdentifier <MEGAAOSEventIdentifier>
@required

/**
 * Info
 */
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@end


/**
 * Legacy event identifier
 */
__attribute__((swift_name("LegacyEventIdentifier")))
@protocol MEGAAOSLegacyEventIdentifier <MEGAAOSEventIdentifier>
@required
@end


/**
 * Menu item event identifier
 */
__attribute__((swift_name("MenuItemEventIdentifier")))
@protocol MEGAAOSMenuItemEventIdentifier <MEGAAOSEventIdentifier>
@required

/**
 * Menu item
 */
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));

/**
 * Menu type
 */
@property (readonly) NSString * _Nullable menuType __attribute__((swift_name("menuType")));

/**
 * Screen name
 */
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end


/**
 * Navigation event identifier
 */
__attribute__((swift_name("NavigationEventIdentifier")))
@protocol MEGAAOSNavigationEventIdentifier <MEGAAOSEventIdentifier>
@required

/**
 * Destination
 */
@property (readonly) NSString * _Nullable destination __attribute__((swift_name("destination")));

/**
 * Navigation element type
 */
@property (readonly) NSString * _Nullable navigationElementType __attribute__((swift_name("navigationElementType")));
@end


/**
 * Notification event identifier
 */
__attribute__((swift_name("NotificationEventIdentifier")))
@protocol MEGAAOSNotificationEventIdentifier <MEGAAOSEventIdentifier>
@required
@end


/**
 * Screen view event identifier
 */
__attribute__((swift_name("ScreenViewEventIdentifier")))
@protocol MEGAAOSScreenViewEventIdentifier <MEGAAOSEventIdentifier>
@required
@end


/**
 * Tab selected event identifier
 */
__attribute__((swift_name("TabSelectedEventIdentifier")))
@protocol MEGAAOSTabSelectedEventIdentifier <MEGAAOSEventIdentifier>
@required

/**
 * Screen name
 */
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));

/**
 * Tab name
 */
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@end


/**
 * Analytics event
 */
__attribute__((swift_name("AnalyticsEvent")))
@interface MEGAAOSAnalyticsEvent : MEGAAOSBase

/**
 * Analytics event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Analytics event
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Get event identifier
 *
 */
- (int32_t)getEventIdentifier __attribute__((swift_name("getEventIdentifier()")));

/**
 * Get event message
 *
 * @param mapper
 * @return event message string in the format "<Event name> <Event Data Json>"
 */
- (NSString *)getEventMessageMapper:(id<MEGAAOSEventDataMapper>)mapper __attribute__((swift_name("getEventMessage(mapper:)")));

/**
 * App identifier
 */
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

/**
 * Data
 *
 * @return
 *
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * Identifier
 *
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * Event type identifier
 *
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));

/**
 * View id
 */
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end


/**
 * Button pressed event
 *
 * @property eventIdentifier
 * @property viewId
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ButtonPressedEvent")))
@interface MEGAAOSButtonPressedEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSButtonPressedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));

/**
 * Analytics event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

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


/**
 * Dialog displayed event
 *
 * @property eventIdentifier
 * @property viewId
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DialogDisplayedEvent")))
@interface MEGAAOSDialogDisplayedEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSDialogDisplayedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));

/**
 * Analytics event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

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


/**
 * General event
 *
 * @property eventIdentifier
 * @property viewId
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeneralEvent")))
@interface MEGAAOSGeneralEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSGeneralEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));

/**
 * Analytics event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSGeneralEvent *)doCopyEventIdentifier:(id<MEGAAOSGeneralEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("doCopy(eventIdentifier:viewId:appIdentifier:)")));

/**
 * General event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * General event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * General event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

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


/**
 * Gesture displayed event
 *
 * @property eventIdentifier
 * @property viewId
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GestureEvent")))
@interface MEGAAOSGestureEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSGestureEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));

/**
 * Analytics event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSGestureEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end


/**
 * General event
 *
 * @property eventIdentifier
 * @property viewId
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectedEvent")))
@interface MEGAAOSItemSelectedEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSItemSelectedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));

/**
 * Analytics event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSItemSelectedEvent *)doCopyEventIdentifier:(id<MEGAAOSItemSelectedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("doCopy(eventIdentifier:viewId:appIdentifier:)")));

/**
 * General event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * General event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * General event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

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


/**
 * Legacy event
 *
 * @property viewId
 * @property appIdentifier
 * @property eventIdentifier
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyEvent")))
@interface MEGAAOSLegacyEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSLegacyEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));

/**
 * Analytics event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int32_t)getEventIdentifier __attribute__((swift_name("getEventIdentifier()")));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSLegacyEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end


/**
 * Menu item event
 *
 * @property eventIdentifier
 * @property viewId
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuItemEvent")))
@interface MEGAAOSMenuItemEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSMenuItemEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));

/**
 * Analytics event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

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


/**
 * Navigation event
 *
 * @property eventIdentifier
 * @property viewId
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationEvent")))
@interface MEGAAOSNavigationEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSNavigationEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));

/**
 * Analytics event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

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


/**
 * Notification event
 *
 * @property eventIdentifier
 * @property viewId
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationEvent")))
@interface MEGAAOSNotificationEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSNotificationEventIdentifier>)eventIdentifier appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:appIdentifier:)"))) __attribute__((objc_designated_initializer));

/**
 * Analytics event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSNotificationEvent *)doCopyEventIdentifier:(id<MEGAAOSNotificationEventIdentifier>)eventIdentifier appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("doCopy(eventIdentifier:appIdentifier:)")));

/**
 * Notification event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Notification event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Notification event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

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


/**
 * Screen view event
 *
 * @property eventIdentifier
 * @property viewId
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenViewEvent")))
@interface MEGAAOSScreenViewEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSScreenViewEventIdentifier>)eventIdentifier viewId:(NSString *)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));

/**
 * Analytics event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSScreenViewEvent *)doCopyEventIdentifier:(id<MEGAAOSScreenViewEventIdentifier>)eventIdentifier viewId:(NSString *)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("doCopy(eventIdentifier:viewId:appIdentifier:)")));

/**
 * Screen view event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Screen view event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Screen view event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

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


/**
 * Tab selected event
 *
 * @property eventIdentifier
 * @property viewId
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TabSelectedEvent")))
@interface MEGAAOSTabSelectedEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSTabSelectedEventIdentifier>)eventIdentifier viewId:(NSString *)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));

/**
 * Analytics event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSTabSelectedEvent *)doCopyEventIdentifier:(id<MEGAAOSTabSelectedEventIdentifier>)eventIdentifier viewId:(NSString *)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("doCopy(eventIdentifier:viewId:appIdentifier:)")));

/**
 * Tab selected event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Tab selected event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Tab selected event
 *
 * @property eventIdentifier
 * @property viewId
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

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


/**
 * Event data mapper
 */
__attribute__((swift_name("EventDataMapper")))
@protocol MEGAAOSEventDataMapper
@required

/**
 * Map data
 *
 * @param eventData
 * @return json string representation of the data
 */
- (NSString *)mapDataEventData:(NSDictionary<NSString *, id> *)eventData __attribute__((swift_name("mapData(eventData:)")));
@end


/**
 * Json mapper
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonMapper")))
@interface MEGAAOSJsonMapper : MEGAAOSBase <MEGAAOSEventDataMapper>

/**
 * Json mapper
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Json mapper
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)mapDataEventData:(NSDictionary<NSString *, id> *)eventData __attribute__((swift_name("mapData(eventData:)")));
@end

__attribute__((swift_name("AboutSettingsItemSelected")))
@protocol MEGAAOSAboutSettingsItemSelected
@required
@end

__attribute__((swift_name("AcceptTermsOfServiceButtonPressed")))
@protocol MEGAAOSAcceptTermsOfServiceButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountActivated")))
@interface MEGAAOSAccountActivated : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("AccountNotificationCentreDisplayedWithNoUnreadNotifications")))
@protocol MEGAAOSAccountNotificationCentreDisplayedWithNoUnreadNotifications
@required
@end

__attribute__((swift_name("AccountNotificationCentreDisplayedWithUnreadNotifications")))
@protocol MEGAAOSAccountNotificationCentreDisplayedWithUnreadNotifications
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountRegistration")))
@interface MEGAAOSAccountRegistration : MEGAAOSBase
- (instancetype)initWithReferrerUrl:(NSString * _Nullable)referrerUrl referrerClickTime:(MEGAAOSLong * _Nullable)referrerClickTime appInstallTime:(MEGAAOSLong * _Nullable)appInstallTime __attribute__((swift_name("init(referrerUrl:referrerClickTime:appInstallTime:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSLong * _Nullable appInstallTime __attribute__((swift_name("appInstallTime")));
@property (readonly) MEGAAOSLong * _Nullable referrerClickTime __attribute__((swift_name("referrerClickTime")));
@property (readonly) NSString * _Nullable referrerUrl __attribute__((swift_name("referrerUrl")));
@end

__attribute__((swift_name("AccountScreen")))
@protocol MEGAAOSAccountScreen
@required
@end

__attribute__((swift_name("AccountScreenHeaderTapped")))
@protocol MEGAAOSAccountScreenHeaderTapped
@required
@end

__attribute__((swift_name("ActiveTransferDragAndDropToChangePriority")))
@protocol MEGAAOSActiveTransferDragAndDropToChangePriority
@required
@end

__attribute__((swift_name("ActiveTransfersCancelAllMenuItem")))
@protocol MEGAAOSActiveTransfersCancelAllMenuItem
@required
@end

__attribute__((swift_name("ActiveTransfersCancelSelectedMenuItem")))
@protocol MEGAAOSActiveTransfersCancelSelectedMenuItem
@required
@end

__attribute__((swift_name("ActiveTransfersGlobalPauseMenuItem")))
@protocol MEGAAOSActiveTransfersGlobalPauseMenuItem
@required
@end

__attribute__((swift_name("ActiveTransfersGlobalPlayMenuItem")))
@protocol MEGAAOSActiveTransfersGlobalPlayMenuItem
@required
@end

__attribute__((swift_name("ActiveTransfersIndividualPauseButtonButtonPressed")))
@protocol MEGAAOSActiveTransfersIndividualPauseButtonButtonPressed
@required
@end

__attribute__((swift_name("ActiveTransfersIndividualPlayButtonButtonPressed")))
@protocol MEGAAOSActiveTransfersIndividualPlayButtonButtonPressed
@required
@end

__attribute__((swift_name("ActiveTransfersMoreOptionsMenuItem")))
@protocol MEGAAOSActiveTransfersMoreOptionsMenuItem
@required
@end

__attribute__((swift_name("ActiveTransfersSelectAllMenuItem")))
@protocol MEGAAOSActiveTransfersSelectAllMenuItem
@required
@end

__attribute__((swift_name("ActiveTransfersSelectMenuItem")))
@protocol MEGAAOSActiveTransfersSelectMenuItem
@required
@end

__attribute__((swift_name("ActiveTransfersSwipeToCancel")))
@protocol MEGAAOSActiveTransfersSwipeToCancel
@required
@end

__attribute__((swift_name("ActiveTransfersTab")))
@protocol MEGAAOSActiveTransfersTab
@required
@end

__attribute__((swift_name("ActiveTransfersUndoSwipeToCancelSnackbarAction")))
@protocol MEGAAOSActiveTransfersUndoSwipeToCancelSnackbarAction
@required
@end

__attribute__((swift_name("AdBlockingDisabled")))
@protocol MEGAAOSAdBlockingDisabled
@required
@end

__attribute__((swift_name("AdBlockingEnabled")))
@protocol MEGAAOSAdBlockingEnabled
@required
@end

__attribute__((swift_name("AdFreeDialogScreen")))
@protocol MEGAAOSAdFreeDialogScreen
@required
@end

__attribute__((swift_name("AdFreeDialogScreenSkipButtonPressed")))
@protocol MEGAAOSAdFreeDialogScreenSkipButtonPressed
@required
@end

__attribute__((swift_name("AdFreeDialogScreenViewProPlansButtonPressed")))
@protocol MEGAAOSAdFreeDialogScreenViewProPlansButtonPressed
@required
@end

__attribute__((swift_name("AdFreeDialogUpgradeAccountPlanPageBuyButtonPressed")))
@protocol MEGAAOSAdFreeDialogUpgradeAccountPlanPageBuyButtonPressed
@required
@end

__attribute__((swift_name("AddContactFAB")))
@protocol MEGAAOSAddContactFAB
@required
@end

__attribute__((swift_name("AddContactScreen")))
@protocol MEGAAOSAddContactScreen
@required
@end

__attribute__((swift_name("AddCreditCardCloseButtonPressed")))
@protocol MEGAAOSAddCreditCardCloseButtonPressed
@required
@end

__attribute__((swift_name("AddItemsToExistingAlbumFAB")))
@protocol MEGAAOSAddItemsToExistingAlbumFAB
@required
@end

__attribute__((swift_name("AddItemsToNewAlbumButton")))
@protocol MEGAAOSAddItemsToNewAlbumButton
@required
@end

__attribute__((swift_name("AddItemsToNewAlbumFAB")))
@protocol MEGAAOSAddItemsToNewAlbumFAB
@required
@end

__attribute__((swift_name("AddNewCreditCardItemButtonPressed")))
@protocol MEGAAOSAddNewCreditCardItemButtonPressed
@required
@end

__attribute__((swift_name("AddNewPasswordItemButtonPressed")))
@protocol MEGAAOSAddNewPasswordItemButtonPressed
@required
@end

__attribute__((swift_name("AddPasswordItemScreen")))
@protocol MEGAAOSAddPasswordItemScreen
@required
@end

__attribute__((swift_name("AddSubtitleDialog")))
@protocol MEGAAOSAddSubtitleDialog
@required
@end

__attribute__((swift_name("AddSubtitlePressed")))
@protocol MEGAAOSAddSubtitlePressed
@required
@end

__attribute__((swift_name("AddSubtitlesOptionPressed")))
@protocol MEGAAOSAddSubtitlesOptionPressed
@required
@end

__attribute__((swift_name("AddSyncScreen")))
@protocol MEGAAOSAddSyncScreen
@required
@end

__attribute__((swift_name("AddToAlbumMenuItem")))
@protocol MEGAAOSAddToAlbumMenuItem
@required
@end

__attribute__((swift_name("AddTrustedNetworkButtonPressed")))
@protocol MEGAAOSAddTrustedNetworkButtonPressed
@required
@end

__attribute__((swift_name("AdsBannerCloseAdsButtonPressed")))
@protocol MEGAAOSAdsBannerCloseAdsButtonPressed
@required
@end

__attribute__((swift_name("AdsUpgradeAccountPlanPageBuyButtonPressed")))
@protocol MEGAAOSAdsUpgradeAccountPlanPageBuyButtonPressed
@required
@end

__attribute__((swift_name("AdvancedSettingsItemSelected")))
@protocol MEGAAOSAdvancedSettingsItemSelected
@required
@end

__attribute__((swift_name("AirplayActivationInVideoPlayback")))
@protocol MEGAAOSAirplayActivationInVideoPlayback
@required
@end

__attribute__((swift_name("AlbumAddPhotosFAB")))
@protocol MEGAAOSAlbumAddPhotosFAB
@required
@end

__attribute__((swift_name("AlbumContentDeleteAlbum")))
@protocol MEGAAOSAlbumContentDeleteAlbum
@required
@end

__attribute__((swift_name("AlbumContentHideNodeMenuItem")))
@protocol MEGAAOSAlbumContentHideNodeMenuItem
@required
@end

__attribute__((swift_name("AlbumContentRemoveItems")))
@protocol MEGAAOSAlbumContentRemoveItems
@required
@end

__attribute__((swift_name("AlbumContentScreen")))
@protocol MEGAAOSAlbumContentScreen
@required
@end

__attribute__((swift_name("AlbumContentShareLinkMenuToolbar")))
@protocol MEGAAOSAlbumContentShareLinkMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumDeselectAll")))
@interface MEGAAOSAlbumDeselectAll : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("AlbumImportInputDecryptionKeyDialog")))
@protocol MEGAAOSAlbumImportInputDecryptionKeyDialog
@required
@end

__attribute__((swift_name("AlbumImportSaveToCloudDriveButton")))
@protocol MEGAAOSAlbumImportSaveToCloudDriveButton
@required
@end

__attribute__((swift_name("AlbumImportSaveToDeviceButton")))
@protocol MEGAAOSAlbumImportSaveToDeviceButton
@required
@end

__attribute__((swift_name("AlbumImportScreen")))
@protocol MEGAAOSAlbumImportScreen
@required
@end

__attribute__((swift_name("AlbumImportStorageOverQuotaDialog")))
@protocol MEGAAOSAlbumImportStorageOverQuotaDialog
@required
@end

__attribute__((swift_name("AlbumLinkCopyToOfflineMoreOptionsButtonPressed")))
@protocol MEGAAOSAlbumLinkCopyToOfflineMoreOptionsButtonPressed
@required
@end

__attribute__((swift_name("AlbumLinkDownloadSelectionToolbarButtonPressed")))
@protocol MEGAAOSAlbumLinkDownloadSelectionToolbarButtonPressed
@required
@end

__attribute__((swift_name("AlbumLinkSettingsScreen")))
@protocol MEGAAOSAlbumLinkSettingsScreen
@required
@end

__attribute__((swift_name("AlbumListShareLinkMenuItem")))
@protocol MEGAAOSAlbumListShareLinkMenuItem
@required
@end

__attribute__((swift_name("AlbumPhotosSelectionAllLocationsButton")))
@protocol MEGAAOSAlbumPhotosSelectionAllLocationsButton
@required
@end

__attribute__((swift_name("AlbumPhotosSelectionCameraUploadsButton")))
@protocol MEGAAOSAlbumPhotosSelectionCameraUploadsButton
@required
@end

__attribute__((swift_name("AlbumPhotosSelectionCloudDriveButton")))
@protocol MEGAAOSAlbumPhotosSelectionCloudDriveButton
@required
@end

__attribute__((swift_name("AlbumPhotosSelectionFilterMenuToolbar")))
@protocol MEGAAOSAlbumPhotosSelectionFilterMenuToolbar
@required
@end

__attribute__((swift_name("AlbumPhotosSelectionScreen")))
@protocol MEGAAOSAlbumPhotosSelectionScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumSelectAll")))
@interface MEGAAOSAlbumSelectAll : MEGAAOSBase
- (instancetype)initWithAlbumsCount:(int32_t)albumsCount __attribute__((swift_name("init(albumsCount:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t albumsCount __attribute__((swift_name("albumsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumSelected")))
@interface MEGAAOSAlbumSelected : MEGAAOSBase
- (instancetype)initWithSelectionType:(MEGAAOSAlbumSelectedSelectionType *)selectionType imageCount:(MEGAAOSInt * _Nullable)imageCount videoCount:(MEGAAOSInt * _Nullable)videoCount __attribute__((swift_name("init(selectionType:imageCount:videoCount:)"))) __attribute__((objc_designated_initializer));
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
@property (class, readonly) NSArray<MEGAAOSAlbumSelectedSelectionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("AlbumsListDeleteAlbums")))
@protocol MEGAAOSAlbumsListDeleteAlbums
@required
@end

__attribute__((swift_name("AlbumsStorageOverQuotaUpgradeAccountButton")))
@protocol MEGAAOSAlbumsStorageOverQuotaUpgradeAccountButton
@required
@end

__attribute__((swift_name("AlbumsTab")))
@protocol MEGAAOSAlbumsTab
@required
@end

__attribute__((swift_name("AllVideosTab")))
@protocol MEGAAOSAllVideosTab
@required
@end

__attribute__((swift_name("AllowLANConnectionsToggleDisabledPressed")))
@protocol MEGAAOSAllowLANConnectionsToggleDisabledPressed
@required
@end

__attribute__((swift_name("AllowLANConnectionsToggleEnabledPressed")))
@protocol MEGAAOSAllowLANConnectionsToggleEnabledPressed
@required
@end

__attribute__((swift_name("AllowNotificationsCTAButtonPressed")))
@protocol MEGAAOSAllowNotificationsCTAButtonPressed
@required
@end

__attribute__((swift_name("AlmostFullStorageAndTransferOverQuotaBannerDisplayed")))
@protocol MEGAAOSAlmostFullStorageAndTransferOverQuotaBannerDisplayed
@required
@end

__attribute__((swift_name("AlmostFullStorageOverQuotaBannerCloseButtonPressed")))
@protocol MEGAAOSAlmostFullStorageOverQuotaBannerCloseButtonPressed
@required
@end

__attribute__((swift_name("AlmostFullStorageOverQuotaBannerDisplayed")))
@protocol MEGAAOSAlmostFullStorageOverQuotaBannerDisplayed
@required
@end

__attribute__((swift_name("AlmostFullStorageOverQuotaBannerUpgradeButtonPressed")))
@protocol MEGAAOSAlmostFullStorageOverQuotaBannerUpgradeButtonPressed
@required
@end

__attribute__((swift_name("AndroidBackupFABButtonPressed")))
@protocol MEGAAOSAndroidBackupFABButtonPressed
@required
@end

__attribute__((swift_name("AndroidSyncAllFilesAccessDialogConfirmButtonPressed")))
@protocol MEGAAOSAndroidSyncAllFilesAccessDialogConfirmButtonPressed
@required
@end

__attribute__((swift_name("AndroidSyncAllFilesAccessDialogDismissButtonPressed")))
@protocol MEGAAOSAndroidSyncAllFilesAccessDialogDismissButtonPressed
@required
@end

__attribute__((swift_name("AndroidSyncAllFilesAccessDialogDisplayed")))
@protocol MEGAAOSAndroidSyncAllFilesAccessDialogDisplayed
@required
@end

__attribute__((swift_name("AndroidSyncChooseLatestModifiedTime")))
@protocol MEGAAOSAndroidSyncChooseLatestModifiedTime
@required
@end

__attribute__((swift_name("AndroidSyncChooseLocalFile")))
@protocol MEGAAOSAndroidSyncChooseLocalFile
@required
@end

__attribute__((swift_name("AndroidSyncChooseRemoteFile")))
@protocol MEGAAOSAndroidSyncChooseRemoteFile
@required
@end

__attribute__((swift_name("AndroidSyncClearResolvedIssues")))
@protocol MEGAAOSAndroidSyncClearResolvedIssues
@required
@end

__attribute__((swift_name("AndroidSyncExclusionsAddButtonPressed")))
@protocol MEGAAOSAndroidSyncExclusionsAddButtonPressed
@required
@end

__attribute__((swift_name("AndroidSyncExclusionsAllRemoved")))
@protocol MEGAAOSAndroidSyncExclusionsAllRemoved
@required
@end

__attribute__((swift_name("AndroidSyncExclusionsBiggerThanSizeLimitAdded")))
@protocol MEGAAOSAndroidSyncExclusionsBiggerThanSizeLimitAdded
@required
@end

__attribute__((swift_name("AndroidSyncExclusionsBiggerThanSizeLimitEdited")))
@protocol MEGAAOSAndroidSyncExclusionsBiggerThanSizeLimitEdited
@required
@end

__attribute__((swift_name("AndroidSyncExclusionsChangesDiscarded")))
@protocol MEGAAOSAndroidSyncExclusionsChangesDiscarded
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncExclusionsChangesSaved")))
@interface MEGAAOSAndroidSyncExclusionsChangesSaved : MEGAAOSBase
- (instancetype)initWithRuleCount:(int32_t)ruleCount customRuleCount:(int32_t)customRuleCount hasSizeLimit:(BOOL)hasSizeLimit __attribute__((swift_name("init(ruleCount:customRuleCount:hasSizeLimit:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t customRuleCount __attribute__((swift_name("customRuleCount")));
@property (readonly) BOOL hasSizeLimit __attribute__((swift_name("hasSizeLimit")));
@property (readonly) int32_t ruleCount __attribute__((swift_name("ruleCount")));
@end

__attribute__((swift_name("AndroidSyncExclusionsDefaultsRestored")))
@protocol MEGAAOSAndroidSyncExclusionsDefaultsRestored
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncExclusionsExtensionRulesAdded")))
@interface MEGAAOSAndroidSyncExclusionsExtensionRulesAdded : MEGAAOSBase
- (instancetype)initWithExtensionCount:(int32_t)extensionCount __attribute__((swift_name("init(extensionCount:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t extensionCount __attribute__((swift_name("extensionCount")));
@end

__attribute__((swift_name("AndroidSyncExclusionsNameRuleAdded")))
@protocol MEGAAOSAndroidSyncExclusionsNameRuleAdded
@required
@end

__attribute__((swift_name("AndroidSyncExclusionsNotBetweenSizeLimitAdded")))
@protocol MEGAAOSAndroidSyncExclusionsNotBetweenSizeLimitAdded
@required
@end

__attribute__((swift_name("AndroidSyncExclusionsNotBetweenSizeLimitEdited")))
@protocol MEGAAOSAndroidSyncExclusionsNotBetweenSizeLimitEdited
@required
@end

__attribute__((swift_name("AndroidSyncExclusionsReviewSaved")))
@protocol MEGAAOSAndroidSyncExclusionsReviewSaved
@required
@end

__attribute__((swift_name("AndroidSyncExclusionsRuleDeletedFromChip")))
@protocol MEGAAOSAndroidSyncExclusionsRuleDeletedFromChip
@required
@end

__attribute__((swift_name("AndroidSyncExclusionsRuleDeletedFromEditScreen")))
@protocol MEGAAOSAndroidSyncExclusionsRuleDeletedFromEditScreen
@required
@end

__attribute__((swift_name("AndroidSyncExclusionsRuleEdited")))
@protocol MEGAAOSAndroidSyncExclusionsRuleEdited
@required
@end

__attribute__((swift_name("AndroidSyncExclusionsSaveFailed")))
@protocol MEGAAOSAndroidSyncExclusionsSaveFailed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncExclusionsSetupConfigured")))
@interface MEGAAOSAndroidSyncExclusionsSetupConfigured : MEGAAOSBase
- (instancetype)initWithRuleCount:(int32_t)ruleCount customRuleCount:(int32_t)customRuleCount hasSizeLimit:(BOOL)hasSizeLimit __attribute__((swift_name("init(ruleCount:customRuleCount:hasSizeLimit:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t customRuleCount __attribute__((swift_name("customRuleCount")));
@property (readonly) BOOL hasSizeLimit __attribute__((swift_name("hasSizeLimit")));
@property (readonly) int32_t ruleCount __attribute__((swift_name("ruleCount")));
@end

__attribute__((swift_name("AndroidSyncExclusionsSizeLimitDeleted")))
@protocol MEGAAOSAndroidSyncExclusionsSizeLimitDeleted
@required
@end

__attribute__((swift_name("AndroidSyncExclusionsSmallerThanSizeLimitAdded")))
@protocol MEGAAOSAndroidSyncExclusionsSmallerThanSizeLimitAdded
@required
@end

__attribute__((swift_name("AndroidSyncExclusionsSmallerThanSizeLimitEdited")))
@protocol MEGAAOSAndroidSyncExclusionsSmallerThanSizeLimitEdited
@required
@end

__attribute__((swift_name("AndroidSyncFABButton")))
@protocol MEGAAOSAndroidSyncFABButton
@required
@end

__attribute__((swift_name("AndroidSyncGetStartedButton")))
@protocol MEGAAOSAndroidSyncGetStartedButton
@required
@end

__attribute__((swift_name("AndroidSyncLocalFolderSelected")))
@protocol MEGAAOSAndroidSyncLocalFolderSelected
@required
@end

__attribute__((swift_name("AndroidSyncMergeFolders")))
@protocol MEGAAOSAndroidSyncMergeFolders
@required
@end

__attribute__((swift_name("AndroidSyncMultiFABButtonPressed")))
@protocol MEGAAOSAndroidSyncMultiFABButtonPressed
@required
@end

__attribute__((swift_name("AndroidSyncNavigationItem")))
@protocol MEGAAOSAndroidSyncNavigationItem
@required
@end

__attribute__((swift_name("AndroidSyncRemoveDuplicates")))
@protocol MEGAAOSAndroidSyncRemoveDuplicates
@required
@end

__attribute__((swift_name("AndroidSyncRemoveDuplicatesAndRemoveRest")))
@protocol MEGAAOSAndroidSyncRemoveDuplicatesAndRemoveRest
@required
@end

__attribute__((swift_name("AndroidSyncRenameAllItems")))
@protocol MEGAAOSAndroidSyncRenameAllItems
@required
@end

__attribute__((swift_name("AndroidSyncSelectDeviceFolderButtonPressed")))
@protocol MEGAAOSAndroidSyncSelectDeviceFolderButtonPressed
@required
@end

__attribute__((swift_name("AndroidSyncSetupManageExclusionsButtonPressed")))
@protocol MEGAAOSAndroidSyncSetupManageExclusionsButtonPressed
@required
@end

__attribute__((swift_name("AndroidSyncStartSyncButton")))
@protocol MEGAAOSAndroidSyncStartSyncButton
@required
@end

__attribute__((swift_name("AnnualPlanFreeTrialFailed")))
@protocol MEGAAOSAnnualPlanFreeTrialFailed
@required
@end

__attribute__((swift_name("AnnualPlanFreeTrialSuccessful")))
@protocol MEGAAOSAnnualPlanFreeTrialSuccessful
@required
@end

__attribute__((swift_name("AnnualPlanPurchaseFailed")))
@protocol MEGAAOSAnnualPlanPurchaseFailed
@required
@end

__attribute__((swift_name("AnnualPlanPurchaseSuccessful")))
@protocol MEGAAOSAnnualPlanPurchaseSuccessful
@required
@end

__attribute__((swift_name("AppearanceSettingsItemSelected")))
@protocol MEGAAOSAppearanceSettingsItemSelected
@required
@end

__attribute__((swift_name("ArchiveNoteToSelfButtonPressed")))
@protocol MEGAAOSArchiveNoteToSelfButtonPressed
@required
@end

__attribute__((swift_name("ArchivedChatsMenuItem")))
@protocol MEGAAOSArchivedChatsMenuItem
@required
@end

__attribute__((swift_name("AudioChipButtonPressed")))
@protocol MEGAAOSAudioChipButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioPlayStarted")))
@interface MEGAAOSAudioPlayStarted : MEGAAOSBase
- (instancetype)initWithLinkType:(MEGAAOSAudioPlayStartedLinkType *)linkType authStatus:(MEGAAOSAudioPlayStartedAuthStatus *)authStatus __attribute__((swift_name("init(linkType:authStatus:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSAudioPlayStartedAuthStatus *authStatus __attribute__((swift_name("authStatus")));
@property (readonly) MEGAAOSAudioPlayStartedLinkType *linkType __attribute__((swift_name("linkType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioPlayStarted.AuthStatus")))
@interface MEGAAOSAudioPlayStartedAuthStatus : MEGAAOSKotlinEnum<MEGAAOSAudioPlayStartedAuthStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSAudioPlayStartedAuthStatus *loggedin __attribute__((swift_name("loggedin")));
@property (class, readonly) MEGAAOSAudioPlayStartedAuthStatus *loggedout __attribute__((swift_name("loggedout")));
+ (MEGAAOSKotlinArray<MEGAAOSAudioPlayStartedAuthStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSAudioPlayStartedAuthStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioPlayStarted.LinkType")))
@interface MEGAAOSAudioPlayStartedLinkType : MEGAAOSKotlinEnum<MEGAAOSAudioPlayStartedLinkType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSAudioPlayStartedLinkType *file __attribute__((swift_name("file")));
@property (class, readonly) MEGAAOSAudioPlayStartedLinkType *folder __attribute__((swift_name("folder")));
@property (class, readonly) MEGAAOSAudioPlayStartedLinkType *album __attribute__((swift_name("album")));
+ (MEGAAOSKotlinArray<MEGAAOSAudioPlayStartedLinkType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSAudioPlayStartedLinkType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioPlaybackFailed")))
@interface MEGAAOSAudioPlaybackFailed : MEGAAOSBase
- (instancetype)initWithSourceType:(NSString *)sourceType reason:(NSString *)reason authStatus:(MEGAAOSAudioPlaybackFailedAuthStatus *)authStatus __attribute__((swift_name("init(sourceType:reason:authStatus:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSAudioPlaybackFailedAuthStatus *authStatus __attribute__((swift_name("authStatus")));
@property (readonly) NSString *reason __attribute__((swift_name("reason")));
@property (readonly) NSString *sourceType __attribute__((swift_name("sourceType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioPlaybackFailed.AuthStatus")))
@interface MEGAAOSAudioPlaybackFailedAuthStatus : MEGAAOSKotlinEnum<MEGAAOSAudioPlaybackFailedAuthStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSAudioPlaybackFailedAuthStatus *loggedin __attribute__((swift_name("loggedin")));
@property (class, readonly) MEGAAOSAudioPlaybackFailedAuthStatus *loggedout __attribute__((swift_name("loggedout")));
+ (MEGAAOSKotlinArray<MEGAAOSAudioPlaybackFailedAuthStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSAudioPlaybackFailedAuthStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioPlaybackStarted")))
@interface MEGAAOSAudioPlaybackStarted : MEGAAOSBase
- (instancetype)initWithSourceType:(NSString *)sourceType authStatus:(MEGAAOSAudioPlaybackStartedAuthStatus *)authStatus __attribute__((swift_name("init(sourceType:authStatus:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSAudioPlaybackStartedAuthStatus *authStatus __attribute__((swift_name("authStatus")));
@property (readonly) NSString *sourceType __attribute__((swift_name("sourceType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioPlaybackStarted.AuthStatus")))
@interface MEGAAOSAudioPlaybackStartedAuthStatus : MEGAAOSKotlinEnum<MEGAAOSAudioPlaybackStartedAuthStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSAudioPlaybackStartedAuthStatus *loggedin __attribute__((swift_name("loggedin")));
@property (class, readonly) MEGAAOSAudioPlaybackStartedAuthStatus *loggedout __attribute__((swift_name("loggedout")));
+ (MEGAAOSKotlinArray<MEGAAOSAudioPlaybackStartedAuthStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSAudioPlaybackStartedAuthStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("AudioPlayerBack15Seconds")))
@protocol MEGAAOSAudioPlayerBack15Seconds
@required
@end

__attribute__((swift_name("AudioPlayerContinuousPlaybackDisabled")))
@protocol MEGAAOSAudioPlayerContinuousPlaybackDisabled
@required
@end

__attribute__((swift_name("AudioPlayerContinuousPlaybackEnabled")))
@protocol MEGAAOSAudioPlayerContinuousPlaybackEnabled
@required
@end

__attribute__((swift_name("AudioPlayerForward15Seconds")))
@protocol MEGAAOSAudioPlayerForward15Seconds
@required
@end

__attribute__((swift_name("AudioPlayerHideNodeMenuItem")))
@protocol MEGAAOSAudioPlayerHideNodeMenuItem
@required
@end

__attribute__((swift_name("AudioPlayerIsActivated")))
@protocol MEGAAOSAudioPlayerIsActivated
@required
@end

__attribute__((swift_name("AudioPlayerLoopPlayingItemEnabled")))
@protocol MEGAAOSAudioPlayerLoopPlayingItemEnabled
@required
@end

__attribute__((swift_name("AudioPlayerLoopQueueEnabled")))
@protocol MEGAAOSAudioPlayerLoopQueueEnabled
@required
@end

__attribute__((swift_name("AudioPlayerMusicModeEnabled")))
@protocol MEGAAOSAudioPlayerMusicModeEnabled
@required
@end

__attribute__((swift_name("AudioPlayerPodcastModeEnabled")))
@protocol MEGAAOSAudioPlayerPodcastModeEnabled
@required
@end

__attribute__((swift_name("AudioPlayerQueueButtonPressed")))
@protocol MEGAAOSAudioPlayerQueueButtonPressed
@required
@end

__attribute__((swift_name("AudioPlayerQueueItemRemoved")))
@protocol MEGAAOSAudioPlayerQueueItemRemoved
@required
@end

__attribute__((swift_name("AudioPlayerQueueReordered")))
@protocol MEGAAOSAudioPlayerQueueReordered
@required
@end

__attribute__((swift_name("AudioPlayerRestartFromBeginning")))
@protocol MEGAAOSAudioPlayerRestartFromBeginning
@required
@end

__attribute__((swift_name("AudioPlayerShuffleEnabled")))
@protocol MEGAAOSAudioPlayerShuffleEnabled
@required
@end

__attribute__((swift_name("AudioPlayerSleepTimer15Minutes")))
@protocol MEGAAOSAudioPlayerSleepTimer15Minutes
@required
@end

__attribute__((swift_name("AudioPlayerSleepTimer30Minutes")))
@protocol MEGAAOSAudioPlayerSleepTimer30Minutes
@required
@end

__attribute__((swift_name("AudioPlayerSleepTimer5Minutes")))
@protocol MEGAAOSAudioPlayerSleepTimer5Minutes
@required
@end

__attribute__((swift_name("AudioPlayerSleepTimer60Minutes")))
@protocol MEGAAOSAudioPlayerSleepTimer60Minutes
@required
@end

__attribute__((swift_name("AudioPlayerSleepTimerEndOfTrack")))
@protocol MEGAAOSAudioPlayerSleepTimerEndOfTrack
@required
@end

__attribute__((swift_name("AudioPlayerSleepTimerTurnOff")))
@protocol MEGAAOSAudioPlayerSleepTimerTurnOff
@required
@end

__attribute__((swift_name("AudioPlayerSpeedChange1X")))
@protocol MEGAAOSAudioPlayerSpeedChange1X
@required
@end

__attribute__((swift_name("AudioPlayerSpeedChange2X")))
@protocol MEGAAOSAudioPlayerSpeedChange2X
@required
@end

__attribute__((swift_name("AudioPlayerSpeedChangeBySlider")))
@protocol MEGAAOSAudioPlayerSpeedChangeBySlider
@required
@end

__attribute__((swift_name("AudioPlayerSpeedChangeHalfX")))
@protocol MEGAAOSAudioPlayerSpeedChangeHalfX
@required
@end

__attribute__((swift_name("AudioPlayerSpeedChangeOneAndHalfX")))
@protocol MEGAAOSAudioPlayerSpeedChangeOneAndHalfX
@required
@end

__attribute__((swift_name("AudioPlayerSpeedChangeTo_0_75X")))
@protocol MEGAAOSAudioPlayerSpeedChangeTo_0_75X
@required
@end

__attribute__((swift_name("AudioPlayerSpeedChangeTo_1_25X")))
@protocol MEGAAOSAudioPlayerSpeedChangeTo_1_25X
@required
@end

__attribute__((swift_name("AudioPlayerSpeedChangeTo_1_75X")))
@protocol MEGAAOSAudioPlayerSpeedChangeTo_1_75X
@required
@end

__attribute__((swift_name("AudiosChipButtonPressed")))
@protocol MEGAAOSAudiosChipButtonPressed
@required
@end

__attribute__((swift_name("AutoConnectVPNToggleDisablePressed")))
@protocol MEGAAOSAutoConnectVPNToggleDisablePressed
@required
@end

__attribute__((swift_name("AutoConnectVPNToggleEnablePressed")))
@protocol MEGAAOSAutoConnectVPNToggleEnablePressed
@required
@end

__attribute__((swift_name("AutoConnectVpnAllNetworksSelected")))
@protocol MEGAAOSAutoConnectVpnAllNetworksSelected
@required
@end

__attribute__((swift_name("AutoConnectVpnCellularOnlySelected")))
@protocol MEGAAOSAutoConnectVpnCellularOnlySelected
@required
@end

__attribute__((swift_name("AutoConnectVpnScreen")))
@protocol MEGAAOSAutoConnectVpnScreen
@required
@end

__attribute__((swift_name("AutoConnectVpnWifiOnlySelected")))
@protocol MEGAAOSAutoConnectVpnWifiOnlySelected
@required
@end

__attribute__((swift_name("AutoLockUnlockWithBiometricsOptionSelected")))
@protocol MEGAAOSAutoLockUnlockWithBiometricsOptionSelected
@required
@end

__attribute__((swift_name("AutoLockUnlockWithNoneOptionSelected")))
@protocol MEGAAOSAutoLockUnlockWithNoneOptionSelected
@required
@end

__attribute__((swift_name("AutoLockUnlockWithOptionSelected")))
@protocol MEGAAOSAutoLockUnlockWithOptionSelected
@required
@end

__attribute__((swift_name("AutoLockUnlockWithPinCodeOptionSelected")))
@protocol MEGAAOSAutoLockUnlockWithPinCodeOptionSelected
@required
@end

__attribute__((swift_name("AutoMatchSubtitleOptionPressed")))
@protocol MEGAAOSAutoMatchSubtitleOptionPressed
@required
@end

__attribute__((swift_name("AutofillToggleDisabled")))
@protocol MEGAAOSAutofillToggleDisabled
@required
@end

__attribute__((swift_name("AutofillToggleEnabled")))
@protocol MEGAAOSAutofillToggleEnabled
@required
@end

__attribute__((swift_name("AutolockToggleDisabled")))
@protocol MEGAAOSAutolockToggleDisabled
@required
@end

__attribute__((swift_name("AutolockToggleEnabled")))
@protocol MEGAAOSAutolockToggleEnabled
@required
@end

__attribute__((swift_name("BGTaskCompleted")))
@protocol MEGAAOSBGTaskCompleted
@required
@end

__attribute__((swift_name("BGTaskDurationOver10Min")))
@protocol MEGAAOSBGTaskDurationOver10Min
@required
@end

__attribute__((swift_name("BGTaskDurationUnder10Min")))
@protocol MEGAAOSBGTaskDurationUnder10Min
@required
@end

__attribute__((swift_name("BGTaskDurationUnder1Min")))
@protocol MEGAAOSBGTaskDurationUnder1Min
@required
@end

__attribute__((swift_name("BGTaskDurationUnder5Min")))
@protocol MEGAAOSBGTaskDurationUnder5Min
@required
@end

__attribute__((swift_name("BGTaskExpired")))
@protocol MEGAAOSBGTaskExpired
@required
@end

__attribute__((swift_name("BGTaskExpiredWhileAppActive")))
@protocol MEGAAOSBGTaskExpiredWhileAppActive
@required
@end

__attribute__((swift_name("BGTaskExpiredWhileAppBackground")))
@protocol MEGAAOSBGTaskExpiredWhileAppBackground
@required
@end

__attribute__((swift_name("BGTaskProgressAtExpirationOver75")))
@protocol MEGAAOSBGTaskProgressAtExpirationOver75
@required
@end

__attribute__((swift_name("BGTaskProgressAtExpirationUnder25")))
@protocol MEGAAOSBGTaskProgressAtExpirationUnder25
@required
@end

__attribute__((swift_name("BGTaskProgressAtExpirationUnder50")))
@protocol MEGAAOSBGTaskProgressAtExpirationUnder50
@required
@end

__attribute__((swift_name("BGTaskProgressAtExpirationUnder75")))
@protocol MEGAAOSBGTaskProgressAtExpirationUnder75
@required
@end

__attribute__((swift_name("BGTaskScheduleFailedRegister")))
@protocol MEGAAOSBGTaskScheduleFailedRegister
@required
@end

__attribute__((swift_name("BGTaskScheduleFailedSubmit")))
@protocol MEGAAOSBGTaskScheduleFailedSubmit
@required
@end

__attribute__((swift_name("BGTaskSchedulingDelayOver1Min")))
@protocol MEGAAOSBGTaskSchedulingDelayOver1Min
@required
@end

__attribute__((swift_name("BGTaskSchedulingDelayUnder1Min")))
@protocol MEGAAOSBGTaskSchedulingDelayUnder1Min
@required
@end

__attribute__((swift_name("BGTaskSchedulingDelayUnder30s")))
@protocol MEGAAOSBGTaskSchedulingDelayUnder30s
@required
@end

__attribute__((swift_name("BGTaskSchedulingDelayUnder5s")))
@protocol MEGAAOSBGTaskSchedulingDelayUnder5s
@required
@end

__attribute__((swift_name("BackButtonPressed")))
@protocol MEGAAOSBackButtonPressed
@required
@end

__attribute__((swift_name("BackupRecoveryKeyButtonPressed")))
@protocol MEGAAOSBackupRecoveryKeyButtonPressed
@required
@end

__attribute__((swift_name("BeginNetworkTestButtonPressed")))
@protocol MEGAAOSBeginNetworkTestButtonPressed
@required
@end

__attribute__((swift_name("BurstPhotosUploadDisabled")))
@protocol MEGAAOSBurstPhotosUploadDisabled
@required
@end

__attribute__((swift_name("BurstPhotosUploadEnabled")))
@protocol MEGAAOSBurstPhotosUploadEnabled
@required
@end

__attribute__((swift_name("BusinessRestrictionsBannerActionButtonPressed")))
@protocol MEGAAOSBusinessRestrictionsBannerActionButtonPressed
@required
@end

__attribute__((swift_name("BusinessUserRestrictionsScreen")))
@protocol MEGAAOSBusinessUserRestrictionsScreen
@required
@end

__attribute__((swift_name("BuyProI")))
@protocol MEGAAOSBuyProI
@required
@end

__attribute__((swift_name("BuyProII")))
@protocol MEGAAOSBuyProII
@required
@end

__attribute__((swift_name("BuyProIII")))
@protocol MEGAAOSBuyProIII
@required
@end

__attribute__((swift_name("BuyProLite")))
@protocol MEGAAOSBuyProLite
@required
@end

__attribute__((swift_name("CallLowerHand")))
@protocol MEGAAOSCallLowerHand
@required
@end

__attribute__((swift_name("CallRaiseHand")))
@protocol MEGAAOSCallRaiseHand
@required
@end

__attribute__((swift_name("CallScreen")))
@protocol MEGAAOSCallScreen
@required
@end

__attribute__((swift_name("CallScreenMenuOptionsShareLinkMenuItem")))
@protocol MEGAAOSCallScreenMenuOptionsShareLinkMenuItem
@required
@end

__attribute__((swift_name("CallUIMoreButtonPressed")))
@protocol MEGAAOSCallUIMoreButtonPressed
@required
@end

__attribute__((swift_name("CameraBackupsCTAScreen")))
@protocol MEGAAOSCameraBackupsCTAScreen
@required
@end

__attribute__((swift_name("CameraUploadProgressScreen")))
@protocol MEGAAOSCameraUploadProgressScreen
@required
@end

__attribute__((swift_name("CameraUploadsDisabled")))
@protocol MEGAAOSCameraUploadsDisabled
@required
@end

__attribute__((swift_name("CameraUploadsEnabled")))
@protocol MEGAAOSCameraUploadsEnabled
@required
@end

__attribute__((swift_name("CameraUploadsFileUploadPhotosAndVideosSelected")))
@protocol MEGAAOSCameraUploadsFileUploadPhotosAndVideosSelected
@required
@end

__attribute__((swift_name("CameraUploadsFileUploadPhotosSelected")))
@protocol MEGAAOSCameraUploadsFileUploadPhotosSelected
@required
@end

__attribute__((swift_name("CameraUploadsFileUploadVideosSelected")))
@protocol MEGAAOSCameraUploadsFileUploadVideosSelected
@required
@end

__attribute__((swift_name("CameraUploadsFolderConflictDetected")))
@protocol MEGAAOSCameraUploadsFolderConflictDetected
@required
@end

__attribute__((swift_name("CameraUploadsFormatHEICSelected")))
@protocol MEGAAOSCameraUploadsFormatHEICSelected
@required
@end

__attribute__((swift_name("CameraUploadsFormatJPGSelected")))
@protocol MEGAAOSCameraUploadsFormatJPGSelected
@required
@end

__attribute__((swift_name("CameraUploadsKeepFileNamesAsInDeviceDisabled")))
@protocol MEGAAOSCameraUploadsKeepFileNamesAsInDeviceDisabled
@required
@end

__attribute__((swift_name("CameraUploadsKeepFileNamesAsInDeviceEnabled")))
@protocol MEGAAOSCameraUploadsKeepFileNamesAsInDeviceEnabled
@required
@end

__attribute__((swift_name("CameraUploadsLocalFolderSelected")))
@protocol MEGAAOSCameraUploadsLocalFolderSelected
@required
@end

__attribute__((swift_name("CameraUploadsMobileDataDisabled")))
@protocol MEGAAOSCameraUploadsMobileDataDisabled
@required
@end

__attribute__((swift_name("CameraUploadsMobileDataEnabled")))
@protocol MEGAAOSCameraUploadsMobileDataEnabled
@required
@end

__attribute__((swift_name("CameraUploadsOnlyWhileChargingDisabled")))
@protocol MEGAAOSCameraUploadsOnlyWhileChargingDisabled
@required
@end

__attribute__((swift_name("CameraUploadsOnlyWhileChargingEnabled")))
@protocol MEGAAOSCameraUploadsOnlyWhileChargingEnabled
@required
@end

__attribute__((swift_name("CameraUploadsSettingsItemSelected")))
@protocol MEGAAOSCameraUploadsSettingsItemSelected
@required
@end

__attribute__((swift_name("CameraUploadsSettingsMenuItem")))
@protocol MEGAAOSCameraUploadsSettingsMenuItem
@required
@end

__attribute__((swift_name("CameraUploadsTargetFolderIncomingShareSelected")))
@protocol MEGAAOSCameraUploadsTargetFolderIncomingShareSelected
@required
@end

__attribute__((swift_name("CameraUploadsTargetFolderSelected")))
@protocol MEGAAOSCameraUploadsTargetFolderSelected
@required
@end

__attribute__((swift_name("CameraUploadsVideoCompressionRequireChargingDisabled")))
@protocol MEGAAOSCameraUploadsVideoCompressionRequireChargingDisabled
@required
@end

__attribute__((swift_name("CameraUploadsVideoCompressionRequireChargingEnabled")))
@protocol MEGAAOSCameraUploadsVideoCompressionRequireChargingEnabled
@required
@end

__attribute__((swift_name("CameraUploadsVideoCompressionSizeLimitChanged")))
@protocol MEGAAOSCameraUploadsVideoCompressionSizeLimitChanged
@required
@end

__attribute__((swift_name("CancelCloseEmailConfirmationButtonPressed")))
@protocol MEGAAOSCancelCloseEmailConfirmationButtonPressed
@required
@end

__attribute__((swift_name("CancelSelectSubtitlePressed")))
@protocol MEGAAOSCancelSelectSubtitlePressed
@required
@end

__attribute__((swift_name("CancelSubscriptionButtonPressed")))
@protocol MEGAAOSCancelSubscriptionButtonPressed
@required
@end

__attribute__((swift_name("CancelSubscriptionContinueCancellationButtonPressed")))
@protocol MEGAAOSCancelSubscriptionContinueCancellationButtonPressed
@required
@end

__attribute__((swift_name("CancelSubscriptionKeepPlanButtonPressed")))
@protocol MEGAAOSCancelSubscriptionKeepPlanButtonPressed
@required
@end

__attribute__((swift_name("CancelSubscriptionMenuToolbar")))
@protocol MEGAAOSCancelSubscriptionMenuToolbar
@required
@end

__attribute__((swift_name("CancelUpgradeMyAccount")))
@protocol MEGAAOSCancelUpgradeMyAccount
@required
@end

__attribute__((swift_name("ChangeEmailAddressButtonPressed")))
@protocol MEGAAOSChangeEmailAddressButtonPressed
@required
@end

__attribute__((swift_name("ChatAndMeetingsSettingsItemSelected")))
@protocol MEGAAOSChatAndMeetingsSettingsItemSelected
@required
@end

__attribute__((swift_name("ChatChipButtonPressed")))
@protocol MEGAAOSChatChipButtonPressed
@required
@end

__attribute__((swift_name("ChatConversationAddAttachmentButtonPressed")))
@protocol MEGAAOSChatConversationAddAttachmentButtonPressed
@required
@end

__attribute__((swift_name("ChatConversationAddParticipantsMenuToolbar")))
@protocol MEGAAOSChatConversationAddParticipantsMenuToolbar
@required
@end

__attribute__((swift_name("ChatConversationAddToCloudDriveActionMenu")))
@protocol MEGAAOSChatConversationAddToCloudDriveActionMenu
@required
@end

__attribute__((swift_name("ChatConversationAddToCloudDriveActionMenuItem")))
@protocol MEGAAOSChatConversationAddToCloudDriveActionMenuItem
@required
@end

__attribute__((swift_name("ChatConversationArchiveMenuToolbar")))
@protocol MEGAAOSChatConversationArchiveMenuToolbar
@required
@end

__attribute__((swift_name("ChatConversationAvailableOfflineActionMenuItem")))
@protocol MEGAAOSChatConversationAvailableOfflineActionMenuItem
@required
@end

__attribute__((swift_name("ChatConversationCallMenuToolbar")))
@protocol MEGAAOSChatConversationCallMenuToolbar
@required
@end

__attribute__((swift_name("ChatConversationClearMenuToolbar")))
@protocol MEGAAOSChatConversationClearMenuToolbar
@required
@end

__attribute__((swift_name("ChatConversationContactMenuItem")))
@protocol MEGAAOSChatConversationContactMenuItem
@required
@end

__attribute__((swift_name("ChatConversationCopyActionMenu")))
@protocol MEGAAOSChatConversationCopyActionMenu
@required
@end

__attribute__((swift_name("ChatConversationCopyActionMenuItem")))
@protocol MEGAAOSChatConversationCopyActionMenuItem
@required
@end

__attribute__((swift_name("ChatConversationDeleteActionMenu")))
@protocol MEGAAOSChatConversationDeleteActionMenu
@required
@end

__attribute__((swift_name("ChatConversationDownloadActionMenu")))
@protocol MEGAAOSChatConversationDownloadActionMenu
@required
@end

__attribute__((swift_name("ChatConversationEditActionMenu")))
@protocol MEGAAOSChatConversationEditActionMenu
@required
@end

__attribute__((swift_name("ChatConversationEditActionMenuItem")))
@protocol MEGAAOSChatConversationEditActionMenuItem
@required
@end

__attribute__((swift_name("ChatConversationEndCallForAllMenuToolbar")))
@protocol MEGAAOSChatConversationEndCallForAllMenuToolbar
@required
@end

__attribute__((swift_name("ChatConversationFileMenuItem")))
@protocol MEGAAOSChatConversationFileMenuItem
@required
@end

__attribute__((swift_name("ChatConversationForwardActionMenu")))
@protocol MEGAAOSChatConversationForwardActionMenu
@required
@end

__attribute__((swift_name("ChatConversationForwardActionMenuItem")))
@protocol MEGAAOSChatConversationForwardActionMenuItem
@required
@end

__attribute__((swift_name("ChatConversationGIFMenuItem")))
@protocol MEGAAOSChatConversationGIFMenuItem
@required
@end

__attribute__((swift_name("ChatConversationGalleryMenuItem")))
@protocol MEGAAOSChatConversationGalleryMenuItem
@required
@end

__attribute__((swift_name("ChatConversationHomeUpMenuToolbar")))
@protocol MEGAAOSChatConversationHomeUpMenuToolbar
@required
@end

__attribute__((swift_name("ChatConversationInfoActionMenuItem")))
@protocol MEGAAOSChatConversationInfoActionMenuItem
@required
@end

__attribute__((swift_name("ChatConversationInfoMenuToolbar")))
@protocol MEGAAOSChatConversationInfoMenuToolbar
@required
@end

__attribute__((swift_name("ChatConversationInviteActionMenu")))
@protocol MEGAAOSChatConversationInviteActionMenu
@required
@end

__attribute__((swift_name("ChatConversationInviteActionMenuItem")))
@protocol MEGAAOSChatConversationInviteActionMenuItem
@required
@end

__attribute__((swift_name("ChatConversationLeaveMenuToolbar")))
@protocol MEGAAOSChatConversationLeaveMenuToolbar
@required
@end

__attribute__((swift_name("ChatConversationLocationMenuItem")))
@protocol MEGAAOSChatConversationLocationMenuItem
@required
@end

__attribute__((swift_name("ChatConversationMuteMenuToolbar")))
@protocol MEGAAOSChatConversationMuteMenuToolbar
@required
@end

__attribute__((swift_name("ChatConversationOpenWithActionMenuItem")))
@protocol MEGAAOSChatConversationOpenWithActionMenuItem
@required
@end

__attribute__((swift_name("ChatConversationRemoveActionMenuItem")))
@protocol MEGAAOSChatConversationRemoveActionMenuItem
@required
@end

__attribute__((swift_name("ChatConversationResumeTransfersMenuItem")))
@protocol MEGAAOSChatConversationResumeTransfersMenuItem
@required
@end

__attribute__((swift_name("ChatConversationRetryMenuItem")))
@protocol MEGAAOSChatConversationRetryMenuItem
@required
@end

__attribute__((swift_name("ChatConversationSaveToDeviceActionMenuItem")))
@protocol MEGAAOSChatConversationSaveToDeviceActionMenuItem
@required
@end

__attribute__((swift_name("ChatConversationScanMenuItem")))
@protocol MEGAAOSChatConversationScanMenuItem
@required
@end

__attribute__((swift_name("ChatConversationScreen")))
@protocol MEGAAOSChatConversationScreen
@required
@end

__attribute__((swift_name("ChatConversationSelectActionMenuItem")))
@protocol MEGAAOSChatConversationSelectActionMenuItem
@required
@end

__attribute__((swift_name("ChatConversationSelectMenuToolbar")))
@protocol MEGAAOSChatConversationSelectMenuToolbar
@required
@end

__attribute__((swift_name("ChatConversationSendImageFilesFloatingActionButtonPressed")))
@protocol MEGAAOSChatConversationSendImageFilesFloatingActionButtonPressed
@required
@end

__attribute__((swift_name("ChatConversationSendMessageActionMenu")))
@protocol MEGAAOSChatConversationSendMessageActionMenu
@required
@end

__attribute__((swift_name("ChatConversationSendMessageActionMenuItem")))
@protocol MEGAAOSChatConversationSendMessageActionMenuItem
@required
@end

__attribute__((swift_name("ChatConversationShareActionMenu")))
@protocol MEGAAOSChatConversationShareActionMenu
@required
@end

__attribute__((swift_name("ChatConversationShareActionMenuItem")))
@protocol MEGAAOSChatConversationShareActionMenuItem
@required
@end

__attribute__((swift_name("ChatConversationTakePictureMenuItem")))
@protocol MEGAAOSChatConversationTakePictureMenuItem
@required
@end

__attribute__((swift_name("ChatConversationUnarchiveMenuToolbar")))
@protocol MEGAAOSChatConversationUnarchiveMenuToolbar
@required
@end

__attribute__((swift_name("ChatConversationUnmuteMenuToolbar")))
@protocol MEGAAOSChatConversationUnmuteMenuToolbar
@required
@end

__attribute__((swift_name("ChatConversationVideoMenuItem")))
@protocol MEGAAOSChatConversationVideoMenuItem
@required
@end

__attribute__((swift_name("ChatConversationVideoMenuToolbar")))
@protocol MEGAAOSChatConversationVideoMenuToolbar
@required
@end

__attribute__((swift_name("ChatConversationViewContactsActionMenuItem")))
@protocol MEGAAOSChatConversationViewContactsActionMenuItem
@required
@end

__attribute__((swift_name("ChatConversationVoiceClipMenuItem")))
@protocol MEGAAOSChatConversationVoiceClipMenuItem
@required
@end

__attribute__((swift_name("ChatConversationVoiceMenuItem")))
@protocol MEGAAOSChatConversationVoiceMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatImageAttachmentItemSelected")))
@interface MEGAAOSChatImageAttachmentItemSelected : MEGAAOSBase
- (instancetype)initWithSelectionType:(MEGAAOSChatImageAttachmentItemSelectedSelectionType *)selectionType imageCount:(int32_t)imageCount __attribute__((swift_name("init(selectionType:imageCount:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t imageCount __attribute__((swift_name("imageCount")));
@property (readonly) MEGAAOSChatImageAttachmentItemSelectedSelectionType *selectionType __attribute__((swift_name("selectionType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatImageAttachmentItemSelected.SelectionType")))
@interface MEGAAOSChatImageAttachmentItemSelectedSelectionType : MEGAAOSKotlinEnum<MEGAAOSChatImageAttachmentItemSelectedSelectionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSChatImageAttachmentItemSelectedSelectionType *singlemode __attribute__((swift_name("singlemode")));
@property (class, readonly) MEGAAOSChatImageAttachmentItemSelectedSelectionType *multiselectmode __attribute__((swift_name("multiselectmode")));
+ (MEGAAOSKotlinArray<MEGAAOSChatImageAttachmentItemSelectedSelectionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSChatImageAttachmentItemSelectedSelectionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatMessageLongPressed")))
@interface MEGAAOSChatMessageLongPressed : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("ChatMessageNotificationReplyButtonPressed")))
@protocol MEGAAOSChatMessageNotificationReplyButtonPressed
@required
@end

__attribute__((swift_name("ChatRoomDNDMenuItem")))
@protocol MEGAAOSChatRoomDNDMenuItem
@required
@end

__attribute__((swift_name("ChatRoomStatusMenuItem")))
@protocol MEGAAOSChatRoomStatusMenuItem
@required
@end

__attribute__((swift_name("ChatRoomsBottomNavigationItem")))
@protocol MEGAAOSChatRoomsBottomNavigationItem
@required
@end

__attribute__((swift_name("ChatRoomsStartConversationMenu")))
@protocol MEGAAOSChatRoomsStartConversationMenu
@required
@end

__attribute__((swift_name("ChatScreen")))
@protocol MEGAAOSChatScreen
@required
@end

__attribute__((swift_name("ChatTabFABPressed")))
@protocol MEGAAOSChatTabFABPressed
@required
@end

__attribute__((swift_name("ChatsTab")))
@protocol MEGAAOSChatsTab
@required
@end

__attribute__((swift_name("ClearCopiedDataAfterFifteenSecondsMenuItem")))
@protocol MEGAAOSClearCopiedDataAfterFifteenSecondsMenuItem
@required
@end

__attribute__((swift_name("ClearCopiedDataAfterOneMinuteMenuItem")))
@protocol MEGAAOSClearCopiedDataAfterOneMinuteMenuItem
@required
@end

__attribute__((swift_name("ClearCopiedDataAfterThirtySecondsMenuItem")))
@protocol MEGAAOSClearCopiedDataAfterThirtySecondsMenuItem
@required
@end

__attribute__((swift_name("ClearCopiedDataAfterThreeMinutesMenuItem")))
@protocol MEGAAOSClearCopiedDataAfterThreeMinutesMenuItem
@required
@end

__attribute__((swift_name("ClearRecentActivityMenuItem")))
@protocol MEGAAOSClearRecentActivityMenuItem
@required
@end

__attribute__((swift_name("CloseEmailConfirmationButtonPressed")))
@protocol MEGAAOSCloseEmailConfirmationButtonPressed
@required
@end

__attribute__((swift_name("CloudDriveAddMenu")))
@protocol MEGAAOSCloudDriveAddMenu
@required
@end

__attribute__((swift_name("CloudDriveAddToMenuItem")))
@protocol MEGAAOSCloudDriveAddToMenuItem
@required
@end

__attribute__((swift_name("CloudDriveBottomNavigationItem")))
@protocol MEGAAOSCloudDriveBottomNavigationItem
@required
@end

__attribute__((swift_name("CloudDriveBottomToolBarMoreMenuItem")))
@protocol MEGAAOSCloudDriveBottomToolBarMoreMenuItem
@required
@end

__attribute__((swift_name("CloudDriveCaptureMenuToolbar")))
@protocol MEGAAOSCloudDriveCaptureMenuToolbar
@required
@end

__attribute__((swift_name("CloudDriveChildNodeMoreButtonPressed")))
@protocol MEGAAOSCloudDriveChildNodeMoreButtonPressed
@required
@end

__attribute__((swift_name("CloudDriveChooseFromPhotosMenuToolbar")))
@protocol MEGAAOSCloudDriveChooseFromPhotosMenuToolbar
@required
@end

__attribute__((swift_name("CloudDriveCopyMenuItem")))
@protocol MEGAAOSCloudDriveCopyMenuItem
@required
@end

__attribute__((swift_name("CloudDriveDeletePermanentlyMenuItem")))
@protocol MEGAAOSCloudDriveDeletePermanentlyMenuItem
@required
@end

__attribute__((swift_name("CloudDriveDisputeTakeDownMenuItem")))
@protocol MEGAAOSCloudDriveDisputeTakeDownMenuItem
@required
@end

__attribute__((swift_name("CloudDriveDocumentProviderFileOpened")))
@protocol MEGAAOSCloudDriveDocumentProviderFileOpened
@required
@end

__attribute__((swift_name("CloudDriveDocumentProviderFolderOpened")))
@protocol MEGAAOSCloudDriveDocumentProviderFolderOpened
@required
@end

__attribute__((swift_name("CloudDriveDownloadMenuItem")))
@protocol MEGAAOSCloudDriveDownloadMenuItem
@required
@end

__attribute__((swift_name("CloudDriveEditMenuItem")))
@protocol MEGAAOSCloudDriveEditMenuItem
@required
@end

__attribute__((swift_name("CloudDriveEmptyStateAddFilesPressed")))
@protocol MEGAAOSCloudDriveEmptyStateAddFilesPressed
@required
@end

__attribute__((swift_name("CloudDriveFABPressed")))
@protocol MEGAAOSCloudDriveFABPressed
@required
@end

__attribute__((swift_name("CloudDriveFavouriteMenuItem")))
@protocol MEGAAOSCloudDriveFavouriteMenuItem
@required
@end

__attribute__((swift_name("CloudDriveHideMenuItem")))
@protocol MEGAAOSCloudDriveHideMenuItem
@required
@end

__attribute__((swift_name("CloudDriveHideNodeMenuItem")))
@protocol MEGAAOSCloudDriveHideNodeMenuItem
@required
@end

__attribute__((swift_name("CloudDriveImportFromFilesMenuToolbar")))
@protocol MEGAAOSCloudDriveImportFromFilesMenuToolbar
@required
@end

__attribute__((swift_name("CloudDriveInfoMenuItem")))
@protocol MEGAAOSCloudDriveInfoMenuItem
@required
@end

__attribute__((swift_name("CloudDriveLabelMenuItem")))
@protocol MEGAAOSCloudDriveLabelMenuItem
@required
@end

__attribute__((swift_name("CloudDriveLeaveShareMenuItem")))
@protocol MEGAAOSCloudDriveLeaveShareMenuItem
@required
@end

__attribute__((swift_name("CloudDriveManageLinkMenuItem")))
@protocol MEGAAOSCloudDriveManageLinkMenuItem
@required
@end

__attribute__((swift_name("CloudDriveManageSharedFolderMenuItem")))
@protocol MEGAAOSCloudDriveManageSharedFolderMenuItem
@required
@end

__attribute__((swift_name("CloudDriveMoveMenuItem")))
@protocol MEGAAOSCloudDriveMoveMenuItem
@required
@end

__attribute__((swift_name("CloudDriveMoveToRubbishBinMenuItem")))
@protocol MEGAAOSCloudDriveMoveToRubbishBinMenuItem
@required
@end

__attribute__((swift_name("CloudDriveMultiSelectModeEntered")))
@protocol MEGAAOSCloudDriveMultiSelectModeEntered
@required
@end

__attribute__((swift_name("CloudDriveNewFolderMenuToolbar")))
@protocol MEGAAOSCloudDriveNewFolderMenuToolbar
@required
@end

__attribute__((swift_name("CloudDriveNewTextFileMenuToolbar")))
@protocol MEGAAOSCloudDriveNewTextFileMenuToolbar
@required
@end

__attribute__((swift_name("CloudDriveOpenLocationMenuItem")))
@protocol MEGAAOSCloudDriveOpenLocationMenuItem
@required
@end

__attribute__((swift_name("CloudDriveOpenWithMenuItem")))
@protocol MEGAAOSCloudDriveOpenWithMenuItem
@required
@end

__attribute__((swift_name("CloudDriveParentNodeMoreButtonPressed")))
@protocol MEGAAOSCloudDriveParentNodeMoreButtonPressed
@required
@end

__attribute__((swift_name("CloudDriveRemoveFavouriteMenuItem")))
@protocol MEGAAOSCloudDriveRemoveFavouriteMenuItem
@required
@end

__attribute__((swift_name("CloudDriveRemoveLinkMenuItem")))
@protocol MEGAAOSCloudDriveRemoveLinkMenuItem
@required
@end

__attribute__((swift_name("CloudDriveRemoveOfflineMenuItem")))
@protocol MEGAAOSCloudDriveRemoveOfflineMenuItem
@required
@end

__attribute__((swift_name("CloudDriveRemoveShareMenuItem")))
@protocol MEGAAOSCloudDriveRemoveShareMenuItem
@required
@end

__attribute__((swift_name("CloudDriveRenameMenuItem")))
@protocol MEGAAOSCloudDriveRenameMenuItem
@required
@end

__attribute__((swift_name("CloudDriveRestoreMenuItem")))
@protocol MEGAAOSCloudDriveRestoreMenuItem
@required
@end

__attribute__((swift_name("CloudDriveSaveToDeviceMenuItem")))
@protocol MEGAAOSCloudDriveSaveToDeviceMenuItem
@required
@end

__attribute__((swift_name("CloudDriveScanDocumentMenuToolbar")))
@protocol MEGAAOSCloudDriveScanDocumentMenuToolbar
@required
@end

__attribute__((swift_name("CloudDriveScreen")))
@protocol MEGAAOSCloudDriveScreen
@required
@end

__attribute__((swift_name("CloudDriveSearchBarCancelPressed")))
@protocol MEGAAOSCloudDriveSearchBarCancelPressed
@required
@end

__attribute__((swift_name("CloudDriveSearchBarPressed")))
@protocol MEGAAOSCloudDriveSearchBarPressed
@required
@end

__attribute__((swift_name("CloudDriveSearchMenuToolbar")))
@protocol MEGAAOSCloudDriveSearchMenuToolbar
@required
@end

__attribute__((swift_name("CloudDriveSelectMenuItem")))
@protocol MEGAAOSCloudDriveSelectMenuItem
@required
@end

__attribute__((swift_name("CloudDriveSendToChatMenuItem")))
@protocol MEGAAOSCloudDriveSendToChatMenuItem
@required
@end

__attribute__((swift_name("CloudDriveShareFolderMenuItem")))
@protocol MEGAAOSCloudDriveShareFolderMenuItem
@required
@end

__attribute__((swift_name("CloudDriveShareLinkMenuItem")))
@protocol MEGAAOSCloudDriveShareLinkMenuItem
@required
@end

__attribute__((swift_name("CloudDriveShareMenuItem")))
@protocol MEGAAOSCloudDriveShareMenuItem
@required
@end

__attribute__((swift_name("CloudDriveSlideshowMenuItem")))
@protocol MEGAAOSCloudDriveSlideshowMenuItem
@required
@end

__attribute__((swift_name("CloudDriveSwipeGestureDownloadButtonPressed")))
@protocol MEGAAOSCloudDriveSwipeGestureDownloadButtonPressed
@required
@end

__attribute__((swift_name("CloudDriveSwipeGestureLinkButtonPressed")))
@protocol MEGAAOSCloudDriveSwipeGestureLinkButtonPressed
@required
@end

__attribute__((swift_name("CloudDriveSwipeGestureRemoveButtonPressed")))
@protocol MEGAAOSCloudDriveSwipeGestureRemoveButtonPressed
@required
@end

__attribute__((swift_name("CloudDriveSyncMenuItem")))
@protocol MEGAAOSCloudDriveSyncMenuItem
@required
@end

__attribute__((swift_name("CloudDriveTab")))
@protocol MEGAAOSCloudDriveTab
@required
@end

__attribute__((swift_name("CloudDriveUnhideMenuItem")))
@protocol MEGAAOSCloudDriveUnhideMenuItem
@required
@end

__attribute__((swift_name("CloudDriveUploadFilesMenuToolbar")))
@protocol MEGAAOSCloudDriveUploadFilesMenuToolbar
@required
@end

__attribute__((swift_name("CloudDriveUploadFolderMenuToolbar")))
@protocol MEGAAOSCloudDriveUploadFolderMenuToolbar
@required
@end

__attribute__((swift_name("CloudDriveVerifyUserMenuItem")))
@protocol MEGAAOSCloudDriveVerifyUserMenuItem
@required
@end

__attribute__((swift_name("CloudDriveVersionsMenuItem")))
@protocol MEGAAOSCloudDriveVersionsMenuItem
@required
@end

__attribute__((swift_name("CloudDriveViewInFolderMenuItem")))
@protocol MEGAAOSCloudDriveViewInFolderMenuItem
@required
@end

__attribute__((swift_name("CloudExplorerCancelButtonPressed")))
@protocol MEGAAOSCloudExplorerCancelButtonPressed
@required
@end

__attribute__((swift_name("CloudExplorerCloseButtonPressed")))
@protocol MEGAAOSCloudExplorerCloseButtonPressed
@required
@end

__attribute__((swift_name("CloudExplorerConfirmedChatButtonPressed")))
@protocol MEGAAOSCloudExplorerConfirmedChatButtonPressed
@required
@end

__attribute__((swift_name("CloudExplorerConfirmedCloudButtonPressed")))
@protocol MEGAAOSCloudExplorerConfirmedCloudButtonPressed
@required
@end

__attribute__((swift_name("CloudExplorerConfirmedFavouritesButtonPressed")))
@protocol MEGAAOSCloudExplorerConfirmedFavouritesButtonPressed
@required
@end

__attribute__((swift_name("CloudExplorerConfirmedIncomingButtonPressed")))
@protocol MEGAAOSCloudExplorerConfirmedIncomingButtonPressed
@required
@end

__attribute__((swift_name("CloudExplorerConfirmedSearchButtonPressed")))
@protocol MEGAAOSCloudExplorerConfirmedSearchButtonPressed
@required
@end

__attribute__((swift_name("CloudExplorerScreen")))
@protocol MEGAAOSCloudExplorerScreen
@required
@end

__attribute__((swift_name("CloudExplorerSearchButtonPressed")))
@protocol MEGAAOSCloudExplorerSearchButtonPressed
@required
@end

__attribute__((swift_name("CompletedTransfersClearAllMenuItem")))
@protocol MEGAAOSCompletedTransfersClearAllMenuItem
@required
@end

__attribute__((swift_name("CompletedTransfersClearSelectedMenuItem")))
@protocol MEGAAOSCompletedTransfersClearSelectedMenuItem
@required
@end

__attribute__((swift_name("CompletedTransfersItemClearMenuItem")))
@protocol MEGAAOSCompletedTransfersItemClearMenuItem
@required
@end

__attribute__((swift_name("CompletedTransfersItemOpenMenuItem")))
@protocol MEGAAOSCompletedTransfersItemOpenMenuItem
@required
@end

__attribute__((swift_name("CompletedTransfersItemShareMenuItem")))
@protocol MEGAAOSCompletedTransfersItemShareMenuItem
@required
@end

__attribute__((swift_name("CompletedTransfersItemTapAndHoldSelected")))
@protocol MEGAAOSCompletedTransfersItemTapAndHoldSelected
@required
@end

__attribute__((swift_name("CompletedTransfersItemViewInFolderMenuItem")))
@protocol MEGAAOSCompletedTransfersItemViewInFolderMenuItem
@required
@end

__attribute__((swift_name("CompletedTransfersMoreOptionsMenuItem")))
@protocol MEGAAOSCompletedTransfersMoreOptionsMenuItem
@required
@end

__attribute__((swift_name("CompletedTransfersSelectAllMenuItem")))
@protocol MEGAAOSCompletedTransfersSelectAllMenuItem
@required
@end

__attribute__((swift_name("CompletedTransfersSelectMenuItem")))
@protocol MEGAAOSCompletedTransfersSelectMenuItem
@required
@end

__attribute__((swift_name("CompletedTransfersSwipeToClear")))
@protocol MEGAAOSCompletedTransfersSwipeToClear
@required
@end

__attribute__((swift_name("CompletedTransfersTab")))
@protocol MEGAAOSCompletedTransfersTab
@required
@end

__attribute__((swift_name("ConfirmCloseEmailConfirmationButtonPressed")))
@protocol MEGAAOSConfirmCloseEmailConfirmationButtonPressed
@required
@end

__attribute__((swift_name("ConnectVPNTogglePressed")))
@protocol MEGAAOSConnectVPNTogglePressed
@required
@end

__attribute__((swift_name("ContactGroupListScreen")))
@protocol MEGAAOSContactGroupListScreen
@required
@end

__attribute__((swift_name("ContactItemAvatarSelected")))
@protocol MEGAAOSContactItemAvatarSelected
@required
@end

__attribute__((swift_name("ContactItemContactInfoMenuItem")))
@protocol MEGAAOSContactItemContactInfoMenuItem
@required
@end

__attribute__((swift_name("ContactItemRemoveContactMenuItem")))
@protocol MEGAAOSContactItemRemoveContactMenuItem
@required
@end

__attribute__((swift_name("ContactItemSelected")))
@protocol MEGAAOSContactItemSelected
@required
@end

__attribute__((swift_name("ContactItemSendFileMenuItem")))
@protocol MEGAAOSContactItemSendFileMenuItem
@required
@end

__attribute__((swift_name("ContactItemSendMessageMenuItem")))
@protocol MEGAAOSContactItemSendMessageMenuItem
@required
@end

__attribute__((swift_name("ContactItemShareContactMenuItem")))
@protocol MEGAAOSContactItemShareContactMenuItem
@required
@end

__attribute__((swift_name("ContactItemStartCallMenuItem")))
@protocol MEGAAOSContactItemStartCallMenuItem
@required
@end

__attribute__((swift_name("ContactItemStartVideoCallMenuItem")))
@protocol MEGAAOSContactItemStartVideoCallMenuItem
@required
@end

__attribute__((swift_name("ContactListScreen")))
@protocol MEGAAOSContactListScreen
@required
@end

__attribute__((swift_name("ContactRequestListScreen")))
@protocol MEGAAOSContactRequestListScreen
@required
@end

__attribute__((swift_name("ContinueSetupNotificationOnboardingButtonPressed")))
@protocol MEGAAOSContinueSetupNotificationOnboardingButtonPressed
@required
@end

__attribute__((swift_name("ContinueSetupVPNOnboardingButtonPressed")))
@protocol MEGAAOSContinueSetupVPNOnboardingButtonPressed
@required
@end

__attribute__((swift_name("CopyCVVButtonPressed")))
@protocol MEGAAOSCopyCVVButtonPressed
@required
@end

__attribute__((swift_name("CopyCardNumberButtonPressed")))
@protocol MEGAAOSCopyCardNumberButtonPressed
@required
@end

__attribute__((swift_name("CopyCardholderNameButtonPressed")))
@protocol MEGAAOSCopyCardholderNameButtonPressed
@required
@end

__attribute__((swift_name("CopyExpirationDateButtonPressed")))
@protocol MEGAAOSCopyExpirationDateButtonPressed
@required
@end

__attribute__((swift_name("CopyLinkToPasteboardPressed")))
@protocol MEGAAOSCopyLinkToPasteboardPressed
@required
@end

__attribute__((swift_name("CopyNotesButtonPressed")))
@protocol MEGAAOSCopyNotesButtonPressed
@required
@end

__attribute__((swift_name("CopyPasswordButtonPressed")))
@protocol MEGAAOSCopyPasswordButtonPressed
@required
@end

__attribute__((swift_name("CopyPasswordMenuItem")))
@protocol MEGAAOSCopyPasswordMenuItem
@required
@end

__attribute__((swift_name("CopyUserNameButtonPressed")))
@protocol MEGAAOSCopyUserNameButtonPressed
@required
@end

__attribute__((swift_name("CopyUserNameMenuItem")))
@protocol MEGAAOSCopyUserNameMenuItem
@required
@end

__attribute__((swift_name("CreateAccountButtonPressed")))
@protocol MEGAAOSCreateAccountButtonPressed
@required
@end

__attribute__((swift_name("CreateAlbumDialogButtonPressed")))
@protocol MEGAAOSCreateAlbumDialogButtonPressed
@required
@end

__attribute__((swift_name("CreateAlbumFAB")))
@protocol MEGAAOSCreateAlbumFAB
@required
@end

__attribute__((swift_name("CreateMeetingMaxDurationReached")))
@protocol MEGAAOSCreateMeetingMaxDurationReached
@required
@end

__attribute__((swift_name("CreateNewAlbumDialog")))
@protocol MEGAAOSCreateNewAlbumDialog
@required
@end

__attribute__((swift_name("CreateNoteToSelfButtonPressed")))
@protocol MEGAAOSCreateNoteToSelfButtonPressed
@required
@end

__attribute__((swift_name("CreditCardDetailDeleteButtonPressed")))
@protocol MEGAAOSCreditCardDetailDeleteButtonPressed
@required
@end

__attribute__((swift_name("CreditCardDetailEditButtonPressed")))
@protocol MEGAAOSCreditCardDetailEditButtonPressed
@required
@end

__attribute__((swift_name("CustomNavigationActive")))
@protocol MEGAAOSCustomNavigationActive
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomiseNavigationItemAdded")))
@interface MEGAAOSCustomiseNavigationItemAdded : MEGAAOSBase
- (instancetype)initWithSection:(NSString *)section __attribute__((swift_name("init(section:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *section __attribute__((swift_name("section")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomiseNavigationItemRemoved")))
@interface MEGAAOSCustomiseNavigationItemRemoved : MEGAAOSBase
- (instancetype)initWithSection:(NSString *)section __attribute__((swift_name("init(section:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *section __attribute__((swift_name("section")));
@end

__attribute__((swift_name("CustomiseNavigationItemsReordered")))
@protocol MEGAAOSCustomiseNavigationItemsReordered
@required
@end

__attribute__((swift_name("CustomiseNavigationMaxItemsSnackbarDisplayed")))
@protocol MEGAAOSCustomiseNavigationMaxItemsSnackbarDisplayed
@required
@end

__attribute__((swift_name("CustomiseNavigationMinItemsSnackbarDisplayed")))
@protocol MEGAAOSCustomiseNavigationMinItemsSnackbarDisplayed
@required
@end

__attribute__((swift_name("CustomiseNavigationResetButtonPressed")))
@protocol MEGAAOSCustomiseNavigationResetButtonPressed
@required
@end

__attribute__((swift_name("CustomiseNavigationSaveButtonPressed")))
@protocol MEGAAOSCustomiseNavigationSaveButtonPressed
@required
@end

__attribute__((swift_name("CustomiseNavigationScreen")))
@protocol MEGAAOSCustomiseNavigationScreen
@required
@end

__attribute__((swift_name("CustomiseNavigationTooltipDismissButtonPressed")))
@protocol MEGAAOSCustomiseNavigationTooltipDismissButtonPressed
@required
@end

__attribute__((swift_name("CustomiseNavigationTooltipDisplayed")))
@protocol MEGAAOSCustomiseNavigationTooltipDisplayed
@required
@end

__attribute__((swift_name("CustomiseNavigationTooltipExploreButtonPressed")))
@protocol MEGAAOSCustomiseNavigationTooltipExploreButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DebugLogsDisabled")))
@interface MEGAAOSDebugLogsDisabled : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DebugLogsEnabled")))
@interface MEGAAOSDebugLogsEnabled : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("DebugLogsScreen")))
@protocol MEGAAOSDebugLogsScreen
@required
@end

__attribute__((swift_name("DeleteAlbumCancelButtonPressed")))
@protocol MEGAAOSDeleteAlbumCancelButtonPressed
@required
@end

__attribute__((swift_name("DeleteAlbumConfirmButtonPressed")))
@protocol MEGAAOSDeleteAlbumConfirmButtonPressed
@required
@end

__attribute__((swift_name("DeleteAlbumsConfirmationDialog")))
@protocol MEGAAOSDeleteAlbumsConfirmationDialog
@required
@end

__attribute__((swift_name("DeleteCreditCardDialogCancelButtonPressed")))
@protocol MEGAAOSDeleteCreditCardDialogCancelButtonPressed
@required
@end

__attribute__((swift_name("DeleteCreditCardDialogDeleteButtonPressed")))
@protocol MEGAAOSDeleteCreditCardDialogDeleteButtonPressed
@required
@end

__attribute__((swift_name("DeletePasswordMenuItem")))
@protocol MEGAAOSDeletePasswordMenuItem
@required
@end

__attribute__((swift_name("DeviceCenterDeviceOptionsButton")))
@protocol MEGAAOSDeviceCenterDeviceOptionsButton
@required
@end

__attribute__((swift_name("DeviceCenterEntrypointButton")))
@protocol MEGAAOSDeviceCenterEntrypointButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceCenterItemClicked")))
@interface MEGAAOSDeviceCenterItemClicked : MEGAAOSBase
- (instancetype)initWithItemType:(MEGAAOSDeviceCenterItemClickedItemType *)itemType __attribute__((swift_name("init(itemType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSDeviceCenterItemClickedItemType *itemType __attribute__((swift_name("itemType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceCenterItemClicked.ItemType")))
@interface MEGAAOSDeviceCenterItemClickedItemType : MEGAAOSKotlinEnum<MEGAAOSDeviceCenterItemClickedItemType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSDeviceCenterItemClickedItemType *device __attribute__((swift_name("device")));
@property (class, readonly) MEGAAOSDeviceCenterItemClickedItemType *connection __attribute__((swift_name("connection")));
+ (MEGAAOSKotlinArray<MEGAAOSDeviceCenterItemClickedItemType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSDeviceCenterItemClickedItemType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("DeviceCenterSaveNewDeviceNameButton")))
@protocol MEGAAOSDeviceCenterSaveNewDeviceNameButton
@required
@end

__attribute__((swift_name("DisableCallSoundNotifications")))
@protocol MEGAAOSDisableCallSoundNotifications
@required
@end

__attribute__((swift_name("DiscardAddCreditCardDialogDiscardButtonPressed")))
@protocol MEGAAOSDiscardAddCreditCardDialogDiscardButtonPressed
@required
@end

__attribute__((swift_name("DiscardAddCreditCardDialogKeepEditingButtonPressed")))
@protocol MEGAAOSDiscardAddCreditCardDialogKeepEditingButtonPressed
@required
@end

__attribute__((swift_name("DiscardEditCreditCardDialogDiscardButtonPressed")))
@protocol MEGAAOSDiscardEditCreditCardDialogDiscardButtonPressed
@required
@end

__attribute__((swift_name("DiscardEditCreditCardDialogKeepEditingButtonPressed")))
@protocol MEGAAOSDiscardEditCreditCardDialogKeepEditingButtonPressed
@required
@end

__attribute__((swift_name("DoMoreWithMegaAddContactButtonPressed")))
@protocol MEGAAOSDoMoreWithMegaAddContactButtonPressed
@required
@end

__attribute__((swift_name("DoMoreWithMegaAddSyncButtonPressed")))
@protocol MEGAAOSDoMoreWithMegaAddSyncButtonPressed
@required
@end

__attribute__((swift_name("DoMoreWithMegaCameraUploadsButtonPressed")))
@protocol MEGAAOSDoMoreWithMegaCameraUploadsButtonPressed
@required
@end

__attribute__((swift_name("DoMoreWithMegaCreateAlbumButtonPressed")))
@protocol MEGAAOSDoMoreWithMegaCreateAlbumButtonPressed
@required
@end

__attribute__((swift_name("DoMoreWithMegaScanDocumentButtonPressed")))
@protocol MEGAAOSDoMoreWithMegaScanDocumentButtonPressed
@required
@end

__attribute__((swift_name("DoMoreWithMegaScheduleMeetingButtonPressed")))
@protocol MEGAAOSDoMoreWithMegaScheduleMeetingButtonPressed
@required
@end

__attribute__((swift_name("DocumentPreviewHideNodeMenuItem")))
@protocol MEGAAOSDocumentPreviewHideNodeMenuItem
@required
@end

__attribute__((swift_name("DocumentScanInitiated")))
@protocol MEGAAOSDocumentScanInitiated
@required
@end

__attribute__((swift_name("DocumentScannerSaveImageToChat")))
@protocol MEGAAOSDocumentScannerSaveImageToChat
@required
@end

__attribute__((swift_name("DocumentScannerSaveImageToCloudDrive")))
@protocol MEGAAOSDocumentScannerSaveImageToCloudDrive
@required
@end

__attribute__((swift_name("DocumentScannerSavePDFToChat")))
@protocol MEGAAOSDocumentScannerSavePDFToChat
@required
@end

__attribute__((swift_name("DocumentScannerSavePDFToCloudDrive")))
@protocol MEGAAOSDocumentScannerSavePDFToCloudDrive
@required
@end

__attribute__((swift_name("DocumentScannerUploadingImageToChat")))
@protocol MEGAAOSDocumentScannerUploadingImageToChat
@required
@end

__attribute__((swift_name("DocumentScannerUploadingImageToCloudDrive")))
@protocol MEGAAOSDocumentScannerUploadingImageToCloudDrive
@required
@end

__attribute__((swift_name("DocumentScannerUploadingPDFToChat")))
@protocol MEGAAOSDocumentScannerUploadingPDFToChat
@required
@end

__attribute__((swift_name("DocumentScannerUploadingPDFToCloudDrive")))
@protocol MEGAAOSDocumentScannerUploadingPDFToCloudDrive
@required
@end

__attribute__((swift_name("DontAllowCameraBackupsCTAButtonPressed")))
@protocol MEGAAOSDontAllowCameraBackupsCTAButtonPressed
@required
@end

__attribute__((swift_name("DontAllowNotificationsCTAButtonPressed")))
@protocol MEGAAOSDontAllowNotificationsCTAButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DownloadConnectionsChanged")))
@interface MEGAAOSDownloadConnectionsChanged : MEGAAOSBase
- (instancetype)initWithPreviousValue:(int32_t)previousValue newValue:(int32_t)newValue __attribute__((swift_name("init(previousValue:newValue:)"))) __attribute__((objc_designated_initializer));
@property (readonly, getter=doNewValue) int32_t newValue __attribute__((swift_name("newValue")));
@property (readonly) int32_t previousValue __attribute__((swift_name("previousValue")));
@end

__attribute__((swift_name("DownloadConnectionsDialog")))
@protocol MEGAAOSDownloadConnectionsDialog
@required
@end

__attribute__((swift_name("DriveSyncScreen")))
@protocol MEGAAOSDriveSyncScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DurationFilterAllDurationsClicked")))
@interface MEGAAOSDurationFilterAllDurationsClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DurationFilterBetween10and60SecondsClicked")))
@interface MEGAAOSDurationFilterBetween10and60SecondsClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DurationFilterBetween1and4MinutesClicked")))
@interface MEGAAOSDurationFilterBetween1and4MinutesClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DurationFilterBetween4and20MinutesClicked")))
@interface MEGAAOSDurationFilterBetween4and20MinutesClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("DurationFilterButtonPressed")))
@protocol MEGAAOSDurationFilterButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DurationFilterLessThan10SecondsClicked")))
@interface MEGAAOSDurationFilterLessThan10SecondsClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DurationFilterMoreThan20MinutesClicked")))
@interface MEGAAOSDurationFilterMoreThan20MinutesClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("EditCreditCardCloseButtonPressed")))
@protocol MEGAAOSEditCreditCardCloseButtonPressed
@required
@end

__attribute__((swift_name("EditMeetingMaxDurationReached")))
@protocol MEGAAOSEditMeetingMaxDurationReached
@required
@end

__attribute__((swift_name("EditPasswordItemScreen")))
@protocol MEGAAOSEditPasswordItemScreen
@required
@end

__attribute__((swift_name("EditPasswordMenuItem")))
@protocol MEGAAOSEditPasswordMenuItem
@required
@end

__attribute__((swift_name("EditScheduledMeetingOccurrenceScreen")))
@protocol MEGAAOSEditScheduledMeetingOccurrenceScreen
@required
@end

__attribute__((swift_name("EditScheduledMeetingOccurrenceSettingEnableMeetingLinkButton")))
@protocol MEGAAOSEditScheduledMeetingOccurrenceSettingEnableMeetingLinkButton
@required
@end

__attribute__((swift_name("EditScheduledMeetingScreen")))
@protocol MEGAAOSEditScheduledMeetingScreen
@required
@end

__attribute__((swift_name("EditScheduledMeetingSettingEnableMeetingLinkButton")))
@protocol MEGAAOSEditScheduledMeetingSettingEnableMeetingLinkButton
@required
@end

__attribute__((swift_name("EditSingleOccurrenceMeetingMaxDurationReached")))
@protocol MEGAAOSEditSingleOccurrenceMeetingMaxDurationReached
@required
@end

__attribute__((swift_name("EditTextFileAction")))
@protocol MEGAAOSEditTextFileAction
@required
@end

__attribute__((swift_name("EmailConfirmationChangeEmailButtonPressed")))
@protocol MEGAAOSEmailConfirmationChangeEmailButtonPressed
@required
@end

__attribute__((swift_name("EmailConfirmationScreen")))
@protocol MEGAAOSEmailConfirmationScreen
@required
@end

__attribute__((swift_name("EnableAdBlockingOnboardingButtonPressed")))
@protocol MEGAAOSEnableAdBlockingOnboardingButtonPressed
@required
@end

__attribute__((swift_name("EnableCallSoundNotifications")))
@protocol MEGAAOSEnableCallSoundNotifications
@required
@end

__attribute__((swift_name("EnableCameraBackupsCTAButtonPressed")))
@protocol MEGAAOSEnableCameraBackupsCTAButtonPressed
@required
@end

__attribute__((swift_name("EnableNotificationsCTAButtonPressed")))
@protocol MEGAAOSEnableNotificationsCTAButtonPressed
@required
@end

__attribute__((swift_name("EndCallForAll")))
@protocol MEGAAOSEndCallForAll
@required
@end

__attribute__((swift_name("EndCallInNoParticipantsPopup")))
@protocol MEGAAOSEndCallInNoParticipantsPopup
@required
@end

__attribute__((swift_name("EndCallWhenEmptyCallTimeout")))
@protocol MEGAAOSEndCallWhenEmptyCallTimeout
@required
@end


/**
 * Example button press
 *
 * Generated event type is object
 * Event name will the [interface name], event class will be [interface name + "Event"]
 *
 * Button name is required
 * Screen and Dialog names are optional
 */
__attribute__((swift_name("ExampleButtonPress")))
@protocol MEGAAOSExampleButtonPress
@required
@end


/**
 * Example complex general event
 *
 * Generated event type is class
 * Event name will the [class name], event class will be [class name + "Event"]
 *
 * Any Parameters defined will be added as parameters to the class. Values passed at runtime will
 * be added to the json payload map using the parameter name as key. Supported types are
 * primitives as well as lists and maps. All other types will be represented by their toString()
 * value.
 *
 * Parameters annotated with @StaticValue will not be added to class parameters, only to the json
 * payload map.
 *
 * Below example will generate the following:
 * class ExampleComplexGeneralEventEvent: GeneralEventIdentifier(
 *           val foo: String?,
 *           val bar: Int,
 *      ){
 *           ...
 *           override val info: Map<String, Any?> = mapOf(
 *           "foo" to foo,
 *           "bar" to bar,
 *           "fooBar" to "22"
 *           )
 *           ...
 *      }
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExampleComplexGeneralEvent")))
@interface MEGAAOSExampleComplexGeneralEvent : MEGAAOSBase
- (instancetype)initWithFoo:(NSString * _Nullable)foo bar:(int32_t)bar fooBar:(int32_t)fooBar __attribute__((swift_name("init(foo:bar:fooBar:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t bar __attribute__((swift_name("bar")));
@property (readonly) NSString * _Nullable foo __attribute__((swift_name("foo")));
@property (readonly) int32_t fooBar __attribute__((swift_name("fooBar")));
@end


/**
 * Example complex item selected event
 *
 * Generated event type is class
 * Event name will the [class name], event class will be [class name + "Event"]
 *
 * Any Parameters defined will be added as parameters to the class. Values passed at runtime will
 * be added to the json payload map using the parameter name as key. Supported types are
 * primitives as well as lists and maps. All other types will be represented by their toString()
 * value.
 *
 * Parameters annotated with @StaticValue will not be added to class parameters, only to the json
 * payload map.
 *
 * Below example will generate the following:
 * class ExampleComplexItemSelectedEvent: ItemSelectedEventIdentifier(
 *           val foo: String?,
 *           val bar: Int,
 *      ){
 *           ...
 *           override val info: Map<String, Any?> = mapOf(
 *           "foo" to foo,
 *           "bar" to bar,
 *           "fooBar" to "22"
 *           )
 *           ...
 *      }
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExampleComplexItemSelected")))
@interface MEGAAOSExampleComplexItemSelected : MEGAAOSBase
- (instancetype)initWithFoo:(NSString * _Nullable)foo bar:(int32_t)bar fooBar:(int32_t)fooBar __attribute__((swift_name("init(foo:bar:fooBar:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t bar __attribute__((swift_name("bar")));
@property (readonly) NSString * _Nullable foo __attribute__((swift_name("foo")));
@property (readonly) int32_t fooBar __attribute__((swift_name("fooBar")));
@end


/**
 * Example dialog displayed
 *
 * Generated event type is object
 * Event name will the [interface name], event class will be [interface name + "Event"]
 *
 * Dialog name is required
 * Screen name is optional
 */
__attribute__((swift_name("ExampleDialogDisplayed")))
@protocol MEGAAOSExampleDialogDisplayed
@required
@end


/**
 * Example legacy event
 *
 * Generated event type is object
 * Event name will be the [interface name], event class will be [interface name + "Event"]
 * Event identifier will be the value of @param eventId and will not follow the standard id structure
 */
__attribute__((swift_name("ExampleLegacy")))
@protocol MEGAAOSExampleLegacy
@required
@end


/**
 * Example menu item selected
 *
 * Generated event type is object
 * Event name will the [interface name], event class will be [interface name + "Event"]
 *
 * Menu item name is required
 * Menu type is required. Options are
 *  [MenuItemEvent.MenuType.Toolbar]
 *  [MenuItemEvent.MenuType.Item]
 * Screen name is optional
 */
__attribute__((swift_name("ExampleMenuItemSelected")))
@protocol MEGAAOSExampleMenuItemSelected
@required
@end


/**
 * Example navigation
 *
 * Generated event type is object
 * Event name will the [interface name], event class will be [interface name + "Event"]
 *
 * Destination name is required
 * Navigation element type is required. Options are:
 *  [NavigationEvent.NavigationElementType.Bottom]
 *  [NavigationEvent.NavigationElementType.Drawer]
 *  [NavigationEvent.NavigationElementType.Toolbar]
 *  [NavigationEvent.NavigationElementType.System]
 *  [NavigationEvent.NavigationElementType.Other]
 */
__attribute__((swift_name("ExampleNavigation")))
@protocol MEGAAOSExampleNavigation
@required
@end


/**
 * Example notification
 *
 * Generated event type is object
 * Event name will the [interface name], event class will be [interface name + "Event"]
 */
__attribute__((swift_name("ExampleNotification")))
@protocol MEGAAOSExampleNotification
@required
@end


/**
 * Example screen view event
 *
 * Generated event type is object
 * Event name will be the [interface name] - Use the screen name as interface name
 * Event class will be [interface name + "Event"]
 */
__attribute__((swift_name("ExampleScreen")))
@protocol MEGAAOSExampleScreen
@required
@end


/**
 * Example simple general event
 *
 * Generated event type is object
 * Event name will the [interface name], event class will be [interface name + "Event"]
 */
__attribute__((swift_name("ExampleSimpleGeneralEvent")))
@protocol MEGAAOSExampleSimpleGeneralEvent
@required
@end


/**
 * Example simple item selected event
 *
 * Generated event type is object
 * Event name will the [interface name], event class will be [interface name + "Event"]
 */
__attribute__((swift_name("ExampleSimpleItemSelected")))
@protocol MEGAAOSExampleSimpleItemSelected
@required
@end


/**
 * Example tab selected event
 *
 * Generated event type is object
 * Event name will the [interface name], event class will be [interface name + "Event"]
 *
 * Screen name is required
 * Tab name is required
 */
__attribute__((swift_name("ExampleTabSelected")))
@protocol MEGAAOSExampleTabSelected
@required
@end


/**
 * Excluded class
 *
 * Any class decorated with [Exclude] will not be generated.
 * [Exclude] can also be applied to a file to exclude all classes in that file
 */
__attribute__((swift_name("ExcludedClass")))
@protocol MEGAAOSExcludedClass
@required
@end

__attribute__((swift_name("FailedTransfersClearAllMenuItem")))
@protocol MEGAAOSFailedTransfersClearAllMenuItem
@required
@end

__attribute__((swift_name("FailedTransfersClearSelectedMenuItem")))
@protocol MEGAAOSFailedTransfersClearSelectedMenuItem
@required
@end

__attribute__((swift_name("FailedTransfersItemClearMenuItem")))
@protocol MEGAAOSFailedTransfersItemClearMenuItem
@required
@end

__attribute__((swift_name("FailedTransfersItemMoreOptionsMenuItem")))
@protocol MEGAAOSFailedTransfersItemMoreOptionsMenuItem
@required
@end

__attribute__((swift_name("FailedTransfersItemRetryMenuItem")))
@protocol MEGAAOSFailedTransfersItemRetryMenuItem
@required
@end

__attribute__((swift_name("FailedTransfersItemTapAndHoldSelected")))
@protocol MEGAAOSFailedTransfersItemTapAndHoldSelected
@required
@end

__attribute__((swift_name("FailedTransfersMoreOptionsMenuItem")))
@protocol MEGAAOSFailedTransfersMoreOptionsMenuItem
@required
@end

__attribute__((swift_name("FailedTransfersRetryAllMenuItem")))
@protocol MEGAAOSFailedTransfersRetryAllMenuItem
@required
@end

__attribute__((swift_name("FailedTransfersRetrySelectedMenuItem")))
@protocol MEGAAOSFailedTransfersRetrySelectedMenuItem
@required
@end

__attribute__((swift_name("FailedTransfersRetrySnackbarAction")))
@protocol MEGAAOSFailedTransfersRetrySnackbarAction
@required
@end

__attribute__((swift_name("FailedTransfersSelectAllMenuItem")))
@protocol MEGAAOSFailedTransfersSelectAllMenuItem
@required
@end

__attribute__((swift_name("FailedTransfersSelectMenuItem")))
@protocol MEGAAOSFailedTransfersSelectMenuItem
@required
@end

__attribute__((swift_name("FailedTransfersSwipeToClear")))
@protocol MEGAAOSFailedTransfersSwipeToClear
@required
@end

__attribute__((swift_name("FailedTransfersSwipeToRetry")))
@protocol MEGAAOSFailedTransfersSwipeToRetry
@required
@end

__attribute__((swift_name("FailedTransfersTab")))
@protocol MEGAAOSFailedTransfersTab
@required
@end

__attribute__((swift_name("FavouritesBottomNavigationItem")))
@protocol MEGAAOSFavouritesBottomNavigationItem
@required
@end

__attribute__((swift_name("FavouritesChipButtonPressed")))
@protocol MEGAAOSFavouritesChipButtonPressed
@required
@end

__attribute__((swift_name("FavouritesScreen")))
@protocol MEGAAOSFavouritesScreen
@required
@end

__attribute__((swift_name("FileContactListScreenView")))
@protocol MEGAAOSFileContactListScreenView
@required
@end

__attribute__((swift_name("FileLinkCopyToOfflineMoreOptionsButtonPressed")))
@protocol MEGAAOSFileLinkCopyToOfflineMoreOptionsButtonPressed
@required
@end

__attribute__((swift_name("FileLinkDownloadAnchoredButtonPressed")))
@protocol MEGAAOSFileLinkDownloadAnchoredButtonPressed
@required
@end

__attribute__((swift_name("FileLinkDownloadMoreOptionsButtonPressed")))
@protocol MEGAAOSFileLinkDownloadMoreOptionsButtonPressed
@required
@end

__attribute__((swift_name("FileLinkSaveToMegaAnchoredButtonPressed")))
@protocol MEGAAOSFileLinkSaveToMegaAnchoredButtonPressed
@required
@end

__attribute__((swift_name("FileLinkSaveToMegaMoreOptionsButtonPressed")))
@protocol MEGAAOSFileLinkSaveToMegaMoreOptionsButtonPressed
@required
@end

__attribute__((swift_name("FileLinkSaveToPhotosMoreOptionsButtonPressed")))
@protocol MEGAAOSFileLinkSaveToPhotosMoreOptionsButtonPressed
@required
@end

__attribute__((swift_name("FileLinkScreen")))
@protocol MEGAAOSFileLinkScreen
@required
@end

__attribute__((swift_name("FileManagementSettingsItemSelected")))
@protocol MEGAAOSFileManagementSettingsItemSelected
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileOpen")))
@interface MEGAAOSFileOpen : MEGAAOSBase
- (instancetype)initWithFileType:(NSString *)fileType context:(MEGAAOSFileOpenFileOpenContext *)context __attribute__((swift_name("init(fileType:context:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSFileOpenFileOpenContext *context __attribute__((swift_name("context")));
@property (readonly) NSString *fileType __attribute__((swift_name("fileType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileOpen.FileOpenContext")))
@interface MEGAAOSFileOpenFileOpenContext : MEGAAOSKotlinEnum<MEGAAOSFileOpenFileOpenContext *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSFileOpenFileOpenContext *filelink __attribute__((swift_name("filelink")));
@property (class, readonly) MEGAAOSFileOpenFileOpenContext *chat __attribute__((swift_name("chat")));
@property (class, readonly) MEGAAOSFileOpenFileOpenContext *clouddrive __attribute__((swift_name("clouddrive")));
@property (class, readonly) MEGAAOSFileOpenFileOpenContext *shareditems __attribute__((swift_name("shareditems")));
@property (class, readonly) MEGAAOSFileOpenFileOpenContext *recent __attribute__((swift_name("recent")));
@property (class, readonly) MEGAAOSFileOpenFileOpenContext *offline __attribute__((swift_name("offline")));
@property (class, readonly) MEGAAOSFileOpenFileOpenContext *search __attribute__((swift_name("search")));
@property (class, readonly) MEGAAOSFileOpenFileOpenContext *folderlink __attribute__((swift_name("folderlink")));
@property (class, readonly) MEGAAOSFileOpenFileOpenContext *unknown __attribute__((swift_name("unknown")));
+ (MEGAAOSKotlinArray<MEGAAOSFileOpenFileOpenContext *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSFileOpenFileOpenContext *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("FolderLinkDownloadAnchoredButtonPressed")))
@protocol MEGAAOSFolderLinkDownloadAnchoredButtonPressed
@required
@end

__attribute__((swift_name("FolderLinkDownloadSelectionToolbarButtonPressed")))
@protocol MEGAAOSFolderLinkDownloadSelectionToolbarButtonPressed
@required
@end

__attribute__((swift_name("FolderLinkSaveToMegaAnchoredButtonPressed")))
@protocol MEGAAOSFolderLinkSaveToMegaAnchoredButtonPressed
@required
@end

__attribute__((swift_name("FolderLinkSaveToMegaMoreOptionsButtonPressed")))
@protocol MEGAAOSFolderLinkSaveToMegaMoreOptionsButtonPressed
@required
@end

__attribute__((swift_name("FolderLinkSaveToMegaSelectionToolbarButtonPressed")))
@protocol MEGAAOSFolderLinkSaveToMegaSelectionToolbarButtonPressed
@required
@end

__attribute__((swift_name("FolderLinkScreen")))
@protocol MEGAAOSFolderLinkScreen
@required
@end

__attribute__((swift_name("ForgotPasscodeButtonPressed")))
@protocol MEGAAOSForgotPasscodeButtonPressed
@required
@end

__attribute__((swift_name("ForgotPasswordButtonPressed")))
@protocol MEGAAOSForgotPasswordButtonPressed
@required
@end

__attribute__((swift_name("FreeTrialAnnualPlanSelected")))
@protocol MEGAAOSFreeTrialAnnualPlanSelected
@required
@end

__attribute__((swift_name("FreeTrialMonthlyPlanSelected")))
@protocol MEGAAOSFreeTrialMonthlyPlanSelected
@required
@end

__attribute__((swift_name("FreeTrialPurchaseCancelled")))
@protocol MEGAAOSFreeTrialPurchaseCancelled
@required
@end

__attribute__((swift_name("FreeTrialScreen")))
@protocol MEGAAOSFreeTrialScreen
@required
@end

__attribute__((swift_name("FreeUserBuyProI")))
@protocol MEGAAOSFreeUserBuyProI
@required
@end

__attribute__((swift_name("FreeUserBuyProII")))
@protocol MEGAAOSFreeUserBuyProII
@required
@end

__attribute__((swift_name("FreeUserBuyProIII")))
@protocol MEGAAOSFreeUserBuyProIII
@required
@end

__attribute__((swift_name("FreeUserBuyProLite")))
@protocol MEGAAOSFreeUserBuyProLite
@required
@end

__attribute__((swift_name("FreeUserOfferTimedOut")))
@protocol MEGAAOSFreeUserOfferTimedOut
@required
@end

__attribute__((swift_name("FreeUserUpgradeAccountPlanMonthlyPeriodTogglePressed")))
@protocol MEGAAOSFreeUserUpgradeAccountPlanMonthlyPeriodTogglePressed
@required
@end

__attribute__((swift_name("FreeUserUpgradeAccountPlanScreen")))
@protocol MEGAAOSFreeUserUpgradeAccountPlanScreen
@required
@end

__attribute__((swift_name("FreeUserUpgradeAccountPlanYearlyPeriodTogglePressed")))
@protocol MEGAAOSFreeUserUpgradeAccountPlanYearlyPeriodTogglePressed
@required
@end

__attribute__((swift_name("FullAccessCameraBackupsCTAButtonPressed")))
@protocol MEGAAOSFullAccessCameraBackupsCTAButtonPressed
@required
@end

__attribute__((swift_name("FullStorageAndTransferOverQuotaErrorBannerDisplaye")))
@protocol MEGAAOSFullStorageAndTransferOverQuotaErrorBannerDisplaye
@required
@end

__attribute__((swift_name("FullStorageOverQuotaBannerDisplayed")))
@protocol MEGAAOSFullStorageOverQuotaBannerDisplayed
@required
@end

__attribute__((swift_name("FullStorageOverQuotaBannerUpgradeButtonPressed")))
@protocol MEGAAOSFullStorageOverQuotaBannerUpgradeButtonPressed
@required
@end

__attribute__((swift_name("GeneratePasswordButtonPressed")))
@protocol MEGAAOSGeneratePasswordButtonPressed
@required
@end

__attribute__((swift_name("GeneratePasswordCopyPasswordButtonPressed")))
@protocol MEGAAOSGeneratePasswordCopyPasswordButtonPressed
@required
@end

__attribute__((swift_name("GeneratePasswordWidgetScreen")))
@protocol MEGAAOSGeneratePasswordWidgetScreen
@required
@end

__attribute__((swift_name("GenericAppPushNotificationReceived")))
@protocol MEGAAOSGenericAppPushNotificationReceived
@required
@end

__attribute__((swift_name("GenericAppPushNotificationTapped")))
@protocol MEGAAOSGenericAppPushNotificationTapped
@required
@end

__attribute__((swift_name("GetStartedForFreeUpgradePlanButtonPressed")))
@protocol MEGAAOSGetStartedForFreeUpgradePlanButtonPressed
@required
@end

__attribute__((swift_name("GroupChatPressed")))
@protocol MEGAAOSGroupChatPressed
@required
@end

__attribute__((swift_name("HelpAndFeedbackSettingsItemSelected")))
@protocol MEGAAOSHelpAndFeedbackSettingsItemSelected
@required
@end

__attribute__((swift_name("HiddenAlbumUploadDisabled")))
@protocol MEGAAOSHiddenAlbumUploadDisabled
@required
@end

__attribute__((swift_name("HiddenAlbumUploadEnabled")))
@protocol MEGAAOSHiddenAlbumUploadEnabled
@required
@end

__attribute__((swift_name("HiddenNodeOnboardingCloseButtonPressed")))
@protocol MEGAAOSHiddenNodeOnboardingCloseButtonPressed
@required
@end

__attribute__((swift_name("HiddenNodeOnboardingContinueButtonPressed")))
@protocol MEGAAOSHiddenNodeOnboardingContinueButtonPressed
@required
@end

__attribute__((swift_name("HiddenNodeUpgradeCloseButtonPressed")))
@protocol MEGAAOSHiddenNodeUpgradeCloseButtonPressed
@required
@end

__attribute__((swift_name("HiddenNodeUpgradeUpgradeButtonPressed")))
@protocol MEGAAOSHiddenNodeUpgradeUpgradeButtonPressed
@required
@end

__attribute__((swift_name("HideNodeInfoButtonPressed")))
@protocol MEGAAOSHideNodeInfoButtonPressed
@required
@end

__attribute__((swift_name("HideNodeMenuItem")))
@protocol MEGAAOSHideNodeMenuItem
@required
@end

__attribute__((swift_name("HideNodeMultiSelectMenuItem")))
@protocol MEGAAOSHideNodeMultiSelectMenuItem
@required
@end

__attribute__((swift_name("HideNodeOnboardingScreen")))
@protocol MEGAAOSHideNodeOnboardingScreen
@required
@end

__attribute__((swift_name("HideNodeUpgradeScreen")))
@protocol MEGAAOSHideNodeUpgradeScreen
@required
@end

__attribute__((swift_name("HideRecentActivityMenuItem")))
@protocol MEGAAOSHideRecentActivityMenuItem
@required
@end

__attribute__((swift_name("HomeAddNewBackupMenuToolbar")))
@protocol MEGAAOSHomeAddNewBackupMenuToolbar
@required
@end

__attribute__((swift_name("HomeAddNewSyncMenuToolbar")))
@protocol MEGAAOSHomeAddNewSyncMenuToolbar
@required
@end

__attribute__((swift_name("HomeBottomNavigationItem")))
@protocol MEGAAOSHomeBottomNavigationItem
@required
@end

__attribute__((swift_name("HomeCaptureMenuToolbar")))
@protocol MEGAAOSHomeCaptureMenuToolbar
@required
@end

__attribute__((swift_name("HomeChooseFromPhotosMenuToolbar")))
@protocol MEGAAOSHomeChooseFromPhotosMenuToolbar
@required
@end

__attribute__((swift_name("HomeFABClosed")))
@protocol MEGAAOSHomeFABClosed
@required
@end

__attribute__((swift_name("HomeFABExpanded")))
@protocol MEGAAOSHomeFABExpanded
@required
@end

__attribute__((swift_name("HomeFABPressed")))
@protocol MEGAAOSHomeFABPressed
@required
@end

__attribute__((swift_name("HomeFabOptionsButtonPressed")))
@protocol MEGAAOSHomeFabOptionsButtonPressed
@required
@end

__attribute__((swift_name("HomeHideNodeMenuItem")))
@protocol MEGAAOSHomeHideNodeMenuItem
@required
@end

__attribute__((swift_name("HomeImportFromFilesMenuToolbar")))
@protocol MEGAAOSHomeImportFromFilesMenuToolbar
@required
@end

__attribute__((swift_name("HomeNewChatFABPressed")))
@protocol MEGAAOSHomeNewChatFABPressed
@required
@end

__attribute__((swift_name("HomeNewChatMenuToolbar")))
@protocol MEGAAOSHomeNewChatMenuToolbar
@required
@end

__attribute__((swift_name("HomeNewChatTextPressed")))
@protocol MEGAAOSHomeNewChatTextPressed
@required
@end

__attribute__((swift_name("HomeNewTextFileMenuToolbar")))
@protocol MEGAAOSHomeNewTextFileMenuToolbar
@required
@end

__attribute__((swift_name("HomeScanDocumentMenuToolbar")))
@protocol MEGAAOSHomeScanDocumentMenuToolbar
@required
@end

__attribute__((swift_name("HomeScreen")))
@protocol MEGAAOSHomeScreen
@required
@end

__attribute__((swift_name("HomeScreenAudioTilePressed")))
@protocol MEGAAOSHomeScreenAudioTilePressed
@required
@end

__attribute__((swift_name("HomeScreenDocsTilePressed")))
@protocol MEGAAOSHomeScreenDocsTilePressed
@required
@end

__attribute__((swift_name("HomeScreenSearchMenuToolbar")))
@protocol MEGAAOSHomeScreenSearchMenuToolbar
@required
@end

__attribute__((swift_name("HomeScreenVideosTilePressed")))
@protocol MEGAAOSHomeScreenVideosTilePressed
@required
@end

__attribute__((swift_name("HomeSearchBarPressed")))
@protocol MEGAAOSHomeSearchBarPressed
@required
@end

__attribute__((swift_name("HomeSubscriptionOfferBannerDismissButtonPressed")))
@protocol MEGAAOSHomeSubscriptionOfferBannerDismissButtonPressed
@required
@end

__attribute__((swift_name("HomeSubscriptionOfferBannerDisplayed")))
@protocol MEGAAOSHomeSubscriptionOfferBannerDisplayed
@required
@end

__attribute__((swift_name("HomeSubscriptionOfferBannerPressed")))
@protocol MEGAAOSHomeSubscriptionOfferBannerPressed
@required
@end

__attribute__((swift_name("HomeUploadFABPressed")))
@protocol MEGAAOSHomeUploadFABPressed
@required
@end

__attribute__((swift_name("HomeUploadFilesMenuToolbar")))
@protocol MEGAAOSHomeUploadFilesMenuToolbar
@required
@end

__attribute__((swift_name("HomeUploadFolderMenuToolbar")))
@protocol MEGAAOSHomeUploadFolderMenuToolbar
@required
@end

__attribute__((swift_name("HomeUploadTextPressed")))
@protocol MEGAAOSHomeUploadTextPressed
@required
@end

__attribute__((swift_name("IOSGuestEndCallFreePlanUsersLimitDialog")))
@protocol MEGAAOSIOSGuestEndCallFreePlanUsersLimitDialog
@required
@end

__attribute__((swift_name("IOSKMTransferCreatedSuccessfully")))
@protocol MEGAAOSIOSKMTransferCreatedSuccessfully
@required
@end

__attribute__((swift_name("IOSKMTransferImportedSuccessfully")))
@protocol MEGAAOSIOSKMTransferImportedSuccessfully
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSKMTransferUSMigrationFailed")))
@interface MEGAAOSIOSKMTransferUSMigrationFailed : MEGAAOSBase
- (instancetype)initWithReason:(NSString *)reason __attribute__((swift_name("init(reason:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *reason __attribute__((swift_name("reason")));
@end

__attribute__((swift_name("IOSKMTransferUSMigrationSucceeded")))
@protocol MEGAAOSIOSKMTransferUSMigrationSucceeded
@required
@end

__attribute__((swift_name("IOSKMTransferUSSessionLost")))
@protocol MEGAAOSIOSKMTransferUSSessionLost
@required
@end

__attribute__((swift_name("IOSMigrationFileCreatedSuccessfully")))
@protocol MEGAAOSIOSMigrationFileCreatedSuccessfully
@required
@end

__attribute__((swift_name("IOSMigrationFileImportedSuccessfully")))
@protocol MEGAAOSIOSMigrationFileImportedSuccessfully
@required
@end

__attribute__((swift_name("IOSStartConversationButton")))
@protocol MEGAAOSIOSStartConversationButton
@required
@end

__attribute__((swift_name("IOSUploadFilesButton")))
@protocol MEGAAOSIOSUploadFilesButton
@required
@end

__attribute__((swift_name("ITunesSyncedAlbumsUploadDisabled")))
@protocol MEGAAOSITunesSyncedAlbumsUploadDisabled
@required
@end

__attribute__((swift_name("ITunesSyncedAlbumsUploadEnabled")))
@protocol MEGAAOSITunesSyncedAlbumsUploadEnabled
@required
@end

__attribute__((swift_name("ImagePreviewGetLinkMenuItem")))
@protocol MEGAAOSImagePreviewGetLinkMenuItem
@required
@end

__attribute__((swift_name("ImagePreviewHideNodeMenuToolBar")))
@protocol MEGAAOSImagePreviewHideNodeMenuToolBar
@required
@end

__attribute__((swift_name("ImportAlbumContentLoaded")))
@protocol MEGAAOSImportAlbumContentLoaded
@required
@end

__attribute__((swift_name("InAppUpdateCancelButtonPressed")))
@protocol MEGAAOSInAppUpdateCancelButtonPressed
@required
@end

__attribute__((swift_name("InAppUpdateDownloadSuccessMessageDisplayed")))
@protocol MEGAAOSInAppUpdateDownloadSuccessMessageDisplayed
@required
@end

__attribute__((swift_name("InAppUpdateRestartButtonPressed")))
@protocol MEGAAOSInAppUpdateRestartButtonPressed
@required
@end

__attribute__((swift_name("InAppUpdateUpdateButtonPressed")))
@protocol MEGAAOSInAppUpdateUpdateButtonPressed
@required
@end

__attribute__((swift_name("InactivityPurgeBannerCloseButtonPressed")))
@protocol MEGAAOSInactivityPurgeBannerCloseButtonPressed
@required
@end

__attribute__((swift_name("InactivityPurgeBannerDisplayed")))
@protocol MEGAAOSInactivityPurgeBannerDisplayed
@required
@end

__attribute__((swift_name("InactivityPurgeBannerLearnMoreButtonPressed")))
@protocol MEGAAOSInactivityPurgeBannerLearnMoreButtonPressed
@required
@end

__attribute__((swift_name("InactivityPurgeEventReceived")))
@protocol MEGAAOSInactivityPurgeEventReceived
@required
@end

__attribute__((swift_name("IncomingSharesTab")))
@protocol MEGAAOSIncomingSharesTab
@required
@end

__attribute__((swift_name("InitialLaunchSetUpButtonPressed")))
@protocol MEGAAOSInitialLaunchSetUpButtonPressed
@required
@end

__attribute__((swift_name("InitialLaunchSkipSetUpButtonPressed")))
@protocol MEGAAOSInitialLaunchSkipSetUpButtonPressed
@required
@end

__attribute__((swift_name("InviteContactScreen")))
@protocol MEGAAOSInviteContactScreen
@required
@end

__attribute__((swift_name("InviteContactsButtonPressed")))
@protocol MEGAAOSInviteContactsButtonPressed
@required
@end

__attribute__((swift_name("InviteContactsPressed")))
@protocol MEGAAOSInviteContactsPressed
@required
@end

__attribute__((swift_name("InviteFriendsLearnMorePressed")))
@protocol MEGAAOSInviteFriendsLearnMorePressed
@required
@end

__attribute__((swift_name("InviteFriendsPressed")))
@protocol MEGAAOSInviteFriendsPressed
@required
@end

__attribute__((swift_name("InviteParticipantsPressed")))
@protocol MEGAAOSInviteParticipantsPressed
@required
@end

__attribute__((swift_name("InviteToMEGAAddFromContacts")))
@protocol MEGAAOSInviteToMEGAAddFromContacts
@required
@end

__attribute__((swift_name("InviteToMEGAEnterEmailAddress")))
@protocol MEGAAOSInviteToMEGAEnterEmailAddress
@required
@end

__attribute__((swift_name("InviteToMEGAPressed")))
@protocol MEGAAOSInviteToMEGAPressed
@required
@end

__attribute__((swift_name("InviteToMEGAScanCode")))
@protocol MEGAAOSInviteToMEGAScanCode
@required
@end

__attribute__((swift_name("InviteToMEGAShareInvite")))
@protocol MEGAAOSInviteToMEGAShareInvite
@required
@end

__attribute__((swift_name("JoinMeetingPressed")))
@protocol MEGAAOSJoinMeetingPressed
@required
@end

__attribute__((swift_name("KillSwitchNotificationDisabledPressed")))
@protocol MEGAAOSKillSwitchNotificationDisabledPressed
@required
@end

__attribute__((swift_name("KillSwitchToggleDisabledPressed")))
@protocol MEGAAOSKillSwitchToggleDisabledPressed
@required
@end

__attribute__((swift_name("KillSwitchToggleEnabledPressed")))
@protocol MEGAAOSKillSwitchToggleEnabledPressed
@required
@end

__attribute__((swift_name("LabelAddedMenuItem")))
@protocol MEGAAOSLabelAddedMenuItem
@required
@end

__attribute__((swift_name("LabelRemovedMenuItem")))
@protocol MEGAAOSLabelRemovedMenuItem
@required
@end

__attribute__((swift_name("LaunchWebSiteButtonPressed")))
@protocol MEGAAOSLaunchWebSiteButtonPressed
@required
@end

__attribute__((swift_name("LaunchWebsiteMenuItem")))
@protocol MEGAAOSLaunchWebsiteMenuItem
@required
@end

__attribute__((swift_name("LimitedAccessCameraBackupsCTAButtonPressed")))
@protocol MEGAAOSLimitedAccessCameraBackupsCTAButtonPressed
@required
@end

__attribute__((swift_name("LinkConfirmPasswordFileButtonPressed")))
@protocol MEGAAOSLinkConfirmPasswordFileButtonPressed
@required
@end

__attribute__((swift_name("LinkConfirmPasswordFolderButtonPressed")))
@protocol MEGAAOSLinkConfirmPasswordFolderButtonPressed
@required
@end

__attribute__((swift_name("LinkCopyAllLinksButtonPressed")))
@protocol MEGAAOSLinkCopyAllLinksButtonPressed
@required
@end

__attribute__((swift_name("LinkCopyDecryptionKeyButtonPressed")))
@protocol MEGAAOSLinkCopyDecryptionKeyButtonPressed
@required
@end

__attribute__((swift_name("LinkCopyLinkButtonPressed")))
@protocol MEGAAOSLinkCopyLinkButtonPressed
@required
@end

__attribute__((swift_name("LinkCopyPasswordButtonPressed")))
@protocol MEGAAOSLinkCopyPasswordButtonPressed
@required
@end

__attribute__((swift_name("LinkCopyrightAgreeButtonPressed")))
@protocol MEGAAOSLinkCopyrightAgreeButtonPressed
@required
@end

__attribute__((swift_name("LinkCopyrightCancelButtonPressed")))
@protocol MEGAAOSLinkCopyrightCancelButtonPressed
@required
@end

__attribute__((swift_name("LinkCopyrightWarningDialog")))
@protocol MEGAAOSLinkCopyrightWarningDialog
@required
@end

__attribute__((swift_name("LinkDiscardChangesCancelButtonPressed")))
@protocol MEGAAOSLinkDiscardChangesCancelButtonPressed
@required
@end

__attribute__((swift_name("LinkDiscardChangesDialog")))
@protocol MEGAAOSLinkDiscardChangesDialog
@required
@end

__attribute__((swift_name("LinkDiscardChangesDiscardButtonPressed")))
@protocol MEGAAOSLinkDiscardChangesDiscardButtonPressed
@required
@end

__attribute__((swift_name("LinkEncryptFileButtonPressed")))
@protocol MEGAAOSLinkEncryptFileButtonPressed
@required
@end

__attribute__((swift_name("LinkEncryptFolderButtonPressed")))
@protocol MEGAAOSLinkEncryptFolderButtonPressed
@required
@end

__attribute__((swift_name("LinkGetLinkForNodesMenuItem")))
@protocol MEGAAOSLinkGetLinkForNodesMenuItem
@required
@end

__attribute__((swift_name("LinkGetLinkForNodesMenuToolbar")))
@protocol MEGAAOSLinkGetLinkForNodesMenuToolbar
@required
@end

__attribute__((swift_name("LinkHiddenItemsCancelButtonPressed")))
@protocol MEGAAOSLinkHiddenItemsCancelButtonPressed
@required
@end

__attribute__((swift_name("LinkHiddenItemsContinueButtonPressed")))
@protocol MEGAAOSLinkHiddenItemsContinueButtonPressed
@required
@end

__attribute__((swift_name("LinkHiddenItemsWarningDialog")))
@protocol MEGAAOSLinkHiddenItemsWarningDialog
@required
@end

__attribute__((swift_name("LinkManageLinkTapFileMenuItem")))
@protocol MEGAAOSLinkManageLinkTapFileMenuItem
@required
@end

__attribute__((swift_name("LinkManageLinkTapFileMenuToolbar")))
@protocol MEGAAOSLinkManageLinkTapFileMenuToolbar
@required
@end

__attribute__((swift_name("LinkManageLinkTapFolderMenuItem")))
@protocol MEGAAOSLinkManageLinkTapFolderMenuItem
@required
@end

__attribute__((swift_name("LinkManageLinkTapFolderMenuToolbar")))
@protocol MEGAAOSLinkManageLinkTapFolderMenuToolbar
@required
@end

__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFileButtonPressed")))
@protocol MEGAAOSLinkProFeatureSeeNotNowPlanFileButtonPressed
@required
@end

__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFolderButtonPressed")))
@protocol MEGAAOSLinkProFeatureSeeNotNowPlanFolderButtonPressed
@required
@end

__attribute__((swift_name("LinkProFeatureSeePlanFileButtonPressed")))
@protocol MEGAAOSLinkProFeatureSeePlanFileButtonPressed
@required
@end

__attribute__((swift_name("LinkProFeatureSeePlanFolderButtonPressed")))
@protocol MEGAAOSLinkProFeatureSeePlanFolderButtonPressed
@required
@end

__attribute__((swift_name("LinkRemovePasswordFileButtonPressed")))
@protocol MEGAAOSLinkRemovePasswordFileButtonPressed
@required
@end

__attribute__((swift_name("LinkRemovePasswordFolderButtonPressed")))
@protocol MEGAAOSLinkRemovePasswordFolderButtonPressed
@required
@end

__attribute__((swift_name("LinkResetPasswordFileButtonPressed")))
@protocol MEGAAOSLinkResetPasswordFileButtonPressed
@required
@end

__attribute__((swift_name("LinkResetPasswordFolderButtonPressed")))
@protocol MEGAAOSLinkResetPasswordFolderButtonPressed
@required
@end

__attribute__((swift_name("LinkSendDecryptionKeyAlbumButtonDisabled")))
@protocol MEGAAOSLinkSendDecryptionKeyAlbumButtonDisabled
@required
@end

__attribute__((swift_name("LinkSendDecryptionKeyAlbumButtonEnabled")))
@protocol MEGAAOSLinkSendDecryptionKeyAlbumButtonEnabled
@required
@end

__attribute__((swift_name("LinkSendDecryptionKeyFileButtonDisabled")))
@protocol MEGAAOSLinkSendDecryptionKeyFileButtonDisabled
@required
@end

__attribute__((swift_name("LinkSendDecryptionKeyFileButtonEnabled")))
@protocol MEGAAOSLinkSendDecryptionKeyFileButtonEnabled
@required
@end

__attribute__((swift_name("LinkSendDecryptionKeyFileButtonPressed")))
@protocol MEGAAOSLinkSendDecryptionKeyFileButtonPressed
@required
@end

__attribute__((swift_name("LinkSendDecryptionKeyFolderButtonDisabled")))
@protocol MEGAAOSLinkSendDecryptionKeyFolderButtonDisabled
@required
@end

__attribute__((swift_name("LinkSendDecryptionKeyFolderButtonEnabled")))
@protocol MEGAAOSLinkSendDecryptionKeyFolderButtonEnabled
@required
@end

__attribute__((swift_name("LinkSendDecryptionKeyFolderButtonPressed")))
@protocol MEGAAOSLinkSendDecryptionKeyFolderButtonPressed
@required
@end

__attribute__((swift_name("LinkSeparateKeyLearnMoreButtonPressed")))
@protocol MEGAAOSLinkSeparateKeyLearnMoreButtonPressed
@required
@end

__attribute__((swift_name("LinkSetExpiryDateFileButtonPressed")))
@protocol MEGAAOSLinkSetExpiryDateFileButtonPressed
@required
@end

__attribute__((swift_name("LinkSetExpiryDateFileButtonPressedDisabled")))
@protocol MEGAAOSLinkSetExpiryDateFileButtonPressedDisabled
@required
@end

__attribute__((swift_name("LinkSetExpiryDateFileButtonPressedEnabled")))
@protocol MEGAAOSLinkSetExpiryDateFileButtonPressedEnabled
@required
@end

__attribute__((swift_name("LinkSetExpiryDateFolderButtonPressed")))
@protocol MEGAAOSLinkSetExpiryDateFolderButtonPressed
@required
@end

__attribute__((swift_name("LinkSetExpiryDateFolderButtonPressedDisabled")))
@protocol MEGAAOSLinkSetExpiryDateFolderButtonPressedDisabled
@required
@end

__attribute__((swift_name("LinkSetExpiryDateFolderButtonPressedEnabled")))
@protocol MEGAAOSLinkSetExpiryDateFolderButtonPressedEnabled
@required
@end

__attribute__((swift_name("LinkSetPasswordFileButtonPressed")))
@protocol MEGAAOSLinkSetPasswordFileButtonPressed
@required
@end

__attribute__((swift_name("LinkSetPasswordFolderButtonPressed")))
@protocol MEGAAOSLinkSetPasswordFolderButtonPressed
@required
@end

__attribute__((swift_name("LinkSettingsSaveButtonPressed")))
@protocol MEGAAOSLinkSettingsSaveButtonPressed
@required
@end

__attribute__((swift_name("LinkSettingsSaveFailed")))
@protocol MEGAAOSLinkSettingsSaveFailed
@required
@end

__attribute__((swift_name("LinkSettingsScreen")))
@protocol MEGAAOSLinkSettingsScreen
@required
@end

__attribute__((swift_name("LinkShareButtonPressed")))
@protocol MEGAAOSLinkShareButtonPressed
@required
@end

__attribute__((swift_name("LinkShareLinkForNodesMenuItem")))
@protocol MEGAAOSLinkShareLinkForNodesMenuItem
@required
@end

__attribute__((swift_name("LinkShareLinkForNodesMenuToolbar")))
@protocol MEGAAOSLinkShareLinkForNodesMenuToolbar
@required
@end

__attribute__((swift_name("LinkShareLinkTapFileMenuItem")))
@protocol MEGAAOSLinkShareLinkTapFileMenuItem
@required
@end

__attribute__((swift_name("LinkShareLinkTapFileMenuToolbar")))
@protocol MEGAAOSLinkShareLinkTapFileMenuToolbar
@required
@end

__attribute__((swift_name("LinkShareLinkTapFolderMenuItem")))
@protocol MEGAAOSLinkShareLinkTapFolderMenuItem
@required
@end

__attribute__((swift_name("LinkShareLinkTapFolderMenuToolbar")))
@protocol MEGAAOSLinkShareLinkTapFolderMenuToolbar
@required
@end

__attribute__((swift_name("LinkSharesTab")))
@protocol MEGAAOSLinkSharesTab
@required
@end

__attribute__((swift_name("LinkUpgradeToProFeatureFileDialog")))
@protocol MEGAAOSLinkUpgradeToProFeatureFileDialog
@required
@end

__attribute__((swift_name("LinkUpgradeToProFeatureFolderDialog")))
@protocol MEGAAOSLinkUpgradeToProFeatureFolderDialog
@required
@end

__attribute__((swift_name("LivePhotoVideoUploadsDisabled")))
@protocol MEGAAOSLivePhotoVideoUploadsDisabled
@required
@end

__attribute__((swift_name("LivePhotoVideoUploadsEnabled")))
@protocol MEGAAOSLivePhotoVideoUploadsEnabled
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationFilterAllLocationsClicked")))
@interface MEGAAOSLocationFilterAllLocationsClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("LocationFilterButtonPressed")))
@protocol MEGAAOSLocationFilterButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationFilterCameraUploadClicked")))
@interface MEGAAOSLocationFilterCameraUploadClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationFilterCloudDriveClicked")))
@interface MEGAAOSLocationFilterCloudDriveClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationFilterSharedItemClicked")))
@interface MEGAAOSLocationFilterSharedItemClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("LockButtonPressed")))
@protocol MEGAAOSLockButtonPressed
@required
@end

__attribute__((swift_name("LoginButtonOnUSPPagePressed")))
@protocol MEGAAOSLoginButtonOnUSPPagePressed
@required
@end

__attribute__((swift_name("LoginButtonPressed")))
@protocol MEGAAOSLoginButtonPressed
@required
@end

__attribute__((swift_name("LoginHelpButtonPressed")))
@protocol MEGAAOSLoginHelpButtonPressed
@required
@end

__attribute__((swift_name("LoginScreen")))
@protocol MEGAAOSLoginScreen
@required
@end

__attribute__((swift_name("LogoutButtonPressed")))
@protocol MEGAAOSLogoutButtonPressed
@required
@end

__attribute__((swift_name("LoopButtonPressed")))
@protocol MEGAAOSLoopButtonPressed
@required
@end

__attribute__((swift_name("MagnifierMenuItem")))
@protocol MEGAAOSMagnifierMenuItem
@required
@end

__attribute__((swift_name("MainTabBarScreen")))
@protocol MEGAAOSMainTabBarScreen
@required
@end

__attribute__((swift_name("MaxCallDurationReachedModal")))
@protocol MEGAAOSMaxCallDurationReachedModal
@required
@end

__attribute__((swift_name("MaybeLaterUpgradeAccountButtonPressed")))
@protocol MEGAAOSMaybeLaterUpgradeAccountButtonPressed
@required
@end

__attribute__((swift_name("MediaScreen")))
@protocol MEGAAOSMediaScreen
@required
@end

__attribute__((swift_name("MediaScreenAddToAlbumButtonPressed")))
@protocol MEGAAOSMediaScreenAddToAlbumButtonPressed
@required
@end

__attribute__((swift_name("MediaScreenAlbumAddItemsButtonPressed")))
@protocol MEGAAOSMediaScreenAlbumAddItemsButtonPressed
@required
@end

__attribute__((swift_name("MediaScreenAlbumsTab")))
@protocol MEGAAOSMediaScreenAlbumsTab
@required
@end

__attribute__((swift_name("MediaScreenAllFilterSelected")))
@protocol MEGAAOSMediaScreenAllFilterSelected
@required
@end

__attribute__((swift_name("MediaScreenCopyButtonPressed")))
@protocol MEGAAOSMediaScreenCopyButtonPressed
@required
@end

__attribute__((swift_name("MediaScreenCreateVideoPlaylistDialogConfirmed")))
@protocol MEGAAOSMediaScreenCreateVideoPlaylistDialogConfirmed
@required
@end

__attribute__((swift_name("MediaScreenCreateVideoPlaylistDialogDismissed")))
@protocol MEGAAOSMediaScreenCreateVideoPlaylistDialogDismissed
@required
@end

__attribute__((swift_name("MediaScreenDateHeaderSelectAllPressed")))
@protocol MEGAAOSMediaScreenDateHeaderSelectAllPressed
@required
@end

__attribute__((swift_name("MediaScreenDaysFilterSelected")))
@protocol MEGAAOSMediaScreenDaysFilterSelected
@required
@end

__attribute__((swift_name("MediaScreenDownloadButtonPressed")))
@protocol MEGAAOSMediaScreenDownloadButtonPressed
@required
@end

__attribute__((swift_name("MediaScreenDragToSelectStarted")))
@protocol MEGAAOSMediaScreenDragToSelectStarted
@required
@end

__attribute__((swift_name("MediaScreenFilterAllLocationsSelected")))
@protocol MEGAAOSMediaScreenFilterAllLocationsSelected
@required
@end

__attribute__((swift_name("MediaScreenFilterAllMediaSelected")))
@protocol MEGAAOSMediaScreenFilterAllMediaSelected
@required
@end

__attribute__((swift_name("MediaScreenFilterCameraUploadsSelected")))
@protocol MEGAAOSMediaScreenFilterCameraUploadsSelected
@required
@end

__attribute__((swift_name("MediaScreenFilterCloudDriveSelected")))
@protocol MEGAAOSMediaScreenFilterCloudDriveSelected
@required
@end

__attribute__((swift_name("MediaScreenFilterImagesSelected")))
@protocol MEGAAOSMediaScreenFilterImagesSelected
@required
@end

__attribute__((swift_name("MediaScreenFilterMenuToolbar")))
@protocol MEGAAOSMediaScreenFilterMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaScreenFilterSettingsRememberPreferences")))
@interface MEGAAOSMediaScreenFilterSettingsRememberPreferences : MEGAAOSBase
- (instancetype)initWithEnabled:(BOOL)enabled __attribute__((swift_name("init(enabled:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@end

__attribute__((swift_name("MediaScreenFilterVideosSelected")))
@protocol MEGAAOSMediaScreenFilterVideosSelected
@required
@end

__attribute__((swift_name("MediaScreenGridSizeCompactSelected")))
@protocol MEGAAOSMediaScreenGridSizeCompactSelected
@required
@end

__attribute__((swift_name("MediaScreenGridSizeDefaultSelected")))
@protocol MEGAAOSMediaScreenGridSizeDefaultSelected
@required
@end

__attribute__((swift_name("MediaScreenGridSizeLargeSelected")))
@protocol MEGAAOSMediaScreenGridSizeLargeSelected
@required
@end

__attribute__((swift_name("MediaScreenHideButtonPressed")))
@protocol MEGAAOSMediaScreenHideButtonPressed
@required
@end

__attribute__((swift_name("MediaScreenLinkButtonPressed")))
@protocol MEGAAOSMediaScreenLinkButtonPressed
@required
@end

__attribute__((swift_name("MediaScreenMonthsFilterSelected")))
@protocol MEGAAOSMediaScreenMonthsFilterSelected
@required
@end

__attribute__((swift_name("MediaScreenMoreButtonPressed")))
@protocol MEGAAOSMediaScreenMoreButtonPressed
@required
@end

__attribute__((swift_name("MediaScreenMoreMenuToolbar")))
@protocol MEGAAOSMediaScreenMoreMenuToolbar
@required
@end

__attribute__((swift_name("MediaScreenMoveButtonPressed")))
@protocol MEGAAOSMediaScreenMoveButtonPressed
@required
@end

__attribute__((swift_name("MediaScreenPlaylistsTab")))
@protocol MEGAAOSMediaScreenPlaylistsTab
@required
@end

__attribute__((swift_name("MediaScreenRemoveLinkButtonPressed")))
@protocol MEGAAOSMediaScreenRemoveLinkButtonPressed
@required
@end

__attribute__((swift_name("MediaScreenRespondButtonPressed")))
@protocol MEGAAOSMediaScreenRespondButtonPressed
@required
@end

__attribute__((swift_name("MediaScreenSearchMenuToolbar")))
@protocol MEGAAOSMediaScreenSearchMenuToolbar
@required
@end

__attribute__((swift_name("MediaScreenSettingsMenuToolbar")))
@protocol MEGAAOSMediaScreenSettingsMenuToolbar
@required
@end

__attribute__((swift_name("MediaScreenShareButtonPressed")))
@protocol MEGAAOSMediaScreenShareButtonPressed
@required
@end

__attribute__((swift_name("MediaScreenSortByMenuToolbar")))
@protocol MEGAAOSMediaScreenSortByMenuToolbar
@required
@end

__attribute__((swift_name("MediaScreenSortByNewestDateTakenSelected")))
@protocol MEGAAOSMediaScreenSortByNewestDateTakenSelected
@required
@end

__attribute__((swift_name("MediaScreenSortByNewestSelected")))
@protocol MEGAAOSMediaScreenSortByNewestSelected
@required
@end

__attribute__((swift_name("MediaScreenSortByOldestDateTakenSelected")))
@protocol MEGAAOSMediaScreenSortByOldestDateTakenSelected
@required
@end

__attribute__((swift_name("MediaScreenSortByOldestSelected")))
@protocol MEGAAOSMediaScreenSortByOldestSelected
@required
@end

__attribute__((swift_name("MediaScreenTimelineTab")))
@protocol MEGAAOSMediaScreenTimelineTab
@required
@end

__attribute__((swift_name("MediaScreenTransfersMenuToolbar")))
@protocol MEGAAOSMediaScreenTransfersMenuToolbar
@required
@end

__attribute__((swift_name("MediaScreenTrashButtonPressed")))
@protocol MEGAAOSMediaScreenTrashButtonPressed
@required
@end

__attribute__((swift_name("MediaScreenVideoPlayedFromPlaylist")))
@protocol MEGAAOSMediaScreenVideoPlayedFromPlaylist
@required
@end

__attribute__((swift_name("MediaScreenVideoPlaylistDeleted")))
@protocol MEGAAOSMediaScreenVideoPlaylistDeleted
@required
@end

__attribute__((swift_name("MediaScreenVideoPlaylistRenamed")))
@protocol MEGAAOSMediaScreenVideoPlaylistRenamed
@required
@end

__attribute__((swift_name("MediaScreenVideoPlaylistsBulkDeleted")))
@protocol MEGAAOSMediaScreenVideoPlaylistsBulkDeleted
@required
@end

__attribute__((swift_name("MediaScreenVideosAddedToPlaylist")))
@protocol MEGAAOSMediaScreenVideosAddedToPlaylist
@required
@end

__attribute__((swift_name("MediaScreenVideosRemovedFromPlaylist")))
@protocol MEGAAOSMediaScreenVideosRemovedFromPlaylist
@required
@end

__attribute__((swift_name("MediaScreenVideosTab")))
@protocol MEGAAOSMediaScreenVideosTab
@required
@end

__attribute__((swift_name("MediaScreenYearsFilterSelected")))
@protocol MEGAAOSMediaScreenYearsFilterSelected
@required
@end

__attribute__((swift_name("MediaSettingsItemSelected")))
@protocol MEGAAOSMediaSettingsItemSelected
@required
@end

__attribute__((swift_name("MediaUploadsDisabled")))
@protocol MEGAAOSMediaUploadsDisabled
@required
@end

__attribute__((swift_name("MediaUploadsEnabled")))
@protocol MEGAAOSMediaUploadsEnabled
@required
@end

__attribute__((swift_name("MediaUploadsLocalFolderSelected")))
@protocol MEGAAOSMediaUploadsLocalFolderSelected
@required
@end

__attribute__((swift_name("MediaUploadsTargetFolderSelected")))
@protocol MEGAAOSMediaUploadsTargetFolderSelected
@required
@end

__attribute__((swift_name("MeetingInfoAddParticipantButtonTapped")))
@protocol MEGAAOSMeetingInfoAddParticipantButtonTapped
@required
@end

__attribute__((swift_name("MeetingInfoLeaveMeetingButtonTapped")))
@protocol MEGAAOSMeetingInfoLeaveMeetingButtonTapped
@required
@end

__attribute__((swift_name("MeetingsAddMenu")))
@protocol MEGAAOSMeetingsAddMenu
@required
@end

__attribute__((swift_name("MeetingsTab")))
@protocol MEGAAOSMeetingsTab
@required
@end

__attribute__((swift_name("MegaUploadFolderUpdated")))
@protocol MEGAAOSMegaUploadFolderUpdated
@required
@end

__attribute__((swift_name("MenuBottomNavigationItem")))
@protocol MEGAAOSMenuBottomNavigationItem
@required
@end

__attribute__((swift_name("MenuSubscriptionOfferBannerDismissButtonPressed")))
@protocol MEGAAOSMenuSubscriptionOfferBannerDismissButtonPressed
@required
@end

__attribute__((swift_name("MenuSubscriptionOfferBannerDisplayed")))
@protocol MEGAAOSMenuSubscriptionOfferBannerDisplayed
@required
@end

__attribute__((swift_name("MenuSubscriptionOfferBannerPressed")))
@protocol MEGAAOSMenuSubscriptionOfferBannerPressed
@required
@end

__attribute__((swift_name("MonthlyPlanFreeTrialFailed")))
@protocol MEGAAOSMonthlyPlanFreeTrialFailed
@required
@end

__attribute__((swift_name("MonthlyPlanFreeTrialSuccessful")))
@protocol MEGAAOSMonthlyPlanFreeTrialSuccessful
@required
@end

__attribute__((swift_name("MonthlyPlanPurchaseFailed")))
@protocol MEGAAOSMonthlyPlanPurchaseFailed
@required
@end

__attribute__((swift_name("MonthlyPlanPurchaseSuccessful")))
@protocol MEGAAOSMonthlyPlanPurchaseSuccessful
@required
@end

__attribute__((swift_name("MultiFactorAuthScreen")))
@protocol MEGAAOSMultiFactorAuthScreen
@required
@end

__attribute__((swift_name("MultiFactorAuthVerificationFailed")))
@protocol MEGAAOSMultiFactorAuthVerificationFailed
@required
@end

__attribute__((swift_name("MultiFactorAuthVerificationSuccess")))
@protocol MEGAAOSMultiFactorAuthVerificationSuccess
@required
@end

__attribute__((swift_name("MultipleAlbumLinksScreen")))
@protocol MEGAAOSMultipleAlbumLinksScreen
@required
@end

__attribute__((swift_name("MyAccountAchievementsSectionTapped")))
@protocol MEGAAOSMyAccountAchievementsSectionTapped
@required
@end

__attribute__((swift_name("MyAccountBackupRecoverySectionTapped")))
@protocol MEGAAOSMyAccountBackupRecoverySectionTapped
@required
@end

__attribute__((swift_name("MyAccountContactsSectionTapped")))
@protocol MEGAAOSMyAccountContactsSectionTapped
@required
@end

__attribute__((swift_name("MyAccountHallScreen")))
@protocol MEGAAOSMyAccountHallScreen
@required
@end

__attribute__((swift_name("MyAccountHomeWidgetButtonPressed")))
@protocol MEGAAOSMyAccountHomeWidgetButtonPressed
@required
@end

__attribute__((swift_name("MyAccountProfileNavigationItem")))
@protocol MEGAAOSMyAccountProfileNavigationItem
@required
@end

__attribute__((swift_name("MyAccountSettingsItemSelected")))
@protocol MEGAAOSMyAccountSettingsItemSelected
@required
@end

__attribute__((swift_name("MyAccountStorageTransferSectionTapped")))
@protocol MEGAAOSMyAccountStorageTransferSectionTapped
@required
@end

__attribute__((swift_name("MyMenuAchievementsNavigationItem")))
@protocol MEGAAOSMyMenuAchievementsNavigationItem
@required
@end

__attribute__((swift_name("MyMenuChatNavigationItem")))
@protocol MEGAAOSMyMenuChatNavigationItem
@required
@end

__attribute__((swift_name("MyMenuCloudDriveNavigationItem")))
@protocol MEGAAOSMyMenuCloudDriveNavigationItem
@required
@end

__attribute__((swift_name("MyMenuContactsNavigationItem")))
@protocol MEGAAOSMyMenuContactsNavigationItem
@required
@end

__attribute__((swift_name("MyMenuDeviceCentreNavigationItem")))
@protocol MEGAAOSMyMenuDeviceCentreNavigationItem
@required
@end

__attribute__((swift_name("MyMenuFavouritesNavigationItem")))
@protocol MEGAAOSMyMenuFavouritesNavigationItem
@required
@end

__attribute__((swift_name("MyMenuHomeNavigationItem")))
@protocol MEGAAOSMyMenuHomeNavigationItem
@required
@end

__attribute__((swift_name("MyMenuMEGAPassNavigationItem")))
@protocol MEGAAOSMyMenuMEGAPassNavigationItem
@required
@end

__attribute__((swift_name("MyMenuMEGAVPNNavigationItem")))
@protocol MEGAAOSMyMenuMEGAVPNNavigationItem
@required
@end

__attribute__((swift_name("MyMenuMediaNavigationItem")))
@protocol MEGAAOSMyMenuMediaNavigationItem
@required
@end

__attribute__((swift_name("MyMenuOfflineFilesNavigationItem")))
@protocol MEGAAOSMyMenuOfflineFilesNavigationItem
@required
@end

__attribute__((swift_name("MyMenuRubbishBinNavigationItem")))
@protocol MEGAAOSMyMenuRubbishBinNavigationItem
@required
@end

__attribute__((swift_name("MyMenuScreen")))
@protocol MEGAAOSMyMenuScreen
@required
@end

__attribute__((swift_name("MyMenuSettingsNavigationItem")))
@protocol MEGAAOSMyMenuSettingsNavigationItem
@required
@end

__attribute__((swift_name("MyMenuSharedItemsNavigationItem")))
@protocol MEGAAOSMyMenuSharedItemsNavigationItem
@required
@end

__attribute__((swift_name("MyMenuStorageNavigationItem")))
@protocol MEGAAOSMyMenuStorageNavigationItem
@required
@end

__attribute__((swift_name("MyMenuTransferITNavigationItem")))
@protocol MEGAAOSMyMenuTransferITNavigationItem
@required
@end

__attribute__((swift_name("MyMenuTransfersNavigationItem")))
@protocol MEGAAOSMyMenuTransfersNavigationItem
@required
@end

__attribute__((swift_name("MyMenuUpgradeNavigationItem")))
@protocol MEGAAOSMyMenuUpgradeNavigationItem
@required
@end

__attribute__((swift_name("NetworkErrorLearnMoreButtonPressed")))
@protocol MEGAAOSNetworkErrorLearnMoreButtonPressed
@required
@end

__attribute__((swift_name("NetworkTestScreen")))
@protocol MEGAAOSNetworkTestScreen
@required
@end

__attribute__((swift_name("NeverClearCopiedDataMenuItem")))
@protocol MEGAAOSNeverClearCopiedDataMenuItem
@required
@end

__attribute__((swift_name("NewChatScreen")))
@protocol MEGAAOSNewChatScreen
@required
@end

__attribute__((swift_name("NodeInfoDescriptionAddedMessageDisplayed")))
@protocol MEGAAOSNodeInfoDescriptionAddedMessageDisplayed
@required
@end

__attribute__((swift_name("NodeInfoDescriptionCharacterLimit")))
@protocol MEGAAOSNodeInfoDescriptionCharacterLimit
@required
@end

__attribute__((swift_name("NodeInfoDescriptionConfirmed")))
@protocol MEGAAOSNodeInfoDescriptionConfirmed
@required
@end

__attribute__((swift_name("NodeInfoDescriptionEntered")))
@protocol MEGAAOSNodeInfoDescriptionEntered
@required
@end

__attribute__((swift_name("NodeInfoDescriptionRemovedMessageDisplayed")))
@protocol MEGAAOSNodeInfoDescriptionRemovedMessageDisplayed
@required
@end

__attribute__((swift_name("NodeInfoDescriptionUpdatedMessageDisplayed")))
@protocol MEGAAOSNodeInfoDescriptionUpdatedMessageDisplayed
@required
@end

__attribute__((swift_name("NodeInfoScreen")))
@protocol MEGAAOSNodeInfoScreen
@required
@end

__attribute__((swift_name("NodeInfoTagsAdded")))
@protocol MEGAAOSNodeInfoTagsAdded
@required
@end

__attribute__((swift_name("NodeInfoTagsEntered")))
@protocol MEGAAOSNodeInfoTagsEntered
@required
@end

__attribute__((swift_name("NodeInfoTagsLengthErrorDisplayed")))
@protocol MEGAAOSNodeInfoTagsLengthErrorDisplayed
@required
@end

__attribute__((swift_name("NodeInfoTagsLimitErrorDisplayed")))
@protocol MEGAAOSNodeInfoTagsLimitErrorDisplayed
@required
@end

__attribute__((swift_name("NodeInfoTagsProOnlyEntered")))
@protocol MEGAAOSNodeInfoTagsProOnlyEntered
@required
@end

__attribute__((swift_name("NodeInfoTagsRemoved")))
@protocol MEGAAOSNodeInfoTagsRemoved
@required
@end

__attribute__((swift_name("NotificationCentreItemTapped")))
@protocol MEGAAOSNotificationCentreItemTapped
@required
@end

__attribute__((swift_name("NotificationCentreScreen")))
@protocol MEGAAOSNotificationCentreScreen
@required
@end

__attribute__((swift_name("NotificationsCTAScreen")))
@protocol MEGAAOSNotificationsCTAScreen
@required
@end

__attribute__((swift_name("NotificationsEntryButtonPressed")))
@protocol MEGAAOSNotificationsEntryButtonPressed
@required
@end

__attribute__((swift_name("OffOptionForHideSubtitlePressed")))
@protocol MEGAAOSOffOptionForHideSubtitlePressed
@required
@end

__attribute__((swift_name("OfflineChipButtonPressed")))
@protocol MEGAAOSOfflineChipButtonPressed
@required
@end

__attribute__((swift_name("OfflineFilesBottomNavigationItem")))
@protocol MEGAAOSOfflineFilesBottomNavigationItem
@required
@end

__attribute__((swift_name("OfflineScreen")))
@protocol MEGAAOSOfflineScreen
@required
@end

__attribute__((swift_name("OfflineTab")))
@protocol MEGAAOSOfflineTab
@required
@end

__attribute__((swift_name("OnboardingInitialPageNotNowButtonPressed")))
@protocol MEGAAOSOnboardingInitialPageNotNowButtonPressed
@required
@end

__attribute__((swift_name("OnboardingInitialPageSetUpMegaButtonPressed")))
@protocol MEGAAOSOnboardingInitialPageSetUpMegaButtonPressed
@required
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantAViewProPlansButton")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantAViewProPlansButton
@required
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantBBuyProPlanButton")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantBBuyProPlanButton
@required
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantBFreePlanContinueButtonPressed")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantBFreePlanContinueButtonPressed
@required
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantBProIIIPlanContinueButtonPressed")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantBProIIIPlanContinueButtonPressed
@required
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantBProIIPlanContinueButtonPressed")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantBProIIPlanContinueButtonPressed
@required
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantBProIPlanContinueButtonPressed")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantBProIPlanContinueButtonPressed
@required
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantBProLitePlanContinueButtonPressed")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantBProLitePlanContinueButtonPressed
@required
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantBProPlanIIIDisplayed")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantBProPlanIIIDisplayed
@required
@end

__attribute__((swift_name("OpenLinkMenuItem")))
@protocol MEGAAOSOpenLinkMenuItem
@required
@end

__attribute__((swift_name("OpenLinkUrlFailure")))
@protocol MEGAAOSOpenLinkUrlFailure
@required
@end

__attribute__((swift_name("OpenLinkUrlSubmitted")))
@protocol MEGAAOSOpenLinkUrlSubmitted
@required
@end

__attribute__((swift_name("OpenLinkUrlSuccess")))
@protocol MEGAAOSOpenLinkUrlSuccess
@required
@end

__attribute__((swift_name("OpenNoteToSelfButtonPressed")))
@protocol MEGAAOSOpenNoteToSelfButtonPressed
@required
@end

__attribute__((swift_name("OutgoingSharesTab")))
@protocol MEGAAOSOutgoingSharesTab
@required
@end

__attribute__((swift_name("PaidUserBuyProI")))
@protocol MEGAAOSPaidUserBuyProI
@required
@end

__attribute__((swift_name("PaidUserBuyProII")))
@protocol MEGAAOSPaidUserBuyProII
@required
@end

__attribute__((swift_name("PaidUserBuyProIII")))
@protocol MEGAAOSPaidUserBuyProIII
@required
@end

__attribute__((swift_name("PaidUserBuyProLite")))
@protocol MEGAAOSPaidUserBuyProLite
@required
@end

__attribute__((swift_name("PaidUserEligibleForOffers")))
@protocol MEGAAOSPaidUserEligibleForOffers
@required
@end

__attribute__((swift_name("PaidUserOfferTimedOut")))
@protocol MEGAAOSPaidUserOfferTimedOut
@required
@end

__attribute__((swift_name("PaidUserUpgradeAccountPlanMonthlyPeriodTogglePressed")))
@protocol MEGAAOSPaidUserUpgradeAccountPlanMonthlyPeriodTogglePressed
@required
@end

__attribute__((swift_name("PaidUserUpgradeAccountPlanScreen")))
@protocol MEGAAOSPaidUserUpgradeAccountPlanScreen
@required
@end

__attribute__((swift_name("PaidUserUpgradeAccountPlanYearlyPeriodTogglePressed")))
@protocol MEGAAOSPaidUserUpgradeAccountPlanYearlyPeriodTogglePressed
@required
@end

__attribute__((swift_name("ParticipantListInviteParticipantRowPressed")))
@protocol MEGAAOSParticipantListInviteParticipantRowPressed
@required
@end

__attribute__((swift_name("ParticipantListShareMeetingLinkPressed")))
@protocol MEGAAOSParticipantListShareMeetingLinkPressed
@required
@end

__attribute__((swift_name("PasscodeBiometricUnlockDialog")))
@protocol MEGAAOSPasscodeBiometricUnlockDialog
@required
@end

__attribute__((swift_name("PasscodeEntered")))
@protocol MEGAAOSPasscodeEntered
@required
@end

__attribute__((swift_name("PasscodeLogoutButtonPressed")))
@protocol MEGAAOSPasscodeLogoutButtonPressed
@required
@end

__attribute__((swift_name("PasscodeScreen")))
@protocol MEGAAOSPasscodeScreen
@required
@end

__attribute__((swift_name("PasscodeSettingScreen")))
@protocol MEGAAOSPasscodeSettingScreen
@required
@end

__attribute__((swift_name("PasscodeUnlockDialog")))
@protocol MEGAAOSPasscodeUnlockDialog
@required
@end

__attribute__((swift_name("PasswordItemDetailsScreen")))
@protocol MEGAAOSPasswordItemDetailsScreen
@required
@end

__attribute__((swift_name("PasswordItemsSearch")))
@protocol MEGAAOSPasswordItemsSearch
@required
@end

__attribute__((swift_name("PasswordReminderCloseButtonPressed")))
@protocol MEGAAOSPasswordReminderCloseButtonPressed
@required
@end

__attribute__((swift_name("PasswordReminderExportRecoveryKeyButtonPressed")))
@protocol MEGAAOSPasswordReminderExportRecoveryKeyButtonPressed
@required
@end

__attribute__((swift_name("PasswordReminderExportRecoveryKeyOkButtonPressed")))
@protocol MEGAAOSPasswordReminderExportRecoveryKeyOkButtonPressed
@required
@end

__attribute__((swift_name("PasswordReminderProceedToLogoutButtonPressed")))
@protocol MEGAAOSPasswordReminderProceedToLogoutButtonPressed
@required
@end

__attribute__((swift_name("PasswordReminderScreen")))
@protocol MEGAAOSPasswordReminderScreen
@required
@end

__attribute__((swift_name("PasswordReminderTestPasswordButtonPressed")))
@protocol MEGAAOSPasswordReminderTestPasswordButtonPressed
@required
@end

__attribute__((swift_name("PauseVpnButtonPressed")))
@protocol MEGAAOSPauseVpnButtonPressed
@required
@end

__attribute__((swift_name("PauseVpnDurationLargeOptionSelected")))
@protocol MEGAAOSPauseVpnDurationLargeOptionSelected
@required
@end

__attribute__((swift_name("PauseVpnDurationMediumOptionSelected")))
@protocol MEGAAOSPauseVpnDurationMediumOptionSelected
@required
@end

__attribute__((swift_name("PauseVpnDurationSmallOptionSelected")))
@protocol MEGAAOSPauseVpnDurationSmallOptionSelected
@required
@end

__attribute__((swift_name("PdfViewerScreen")))
@protocol MEGAAOSPdfViewerScreen
@required
@end

__attribute__((swift_name("PdfViewerSearchMenuToolbar")))
@protocol MEGAAOSPdfViewerSearchMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PdfViewerSearchPerformed")))
@interface MEGAAOSPdfViewerSearchPerformed : MEGAAOSBase
- (instancetype)initWithResultCount:(int32_t)resultCount __attribute__((swift_name("init(resultCount:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t resultCount __attribute__((swift_name("resultCount")));
@end

__attribute__((swift_name("PhotoEditorMenuItem")))
@protocol MEGAAOSPhotoEditorMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoItemSelected")))
@interface MEGAAOSPhotoItemSelected : MEGAAOSBase
- (instancetype)initWithSelectionType:(MEGAAOSPhotoItemSelectedSelectionType *)selectionType __attribute__((swift_name("init(selectionType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSPhotoItemSelectedSelectionType *selectionType __attribute__((swift_name("selectionType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoItemSelected.SelectionType")))
@interface MEGAAOSPhotoItemSelectedSelectionType : MEGAAOSKotlinEnum<MEGAAOSPhotoItemSelectedSelectionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSPhotoItemSelectedSelectionType *single __attribute__((swift_name("single")));
@property (class, readonly) MEGAAOSPhotoItemSelectedSelectionType *multiadd __attribute__((swift_name("multiadd")));
@property (class, readonly) MEGAAOSPhotoItemSelectedSelectionType *multiremove __attribute__((swift_name("multiremove")));
+ (MEGAAOSKotlinArray<MEGAAOSPhotoItemSelectedSelectionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSPhotoItemSelectedSelectionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("PhotoPreviewMakeAvailableOfflineBGContinuedProcessingTaskMenuItem")))
@protocol MEGAAOSPhotoPreviewMakeAvailableOfflineBGContinuedProcessingTaskMenuItem
@required
@end

__attribute__((swift_name("PhotoPreviewSaveToDeviceMenuToolbar")))
@protocol MEGAAOSPhotoPreviewSaveToDeviceMenuToolbar
@required
@end

__attribute__((swift_name("PhotoPreviewScreen")))
@protocol MEGAAOSPhotoPreviewScreen
@required
@end

__attribute__((swift_name("PhotoScreen")))
@protocol MEGAAOSPhotoScreen
@required
@end

__attribute__((swift_name("PhotosBottomNavigationItem")))
@protocol MEGAAOSPhotosBottomNavigationItem
@required
@end

__attribute__((swift_name("PhotosLocationTagsDisabled")))
@protocol MEGAAOSPhotosLocationTagsDisabled
@required
@end

__attribute__((swift_name("PhotosLocationTagsEnabled")))
@protocol MEGAAOSPhotosLocationTagsEnabled
@required
@end


/**
 * A plain text (.txt) file was created from the new text file dialog, with the "Rich text
 * formatting" checkbox left off. Paired with [RichTextFileCreated]: the two together are every
 * creation where the checkbox was on offer, so their split is the rich text opt-in rate.
 *
 * Not sent by the new link (.url) dialog, which shares the same screen but never offers the
 * checkbox.
 */
__attribute__((swift_name("PlainTextFileCreated")))
@protocol MEGAAOSPlainTextFileCreated
@required
@end

__attribute__((swift_name("PlaySlideshowMenuToolbar")))
@protocol MEGAAOSPlaySlideshowMenuToolbar
@required
@end

__attribute__((swift_name("PlaylistCreatedSuccessfully")))
@protocol MEGAAOSPlaylistCreatedSuccessfully
@required
@end

__attribute__((swift_name("PlaylistsTab")))
@protocol MEGAAOSPlaylistsTab
@required
@end

__attribute__((swift_name("PrivacySuiteCollapsed")))
@protocol MEGAAOSPrivacySuiteCollapsed
@required
@end

__attribute__((swift_name("PrivacySuiteExpanded")))
@protocol MEGAAOSPrivacySuiteExpanded
@required
@end

__attribute__((swift_name("ProfileScreen")))
@protocol MEGAAOSProfileScreen
@required
@end

__attribute__((swift_name("PromotionalSheetPrimaryButtonPressed")))
@protocol MEGAAOSPromotionalSheetPrimaryButtonPressed
@required
@end

__attribute__((swift_name("PromotionalSheetScreen")))
@protocol MEGAAOSPromotionalSheetScreen
@required
@end

__attribute__((swift_name("PromotionalSheetSecondaryButtonPressed")))
@protocol MEGAAOSPromotionalSheetSecondaryButtonPressed
@required
@end

__attribute__((swift_name("PwmBannerCloseButtonPressed")))
@protocol MEGAAOSPwmBannerCloseButtonPressed
@required
@end

__attribute__((swift_name("PwmSmartBannerItemSelected")))
@protocol MEGAAOSPwmSmartBannerItemSelected
@required
@end

__attribute__((swift_name("QASettingsItemSelected")))
@protocol MEGAAOSQASettingsItemSelected
@required
@end

__attribute__((swift_name("QuickAccessWidgetFavouritesPressed")))
@protocol MEGAAOSQuickAccessWidgetFavouritesPressed
@required
@end

__attribute__((swift_name("QuickAccessWidgetOffilePressed")))
@protocol MEGAAOSQuickAccessWidgetOffilePressed
@required
@end

__attribute__((swift_name("QuickAccessWidgetRecentsPressed")))
@protocol MEGAAOSQuickAccessWidgetRecentsPressed
@required
@end

__attribute__((swift_name("RecentMixedFilesScreen")))
@protocol MEGAAOSRecentMixedFilesScreen
@required
@end

__attribute__((swift_name("RecentlyWatchedOpenedButtonPressed")))
@protocol MEGAAOSRecentlyWatchedOpenedButtonPressed
@required
@end

__attribute__((swift_name("RecentsBucketScreen")))
@protocol MEGAAOSRecentsBucketScreen
@required
@end

__attribute__((swift_name("RecentsChildNodeMoreButtonPressed")))
@protocol MEGAAOSRecentsChildNodeMoreButtonPressed
@required
@end

__attribute__((swift_name("RecentsEmptyStateUploadButtonPressed")))
@protocol MEGAAOSRecentsEmptyStateUploadButtonPressed
@required
@end

__attribute__((swift_name("RecentsScreen")))
@protocol MEGAAOSRecentsScreen
@required
@end

__attribute__((swift_name("RecentsTab")))
@protocol MEGAAOSRecentsTab
@required
@end

__attribute__((swift_name("RecentsViewAllButtonPressed")))
@protocol MEGAAOSRecentsViewAllButtonPressed
@required
@end

__attribute__((swift_name("RecoveryKeyCopyButtonPressed")))
@protocol MEGAAOSRecoveryKeyCopyButtonPressed
@required
@end

__attribute__((swift_name("RecoveryKeyCopyOkButtonPressed")))
@protocol MEGAAOSRecoveryKeyCopyOkButtonPressed
@required
@end

__attribute__((swift_name("RecoveryKeySaveButtonPressed")))
@protocol MEGAAOSRecoveryKeySaveButtonPressed
@required
@end

__attribute__((swift_name("RecoveryKeySaveOkButtonPressed")))
@protocol MEGAAOSRecoveryKeySaveOkButtonPressed
@required
@end

__attribute__((swift_name("RecoveryKeyScreen")))
@protocol MEGAAOSRecoveryKeyScreen
@required
@end

__attribute__((swift_name("RecoveryKeyWhyDoINeedARecoveryKeyButtonPressed")))
@protocol MEGAAOSRecoveryKeyWhyDoINeedARecoveryKeyButtonPressed
@required
@end

__attribute__((swift_name("RegenerateButtonPressed")))
@protocol MEGAAOSRegenerateButtonPressed
@required
@end

__attribute__((swift_name("RegionSearchBarClicked")))
@protocol MEGAAOSRegionSearchBarClicked
@required
@end

__attribute__((swift_name("RegionSearchResultItemSelected")))
@protocol MEGAAOSRegionSearchResultItemSelected
@required
@end

__attribute__((swift_name("RegionsListScreen")))
@protocol MEGAAOSRegionsListScreen
@required
@end

__attribute__((swift_name("RemoveContactConfirmButtonPressed")))
@protocol MEGAAOSRemoveContactConfirmButtonPressed
@required
@end

__attribute__((swift_name("RemoveContactConfirmationDialog")))
@protocol MEGAAOSRemoveContactConfirmationDialog
@required
@end

__attribute__((swift_name("RemoveContactDismissButtonPressed")))
@protocol MEGAAOSRemoveContactDismissButtonPressed
@required
@end

__attribute__((swift_name("RemoveItemsFromAlbumDialogButton")))
@protocol MEGAAOSRemoveItemsFromAlbumDialogButton
@required
@end

__attribute__((swift_name("RemoveLinksConfirmationDialog")))
@protocol MEGAAOSRemoveLinksConfirmationDialog
@required
@end

__attribute__((swift_name("RemoveTrustedNetworkButtonPressed")))
@protocol MEGAAOSRemoveTrustedNetworkButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestNewCountries")))
@interface MEGAAOSRequestNewCountries : MEGAAOSBase
- (instancetype)initWithCountries:(NSString *)countries __attribute__((swift_name("init(countries:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("RequestNewCountriesScreen")))
@protocol MEGAAOSRequestNewCountriesScreen
@required
@end

__attribute__((swift_name("ResendEmailConfirmationButtonPressed")))
@protocol MEGAAOSResendEmailConfirmationButtonPressed
@required
@end

__attribute__((swift_name("ResumeVpnButtonPressed")))
@protocol MEGAAOSResumeVpnButtonPressed
@required
@end

__attribute__((swift_name("RewardedAdClicked")))
@protocol MEGAAOSRewardedAdClicked
@required
@end

__attribute__((swift_name("RewardedAdDialogCloseButtonPressed")))
@protocol MEGAAOSRewardedAdDialogCloseButtonPressed
@required
@end

__attribute__((swift_name("RewardedAdDialogDisplayed")))
@protocol MEGAAOSRewardedAdDialogDisplayed
@required
@end

__attribute__((swift_name("RewardedAdDialogUpgradeToProButtonPressed")))
@protocol MEGAAOSRewardedAdDialogUpgradeToProButtonPressed
@required
@end

__attribute__((swift_name("RewardedAdDialogWatchAdButtonPressed")))
@protocol MEGAAOSRewardedAdDialogWatchAdButtonPressed
@required
@end

__attribute__((swift_name("RewardedAdGateActionRequested")))
@protocol MEGAAOSRewardedAdGateActionRequested
@required
@end

__attribute__((swift_name("RewardedAdImpression")))
@protocol MEGAAOSRewardedAdImpression
@required
@end

__attribute__((swift_name("RewardedAdLoaded")))
@protocol MEGAAOSRewardedAdLoaded
@required
@end

__attribute__((swift_name("RewardedAdRewardEarned")))
@protocol MEGAAOSRewardedAdRewardEarned
@required
@end

__attribute__((swift_name("RewardedAdUnavailable")))
@protocol MEGAAOSRewardedAdUnavailable
@required
@end


/**
 * A rich text (Markdown, .md) file was created from the new text file dialog. Sent whether the
 * user ticked the "Rich text formatting" checkbox or typed the .md extension themselves, since
 * the checkbox and the file name field are the same state. See [PlainTextFileCreated] for the
 * pairing.
 */
__attribute__((swift_name("RichTextFileCreated")))
@protocol MEGAAOSRichTextFileCreated
@required
@end

__attribute__((swift_name("SaveAddCreditCardItemButtonPressed")))
@protocol MEGAAOSSaveAddCreditCardItemButtonPressed
@required
@end

__attribute__((swift_name("SaveEditCreditCardItemButtonPressed")))
@protocol MEGAAOSSaveEditCreditCardItemButtonPressed
@required
@end

__attribute__((swift_name("SaveToMegaBannerCloseButtonPressed")))
@protocol MEGAAOSSaveToMegaBannerCloseButtonPressed
@required
@end

__attribute__((swift_name("SaveToMegaBannerCreateAccountButtonPressed")))
@protocol MEGAAOSSaveToMegaBannerCreateAccountButtonPressed
@required
@end

__attribute__((swift_name("SaveToMegaBannerLogInButtonPressed")))
@protocol MEGAAOSSaveToMegaBannerLogInButtonPressed
@required
@end

__attribute__((swift_name("SaveToMegaBottomSheetCloseButtonPressed")))
@protocol MEGAAOSSaveToMegaBottomSheetCloseButtonPressed
@required
@end

__attribute__((swift_name("SaveToMegaBottomSheetLogInButtonPressed")))
@protocol MEGAAOSSaveToMegaBottomSheetLogInButtonPressed
@required
@end

__attribute__((swift_name("SaveToMegaBottomSheetSignUpButtonPressed")))
@protocol MEGAAOSSaveToMegaBottomSheetSignUpButtonPressed
@required
@end

__attribute__((swift_name("ScanQRCodeButtonPressed")))
@protocol MEGAAOSScanQRCodeButtonPressed
@required
@end

__attribute__((swift_name("ScheduleMeetingMenuItem")))
@protocol MEGAAOSScheduleMeetingMenuItem
@required
@end

__attribute__((swift_name("ScheduleMeetingPressed")))
@protocol MEGAAOSScheduleMeetingPressed
@required
@end

__attribute__((swift_name("ScheduleNewMeetingScreen")))
@protocol MEGAAOSScheduleNewMeetingScreen
@required
@end

__attribute__((swift_name("ScheduledMeetingCancelMenuItem")))
@protocol MEGAAOSScheduledMeetingCancelMenuItem
@required
@end

__attribute__((swift_name("ScheduledMeetingCreateConfirmButton")))
@protocol MEGAAOSScheduledMeetingCreateConfirmButton
@required
@end

__attribute__((swift_name("ScheduledMeetingEditMenuItem")))
@protocol MEGAAOSScheduledMeetingEditMenuItem
@required
@end

__attribute__((swift_name("ScheduledMeetingEditMenuToolbar")))
@protocol MEGAAOSScheduledMeetingEditMenuToolbar
@required
@end

__attribute__((swift_name("ScheduledMeetingJoinGuestButton")))
@protocol MEGAAOSScheduledMeetingJoinGuestButton
@required
@end

__attribute__((swift_name("ScheduledMeetingReminderNotificationJoinButton")))
@protocol MEGAAOSScheduledMeetingReminderNotificationJoinButton
@required
@end

__attribute__((swift_name("ScheduledMeetingReminderNotificationMessageButton")))
@protocol MEGAAOSScheduledMeetingReminderNotificationMessageButton
@required
@end

__attribute__((swift_name("ScheduledMeetingSettingEnableMeetingLinkButton")))
@protocol MEGAAOSScheduledMeetingSettingEnableMeetingLinkButton
@required
@end

__attribute__((swift_name("ScheduledMeetingSettingEnableOpenInviteButton")))
@protocol MEGAAOSScheduledMeetingSettingEnableOpenInviteButton
@required
@end

__attribute__((swift_name("ScheduledMeetingSettingRecurrenceButton")))
@protocol MEGAAOSScheduledMeetingSettingRecurrenceButton
@required
@end

__attribute__((swift_name("ScheduledMeetingSettingSendCalendarInviteButton")))
@protocol MEGAAOSScheduledMeetingSettingSendCalendarInviteButton
@required
@end

__attribute__((swift_name("ScheduledMeetingShareMeetingLinkButton")))
@protocol MEGAAOSScheduledMeetingShareMeetingLinkButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchAudioFilterPressed")))
@interface MEGAAOSSearchAudioFilterPressed : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("SearchDateAddedDropdownChipPressed")))
@protocol MEGAAOSSearchDateAddedDropdownChipPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedLastSevenDaysClicked")))
@interface MEGAAOSSearchDateAddedLastSevenDaysClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedLastThirtyDaysClicked")))
@interface MEGAAOSSearchDateAddedLastThirtyDaysClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedLastYearClicked")))
@interface MEGAAOSSearchDateAddedLastYearClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedOlderClicked")))
@interface MEGAAOSSearchDateAddedOlderClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedThisYearClicked")))
@interface MEGAAOSSearchDateAddedThisYearClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedTodayClicked")))
@interface MEGAAOSSearchDateAddedTodayClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDocsFilterPressed")))
@interface MEGAAOSSearchDocsFilterPressed : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeAudioOptionClicked")))
@interface MEGAAOSSearchFileTypeAudioOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeDocumentsOptionClicked")))
@interface MEGAAOSSearchFileTypeDocumentsOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("SearchFileTypeDropdownChipPressed")))
@protocol MEGAAOSSearchFileTypeDropdownChipPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeFolderOptionClicked")))
@interface MEGAAOSSearchFileTypeFolderOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeImagesOptionClicked")))
@interface MEGAAOSSearchFileTypeImagesOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeOtherOptionClicked")))
@interface MEGAAOSSearchFileTypeOtherOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypePdfOptionClicked")))
@interface MEGAAOSSearchFileTypePdfOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypePresentationOptionClicked")))
@interface MEGAAOSSearchFileTypePresentationOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeSpreadsheetOptionClicked")))
@interface MEGAAOSSearchFileTypeSpreadsheetOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeVideoOptionClicked")))
@interface MEGAAOSSearchFileTypeVideoOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchImageFilterPressed")))
@interface MEGAAOSSearchImageFilterPressed : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchItemSelected")))
@interface MEGAAOSSearchItemSelected : MEGAAOSBase
- (instancetype)initWithSearchItemType:(MEGAAOSSearchItemSelectedSearchItemType *)searchItemType __attribute__((swift_name("init(searchItemType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSSearchItemSelectedSearchItemType *searchItemType __attribute__((swift_name("searchItemType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchItemSelected.SearchItemType")))
@interface MEGAAOSSearchItemSelectedSearchItemType : MEGAAOSKotlinEnum<MEGAAOSSearchItemSelectedSearchItemType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSSearchItemSelectedSearchItemType *file __attribute__((swift_name("file")));
@property (class, readonly) MEGAAOSSearchItemSelectedSearchItemType *folder __attribute__((swift_name("folder")));
+ (MEGAAOSKotlinArray<MEGAAOSSearchItemSelectedSearchItemType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSSearchItemSelectedSearchItemType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("SearchLastModifiedDropdownChipPressed")))
@protocol MEGAAOSSearchLastModifiedDropdownChipPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedLastSevenDaysClicked")))
@interface MEGAAOSSearchLastModifiedLastSevenDaysClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedLastThirtyDaysClicked")))
@interface MEGAAOSSearchLastModifiedLastThirtyDaysClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedLastYearClicked")))
@interface MEGAAOSSearchLastModifiedLastYearClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedOlderClicked")))
@interface MEGAAOSSearchLastModifiedOlderClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedThisYearClicked")))
@interface MEGAAOSSearchLastModifiedThisYearClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedTodayClicked")))
@interface MEGAAOSSearchLastModifiedTodayClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("SearchModeEnablePressed")))
@protocol MEGAAOSSearchModeEnablePressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchResetFilterPressed")))
@interface MEGAAOSSearchResetFilterPressed : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("SearchResultGetLinkMenuItem")))
@protocol MEGAAOSSearchResultGetLinkMenuItem
@required
@end

__attribute__((swift_name("SearchResultOpenWithMenuItem")))
@protocol MEGAAOSSearchResultOpenWithMenuItem
@required
@end

__attribute__((swift_name("SearchResultOverflowMenuItem")))
@protocol MEGAAOSSearchResultOverflowMenuItem
@required
@end

__attribute__((swift_name("SearchResultSaveToDeviceMenuItem")))
@protocol MEGAAOSSearchResultSaveToDeviceMenuItem
@required
@end

__attribute__((swift_name("SearchResultShareMenuItem")))
@protocol MEGAAOSSearchResultShareMenuItem
@required
@end

__attribute__((swift_name("SearchTagChipPressed")))
@protocol MEGAAOSSearchTagChipPressed
@required
@end

__attribute__((swift_name("SearchTagFilterRemoved")))
@protocol MEGAAOSSearchTagFilterRemoved
@required
@end

__attribute__((swift_name("SearchTagsShowAllPressed")))
@protocol MEGAAOSSearchTagsShowAllPressed
@required
@end

__attribute__((swift_name("SearchTagsShowLessPressed")))
@protocol MEGAAOSSearchTagsShowLessPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchVideosFilterPressed")))
@interface MEGAAOSSearchVideosFilterPressed : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("SecuritySettingsItemSelected")))
@protocol MEGAAOSSecuritySettingsItemSelected
@required
@end

__attribute__((swift_name("SendLinkToChatPressed")))
@protocol MEGAAOSSendLinkToChatPressed
@required
@end

__attribute__((swift_name("SendMeetingLinkToChatScheduledMeeting")))
@protocol MEGAAOSSendMeetingLinkToChatScheduledMeeting
@required
@end

__attribute__((swift_name("SendToChatFileLinkButtonPressed")))
@protocol MEGAAOSSendToChatFileLinkButtonPressed
@required
@end

__attribute__((swift_name("SendToChatFileLinkNoAccountLoggedButtonPressed")))
@protocol MEGAAOSSendToChatFileLinkNoAccountLoggedButtonPressed
@required
@end

__attribute__((swift_name("SendToChatFolderLinkButtonPressed")))
@protocol MEGAAOSSendToChatFolderLinkButtonPressed
@required
@end

__attribute__((swift_name("SendToChatFolderLinkNoAccountLoggedButtonPressed")))
@protocol MEGAAOSSendToChatFolderLinkNoAccountLoggedButtonPressed
@required
@end

__attribute__((swift_name("SettingsCustomiseNavigationMenuItem")))
@protocol MEGAAOSSettingsCustomiseNavigationMenuItem
@required
@end

__attribute__((swift_name("SettingsScreen")))
@protocol MEGAAOSSettingsScreen
@required
@end

__attribute__((swift_name("SetupAdBlockingScreenView")))
@protocol MEGAAOSSetupAdBlockingScreenView
@required
@end

__attribute__((swift_name("SetupNotificationScreenView")))
@protocol MEGAAOSSetupNotificationScreenView
@required
@end

__attribute__((swift_name("SetupVpnScreenView")))
@protocol MEGAAOSSetupVpnScreenView
@required
@end

__attribute__((swift_name("ShareLinkBarButtonPressed")))
@protocol MEGAAOSShareLinkBarButtonPressed
@required
@end

__attribute__((swift_name("ShareLinkDialog")))
@protocol MEGAAOSShareLinkDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareLinkOpened")))
@interface MEGAAOSShareLinkOpened : MEGAAOSBase
- (instancetype)initWithLinkType:(MEGAAOSShareLinkOpenedLinkType *)linkType authStatus:(MEGAAOSShareLinkOpenedAuthStatus *)authStatus __attribute__((swift_name("init(linkType:authStatus:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSShareLinkOpenedAuthStatus *authStatus __attribute__((swift_name("authStatus")));
@property (readonly) MEGAAOSShareLinkOpenedLinkType *linkType __attribute__((swift_name("linkType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareLinkOpened.AuthStatus")))
@interface MEGAAOSShareLinkOpenedAuthStatus : MEGAAOSKotlinEnum<MEGAAOSShareLinkOpenedAuthStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSShareLinkOpenedAuthStatus *loggedin __attribute__((swift_name("loggedin")));
@property (class, readonly) MEGAAOSShareLinkOpenedAuthStatus *loggedout __attribute__((swift_name("loggedout")));
+ (MEGAAOSKotlinArray<MEGAAOSShareLinkOpenedAuthStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSShareLinkOpenedAuthStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareLinkOpened.LinkType")))
@interface MEGAAOSShareLinkOpenedLinkType : MEGAAOSKotlinEnum<MEGAAOSShareLinkOpenedLinkType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSShareLinkOpenedLinkType *file __attribute__((swift_name("file")));
@property (class, readonly) MEGAAOSShareLinkOpenedLinkType *folder __attribute__((swift_name("folder")));
@property (class, readonly) MEGAAOSShareLinkOpenedLinkType *album __attribute__((swift_name("album")));
+ (MEGAAOSKotlinArray<MEGAAOSShareLinkOpenedLinkType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSShareLinkOpenedLinkType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("ShareLinkPressed")))
@protocol MEGAAOSShareLinkPressed
@required
@end

__attribute__((swift_name("ShareLinkScreen")))
@protocol MEGAAOSShareLinkScreen
@required
@end

__attribute__((swift_name("ShareMeetingLinkScheduledMeeting")))
@protocol MEGAAOSShareMeetingLinkScheduledMeeting
@required
@end

__attribute__((swift_name("SharedAlbumsUploadDisabled")))
@protocol MEGAAOSSharedAlbumsUploadDisabled
@required
@end

__attribute__((swift_name("SharedAlbumsUploadEnabled")))
@protocol MEGAAOSSharedAlbumsUploadEnabled
@required
@end

__attribute__((swift_name("SharedItemsBottomNavigationItem")))
@protocol MEGAAOSSharedItemsBottomNavigationItem
@required
@end

__attribute__((swift_name("SharedItemsScreen")))
@protocol MEGAAOSSharedItemsScreen
@required
@end

__attribute__((swift_name("SharesScreen")))
@protocol MEGAAOSSharesScreen
@required
@end

__attribute__((swift_name("ShortcutActionChatButtonPressed")))
@protocol MEGAAOSShortcutActionChatButtonPressed
@required
@end

__attribute__((swift_name("ShortcutActionScanDocumentButtonPressed")))
@protocol MEGAAOSShortcutActionScanDocumentButtonPressed
@required
@end

__attribute__((swift_name("ShortcutActionUploadButtonPressed")))
@protocol MEGAAOSShortcutActionUploadButtonPressed
@required
@end

__attribute__((swift_name("ShortcutWidgetAddContactButtonPressed")))
@protocol MEGAAOSShortcutWidgetAddContactButtonPressed
@required
@end

__attribute__((swift_name("ShortcutWidgetScanDocumentButtonPressed")))
@protocol MEGAAOSShortcutWidgetScanDocumentButtonPressed
@required
@end

__attribute__((swift_name("ShortcutWidgetStartConversationButtonPressed")))
@protocol MEGAAOSShortcutWidgetStartConversationButtonPressed
@required
@end

__attribute__((swift_name("ShortcutWidgetUploadFileButtonPressed")))
@protocol MEGAAOSShortcutWidgetUploadFileButtonPressed
@required
@end

__attribute__((swift_name("ShowRecentActivityMenuItem")))
@protocol MEGAAOSShowRecentActivityMenuItem
@required
@end

__attribute__((swift_name("SignUpButtonOnLoginPagePressed")))
@protocol MEGAAOSSignUpButtonOnLoginPagePressed
@required
@end

__attribute__((swift_name("SignUpButtonOnUSPPagePressed")))
@protocol MEGAAOSSignUpButtonOnUSPPagePressed
@required
@end

__attribute__((swift_name("SignUpScreen")))
@protocol MEGAAOSSignUpScreen
@required
@end

__attribute__((swift_name("SingleAlbumLinkScreen")))
@protocol MEGAAOSSingleAlbumLinkScreen
@required
@end

__attribute__((swift_name("SkipAdBlockingOnboardingButtonPressed")))
@protocol MEGAAOSSkipAdBlockingOnboardingButtonPressed
@required
@end

__attribute__((swift_name("SkipCameraBackupsCTAButtonPressed")))
@protocol MEGAAOSSkipCameraBackupsCTAButtonPressed
@required
@end

__attribute__((swift_name("SkipCancellationSurveyButtonPressed")))
@protocol MEGAAOSSkipCancellationSurveyButtonPressed
@required
@end

__attribute__((swift_name("SkipNotificationsCTAButtonPressed")))
@protocol MEGAAOSSkipNotificationsCTAButtonPressed
@required
@end

__attribute__((swift_name("SkipSetupNotificationOnboardingButtonPressed")))
@protocol MEGAAOSSkipSetupNotificationOnboardingButtonPressed
@required
@end

__attribute__((swift_name("SkipSetupVPNOnboardingButtonPressed")))
@protocol MEGAAOSSkipSetupVPNOnboardingButtonPressed
@required
@end

__attribute__((swift_name("SlideShowScreen")))
@protocol MEGAAOSSlideShowScreen
@required
@end

__attribute__((swift_name("SlideshowSecureModeActivated")))
@protocol MEGAAOSSlideshowSecureModeActivated
@required
@end

__attribute__((swift_name("SlideshowSettingOrderNewestButton")))
@protocol MEGAAOSSlideshowSettingOrderNewestButton
@required
@end

__attribute__((swift_name("SlideshowSettingOrderOldestButton")))
@protocol MEGAAOSSlideshowSettingOrderOldestButton
@required
@end

__attribute__((swift_name("SlideshowSettingOrderShuffleButton")))
@protocol MEGAAOSSlideshowSettingOrderShuffleButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideshowSettingRepeatOffButton")))
@interface MEGAAOSSlideshowSettingRepeatOffButton : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideshowSettingRepeatOnButton")))
@interface MEGAAOSSlideshowSettingRepeatOnButton : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("SlideshowSettingSpeedFastButton")))
@protocol MEGAAOSSlideshowSettingSpeedFastButton
@required
@end

__attribute__((swift_name("SlideshowSettingSpeedNormalButton")))
@protocol MEGAAOSSlideshowSettingSpeedNormalButton
@required
@end

__attribute__((swift_name("SlideshowSettingSpeedSlowButton")))
@protocol MEGAAOSSlideshowSettingSpeedSlowButton
@required
@end

__attribute__((swift_name("SlideshowTutorialMenuItem")))
@protocol MEGAAOSSlideshowTutorialMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SmartBannerSwipe")))
@interface MEGAAOSSmartBannerSwipe : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("SnapshotButtonPressed")))
@protocol MEGAAOSSnapshotButtonPressed
@required
@end

__attribute__((swift_name("SortButtonPressed")))
@protocol MEGAAOSSortButtonPressed
@required
@end

__attribute__((swift_name("SortByDateAddedMenuItem")))
@protocol MEGAAOSSortByDateAddedMenuItem
@required
@end

__attribute__((swift_name("SortByDateModifiedMenuItem")))
@protocol MEGAAOSSortByDateModifiedMenuItem
@required
@end

__attribute__((swift_name("SortByFavouriteMenuItem")))
@protocol MEGAAOSSortByFavouriteMenuItem
@required
@end

__attribute__((swift_name("SortByLabelMenuItem")))
@protocol MEGAAOSSortByLabelMenuItem
@required
@end

__attribute__((swift_name("SortByLinkCreationMenuItem")))
@protocol MEGAAOSSortByLinkCreationMenuItem
@required
@end

__attribute__((swift_name("SortByNameMenuItem")))
@protocol MEGAAOSSortByNameMenuItem
@required
@end

__attribute__((swift_name("SortByShareCreationMenuItem")))
@protocol MEGAAOSSortByShareCreationMenuItem
@required
@end

__attribute__((swift_name("SortBySizeMenuItem")))
@protocol MEGAAOSSortBySizeMenuItem
@required
@end

__attribute__((swift_name("SortPasswordsByDateNewestMenuItem")))
@protocol MEGAAOSSortPasswordsByDateNewestMenuItem
@required
@end

__attribute__((swift_name("SortPasswordsByDateOldestMenuItem")))
@protocol MEGAAOSSortPasswordsByDateOldestMenuItem
@required
@end

__attribute__((swift_name("SortPasswordsByTitleAscendingMenuItem")))
@protocol MEGAAOSSortPasswordsByTitleAscendingMenuItem
@required
@end

__attribute__((swift_name("SortPasswordsByTitleDescendingMenuItem")))
@protocol MEGAAOSSortPasswordsByTitleDescendingMenuItem
@required
@end

__attribute__((swift_name("SpeedOption0_5XPressed")))
@protocol MEGAAOSSpeedOption0_5XPressed
@required
@end

__attribute__((swift_name("SpeedOption1_5XPressed")))
@protocol MEGAAOSSpeedOption1_5XPressed
@required
@end

__attribute__((swift_name("SpeedOption2XPressed")))
@protocol MEGAAOSSpeedOption2XPressed
@required
@end

__attribute__((swift_name("SpeedSelectedDialog")))
@protocol MEGAAOSSpeedSelectedDialog
@required
@end

__attribute__((swift_name("SplitTunnellingAppSelectionScreen")))
@protocol MEGAAOSSplitTunnellingAppSelectionScreen
@required
@end

__attribute__((swift_name("SplitTunnellingScreen")))
@protocol MEGAAOSSplitTunnellingScreen
@required
@end

__attribute__((swift_name("SpotlightNodeButtonPressed")))
@protocol MEGAAOSSpotlightNodeButtonPressed
@required
@end

__attribute__((swift_name("StartFreeTrialButtonPressed")))
@protocol MEGAAOSStartFreeTrialButtonPressed
@required
@end

__attribute__((swift_name("StartMEGAPWMFreeTrial")))
@protocol MEGAAOSStartMEGAPWMFreeTrial
@required
@end

__attribute__((swift_name("StartMEGAVPNFreeTrial")))
@protocol MEGAAOSStartMEGAVPNFreeTrial
@required
@end

__attribute__((swift_name("StartMeetingNowPressed")))
@protocol MEGAAOSStartMeetingNowPressed
@required
@end

__attribute__((swift_name("StayOnCallInNoParticipantsPopup")))
@protocol MEGAAOSStayOnCallInNoParticipantsPopup
@required
@end

__attribute__((swift_name("StorageAlmostFullFreeUserDialogScreen")))
@protocol MEGAAOSStorageAlmostFullFreeUserDialogScreen
@required
@end

__attribute__((swift_name("StorageAlmostFullFreeUserUpgradeButtonPressed")))
@protocol MEGAAOSStorageAlmostFullFreeUserUpgradeButtonPressed
@required
@end

__attribute__((swift_name("StorageAlmostFullFreeUserViewAllPlansButtonPressed")))
@protocol MEGAAOSStorageAlmostFullFreeUserViewAllPlansButtonPressed
@required
@end

__attribute__((swift_name("StorageAlmostFullProUserDialogScreen")))
@protocol MEGAAOSStorageAlmostFullProUserDialogScreen
@required
@end

__attribute__((swift_name("StorageAlmostFullProUserUpgradeButtonPressed")))
@protocol MEGAAOSStorageAlmostFullProUserUpgradeButtonPressed
@required
@end

__attribute__((swift_name("StorageAlmostFullProUserViewAllPlansButtonPressed")))
@protocol MEGAAOSStorageAlmostFullProUserViewAllPlansButtonPressed
@required
@end

__attribute__((swift_name("StorageFullFreeUserDialogScreen")))
@protocol MEGAAOSStorageFullFreeUserDialogScreen
@required
@end

__attribute__((swift_name("StorageFullFreeUserUpgradeButtonPressed")))
@protocol MEGAAOSStorageFullFreeUserUpgradeButtonPressed
@required
@end

__attribute__((swift_name("StorageFullFreeUserViewAllPlansButtonPressed")))
@protocol MEGAAOSStorageFullFreeUserViewAllPlansButtonPressed
@required
@end

__attribute__((swift_name("StorageFullProUserDialogScreen")))
@protocol MEGAAOSStorageFullProUserDialogScreen
@required
@end

__attribute__((swift_name("StorageFullProUserUpgradeButtonPressed")))
@protocol MEGAAOSStorageFullProUserUpgradeButtonPressed
@required
@end

__attribute__((swift_name("StorageFullProUserViewAllPlansButtonPressed")))
@protocol MEGAAOSStorageFullProUserViewAllPlansButtonPressed
@required
@end

__attribute__((swift_name("SubmitDebugLogsButtonPressed")))
@protocol MEGAAOSSubmitDebugLogsButtonPressed
@required
@end

__attribute__((swift_name("SubscribeButtonHomeBannerPressed")))
@protocol MEGAAOSSubscribeButtonHomeBannerPressed
@required
@end

__attribute__((swift_name("SubscribeButtonPressed")))
@protocol MEGAAOSSubscribeButtonPressed
@required
@end

__attribute__((swift_name("SubscribeButtonSettingsBannerPressed")))
@protocol MEGAAOSSubscribeButtonSettingsBannerPressed
@required
@end

__attribute__((swift_name("SubscriptionCancellationSurveyCancelSubscriptionButton")))
@protocol MEGAAOSSubscriptionCancellationSurveyCancelSubscriptionButton
@required
@end

__attribute__((swift_name("SubscriptionCancellationSurveyCancelViewButton")))
@protocol MEGAAOSSubscriptionCancellationSurveyCancelViewButton
@required
@end

__attribute__((swift_name("SubscriptionCancellationSurveyDontCancelButton")))
@protocol MEGAAOSSubscriptionCancellationSurveyDontCancelButton
@required
@end

__attribute__((swift_name("SubscriptionCancellationSurveyScreen")))
@protocol MEGAAOSSubscriptionCancellationSurveyScreen
@required
@end

__attribute__((swift_name("SubscriptionCancelled")))
@protocol MEGAAOSSubscriptionCancelled
@required
@end

__attribute__((swift_name("SubscriptionFailed")))
@protocol MEGAAOSSubscriptionFailed
@required
@end

__attribute__((swift_name("SubscriptionOfferAutoOpenCtaButtonPressed")))
@protocol MEGAAOSSubscriptionOfferAutoOpenCtaButtonPressed
@required
@end

__attribute__((swift_name("SubscriptionOfferAutoOpenDismissButtonPressed")))
@protocol MEGAAOSSubscriptionOfferAutoOpenDismissButtonPressed
@required
@end

__attribute__((swift_name("SubscriptionOfferAutoOpenScreen")))
@protocol MEGAAOSSubscriptionOfferAutoOpenScreen
@required
@end

__attribute__((swift_name("SubscriptionOfferAutoOpenViewAllPlansButtonPressed")))
@protocol MEGAAOSSubscriptionOfferAutoOpenViewAllPlansButtonPressed
@required
@end

__attribute__((swift_name("SubscriptionOfferNotificationReceived")))
@protocol MEGAAOSSubscriptionOfferNotificationReceived
@required
@end

__attribute__((swift_name("SubscriptionOfferNotificationTapped")))
@protocol MEGAAOSSubscriptionOfferNotificationTapped
@required
@end

__attribute__((swift_name("SubscriptionOfferTriggeredCtaButtonPressed")))
@protocol MEGAAOSSubscriptionOfferTriggeredCtaButtonPressed
@required
@end

__attribute__((swift_name("SubscriptionOfferTriggeredDismissButtonPressed")))
@protocol MEGAAOSSubscriptionOfferTriggeredDismissButtonPressed
@required
@end

__attribute__((swift_name("SubscriptionOfferTriggeredScreen")))
@protocol MEGAAOSSubscriptionOfferTriggeredScreen
@required
@end

__attribute__((swift_name("SubscriptionOfferTriggeredViewAllPlansButtonPressed")))
@protocol MEGAAOSSubscriptionOfferTriggeredViewAllPlansButtonPressed
@required
@end

__attribute__((swift_name("SubscriptionScreen")))
@protocol MEGAAOSSubscriptionScreen
@required
@end

__attribute__((swift_name("SubscriptionSuccessScreen")))
@protocol MEGAAOSSubscriptionSuccessScreen
@required
@end

__attribute__((swift_name("SubscriptionSuccessful")))
@protocol MEGAAOSSubscriptionSuccessful
@required
@end

__attribute__((swift_name("SyncCardExclusionsButtonPressed")))
@protocol MEGAAOSSyncCardExclusionsButtonPressed
@required
@end

__attribute__((swift_name("SyncCardExpanded")))
@protocol MEGAAOSSyncCardExpanded
@required
@end

__attribute__((swift_name("SyncCardIssuesInfoButtonPressed")))
@protocol MEGAAOSSyncCardIssuesInfoButtonPressed
@required
@end

__attribute__((swift_name("SyncCardOpenDeviceFolderButtonPressed")))
@protocol MEGAAOSSyncCardOpenDeviceFolderButtonPressed
@required
@end

__attribute__((swift_name("SyncCardOpenMegaFolderButtonPressed")))
@protocol MEGAAOSSyncCardOpenMegaFolderButtonPressed
@required
@end

__attribute__((swift_name("SyncCardPauseRunButtonPressed")))
@protocol MEGAAOSSyncCardPauseRunButtonPressed
@required
@end

__attribute__((swift_name("SyncCardStopButtonPressed")))
@protocol MEGAAOSSyncCardStopButtonPressed
@required
@end

__attribute__((swift_name("SyncDcimFolderSelected")))
@protocol MEGAAOSSyncDcimFolderSelected
@required
@end

__attribute__((swift_name("SyncExternalStorageFolderSelected")))
@protocol MEGAAOSSyncExternalStorageFolderSelected
@required
@end

__attribute__((swift_name("SyncFeatureUpgradeDialogCancelButtonPressed")))
@protocol MEGAAOSSyncFeatureUpgradeDialogCancelButtonPressed
@required
@end

__attribute__((swift_name("SyncFeatureUpgradeDialogDisplayed")))
@protocol MEGAAOSSyncFeatureUpgradeDialogDisplayed
@required
@end

__attribute__((swift_name("SyncFeatureUpgradeDialogUpgradeButtonPressed")))
@protocol MEGAAOSSyncFeatureUpgradeDialogUpgradeButtonPressed
@required
@end

__attribute__((swift_name("SyncFoldersListDisplayed")))
@protocol MEGAAOSSyncFoldersListDisplayed
@required
@end

__attribute__((swift_name("SyncListBannerUpgradeButtonPressed")))
@protocol MEGAAOSSyncListBannerUpgradeButtonPressed
@required
@end

__attribute__((swift_name("SyncListEmptyStateUpgradeButtonPressed")))
@protocol MEGAAOSSyncListEmptyStateUpgradeButtonPressed
@required
@end

__attribute__((swift_name("SyncListFoldersButtonPressed")))
@protocol MEGAAOSSyncListFoldersButtonPressed
@required
@end

__attribute__((swift_name("SyncListIssuesButtonPressed")))
@protocol MEGAAOSSyncListIssuesButtonPressed
@required
@end

__attribute__((swift_name("SyncListSolvedIssuesButtonPressed")))
@protocol MEGAAOSSyncListSolvedIssuesButtonPressed
@required
@end

__attribute__((swift_name("SyncLocalFolderConflict")))
@protocol MEGAAOSSyncLocalFolderConflict
@required
@end

__attribute__((swift_name("SyncMegaPickerFolderDisabled")))
@protocol MEGAAOSSyncMegaPickerFolderDisabled
@required
@end

__attribute__((swift_name("SyncNewFolderScreenBackNavigation")))
@protocol MEGAAOSSyncNewFolderScreenBackNavigation
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncOptionSelected")))
@interface MEGAAOSSyncOptionSelected : MEGAAOSBase
- (instancetype)initWithSelectionType:(MEGAAOSSyncOptionSelectedSelectionType *)selectionType __attribute__((swift_name("init(selectionType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSSyncOptionSelectedSelectionType *selectionType __attribute__((swift_name("selectionType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncOptionSelected.SelectionType")))
@interface MEGAAOSSyncOptionSelectedSelectionType : MEGAAOSKotlinEnum<MEGAAOSSyncOptionSelectedSelectionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSSyncOptionSelectedSelectionType *syncoptionwifionlyselected __attribute__((swift_name("syncoptionwifionlyselected")));
@property (class, readonly) MEGAAOSSyncOptionSelectedSelectionType *syncoptionwifiandmobileselected __attribute__((swift_name("syncoptionwifiandmobileselected")));
+ (MEGAAOSKotlinArray<MEGAAOSSyncOptionSelectedSelectionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSSyncOptionSelectedSelectionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncPowerOptionSelected")))
@interface MEGAAOSSyncPowerOptionSelected : MEGAAOSBase
- (instancetype)initWithSelectionType:(MEGAAOSSyncPowerOptionSelectedSelectionType *)selectionType __attribute__((swift_name("init(selectionType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSSyncPowerOptionSelectedSelectionType *selectionType __attribute__((swift_name("selectionType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncPowerOptionSelected.SelectionType")))
@interface MEGAAOSSyncPowerOptionSelectedSelectionType : MEGAAOSKotlinEnum<MEGAAOSSyncPowerOptionSelectedSelectionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSSyncPowerOptionSelectedSelectionType *syncalways __attribute__((swift_name("syncalways")));
@property (class, readonly) MEGAAOSSyncPowerOptionSelectedSelectionType *synconlywhencharging __attribute__((swift_name("synconlywhencharging")));
+ (MEGAAOSKotlinArray<MEGAAOSSyncPowerOptionSelectedSelectionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSSyncPowerOptionSelectedSelectionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("SyncPromotionBottomSheetBackUpFoldersButtonPressed")))
@protocol MEGAAOSSyncPromotionBottomSheetBackUpFoldersButtonPressed
@required
@end

__attribute__((swift_name("SyncPromotionBottomSheetDismissed")))
@protocol MEGAAOSSyncPromotionBottomSheetDismissed
@required
@end

__attribute__((swift_name("SyncPromotionBottomSheetLearnMoreButtonPressed")))
@protocol MEGAAOSSyncPromotionBottomSheetLearnMoreButtonPressed
@required
@end

__attribute__((swift_name("SyncPromotionBottomSheetSyncFoldersButtonPressed")))
@protocol MEGAAOSSyncPromotionBottomSheetSyncFoldersButtonPressed
@required
@end

__attribute__((swift_name("SyncRemoteFolderConflict")))
@protocol MEGAAOSSyncRemoteFolderConflict
@required
@end

__attribute__((swift_name("SyncSettingsItemSelected")))
@protocol MEGAAOSSyncSettingsItemSelected
@required
@end

__attribute__((swift_name("SyncWorkerForegroundExecutionStarted")))
@protocol MEGAAOSSyncWorkerForegroundExecutionStarted
@required
@end

__attribute__((swift_name("SyncsTab")))
@protocol MEGAAOSSyncsTab
@required
@end

__attribute__((swift_name("TermsOfServiceCloseButtonPressed")))
@protocol MEGAAOSTermsOfServiceCloseButtonPressed
@required
@end

__attribute__((swift_name("TermsOfServiceScreen")))
@protocol MEGAAOSTermsOfServiceScreen
@required
@end

__attribute__((swift_name("TestPasswordConfirmButtonPressed")))
@protocol MEGAAOSTestPasswordConfirmButtonPressed
@required
@end

__attribute__((swift_name("TestPasswordConfirmPasswordAcceptedMessageDisplayed")))
@protocol MEGAAOSTestPasswordConfirmPasswordAcceptedMessageDisplayed
@required
@end

__attribute__((swift_name("TestPasswordConfirmWrongPasswordMessageDisplayed")))
@protocol MEGAAOSTestPasswordConfirmWrongPasswordMessageDisplayed
@required
@end

__attribute__((swift_name("TestPasswordExportRecoveryKeyButtonPressed")))
@protocol MEGAAOSTestPasswordExportRecoveryKeyButtonPressed
@required
@end

__attribute__((swift_name("TestPasswordExportRecoveryKeyOkButtonPressed")))
@protocol MEGAAOSTestPasswordExportRecoveryKeyOkButtonPressed
@required
@end

__attribute__((swift_name("TestPasswordProceedToLogoutButtonPressed")))
@protocol MEGAAOSTestPasswordProceedToLogoutButtonPressed
@required
@end

__attribute__((swift_name("TestPasswordScreen")))
@protocol MEGAAOSTestPasswordScreen
@required
@end

__attribute__((swift_name("TextEditorCloseMenuToolbar")))
@protocol MEGAAOSTextEditorCloseMenuToolbar
@required
@end

__attribute__((swift_name("TextEditorCopyMenuItem")))
@protocol MEGAAOSTextEditorCopyMenuItem
@required
@end

__attribute__((swift_name("TextEditorDownloadMenuToolbar")))
@protocol MEGAAOSTextEditorDownloadMenuToolbar
@required
@end

__attribute__((swift_name("TextEditorEditButtonPressed")))
@protocol MEGAAOSTextEditorEditButtonPressed
@required
@end

__attribute__((swift_name("TextEditorEditMenuItem")))
@protocol MEGAAOSTextEditorEditMenuItem
@required
@end

__attribute__((swift_name("TextEditorEditMenuToolbar")))
@protocol MEGAAOSTextEditorEditMenuToolbar
@required
@end

__attribute__((swift_name("TextEditorExportFileMenuItem")))
@protocol MEGAAOSTextEditorExportFileMenuItem
@required
@end

__attribute__((swift_name("TextEditorExportFileMenuToolbar")))
@protocol MEGAAOSTextEditorExportFileMenuToolbar
@required
@end

__attribute__((swift_name("TextEditorHideLineNumbersMenuItem")))
@protocol MEGAAOSTextEditorHideLineNumbersMenuItem
@required
@end

__attribute__((swift_name("TextEditorHideNodeMenuItem")))
@protocol MEGAAOSTextEditorHideNodeMenuItem
@required
@end

__attribute__((swift_name("TextEditorMakeAvailableOfflineMenuItem")))
@protocol MEGAAOSTextEditorMakeAvailableOfflineMenuItem
@required
@end

__attribute__((swift_name("TextEditorMakeAvailableOfflineMenuToolbar")))
@protocol MEGAAOSTextEditorMakeAvailableOfflineMenuToolbar
@required
@end

__attribute__((swift_name("TextEditorMoveMenuItem")))
@protocol MEGAAOSTextEditorMoveMenuItem
@required
@end

__attribute__((swift_name("TextEditorMoveToTheRubbishBinMenuItem")))
@protocol MEGAAOSTextEditorMoveToTheRubbishBinMenuItem
@required
@end

__attribute__((swift_name("TextEditorPlainTextModeMenuItem")))
@protocol MEGAAOSTextEditorPlainTextModeMenuItem
@required
@end

__attribute__((swift_name("TextEditorRenameMenuItem")))
@protocol MEGAAOSTextEditorRenameMenuItem
@required
@end

__attribute__((swift_name("TextEditorRichTextModeMenuItem")))
@protocol MEGAAOSTextEditorRichTextModeMenuItem
@required
@end

__attribute__((swift_name("TextEditorSaveEditMenuToolbar")))
@protocol MEGAAOSTextEditorSaveEditMenuToolbar
@required
@end

__attribute__((swift_name("TextEditorScreen")))
@protocol MEGAAOSTextEditorScreen
@required
@end

__attribute__((swift_name("TextEditorSendToChatMenuItem")))
@protocol MEGAAOSTextEditorSendToChatMenuItem
@required
@end

__attribute__((swift_name("TextEditorSendToChatMenuToolbar")))
@protocol MEGAAOSTextEditorSendToChatMenuToolbar
@required
@end

__attribute__((swift_name("TextEditorShareLinkMenuItem")))
@protocol MEGAAOSTextEditorShareLinkMenuItem
@required
@end

__attribute__((swift_name("TextEditorShareLinkMenuToolbar")))
@protocol MEGAAOSTextEditorShareLinkMenuToolbar
@required
@end

__attribute__((swift_name("TextEditorShowLineNumbersMenuItem")))
@protocol MEGAAOSTextEditorShowLineNumbersMenuItem
@required
@end

__attribute__((swift_name("TimelineHideNodeMenuItem")))
@protocol MEGAAOSTimelineHideNodeMenuItem
@required
@end

__attribute__((swift_name("TimelineTab")))
@protocol MEGAAOSTimelineTab
@required
@end

__attribute__((swift_name("ToolbarOverflowMenuItem")))
@protocol MEGAAOSToolbarOverflowMenuItem
@required
@end

__attribute__((swift_name("TransferAllUsedFreeUserDialogScreen")))
@protocol MEGAAOSTransferAllUsedFreeUserDialogScreen
@required
@end

__attribute__((swift_name("TransferAllUsedFreeUserUpgradeButtonPressed")))
@protocol MEGAAOSTransferAllUsedFreeUserUpgradeButtonPressed
@required
@end

__attribute__((swift_name("TransferAllUsedFreeUserViewAllPlansButtonPressed")))
@protocol MEGAAOSTransferAllUsedFreeUserViewAllPlansButtonPressed
@required
@end

__attribute__((swift_name("TransferAllUsedNotLoggedInUserDialogScreen")))
@protocol MEGAAOSTransferAllUsedNotLoggedInUserDialogScreen
@required
@end

__attribute__((swift_name("TransferAllUsedNotLoggedInUserUpgradeButtonPressed")))
@protocol MEGAAOSTransferAllUsedNotLoggedInUserUpgradeButtonPressed
@required
@end

__attribute__((swift_name("TransferAllUsedNotLoggedInUserViewAllPlansButtonPressed")))
@protocol MEGAAOSTransferAllUsedNotLoggedInUserViewAllPlansButtonPressed
@required
@end

__attribute__((swift_name("TransferAllUsedProUserDialogScreen")))
@protocol MEGAAOSTransferAllUsedProUserDialogScreen
@required
@end

__attribute__((swift_name("TransferAllUsedProUserUpgradeButtonPressed")))
@protocol MEGAAOSTransferAllUsedProUserUpgradeButtonPressed
@required
@end

__attribute__((swift_name("TransferAllUsedProUserViewAllPlansButtonPressed")))
@protocol MEGAAOSTransferAllUsedProUserViewAllPlansButtonPressed
@required
@end

__attribute__((swift_name("TransferAlmostUsedFreeUserDialogScreen")))
@protocol MEGAAOSTransferAlmostUsedFreeUserDialogScreen
@required
@end

__attribute__((swift_name("TransferAlmostUsedFreeUserUpgradeButtonPressed")))
@protocol MEGAAOSTransferAlmostUsedFreeUserUpgradeButtonPressed
@required
@end

__attribute__((swift_name("TransferAlmostUsedFreeUserViewAllPlansButtonPressed")))
@protocol MEGAAOSTransferAlmostUsedFreeUserViewAllPlansButtonPressed
@required
@end

__attribute__((swift_name("TransferAlmostUsedNotLoggedInUserDialogScreen")))
@protocol MEGAAOSTransferAlmostUsedNotLoggedInUserDialogScreen
@required
@end

__attribute__((swift_name("TransferAlmostUsedNotLoggedInUserUpgradeButtonPressed")))
@protocol MEGAAOSTransferAlmostUsedNotLoggedInUserUpgradeButtonPressed
@required
@end

__attribute__((swift_name("TransferAlmostUsedNotLoggedInUserViewAllPlansButtonPressed")))
@protocol MEGAAOSTransferAlmostUsedNotLoggedInUserViewAllPlansButtonPressed
@required
@end

__attribute__((swift_name("TransferAlmostUsedProUserDialogScreen")))
@protocol MEGAAOSTransferAlmostUsedProUserDialogScreen
@required
@end

__attribute__((swift_name("TransferAlmostUsedProUserUpgradeButtonPressed")))
@protocol MEGAAOSTransferAlmostUsedProUserUpgradeButtonPressed
@required
@end

__attribute__((swift_name("TransferAlmostUsedProUserViewAllPlansButtonPressed")))
@protocol MEGAAOSTransferAlmostUsedProUserViewAllPlansButtonPressed
@required
@end

__attribute__((swift_name("TransferItBannerCloseButtonPressed")))
@protocol MEGAAOSTransferItBannerCloseButtonPressed
@required
@end

__attribute__((swift_name("TransferItSmartBannerItemSelected")))
@protocol MEGAAOSTransferItSmartBannerItemSelected
@required
@end

__attribute__((swift_name("TransferOverQuotaDialog")))
@protocol MEGAAOSTransferOverQuotaDialog
@required
@end

__attribute__((swift_name("TransferOverQuotaErrorBannerDisplayed")))
@protocol MEGAAOSTransferOverQuotaErrorBannerDisplayed
@required
@end

__attribute__((swift_name("TransferOverQuotaUpgradeAccountButton")))
@protocol MEGAAOSTransferOverQuotaUpgradeAccountButton
@required
@end

__attribute__((swift_name("TransferOverQuotaWarningBannerDisplayed")))
@protocol MEGAAOSTransferOverQuotaWarningBannerDisplayed
@required
@end

__attribute__((swift_name("TransfersBottomNavigationItem")))
@protocol MEGAAOSTransfersBottomNavigationItem
@required
@end

__attribute__((swift_name("TransfersSectionScreen")))
@protocol MEGAAOSTransfersSectionScreen
@required
@end

__attribute__((swift_name("TransfersSettingsScreen")))
@protocol MEGAAOSTransfersSettingsScreen
@required
@end

__attribute__((swift_name("TransfersToolbarWidgetPressed")))
@protocol MEGAAOSTransfersToolbarWidgetPressed
@required
@end

__attribute__((swift_name("TwoYearPlanPurchaseFailed")))
@protocol MEGAAOSTwoYearPlanPurchaseFailed
@required
@end

__attribute__((swift_name("TwoYearPlanPurchaseSuccessful")))
@protocol MEGAAOSTwoYearPlanPurchaseSuccessful
@required
@end

__attribute__((swift_name("USPScreen")))
@protocol MEGAAOSUSPScreen
@required
@end

__attribute__((swift_name("UnlockButtonPressed")))
@protocol MEGAAOSUnlockButtonPressed
@required
@end

__attribute__((swift_name("UpgradeAccountBuyButtonPressed")))
@protocol MEGAAOSUpgradeAccountBuyButtonPressed
@required
@end

__attribute__((swift_name("UpgradeAccountCancelled")))
@protocol MEGAAOSUpgradeAccountCancelled
@required
@end

__attribute__((swift_name("UpgradeAccountHomeWidgetButtonPressed")))
@protocol MEGAAOSUpgradeAccountHomeWidgetButtonPressed
@required
@end

__attribute__((swift_name("UpgradeAccountPlanMonthlyPeriodTogglePressed")))
@protocol MEGAAOSUpgradeAccountPlanMonthlyPeriodTogglePressed
@required
@end

__attribute__((swift_name("UpgradeAccountPlanScreen")))
@protocol MEGAAOSUpgradeAccountPlanScreen
@required
@end

__attribute__((swift_name("UpgradeAccountPlanYearlyPeriodTogglePressed")))
@protocol MEGAAOSUpgradeAccountPlanYearlyPeriodTogglePressed
@required
@end

__attribute__((swift_name("UpgradeAccountPurchaseFailed")))
@protocol MEGAAOSUpgradeAccountPurchaseFailed
@required
@end

__attribute__((swift_name("UpgradeAccountPurchaseSucceeded")))
@protocol MEGAAOSUpgradeAccountPurchaseSucceeded
@required
@end

__attribute__((swift_name("UpgradeForFreeUsersInMenu")))
@protocol MEGAAOSUpgradeForFreeUsersInMenu
@required
@end

__attribute__((swift_name("UpgradeForPaidUsersInMenu")))
@protocol MEGAAOSUpgradeForPaidUsersInMenu
@required
@end

__attribute__((swift_name("UpgradeMyAccount")))
@protocol MEGAAOSUpgradeMyAccount
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpgradePlansPurchaseError")))
@interface MEGAAOSUpgradePlansPurchaseError : MEGAAOSBase
- (instancetype)initWithDetails:(NSString *)details __attribute__((swift_name("init(details:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *details __attribute__((swift_name("details")));
@end

__attribute__((swift_name("UpgradeToProToGetUnlimitedCallsDialog")))
@protocol MEGAAOSUpgradeToProToGetUnlimitedCallsDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadConnectionsChanged")))
@interface MEGAAOSUploadConnectionsChanged : MEGAAOSBase
- (instancetype)initWithPreviousValue:(int32_t)previousValue newValue:(int32_t)newValue __attribute__((swift_name("init(previousValue:newValue:)"))) __attribute__((objc_designated_initializer));
@property (readonly, getter=doNewValue) int32_t newValue __attribute__((swift_name("newValue")));
@property (readonly) int32_t previousValue __attribute__((swift_name("previousValue")));
@end

__attribute__((swift_name("UploadConnectionsDialog")))
@protocol MEGAAOSUploadConnectionsDialog
@required
@end

__attribute__((swift_name("UploadOnlyNewPhotosDisabled")))
@protocol MEGAAOSUploadOnlyNewPhotosDisabled
@required
@end

__attribute__((swift_name("UploadOnlyNewPhotosEnabled")))
@protocol MEGAAOSUploadOnlyNewPhotosEnabled
@required
@end

__attribute__((swift_name("UseCapitalLettersOffTogglePressed")))
@protocol MEGAAOSUseCapitalLettersOffTogglePressed
@required
@end

__attribute__((swift_name("UseCapitalLettersOnTogglePressed")))
@protocol MEGAAOSUseCapitalLettersOnTogglePressed
@required
@end

__attribute__((swift_name("UseDigitsOffTogglePressed")))
@protocol MEGAAOSUseDigitsOffTogglePressed
@required
@end

__attribute__((swift_name("UseDigitsOnTogglePressed")))
@protocol MEGAAOSUseDigitsOnTogglePressed
@required
@end

__attribute__((swift_name("UsePasswordButtonPressed")))
@protocol MEGAAOSUsePasswordButtonPressed
@required
@end

__attribute__((swift_name("UseSymbolsOffTogglePressed")))
@protocol MEGAAOSUseSymbolsOffTogglePressed
@required
@end

__attribute__((swift_name("UseSymbolsOnTogglePressed")))
@protocol MEGAAOSUseSymbolsOnTogglePressed
@required
@end

__attribute__((swift_name("VideoBufferingExceeded_1_Second")))
@protocol MEGAAOSVideoBufferingExceeded_1_Second
@required
@end

__attribute__((swift_name("VideoCodecH264Selected")))
@protocol MEGAAOSVideoCodecH264Selected
@required
@end

__attribute__((swift_name("VideoCodecHEVCSelected")))
@protocol MEGAAOSVideoCodecHEVCSelected
@required
@end

__attribute__((swift_name("VideoEditorCropToolPressed")))
@protocol MEGAAOSVideoEditorCropToolPressed
@required
@end

__attribute__((swift_name("VideoEditorMenuItem")))
@protocol MEGAAOSVideoEditorMenuItem
@required
@end

__attribute__((swift_name("VideoEditorRotateToolPressed")))
@protocol MEGAAOSVideoEditorRotateToolPressed
@required
@end

__attribute__((swift_name("VideoEditorSaveButtonPressed")))
@protocol MEGAAOSVideoEditorSaveButtonPressed
@required
@end

__attribute__((swift_name("VideoEditorSpeedToolPressed")))
@protocol MEGAAOSVideoEditorSpeedToolPressed
@required
@end

__attribute__((swift_name("VideoEditorTrimToolPressed")))
@protocol MEGAAOSVideoEditorTrimToolPressed
@required
@end

__attribute__((swift_name("VideoEditorVolumeToolPressed")))
@protocol MEGAAOSVideoEditorVolumeToolPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlayStarted")))
@interface MEGAAOSVideoPlayStarted : MEGAAOSBase
- (instancetype)initWithLinkType:(MEGAAOSVideoPlayStartedLinkType *)linkType authStatus:(MEGAAOSVideoPlayStartedAuthStatus *)authStatus __attribute__((swift_name("init(linkType:authStatus:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSVideoPlayStartedAuthStatus *authStatus __attribute__((swift_name("authStatus")));
@property (readonly) MEGAAOSVideoPlayStartedLinkType *linkType __attribute__((swift_name("linkType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlayStarted.AuthStatus")))
@interface MEGAAOSVideoPlayStartedAuthStatus : MEGAAOSKotlinEnum<MEGAAOSVideoPlayStartedAuthStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSVideoPlayStartedAuthStatus *loggedin __attribute__((swift_name("loggedin")));
@property (class, readonly) MEGAAOSVideoPlayStartedAuthStatus *loggedout __attribute__((swift_name("loggedout")));
+ (MEGAAOSKotlinArray<MEGAAOSVideoPlayStartedAuthStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSVideoPlayStartedAuthStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlayStarted.LinkType")))
@interface MEGAAOSVideoPlayStartedLinkType : MEGAAOSKotlinEnum<MEGAAOSVideoPlayStartedLinkType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSVideoPlayStartedLinkType *file __attribute__((swift_name("file")));
@property (class, readonly) MEGAAOSVideoPlayStartedLinkType *folder __attribute__((swift_name("folder")));
@property (class, readonly) MEGAAOSVideoPlayStartedLinkType *album __attribute__((swift_name("album")));
+ (MEGAAOSKotlinArray<MEGAAOSVideoPlayStartedLinkType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSVideoPlayStartedLinkType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("VideoPlaybackAviStarted")))
@protocol MEGAAOSVideoPlaybackAviStarted
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackFirstFrame")))
@interface MEGAAOSVideoPlaybackFirstFrame : MEGAAOSBase
- (instancetype)initWithTime:(int32_t)time scenario:(MEGAAOSVideoPlaybackFirstFrameVideoPlaybackScenario *)scenario commonMap:(NSString *)commonMap __attribute__((swift_name("init(time:scenario:commonMap:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *commonMap __attribute__((swift_name("commonMap")));
@property (readonly) MEGAAOSVideoPlaybackFirstFrameVideoPlaybackScenario *scenario __attribute__((swift_name("scenario")));
@property (readonly) int32_t time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackFirstFrame.VideoPlaybackScenario")))
@interface MEGAAOSVideoPlaybackFirstFrameVideoPlaybackScenario : MEGAAOSKotlinEnum<MEGAAOSVideoPlaybackFirstFrameVideoPlaybackScenario *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSVideoPlaybackFirstFrameVideoPlaybackScenario *manualclick __attribute__((swift_name("manualclick")));
@property (class, readonly) MEGAAOSVideoPlaybackFirstFrameVideoPlaybackScenario *resume __attribute__((swift_name("resume")));
@property (class, readonly) MEGAAOSVideoPlaybackFirstFrameVideoPlaybackScenario *replay __attribute__((swift_name("replay")));
+ (MEGAAOSKotlinArray<MEGAAOSVideoPlaybackFirstFrameVideoPlaybackScenario *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSVideoPlaybackFirstFrameVideoPlaybackScenario *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackFirstFrameNewVP")))
@interface MEGAAOSVideoPlaybackFirstFrameNewVP : MEGAAOSBase
- (instancetype)initWithTime:(int32_t)time scenario:(MEGAAOSVideoPlaybackFirstFrameNewVPVideoPlaybackScenario *)scenario commonMap:(NSString *)commonMap __attribute__((swift_name("init(time:scenario:commonMap:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *commonMap __attribute__((swift_name("commonMap")));
@property (readonly) MEGAAOSVideoPlaybackFirstFrameNewVPVideoPlaybackScenario *scenario __attribute__((swift_name("scenario")));
@property (readonly) int32_t time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackFirstFrameNewVP.VideoPlaybackScenario")))
@interface MEGAAOSVideoPlaybackFirstFrameNewVPVideoPlaybackScenario : MEGAAOSKotlinEnum<MEGAAOSVideoPlaybackFirstFrameNewVPVideoPlaybackScenario *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSVideoPlaybackFirstFrameNewVPVideoPlaybackScenario *manualclick __attribute__((swift_name("manualclick")));
@property (class, readonly) MEGAAOSVideoPlaybackFirstFrameNewVPVideoPlaybackScenario *resume __attribute__((swift_name("resume")));
@property (class, readonly) MEGAAOSVideoPlaybackFirstFrameNewVPVideoPlaybackScenario *replay __attribute__((swift_name("replay")));
+ (MEGAAOSKotlinArray<MEGAAOSVideoPlaybackFirstFrameNewVPVideoPlaybackScenario *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSVideoPlaybackFirstFrameNewVPVideoPlaybackScenario *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("VideoPlaybackMkvStarted")))
@protocol MEGAAOSVideoPlaybackMkvStarted
@required
@end

__attribute__((swift_name("VideoPlaybackMovStarted")))
@protocol MEGAAOSVideoPlaybackMovStarted
@required
@end

__attribute__((swift_name("VideoPlaybackMp4Started")))
@protocol MEGAAOSVideoPlaybackMp4Started
@required
@end

__attribute__((swift_name("VideoPlaybackOtherStarted")))
@protocol MEGAAOSVideoPlaybackOtherStarted
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackRecord")))
@interface MEGAAOSVideoPlaybackRecord : MEGAAOSBase
- (instancetype)initWithDuration:(int32_t)duration __attribute__((swift_name("init(duration:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t duration __attribute__((swift_name("duration")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackRecordNewVP")))
@interface MEGAAOSVideoPlaybackRecordNewVP : MEGAAOSBase
- (instancetype)initWithDuration:(int32_t)duration __attribute__((swift_name("init(duration:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t duration __attribute__((swift_name("duration")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackStall")))
@interface MEGAAOSVideoPlaybackStall : MEGAAOSBase
- (instancetype)initWithTime:(int32_t)time scenario:(MEGAAOSVideoPlaybackStallVideoPlaybackScenario *)scenario commonMap:(NSString *)commonMap __attribute__((swift_name("init(time:scenario:commonMap:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *commonMap __attribute__((swift_name("commonMap")));
@property (readonly) MEGAAOSVideoPlaybackStallVideoPlaybackScenario *scenario __attribute__((swift_name("scenario")));
@property (readonly) int32_t time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackStall.VideoPlaybackScenario")))
@interface MEGAAOSVideoPlaybackStallVideoPlaybackScenario : MEGAAOSKotlinEnum<MEGAAOSVideoPlaybackStallVideoPlaybackScenario *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSVideoPlaybackStallVideoPlaybackScenario *manualclick __attribute__((swift_name("manualclick")));
@property (class, readonly) MEGAAOSVideoPlaybackStallVideoPlaybackScenario *resume __attribute__((swift_name("resume")));
@property (class, readonly) MEGAAOSVideoPlaybackStallVideoPlaybackScenario *replay __attribute__((swift_name("replay")));
+ (MEGAAOSKotlinArray<MEGAAOSVideoPlaybackStallVideoPlaybackScenario *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSVideoPlaybackStallVideoPlaybackScenario *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackStallNewVP")))
@interface MEGAAOSVideoPlaybackStallNewVP : MEGAAOSBase
- (instancetype)initWithTime:(int32_t)time scenario:(MEGAAOSVideoPlaybackStallNewVPVideoPlaybackScenario *)scenario commonMap:(NSString *)commonMap __attribute__((swift_name("init(time:scenario:commonMap:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *commonMap __attribute__((swift_name("commonMap")));
@property (readonly) MEGAAOSVideoPlaybackStallNewVPVideoPlaybackScenario *scenario __attribute__((swift_name("scenario")));
@property (readonly) int32_t time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackStallNewVP.VideoPlaybackScenario")))
@interface MEGAAOSVideoPlaybackStallNewVPVideoPlaybackScenario : MEGAAOSKotlinEnum<MEGAAOSVideoPlaybackStallNewVPVideoPlaybackScenario *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSVideoPlaybackStallNewVPVideoPlaybackScenario *manualclick __attribute__((swift_name("manualclick")));
@property (class, readonly) MEGAAOSVideoPlaybackStallNewVPVideoPlaybackScenario *resume __attribute__((swift_name("resume")));
@property (class, readonly) MEGAAOSVideoPlaybackStallNewVPVideoPlaybackScenario *replay __attribute__((swift_name("replay")));
+ (MEGAAOSKotlinArray<MEGAAOSVideoPlaybackStallNewVPVideoPlaybackScenario *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSVideoPlaybackStallNewVPVideoPlaybackScenario *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackStartupFailure")))
@interface MEGAAOSVideoPlaybackStartupFailure : MEGAAOSBase
- (instancetype)initWithScenario:(MEGAAOSVideoPlaybackStartupFailureVideoPlaybackScenario *)scenario commonMap:(NSString *)commonMap __attribute__((swift_name("init(scenario:commonMap:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *commonMap __attribute__((swift_name("commonMap")));
@property (readonly) MEGAAOSVideoPlaybackStartupFailureVideoPlaybackScenario *scenario __attribute__((swift_name("scenario")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackStartupFailure.VideoPlaybackScenario")))
@interface MEGAAOSVideoPlaybackStartupFailureVideoPlaybackScenario : MEGAAOSKotlinEnum<MEGAAOSVideoPlaybackStartupFailureVideoPlaybackScenario *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSVideoPlaybackStartupFailureVideoPlaybackScenario *manualclick __attribute__((swift_name("manualclick")));
@property (class, readonly) MEGAAOSVideoPlaybackStartupFailureVideoPlaybackScenario *resume __attribute__((swift_name("resume")));
@property (class, readonly) MEGAAOSVideoPlaybackStartupFailureVideoPlaybackScenario *replay __attribute__((swift_name("replay")));
+ (MEGAAOSKotlinArray<MEGAAOSVideoPlaybackStartupFailureVideoPlaybackScenario *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSVideoPlaybackStartupFailureVideoPlaybackScenario *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackStartupFailureNewVP")))
@interface MEGAAOSVideoPlaybackStartupFailureNewVP : MEGAAOSBase
- (instancetype)initWithScenario:(MEGAAOSVideoPlaybackStartupFailureNewVPVideoPlaybackScenario *)scenario commonMap:(NSString *)commonMap __attribute__((swift_name("init(scenario:commonMap:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *commonMap __attribute__((swift_name("commonMap")));
@property (readonly) MEGAAOSVideoPlaybackStartupFailureNewVPVideoPlaybackScenario *scenario __attribute__((swift_name("scenario")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackStartupFailureNewVP.VideoPlaybackScenario")))
@interface MEGAAOSVideoPlaybackStartupFailureNewVPVideoPlaybackScenario : MEGAAOSKotlinEnum<MEGAAOSVideoPlaybackStartupFailureNewVPVideoPlaybackScenario *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSVideoPlaybackStartupFailureNewVPVideoPlaybackScenario *manualclick __attribute__((swift_name("manualclick")));
@property (class, readonly) MEGAAOSVideoPlaybackStartupFailureNewVPVideoPlaybackScenario *resume __attribute__((swift_name("resume")));
@property (class, readonly) MEGAAOSVideoPlaybackStartupFailureNewVPVideoPlaybackScenario *replay __attribute__((swift_name("replay")));
+ (MEGAAOSKotlinArray<MEGAAOSVideoPlaybackStartupFailureNewVPVideoPlaybackScenario *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSVideoPlaybackStartupFailureNewVPVideoPlaybackScenario *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlaybackStartupFailureReasonNewVP")))
@interface MEGAAOSVideoPlaybackStartupFailureReasonNewVP : MEGAAOSBase
- (instancetype)initWithErrCode:(int32_t)errCode reason:(NSString *)reason __attribute__((swift_name("init(errCode:reason:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t errCode __attribute__((swift_name("errCode")));
@property (readonly) NSString *reason __attribute__((swift_name("reason")));
@end

__attribute__((swift_name("VideoPlayerBrightnessSwipe")))
@protocol MEGAAOSVideoPlayerBrightnessSwipe
@required
@end

__attribute__((swift_name("VideoPlayerDoubleTapSeekBackward")))
@protocol MEGAAOSVideoPlayerDoubleTapSeekBackward
@required
@end

__attribute__((swift_name("VideoPlayerDoubleTapSeekForward")))
@protocol MEGAAOSVideoPlayerDoubleTapSeekForward
@required
@end

__attribute__((swift_name("VideoPlayerFullScreenPressed")))
@protocol MEGAAOSVideoPlayerFullScreenPressed
@required
@end

__attribute__((swift_name("VideoPlayerGetLinkMenuToolbar")))
@protocol MEGAAOSVideoPlayerGetLinkMenuToolbar
@required
@end

__attribute__((swift_name("VideoPlayerHideNodeMenuItem")))
@protocol MEGAAOSVideoPlayerHideNodeMenuItem
@required
@end

__attribute__((swift_name("VideoPlayerInfoMenuItem")))
@protocol MEGAAOSVideoPlayerInfoMenuItem
@required
@end

__attribute__((swift_name("VideoPlayerIsActivated")))
@protocol MEGAAOSVideoPlayerIsActivated
@required
@end

__attribute__((swift_name("VideoPlayerLongPressSpeed")))
@protocol MEGAAOSVideoPlayerLongPressSpeed
@required
@end

__attribute__((swift_name("VideoPlayerOriginalPressed")))
@protocol MEGAAOSVideoPlayerOriginalPressed
@required
@end

__attribute__((swift_name("VideoPlayerPictureInPicturePressed")))
@protocol MEGAAOSVideoPlayerPictureInPicturePressed
@required
@end

__attribute__((swift_name("VideoPlayerPinchToZoom")))
@protocol MEGAAOSVideoPlayerPinchToZoom
@required
@end

__attribute__((swift_name("VideoPlayerRemoveLinkMenuToolbar")))
@protocol MEGAAOSVideoPlayerRemoveLinkMenuToolbar
@required
@end

__attribute__((swift_name("VideoPlayerRotateToLandscapePressed")))
@protocol MEGAAOSVideoPlayerRotateToLandscapePressed
@required
@end

__attribute__((swift_name("VideoPlayerRotateToPortraitPressed")))
@protocol MEGAAOSVideoPlayerRotateToPortraitPressed
@required
@end

__attribute__((swift_name("VideoPlayerSaveToDeviceMenuToolbar")))
@protocol MEGAAOSVideoPlayerSaveToDeviceMenuToolbar
@required
@end

__attribute__((swift_name("VideoPlayerScreen")))
@protocol MEGAAOSVideoPlayerScreen
@required
@end

__attribute__((swift_name("VideoPlayerSendToChatMenuToolbar")))
@protocol MEGAAOSVideoPlayerSendToChatMenuToolbar
@required
@end

__attribute__((swift_name("VideoPlayerShareMenuToolbar")))
@protocol MEGAAOSVideoPlayerShareMenuToolbar
@required
@end

__attribute__((swift_name("VideoPlayerVolumeSwipe")))
@protocol MEGAAOSVideoPlayerVolumeSwipe
@required
@end

__attribute__((swift_name("VideoPlayerZoomToFill")))
@protocol MEGAAOSVideoPlayerZoomToFill
@required
@end

__attribute__((swift_name("VideoPlayerZoomToFit")))
@protocol MEGAAOSVideoPlayerZoomToFit
@required
@end

__attribute__((swift_name("VideoPlaylistCreationButtonPressed")))
@protocol MEGAAOSVideoPlaylistCreationButtonPressed
@required
@end

__attribute__((swift_name("VideoQualityHigh")))
@protocol MEGAAOSVideoQualityHigh
@required
@end

__attribute__((swift_name("VideoQualityLow")))
@protocol MEGAAOSVideoQualityLow
@required
@end

__attribute__((swift_name("VideoQualityMedium")))
@protocol MEGAAOSVideoQualityMedium
@required
@end

__attribute__((swift_name("VideoQualityOriginal")))
@protocol MEGAAOSVideoQualityOriginal
@required
@end

__attribute__((swift_name("VideoSectionSearchButtonPressed")))
@protocol MEGAAOSVideoSectionSearchButtonPressed
@required
@end

__attribute__((swift_name("VideoSpeedOptionPressed_0_25X")))
@protocol MEGAAOSVideoSpeedOptionPressed_0_25X
@required
@end

__attribute__((swift_name("VideoSpeedOptionPressed_0_75X")))
@protocol MEGAAOSVideoSpeedOptionPressed_0_75X
@required
@end

__attribute__((swift_name("VideoSpeedOptionPressed_1X")))
@protocol MEGAAOSVideoSpeedOptionPressed_1X
@required
@end

__attribute__((swift_name("VideoSpeedOptionPressed_1_25X")))
@protocol MEGAAOSVideoSpeedOptionPressed_1_25X
@required
@end

__attribute__((swift_name("VideoSpeedOptionPressed_1_75X")))
@protocol MEGAAOSVideoSpeedOptionPressed_1_75X
@required
@end

__attribute__((swift_name("VideoUploadsDisabled")))
@protocol MEGAAOSVideoUploadsDisabled
@required
@end

__attribute__((swift_name("VideoUploadsEnabled")))
@protocol MEGAAOSVideoUploadsEnabled
@required
@end

__attribute__((swift_name("VideosChipButtonPressed")))
@protocol MEGAAOSVideosChipButtonPressed
@required
@end

__attribute__((swift_name("VideosScreenBackNavigation")))
@protocol MEGAAOSVideosScreenBackNavigation
@required
@end

__attribute__((swift_name("ViewModeButtonPressed")))
@protocol MEGAAOSViewModeButtonPressed
@required
@end

__attribute__((swift_name("ViewModeGalleryMenuItem")))
@protocol MEGAAOSViewModeGalleryMenuItem
@required
@end

__attribute__((swift_name("ViewModeGridMenuItem")))
@protocol MEGAAOSViewModeGridMenuItem
@required
@end

__attribute__((swift_name("ViewModeListMenuItem")))
@protocol MEGAAOSViewModeListMenuItem
@required
@end

__attribute__((swift_name("ViewPasswordButtonPressed")))
@protocol MEGAAOSViewPasswordButtonPressed
@required
@end

__attribute__((swift_name("VpnBannerCloseButtonPressed")))
@protocol MEGAAOSVpnBannerCloseButtonPressed
@required
@end

__attribute__((swift_name("VpnSmartBannerItemSelected")))
@protocol MEGAAOSVpnSmartBannerItemSelected
@required
@end

__attribute__((swift_name("VpnSplitTunnellingDisableSelectedApps")))
@protocol MEGAAOSVpnSplitTunnellingDisableSelectedApps
@required
@end

__attribute__((swift_name("VpnSplitTunnellingEnableAllApps")))
@protocol MEGAAOSVpnSplitTunnellingEnableAllApps
@required
@end

__attribute__((swift_name("VpnSplitTunnellingEnableSelectedApps")))
@protocol MEGAAOSVpnSplitTunnellingEnableSelectedApps
@required
@end

__attribute__((swift_name("WaitingRoomEnableButton")))
@protocol MEGAAOSWaitingRoomEnableButton
@required
@end

__attribute__((swift_name("WaitingRoomLeaveButton")))
@protocol MEGAAOSWaitingRoomLeaveButton
@required
@end

__attribute__((swift_name("WaitingRoomTimeout")))
@protocol MEGAAOSWaitingRoomTimeout
@required
@end

__attribute__((swift_name("WidgetConnectVPNButtonPressed")))
@protocol MEGAAOSWidgetConnectVPNButtonPressed
@required
@end

__attribute__((swift_name("WidgetDisconnectVPNButtonPressed")))
@protocol MEGAAOSWidgetDisconnectVPNButtonPressed
@required
@end


/**
 * Event sender
 */
__attribute__((swift_name("EventSender")))
@protocol MEGAAOSEventSender
@required

/**
 * Send event
 *
 * @param eventId
 * @param message
 * @param viewId
 */
- (void)sendEventEventId:(int32_t)eventId message:(NSString *)message viewId:(NSString * _Nullable)viewId __attribute__((swift_name("sendEvent(eventId:message:viewId:)")));
@end


/**
 * View id provider
 */
__attribute__((swift_name("ViewIdProvider")))
@protocol MEGAAOSViewIdProvider
@required

/**
 * Get view identifier
 *
 * @return
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getViewIdentifierWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getViewIdentifier(completionHandler:)")));
@end


/**
 * Tracker
 *
 * @property eventSender
 *
 * @param viewIdProvider
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tracker")))
@interface MEGAAOSTracker : MEGAAOSBase
- (instancetype)initWithViewIdProvider:(id<MEGAAOSViewIdProvider>)viewIdProvider appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier eventSender:(id<MEGAAOSEventSender>)eventSender __attribute__((swift_name("init(viewIdProvider:appIdentifier:eventSender:)"))) __attribute__((objc_designated_initializer));

/**
 * Track event
 *
 * @param eventIdentifier
 */
- (void)trackEventEventIdentifier:(id<MEGAAOSEventIdentifier>)eventIdentifier __attribute__((swift_name("trackEvent(eventIdentifier:)")));
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

/**
 * Returns serializer for [Boolean] with [descriptor][SerialDescriptor] of [PrimitiveKind.BOOLEAN] kind.
 */
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

/**
 * Returns serializer for [Byte] with [descriptor][SerialDescriptor] of [PrimitiveKind.BYTE] kind.
 */
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
/* Stripped for KT-43094: __attribute__((swift_name("KotlinChar.Companion"))) */
@interface MEGAAOSKotlinCharCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinCharCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
@property (readonly) int32_t MAX_CODE_POINT __attribute__((swift_name("MAX_CODE_POINT")));
@property (readonly) unichar MAX_HIGH_SURROGATE __attribute__((swift_name("MAX_HIGH_SURROGATE")));
@property (readonly) unichar MAX_LOW_SURROGATE __attribute__((swift_name("MAX_LOW_SURROGATE")));

/**
 * @note annotations
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.9", errorSince="2.1")
*/
@property (readonly) int32_t MAX_RADIX __attribute__((swift_name("MAX_RADIX"))) __attribute__((unavailable("Introduce your own constant with the value of `36")));
@property (readonly) unichar MAX_SURROGATE __attribute__((swift_name("MAX_SURROGATE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) unichar MAX_VALUE __attribute__((swift_name("MAX_VALUE")));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
@property (readonly) int32_t MIN_CODE_POINT __attribute__((swift_name("MIN_CODE_POINT")));
@property (readonly) unichar MIN_HIGH_SURROGATE __attribute__((swift_name("MIN_HIGH_SURROGATE")));
@property (readonly) unichar MIN_LOW_SURROGATE __attribute__((swift_name("MIN_LOW_SURROGATE")));

/**
 * @note annotations
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.9", errorSince="2.1")
*/
@property (readonly) int32_t MIN_RADIX __attribute__((swift_name("MIN_RADIX"))) __attribute__((unavailable("Introduce your own constant with the value of `2`")));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
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

/**
 * Returns serializer for [Char] with [descriptor][SerialDescriptor] of [PrimitiveKind.CHAR] kind.
 */
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

/**
 * Returns serializer for [Double] with [descriptor][SerialDescriptor] of [PrimitiveKind.DOUBLE] kind.
 */
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

/**
 * Returns serializer for [Float] with [descriptor][SerialDescriptor] of [PrimitiveKind.FLOAT] kind.
 */
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

/**
 * Returns serializer for [Int] with [descriptor][SerialDescriptor] of [PrimitiveKind.INT] kind.
 */
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

/**
 * Returns serializer for [Long] with [descriptor][SerialDescriptor] of [PrimitiveKind.LONG] kind.
 */
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

/**
 * Returns serializer for [Short] with [descriptor][SerialDescriptor] of [PrimitiveKind.SHORT] kind.
 */
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
/* Stripped for KT-43094: __attribute__((swift_name("KotlinString.Companion"))) */
@interface MEGAAOSKotlinStringCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinStringCompanion *shared __attribute__((swift_name("shared")));
@end

@interface MEGAAOSKotlinStringCompanion (Extensions)

/**
 * Returns serializer for [String] with [descriptor][SerialDescriptor] of [PrimitiveKind.STRING] kind.
 */
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

/**
 * Returns serializer for [UByte].
 */
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

/**
 * Returns serializer for [UInt].
 */
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

/**
 * Returns serializer for [ULong].
 */
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

/**
 * Returns serializer for [UShort].
 */
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

/**
 * Returns serializer for [Unit] with [descriptor][SerialDescriptor] of [StructureKind.OBJECT] kind.
 */
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
/* Stripped for KT-43094: __attribute__((swift_name("KotlinDuration.Companion"))) */
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
- (int64_t)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
- (int64_t)parseIsoStringValue:(NSString *)value __attribute__((swift_name("parseIsoString(value:)")));
- (id _Nullable)parseIsoStringOrNullValue:(NSString *)value __attribute__((swift_name("parseIsoStringOrNull(value:)")));
- (id _Nullable)parseOrNullValue:(NSString *)value __attribute__((swift_name("parseOrNull(value:)")));
@property (readonly) int64_t INFINITE __attribute__((swift_name("INFINITE")));
@property (readonly) int64_t ZERO __attribute__((swift_name("ZERO")));
@end

@interface MEGAAOSKotlinDurationCompanion (Extensions)

/**
 * Returns serializer for [Duration].
 * It is serialized as a string that represents a duration in the format used by [Duration.toIsoString],
 * that is, the ISO-8601-2 format.
 *
 * For deserialization, [Duration.parseIsoString] is used.
 *
 * @see Duration.toIsoString
 * @see Duration.parseIsoString
 */
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinInstant.Companion")))
@interface MEGAAOSKotlinInstantCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinInstantCompanion *shared __attribute__((swift_name("shared")));
- (MEGAAOSKotlinInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (MEGAAOSKotlinInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (MEGAAOSKotlinInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (MEGAAOSKotlinInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (MEGAAOSKotlinInstant *)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (MEGAAOSKotlinInstant * _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@property (readonly) MEGAAOSKotlinInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) MEGAAOSKotlinInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

@interface MEGAAOSKotlinInstantCompanion (Extensions)

/**
 * Returns serializer for [Instant].
 * It is serialized as a string that represents an instant in the format used by [Instant.toString]
 * and described in ISO-8601-1:2019, 5.4.2.1b).
 *
 * Deserialization is case-insensitive.
 * More details can be found in the documentation of [Instant.toString] and [Instant.parse] functions.
 *
 * @see Instant.toString
 * @see Instant.parse
 *
 * @note annotations
 *   kotlin.time.ExperimentalTime
*/
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUuid.Companion")))
@interface MEGAAOSKotlinUuidCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinUuidCompanion *shared __attribute__((swift_name("shared")));
- (MEGAAOSKotlinUuid *)fromByteArrayByteArray:(MEGAAOSKotlinByteArray *)byteArray __attribute__((swift_name("fromByteArray(byteArray:)")));
- (MEGAAOSKotlinUuid *)fromLongsMostSignificantBits:(int64_t)mostSignificantBits leastSignificantBits:(int64_t)leastSignificantBits __attribute__((swift_name("fromLongs(mostSignificantBits:leastSignificantBits:)")));

/**
 * @note annotations
 *   kotlin.ExperimentalUnsignedTypes
*/
- (MEGAAOSKotlinUuid *)fromUByteArrayUbyteArray:(id)ubyteArray __attribute__((swift_name("fromUByteArray(ubyteArray:)")));
- (MEGAAOSKotlinUuid *)fromULongsMostSignificantBits:(uint64_t)mostSignificantBits leastSignificantBits:(uint64_t)leastSignificantBits __attribute__((swift_name("fromULongs(mostSignificantBits:leastSignificantBits:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.3")
 *   kotlin.uuid.ExperimentalUuidApi
*/
- (MEGAAOSKotlinUuid *)generateV4 __attribute__((swift_name("generateV4()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.3")
 *   kotlin.uuid.ExperimentalUuidApi
*/
- (MEGAAOSKotlinUuid *)generateV7 __attribute__((swift_name("generateV7()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.3")
 *   kotlin.uuid.ExperimentalUuidApi
*/
- (MEGAAOSKotlinUuid *)generateV7NonMonotonicAtTimestamp:(MEGAAOSKotlinInstant *)timestamp __attribute__((swift_name("generateV7NonMonotonicAt(timestamp:)")));
- (MEGAAOSKotlinUuid *)parseUuidString:(NSString *)uuidString __attribute__((swift_name("parse(uuidString:)")));
- (MEGAAOSKotlinUuid *)parseHexHexString:(NSString *)hexString __attribute__((swift_name("parseHex(hexString:)")));
- (MEGAAOSKotlinUuid *)parseHexDashHexDashString:(NSString *)hexDashString __attribute__((swift_name("parseHexDash(hexDashString:)")));
- (MEGAAOSKotlinUuid * _Nullable)parseHexDashOrNullHexDashString:(NSString *)hexDashString __attribute__((swift_name("parseHexDashOrNull(hexDashString:)")));
- (MEGAAOSKotlinUuid * _Nullable)parseHexOrNullHexString:(NSString *)hexString __attribute__((swift_name("parseHexOrNull(hexString:)")));
- (MEGAAOSKotlinUuid * _Nullable)parseOrNullUuidString:(NSString *)uuidString __attribute__((swift_name("parseOrNull(uuidString:)")));
- (MEGAAOSKotlinUuid *)random __attribute__((swift_name("random()")));

/**
 * @note annotations
 *   kotlin.uuid.ExperimentalUuidApi
 *   kotlin.DeprecatedSinceKotlin(warningSince="2.1", errorSince="2.4")
*/
@property (readonly) id<MEGAAOSKotlinComparator> LEXICAL_ORDER __attribute__((swift_name("LEXICAL_ORDER"))) __attribute__((unavailable("Use naturalOrder<Uuid>() instead")));
@property (readonly) MEGAAOSKotlinUuid *NIL __attribute__((swift_name("NIL")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinUuidCompanion (Extensions)

/**
 * Returns serializer for [Uuid].
 * Serializer operates with a standard UUID string representation, also known as "hex-and-dash" format —
 * [RFC 9562 section 4](https://www.rfc-editor.org/rfc/rfc9562.html#section-4).
 *
 * Serialization always produces lowercase string, deserialization is case-insensitive.
 * More details can be found in the documentation of [Uuid.toString] and [Uuid.parse] functions.
 *
 * @see Uuid.toString
 * @see Uuid.parse
 *
 * @note annotations
 *   kotlin.uuid.ExperimentalUuidApi
*/
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

@interface MEGAAOSClassSerialDescriptorBuilder (Extensions)

/**
 * A reified version of [element] function that
 * extract descriptor using `serializer<T>().descriptor` call with all the restrictions of `serializer<T>().descriptor`.
 */
- (void)elementElementName:(NSString *)elementName annotations:(NSArray<id<MEGAAOSKotlinAnnotation>> *)annotations isOptional:(BOOL)isOptional __attribute__((swift_name("element(elementName:annotations:isOptional:)")));
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

@interface MEGAAOSJson (Extensions)

/**
 * Deserializes the given [json] element into a value of type [T] using a deserializer retrieved
 * from reified type parameter.
 *
 * @throws [SerializationException] if the given JSON element is not a valid JSON input for the type [T]
 * @throws [IllegalArgumentException] if the decoded input cannot be represented as a valid instance of type [T]
 */
- (id _Nullable)decodeFromJsonElementJson:(MEGAAOSJsonElement *)json __attribute__((swift_name("decodeFromJsonElement(json:)")));

/**
 * Serializes the given [value] into an equivalent [JsonElement] using a serializer retrieved
 * from reified type parameter.
 *
 * @throws [SerializationException] if the given value cannot be serialized to JSON.
 */
- (MEGAAOSJsonElement *)encodeToJsonElementValue:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(value:)")));
@end

@interface MEGAAOSJsonArrayBuilder (Extensions)

/**
 * Adds the given boolean [value] to a resulting JSON array.
 *
 * Always returns `true` similarly to [ArrayList] specification.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (BOOL)addValue:(MEGAAOSBoolean * _Nullable)value __attribute__((swift_name("add(value:)")));

/**
 * Adds `null` to a resulting JSON array.
 *
 * Always returns `true` similarly to [ArrayList] specification.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (BOOL)addValue_:(MEGAAOSKotlinNothing * _Nullable)value __attribute__((swift_name("add(value_:)")));

/**
 * Adds the given numeric [value] to a resulting JSON array.
 *
 * Always returns `true` similarly to [ArrayList] specification.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (BOOL)addValue__:(id _Nullable)value __attribute__((swift_name("add(value__:)")));

/**
 * Adds the given string [value] to a resulting JSON array.
 *
 * Always returns `true` similarly to [ArrayList] specification.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (BOOL)addValue___:(NSString * _Nullable)value __attribute__((swift_name("add(value___:)")));

/**
 * Adds the given boolean [values] to a resulting JSON array.
 *
 * @return `true` if the list was changed as the result of the operation.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addAllValues:(id)values __attribute__((swift_name("addAll(values:)")));

/**
 * Adds the given numeric [values] to a resulting JSON array.
 *
 * @return `true` if the list was changed as the result of the operation.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addAllValues_:(id)values __attribute__((swift_name("addAll(values_:)")));

/**
 * Adds the given string [values] to a resulting JSON array.
 *
 * @return `true` if the list was changed as the result of the operation.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addAllValues__:(id)values __attribute__((swift_name("addAll(values__:)")));

/**
 * Adds the [JSON array][JsonArray] produced by the [builderAction] function to a resulting JSON array.
 *
 * Always returns `true` similarly to [ArrayList] specification.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (BOOL)addJsonArrayBuilderAction:(void (^)(MEGAAOSJsonArrayBuilder *))builderAction __attribute__((swift_name("addJsonArray(builderAction:)")));

/**
 * Adds the [JSON object][JsonObject] produced by the [builderAction] function to a resulting JSON array.
 *
 * Always returns `true` similarly to [ArrayList] specification.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (BOOL)addJsonObjectBuilderAction:(void (^)(MEGAAOSJsonObjectBuilder *))builderAction __attribute__((swift_name("addJsonObject(builderAction:)")));
@end

@interface MEGAAOSJsonElement (Extensions)

/**
 * Convenience method to get current element as [JsonArray]
 * @throws IllegalArgumentException if current element is not a [JsonArray]
 */
@property (readonly) NSArray<MEGAAOSJsonElement *> *jsonArray __attribute__((swift_name("jsonArray")));

/**
 * Convenience method to get current element as [JsonNull]
 * @throws IllegalArgumentException if current element is not a [JsonNull]
 */
@property (readonly) MEGAAOSJsonNull *jsonNull __attribute__((swift_name("jsonNull")));

/**
 * Convenience method to get current element as [JsonObject]
 * @throws IllegalArgumentException if current element is not a [JsonObject]
 */
@property (readonly) NSDictionary<NSString *, MEGAAOSJsonElement *> *jsonObject __attribute__((swift_name("jsonObject")));

/**
 * Convenience method to get current element as [JsonPrimitive]
 * @throws IllegalArgumentException if current element is not a [JsonPrimitive]
 */
@property (readonly) MEGAAOSJsonPrimitive *jsonPrimitive __attribute__((swift_name("jsonPrimitive")));
@end

@interface MEGAAOSJsonObjectBuilder (Extensions)

/**
 * Add the given boolean [value] to a resulting JSON object using the given [key].
 *
 * Returns the previous value associated with [key], or `null` if the key was not present.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key value:(MEGAAOSBoolean * _Nullable)value __attribute__((swift_name("put(key:value:)")));

/**
 * Add `null` to a resulting JSON object using the given [key].
 *
 * Returns the previous value associated with [key], or `null` if the key was not present.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key value_:(MEGAAOSKotlinNothing * _Nullable)value __attribute__((swift_name("put(key:value_:)")));

/**
 * Add the given numeric [value] to a resulting JSON object using the given [key].
 *
 * Returns the previous value associated with [key], or `null` if the key was not present.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key value__:(id _Nullable)value __attribute__((swift_name("put(key:value__:)")));

/**
 * Add the given string [value] to a resulting JSON object using the given [key].
 *
 * Returns the previous value associated with [key], or `null` if the key was not present.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key value___:(NSString * _Nullable)value __attribute__((swift_name("put(key:value___:)")));

/**
 * Add the [JSON array][JsonArray] produced by the [builderAction] function to a resulting JSON object using the given [key].
 *
 * Returns the previous value associated with [key], or `null` if the key was not present.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (MEGAAOSJsonElement * _Nullable)putJsonArrayKey:(NSString *)key builderAction:(void (^)(MEGAAOSJsonArrayBuilder *))builderAction __attribute__((swift_name("putJsonArray(key:builderAction:)")));

/**
 * Add the [JSON object][JsonObject] produced by the [builderAction] function to a resulting JSON object using the given [key].
 *
 * Returns the previous value associated with [key], or `null` if the key was not present.
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (MEGAAOSJsonElement * _Nullable)putJsonObjectKey:(NSString *)key builderAction:(void (^)(MEGAAOSJsonObjectBuilder *))builderAction __attribute__((swift_name("putJsonObject(key:builderAction:)")));
@end

@interface MEGAAOSJsonPrimitive (Extensions)

/**
 * Returns content of current element as boolean
 * @throws IllegalStateException if current element doesn't represent boolean
 */
@property (readonly) BOOL boolean __attribute__((swift_name("boolean")));

/**
 * Returns content of current element as boolean or `null` if current element is not a valid representation of boolean
 */
@property (readonly) MEGAAOSBoolean * _Nullable booleanOrNull __attribute__((swift_name("booleanOrNull")));

/**
 * Content of the given element without quotes or `null` if current element is [JsonNull]
 */
@property (readonly) NSString * _Nullable contentOrNull __attribute__((swift_name("contentOrNull")));

/**
 * Returns content of current element as double
 * @throws NumberFormatException if current element is not a valid representation of number
 */
@property (readonly, getter=double) double double_ __attribute__((swift_name("double_")));

/**
 * Returns content of current element as double or `null` if current element is not a valid representation of number
 */
@property (readonly) MEGAAOSDouble * _Nullable doubleOrNull __attribute__((swift_name("doubleOrNull")));

/**
 * Returns content of current element as float
 * @throws NumberFormatException if current element is not a valid representation of number
 */
@property (readonly, getter=float) float float_ __attribute__((swift_name("float_")));

/**
 * Returns content of current element as float or `null` if current element is not a valid representation of number
 */
@property (readonly) MEGAAOSFloat * _Nullable floatOrNull __attribute__((swift_name("floatOrNull")));

/**
 * Returns content of the current element as int
 * @throws NumberFormatException if current element is not a valid representation of number
 */
@property (readonly, getter=int) int32_t int_ __attribute__((swift_name("int_")));

/**
 * Returns content of the current element as int or `null` if current element is not a valid representation of number
 */
@property (readonly) MEGAAOSInt * _Nullable intOrNull __attribute__((swift_name("intOrNull")));

/**
 * Returns content of current element as long
 * @throws NumberFormatException if current element is not a valid representation of number
 */
@property (readonly, getter=long) int64_t long_ __attribute__((swift_name("long_")));

/**
 * Returns content of current element as long or `null` if current element is not a valid representation of number
 */
@property (readonly) MEGAAOSLong * _Nullable longOrNull __attribute__((swift_name("longOrNull")));
@end

@interface MEGAAOSPolymorphicModuleBuilder (Extensions)

/**
 * Registers a serializer for class [T] in the resulting module under the [base class][Base].
 */
- (void)subclassClazz:(id<MEGAAOSKotlinKClass>)clazz __attribute__((swift_name("subclass(clazz:)")));

/**
 * Registers a [subclass] [serializer] in the resulting module under the [base class][Base].
 */
- (void)subclassSerializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("subclass(serializer:)")));

/**
 * Registers the child serializers for the sealed class [T] in the resulting module under the [base class][Base].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)subclassesOfSealed_ __attribute__((swift_name("subclassesOfSealed_()")));
@end

@interface MEGAAOSSerializersModule (Extensions)

/**
 * Looks up a descriptor of serializer registered for contextual serialization in [this],
 * using [SerialDescriptor.capturedKClass] as a key.
 *
 * @see SerializersModuleBuilder.contextual
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSSerialDescriptor> _Nullable)getContextualDescriptorDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("getContextualDescriptor(descriptor:)")));

/**
 * Retrieves a collection of descriptors which serializers are registered for polymorphic serialization in [this]
 * with base class equal to [descriptor]'s [SerialDescriptor.capturedKClass].
 * This method does not retrieve serializers registered with [PolymorphicModuleBuilder.defaultDeserializer].
 *
 * @see SerializersModule.getPolymorphic
 * @see SerializersModuleBuilder.polymorphic
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MEGAAOSSerialDescriptor>> *)getPolymorphicDescriptorsDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("getPolymorphicDescriptors(descriptor:)")));

/**
 * Returns a combination of two serial modules
 *
 * If serializer for some class presents in both modules, result module
 * will contain serializer from [other] module.
 */
- (MEGAAOSSerializersModule *)overwriteWithOther:(MEGAAOSSerializersModule *)other __attribute__((swift_name("overwriteWith(other:)")));

/**
 * Returns a combination of two serial modules
 *
 * If serializer for some class presents in both modules, a [SerializerAlreadyRegisteredException] is thrown.
 * To overwrite serializers, use [SerializersModule.overwriteWith] function.
 */
- (MEGAAOSSerializersModule *)plusOther:(MEGAAOSSerializersModule *)other __attribute__((swift_name("plus(other:)")));

/**
 * Retrieves default serializer for the given type [T] and,
 * if [T] is not serializable, fallbacks to [contextual][SerializersModule.getContextual] lookup.
 *
 * This overload works with full type information, including type arguments and nullability,
 * and is a recommended way to retrieve a serializer.
 * For example, `serializer<List<String?>>()` returns [KSerializer] that is able
 * to serialize and deserialize a list of nullable strings — i.e. `ListSerializer(String.serializer().nullable)`.
 *
 * Variance of [T]'s type arguments is not used by the serialization and is not taken into account.
 * Star projections in [T]'s type arguments are prohibited.
 *
 * @throws SerializationException if serializer cannot be created (provided [T] or its type argument is not serializable).
 * @throws IllegalArgumentException if any of [T]'s type arguments contains star projection
 */
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Retrieves default serializer for the given [type] and,
 * if [type] is not serializable, fallbacks to [contextual][SerializersModule.getContextual] lookup.
 * [type] argument is usually obtained with [typeOf] method.
 *
 * This overload works with full type information, including type arguments and nullability,
 * and is a recommended way to retrieve a serializer.
 * For example, `serializer(typeOf<List<String?>>())` returns [KSerializer] that is able
 * to serialize and deserialize a list of nullable strings — i.e. `ListSerializer(String.serializer().nullable)`.
 *
 * Variance of [type]'s arguments is not used by the serialization and is not taken into account.
 * Star projections in [type]'s arguments are prohibited.
 *
 * **Pitfall**: the returned serializer may return incorrect results or throw a [ClassCastException] if it receives
 * a value that's not a valid instance of the [KType], even though the type allows passing such a value.
 * Consider using the `serializer()` overload accepting a type argument
 * (for example, `module.serializer<List<String>>()`),
 * which returns the serializer with the correct type.
 *
 * @throws SerializationException if serializer cannot be created (provided [type] or its type argument is not serializable and is not registered in [this] module).
 * @throws IllegalArgumentException if any of [type]'s arguments contains star projection
 */
- (id<MEGAAOSKSerializer>)serializerType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serializer(type:)")));

/**
 * Retrieves serializer for the given [kClass] and,
 * if [kClass] is not serializable, fallbacks to [contextual][SerializersModule.getContextual] lookup.
 * This method uses platform-specific reflection available.
 *
 * If [kClass] is a parametrized type then it is necessary to pass serializers for generic parameters in the [typeArgumentsSerializers].
 * The nullability of returned serializer is specified using the [isNullable].
 *
 * Note that it is impossible to create an array serializer with this method,
 * as an array serializer needs additional information: type token for an element type.
 * To create array serializer, use overload with [KType] or [ArraySerializer] directly.
 *
 * Caching on JVM platform is disabled for this function, so it may work slower than an overload with [KType].
 *
 * **Pitfall**: the returned serializer may return incorrect results or throw a [ClassCastException] if it receives
 * a value that's not a valid instance of the [KClass], even though the type allows passing such a value.
 * Consider using the `serializer()` overload accepting a type argument
 * (for example, `module.serializer<List<String>>()`),
 * which returns the serializer with the correct type.
 *
 * @throws SerializationException if serializer cannot be created (provided [kClass] or its type argument is not serializable and is not registered in [this] module)
 * @throws SerializationException if [kClass] is a `kotlin.Array`
 * @throws SerializationException if size of [typeArgumentsSerializers] does not match the expected generic parameters count
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSKSerializer>)serializerKClass:(id<MEGAAOSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MEGAAOSKSerializer>> *)typeArgumentsSerializers isNullable:(BOOL)isNullable __attribute__((swift_name("serializer(kClass:typeArgumentsSerializers:isNullable:)")));

/**
 * Retrieves default serializer for the given [type] and,
 * if [type] is not serializable, fallbacks to [contextual][SerializersModule.getContextual] lookup.
 * [type] argument is usually obtained with [typeOf] method.
 *
 * This overload works with full type information, including type arguments and nullability,
 * and is a recommended way to retrieve a serializer.
 * For example, `serializerOrNull(typeOf<List<String?>>())` returns [KSerializer] that is able
 * to serialize and deserialize a list of nullable strings — i.e. `ListSerializer(String.serializer().nullable)`.
 *
 * Variance of [type]'s arguments is not used by the serialization and is not taken into account.
 * Star projections in [type]'s arguments are prohibited.
 *
 * **Pitfall**: the returned serializer may return incorrect results or throw a [ClassCastException] if it receives
 * a value that's not a valid instance of the [KType], even though the type allows passing such a value.
 *
 * @return [KSerializer] for the given [type] or `null` if serializer cannot be created (given [type] or its type argument is not serializable and is not registered in [this] module).
 * @throws IllegalArgumentException if any of [type]'s arguments contains star projection
 */
- (id<MEGAAOSKSerializer> _Nullable)serializerOrNullType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serializerOrNull(type:)")));
@end

@interface MEGAAOSSerializersModuleBuilder (Extensions)

/**
 * Adds [serializer] associated with given type [T] for contextual serialization.
 * Throws [SerializationException] if a module already has serializer associated with the given type.
 * To overwrite an already registered serializer, [SerializersModule.overwriteWith] can be used.
 */
- (void)contextualSerializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("contextual(serializer:)")));

/**
 * Creates a builder to register subclasses of a given [baseClass] for polymorphic serialization.
 * If [baseSerializer] is not null, registers it as a serializer for [baseClass],
 * which is useful if the base class is serializable itself. To register subclasses,
 * [PolymorphicModuleBuilder.subclass] builder function can be used.
 *
 * If a serializer already registered for the given KClass in the given scope, an [IllegalArgumentException] is thrown.
 * To override registered serializers, combine built module with another using [SerializersModule.overwriteWith].
 *
 * @see PolymorphicSerializer
 */
- (void)polymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass baseSerializer:(id<MEGAAOSKSerializer> _Nullable)baseSerializer builderAction:(void (^)(MEGAAOSPolymorphicModuleBuilder<id> *))builderAction __attribute__((swift_name("polymorphic(baseClass:baseSerializer:builderAction:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuiltinSerializersKt")))
@interface MEGAAOSBuiltinSerializersKt : MEGAAOSBase
+ (id<MEGAAOSKSerializer>)nullable:(id<MEGAAOSKSerializer>)receiver __attribute__((swift_name("nullable(_:)")));

/**
 * Returns serializer for reference [Array] of type [E] with [descriptor][SerialDescriptor] of [StructureKind.LIST] kind.
 * Each element of the array is serialized with the given [elementSerializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)ArraySerializerElementSerializer:(id<MEGAAOSKSerializer>)elementSerializer __attribute__((swift_name("ArraySerializer(elementSerializer:)")));

/**
 * Returns serializer for reference [Array] of type [E] with [descriptor][SerialDescriptor] of [StructureKind.LIST] kind.
 * Each element of the array is serialized with the given [elementSerializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)ArraySerializerKClass:(id<MEGAAOSKotlinKClass>)kClass elementSerializer:(id<MEGAAOSKSerializer>)elementSerializer __attribute__((swift_name("ArraySerializer(kClass:elementSerializer:)")));

/**
 * Returns serializer for [BooleanArray] with [descriptor][SerialDescriptor] of [StructureKind.LIST] kind.
 * Each element of the array is serialized one by one with [Boolean.Companion.serializer].
 */
+ (id<MEGAAOSKSerializer>)BooleanArraySerializer __attribute__((swift_name("BooleanArraySerializer()")));

/**
 * Returns serializer for [ByteArray] with [descriptor][SerialDescriptor] of [StructureKind.LIST] kind.
 * Each element of the array is serialized one by one with [Byte.Companion.serializer].
 */
+ (id<MEGAAOSKSerializer>)ByteArraySerializer __attribute__((swift_name("ByteArraySerializer()")));

/**
 * Returns serializer for [CharArray] with [descriptor][SerialDescriptor] of [StructureKind.LIST] kind.
 * Each element of the array is serialized one by one with [Char.Companion.serializer].
 */
+ (id<MEGAAOSKSerializer>)CharArraySerializer __attribute__((swift_name("CharArraySerializer()")));

/**
 * Returns serializer for [DoubleArray] with [descriptor][SerialDescriptor] of [StructureKind.LIST] kind.
 * Each element of the array is serialized one by one with [Double.Companion.serializer].
 */
+ (id<MEGAAOSKSerializer>)DoubleArraySerializer __attribute__((swift_name("DoubleArraySerializer()")));

/**
 * Returns serializer for [FloatArray] with [descriptor][SerialDescriptor] of [StructureKind.LIST] kind.
 * Each element of the array is serialized one by one with [Float.Companion.serializer].
 */
+ (id<MEGAAOSKSerializer>)FloatArraySerializer __attribute__((swift_name("FloatArraySerializer()")));

/**
 * Returns serializer for [IntArray] with [descriptor][SerialDescriptor] of [StructureKind.LIST] kind.
 * Each element of the array is serialized one by one with [Int.Companion.serializer].
 */
+ (id<MEGAAOSKSerializer>)IntArraySerializer __attribute__((swift_name("IntArraySerializer()")));

/**
 * Creates a serializer for [`List<T>`][List] for the given serializer of type [T].
 */
+ (id<MEGAAOSKSerializer>)ListSerializerElementSerializer:(id<MEGAAOSKSerializer>)elementSerializer __attribute__((swift_name("ListSerializer(elementSerializer:)")));

/**
 * Returns serializer for [LongArray] with [descriptor][SerialDescriptor] of [StructureKind.LIST] kind.
 * Each element of the array is serialized one by one with [Long.Companion.serializer].
 */
+ (id<MEGAAOSKSerializer>)LongArraySerializer __attribute__((swift_name("LongArraySerializer()")));

/**
 * Returns built-in serializer for [Map.Entry].
 * Resulting serializer represents entry as a structure with a single key-value pair.
 * E.g. `Pair(1, 2)` and `Map.Entry(1, 2)` will be serialized to JSON as
 * `{"first": 1, "second": 2}` and `{"1": 2}` respectively.
 */
+ (id<MEGAAOSKSerializer>)MapEntrySerializerKeySerializer:(id<MEGAAOSKSerializer>)keySerializer valueSerializer:(id<MEGAAOSKSerializer>)valueSerializer __attribute__((swift_name("MapEntrySerializer(keySerializer:valueSerializer:)")));

/**
 * Creates a serializer for [`Map<K, V>`][Map] for the given serializers for
 * its key type [K] and value type [V].
 */
+ (id<MEGAAOSKSerializer>)MapSerializerKeySerializer:(id<MEGAAOSKSerializer>)keySerializer valueSerializer:(id<MEGAAOSKSerializer>)valueSerializer __attribute__((swift_name("MapSerializer(keySerializer:valueSerializer:)")));

/**
 * Returns serializer for [Nothing].
 * Throws an exception when trying to encode or decode.
 *
 * It is used as a dummy in case it is necessary to pass a type to a parameterized class. At the same time, it is expected that this generic type will not participate in serialization.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)NothingSerializer __attribute__((swift_name("NothingSerializer()")));

/**
 * Returns built-in serializer for Kotlin [Pair].
 * Resulting serializer represents pair as a structure of two key-value pairs.
 */
+ (id<MEGAAOSKSerializer>)PairSerializerKeySerializer:(id<MEGAAOSKSerializer>)keySerializer valueSerializer:(id<MEGAAOSKSerializer>)valueSerializer __attribute__((swift_name("PairSerializer(keySerializer:valueSerializer:)")));

/**
 * Creates a serializer for [`Set<T>`][Set] for the given serializer of type [T].
 */
+ (id<MEGAAOSKSerializer>)SetSerializerElementSerializer:(id<MEGAAOSKSerializer>)elementSerializer __attribute__((swift_name("SetSerializer(elementSerializer:)")));

/**
 * Returns serializer for [ShortArray] with [descriptor][SerialDescriptor] of [StructureKind.LIST] kind.
 * Each element of the array is serialized one by one with [Short.Companion.serializer].
 */
+ (id<MEGAAOSKSerializer>)ShortArraySerializer __attribute__((swift_name("ShortArraySerializer()")));

/**
 * Returns built-in serializer for Kotlin [Triple].
 * Resulting serializer represents triple as a structure of three key-value pairs.
 */
+ (id<MEGAAOSKSerializer>)TripleSerializerASerializer:(id<MEGAAOSKSerializer>)aSerializer bSerializer:(id<MEGAAOSKSerializer>)bSerializer cSerializer:(id<MEGAAOSKSerializer>)cSerializer __attribute__((swift_name("TripleSerializer(aSerializer:bSerializer:cSerializer:)")));

/**
 * Returns serializer for [UByteArray] with [descriptor][SerialDescriptor] of [StructureKind.LIST] kind.
 * Each element of the array is serialized one by one with [UByte.Companion.serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAAOSKSerializer>)UByteArraySerializer __attribute__((swift_name("UByteArraySerializer()")));

/**
 * Returns serializer for [UIntArray] with [descriptor][SerialDescriptor] of [StructureKind.LIST] kind.
 * Each element of the array is serialized one by one with [UInt.Companion.serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAAOSKSerializer>)UIntArraySerializer __attribute__((swift_name("UIntArraySerializer()")));

/**
 * Returns serializer for [ULongArray] with [descriptor][SerialDescriptor] of [StructureKind.LIST] kind.
 * Each element of the array is serialized one by one with [ULong.Companion.serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAAOSKSerializer>)ULongArraySerializer __attribute__((swift_name("ULongArraySerializer()")));

/**
 * Returns serializer for [UShortArray] with [descriptor][SerialDescriptor] of [StructureKind.LIST] kind.
 * Each element of the array is serialized one by one with [UShort.Companion.serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAAOSKSerializer>)UShortArraySerializer __attribute__((swift_name("UShortArraySerializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextAwareKt")))
@interface MEGAAOSContextAwareKt : MEGAAOSBase
+ (id<MEGAAOSKotlinKClass> _Nullable)capturedKClass:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("capturedKClass(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecodingKt")))
@interface MEGAAOSDecodingKt : MEGAAOSBase

/**
 * Begins a structure, decodes it using the given [block], ends it and returns decoded element.
 */
+ (id _Nullable)decodeStructure:(id<MEGAAOSDecoder>)receiver descriptor:(id<MEGAAOSSerialDescriptor>)descriptor block:(id _Nullable (^)(id<MEGAAOSCompositeDecoder>))block __attribute__((swift_name("decodeStructure(_:descriptor:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncodingKt")))
@interface MEGAAOSEncodingKt : MEGAAOSBase

/**
 * Begins a collection, encodes it using the given [block] and ends it.
 */
+ (void)encodeCollection:(id<MEGAAOSEncoder>)receiver descriptor:(id<MEGAAOSSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize block:(void (^)(id<MEGAAOSCompositeEncoder>))block __attribute__((swift_name("encodeCollection(_:descriptor:collectionSize:block:)")));

/**
 * Begins a collection, calls [block] with each item and ends the collections.
 */
+ (void)encodeCollection:(id<MEGAAOSEncoder>)receiver descriptor:(id<MEGAAOSSerialDescriptor>)descriptor collection:(id)collection block:(void (^)(id<MEGAAOSCompositeEncoder>, MEGAAOSInt *, id _Nullable))block __attribute__((swift_name("encodeCollection(_:descriptor:collection:block:)")));

/**
 * Begins a structure, encodes it using the given [block] and ends it.
 */
+ (void)encodeStructure:(id<MEGAAOSEncoder>)receiver descriptor:(id<MEGAAOSSerialDescriptor>)descriptor block:(void (^)(id<MEGAAOSCompositeEncoder>))block __attribute__((swift_name("encodeStructure(_:descriptor:block:)")));
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
__attribute__((swift_name("JsonKt")))
@interface MEGAAOSJsonKt : MEGAAOSBase

/**
 * Creates an instance of [Json] configured from the optionally given [Json instance][from] and adjusted with [builderAction].
 *
 * Example of usage:
 * ```
 * val defaultJson = Json {
 *     encodeDefaults = true
 *     ignoreUnknownKeys = true
 * }
 * // Will inherit the properties of defaultJson
 * val debugEndpointJson = Json(defaultJson) {
 *     // ignoreUnknownKeys and encodeDefaults are set to true
 *     prettyPrint = true
 * }
 * ```
 */
+ (MEGAAOSJson *)JsonFrom:(MEGAAOSJson *)from builderAction:(void (^)(MEGAAOSJsonBuilder *))builderAction __attribute__((swift_name("Json(from:builderAction:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElementKt")))
@interface MEGAAOSJsonElementKt : MEGAAOSBase

/** Creates a [JsonPrimitive] from the given boolean. */
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue:(MEGAAOSBoolean * _Nullable)value __attribute__((swift_name("JsonPrimitive(value:)")));

/** Creates [JsonNull]. */
+ (MEGAAOSJsonNull *)JsonPrimitiveValue_:(MEGAAOSKotlinNothing * _Nullable)value __attribute__((swift_name("JsonPrimitive(value_:)")));

/** Creates a [JsonPrimitive] from the given number. */
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue__:(id _Nullable)value __attribute__((swift_name("JsonPrimitive(value__:)")));

/** Creates a [JsonPrimitive] from the given string. */
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue___:(NSString * _Nullable)value __attribute__((swift_name("JsonPrimitive(value___:)")));

/**
 * Creates a numeric [JsonPrimitive] from the given [UByte].
 *
 * The value will be encoded as a JSON number.
 */
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue____:(uint8_t)value __attribute__((swift_name("JsonPrimitive(value____:)")));

/**
 * Creates a numeric [JsonPrimitive] from the given [UInt].
 *
 * The value will be encoded as a JSON number.
 */
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue_____:(uint32_t)value __attribute__((swift_name("JsonPrimitive(value_____:)")));

/**
 * Creates a numeric [JsonPrimitive] from the given [ULong].
 *
 * The value will be encoded as a JSON number.
 */
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue______:(uint64_t)value __attribute__((swift_name("JsonPrimitive(value______:)")));

/**
 * Creates a numeric [JsonPrimitive] from the given [UShort].
 *
 * The value will be encoded as a JSON number.
 */
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue_______:(uint16_t)value __attribute__((swift_name("JsonPrimitive(value_______:)")));

/**
 * Creates a [JsonPrimitive] from the given string, without surrounding it in quotes.
 *
 * This function is provided for encoding raw JSON values that cannot be encoded using the [JsonPrimitive] functions.
 * For example,
 *
 * * precise numeric values (avoiding floating-point precision errors associated with [Double] and [Float]),
 * * large numbers,
 * * or complex JSON objects.
 *
 * Be aware that it is possible to create invalid JSON using this function.
 *
 * Creating a literal unquoted value of `null` (as in, `value == "null"`) is forbidden. If you want to create
 * JSON null literal, use [JsonNull] object, otherwise, use [JsonPrimitive].
 *
 * @see JsonPrimitive is the preferred method for encoding JSON primitives.
 * @throws JsonEncodingException if `value == "null"`
 */
+ (MEGAAOSJsonPrimitive *)JsonUnquotedLiteralValue:(NSString * _Nullable)value __attribute__((swift_name("JsonUnquotedLiteral(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElementBuildersKt")))
@interface MEGAAOSJsonElementBuildersKt : MEGAAOSBase

/**
 * Builds [JsonArray] with the given [builderAction] builder.
 * Example of usage:
 * ```
 * val json = buildJsonArray {
 *     add(true)
 *     addJsonArray {
 *         for (i in 1..10) add(i)
 *     }
 *     addJsonObject {
 *         put("stringKey", "stringValue")
 *     }
 * }
 * ```
 */
+ (NSArray<MEGAAOSJsonElement *> *)buildJsonArrayBuilderAction:(void (^)(MEGAAOSJsonArrayBuilder *))builderAction __attribute__((swift_name("buildJsonArray(builderAction:)")));

/**
 * Builds [JsonObject] with the given [builderAction] builder.
 * Example of usage:
 * ```
 * val json = buildJsonObject {
 *     put("booleanKey", true)
 *     putJsonArray("arrayKey") {
 *         for (i in 1..10) add(i)
 *     }
 *     putJsonObject("objectKey") {
 *         put("stringKey", "stringValue")
 *     }
 * }
 * ```
 */
+ (NSDictionary<NSString *, MEGAAOSJsonElement *> *)buildJsonObjectBuilderAction:(void (^)(MEGAAOSJsonObjectBuilder *))builderAction __attribute__((swift_name("buildJsonObject(builderAction:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonInternalDependenciesKt")))
@interface MEGAAOSJsonInternalDependenciesKt : MEGAAOSBase
+ (NSSet<NSString *> *)jsonCachedSerialNames:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("jsonCachedSerialNames(_:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAAOSMissingFieldException *)missingFieldExceptionWithNewMessageException:(MEGAAOSMissingFieldException *)exception message:(NSString *)message __attribute__((swift_name("missingFieldExceptionWithNewMessage(exception:message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonStreamsKt")))
@interface MEGAAOSJsonStreamsKt : MEGAAOSBase
+ (id _Nullable)decodeByReaderJson:(MEGAAOSJson *)json deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer reader:(id<MEGAAOSInternalJsonReader>)reader __attribute__((swift_name("decodeByReader(json:deserializer:reader:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSKotlinSequence>)decodeToSequenceByReaderJson:(MEGAAOSJson *)json reader:(id<MEGAAOSInternalJsonReader>)reader format:(MEGAAOSDecodeSequenceMode *)format __attribute__((swift_name("decodeToSequenceByReader(json:reader:format:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSKotlinSequence>)decodeToSequenceByReaderJson:(MEGAAOSJson *)json reader:(id<MEGAAOSInternalJsonReader>)reader deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer format:(MEGAAOSDecodeSequenceMode *)format __attribute__((swift_name("decodeToSequenceByReader(json:reader:deserializer:format:)")));
+ (void)encodeByWriterJson:(MEGAAOSJson *)json writer:(id<MEGAAOSInternalJsonWriter>)writer serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeByWriter(json:writer:serializer:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_macosKt")))
@interface MEGAAOSPlatform_macosKt : MEGAAOSBase

/**
 * Get platform
 *
 * @return iOS Platform
 */
+ (id<MEGAAOSPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
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
__attribute__((swift_name("SerialDescriptorKt")))
@interface MEGAAOSSerialDescriptorKt : MEGAAOSBase
+ (id)elementDescriptors:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("elementDescriptors(_:)")));
+ (id)elementNames:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("elementNames(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialDescriptorsKt")))
@interface MEGAAOSSerialDescriptorsKt : MEGAAOSBase
+ (id<MEGAAOSSerialDescriptor>)nonNullOriginal:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("nonNullOriginal(_:)")));
+ (id<MEGAAOSSerialDescriptor>)nullable:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("nullable(_:)")));

/**
 * Factory to create trivial primitive descriptors. [serialName] must be non-blank and unique.
 * Primitive descriptors should be used when the serialized form of the data has a primitive form, for example:
 * ```
 * object LongAsStringSerializer : KSerializer<Long> {
 *     override val descriptor: SerialDescriptor =
 *         PrimitiveSerialDescriptor("kotlinx.serialization.LongAsStringSerializer", PrimitiveKind.STRING)
 *
 *     override fun serialize(encoder: Encoder, value: Long) {
 *         encoder.encodeString(value.toString())
 *     }
 *
 *     override fun deserialize(decoder: Decoder): Long {
 *         return decoder.decodeString().toLong()
 *     }
 * }
 * ```
 */
+ (id<MEGAAOSSerialDescriptor>)PrimitiveSerialDescriptorSerialName:(NSString *)serialName kind:(MEGAAOSPrimitiveKind *)kind __attribute__((swift_name("PrimitiveSerialDescriptor(serialName:kind:)")));

/**
 * Factory to create a new descriptor that is identical to [original] except that the name is equal to [serialName].
 * Usually used when you want to serialize a type as another type, delegating implementation of `serialize` and `deserialize`.
 * Do not use [serialName] that is equal to the name of [original] or other serializable classes.
 *
 * Example:
 * ```
 * @Serializable(CustomSerializer::class)
 * class CustomType(val a: Int, val b: Int, val c: Int)
 *
 * class CustomSerializer: KSerializer<CustomType> {
 *     override val descriptor = SerialDescriptor("CustomType", IntArraySerializer().descriptor)
 *
 *     override fun serialize(encoder: Encoder, value: CustomType) {
 *         encoder.encodeSerializableValue(IntArraySerializer(), intArrayOf(value.a, value.b, value.c))
 *     }
 *
 *     override fun deserialize(decoder: Decoder): CustomType {
 *         val array = decoder.decodeSerializableValue(IntArraySerializer())
 *         return CustomType(array[0], array[1], array[2])
 *     }
 * }
 * ```
 */
+ (id<MEGAAOSSerialDescriptor>)SerialDescriptorSerialName:(NSString *)serialName original:(id<MEGAAOSSerialDescriptor>)original __attribute__((swift_name("SerialDescriptor(serialName:original:)")));

/**
 * Builder for [SerialDescriptor].
 * The resulting descriptor will be uniquely identified by the given [serialName], [typeParameters] and
 * elements structure described in [builderAction] function.
 *
 * Example:
 * ```
 * // Class with custom serializer and custom serial descriptor
 * class Data(
 *     val intField: Int, // This field is ignored by custom serializer
 *     val longField: Long, // This field is written as long, but in serialized form is named as "_longField"
 *     val stringList: List<String> // This field is written as regular list of strings
 *     val nullableInt: Int?
 * )
 * // Descriptor for such class:
 * buildClassSerialDescriptor("my.package.Data") {
 *     // intField is deliberately ignored by serializer -- not present in the descriptor as well
 *     element<Long>("_longField") // longField is named as _longField
 *     element("stringField", listSerialDescriptor<String>()) // or ListSerializer(String.serializer()).descriptor
 *     element("nullableInt", serialDescriptor<Int>().nullable)
 * }
 * ```
 *
 * Example for generic classes:
 * ```
 * import kotlinx.serialization.builtins.*
 *
 * @Serializable(CustomSerializer::class)
 * class BoxedList<T>(val list: List<T>)
 *
 * class CustomSerializer<T>(tSerializer: KSerializer<T>): KSerializer<BoxedList<T>> {
 *   // here we use tSerializer.descriptor because it represents T
 *   override val descriptor = buildClassSerialDescriptor("pkg.BoxedList", tSerializer.descriptor) {
 *     // here we have to wrap it with List first, because property has type List<T>
 *     element("list", ListSerializer(tSerializer).descriptor) // or listSerialDescriptor(tSerializer.descriptor)
 *   }
 * }
 * ```
 */
+ (id<MEGAAOSSerialDescriptor>)buildClassSerialDescriptorSerialName:(NSString *)serialName typeParameters:(MEGAAOSKotlinArray<id<MEGAAOSSerialDescriptor>> *)typeParameters builderAction:(void (^)(MEGAAOSClassSerialDescriptorBuilder *))builderAction __attribute__((swift_name("buildClassSerialDescriptor(serialName:typeParameters:builderAction:)")));

/**
 * An unsafe alternative to [buildClassSerialDescriptor] that supports an arbitrary [SerialKind].
 * This function is left public only for migration of pre-release users and is not intended to be used
 * as a generally safe and stable mechanism. Beware that it can produce inconsistent or non-spec-compliant instances.
 *
 * If you end up using this builder, please file an issue with your use-case to the kotlinx.serialization issue tracker.
 *
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)buildSerialDescriptorSerialName:(NSString *)serialName kind:(MEGAAOSSerialKind *)kind typeParameters:(MEGAAOSKotlinArray<id<MEGAAOSSerialDescriptor>> *)typeParameters builder:(void (^)(MEGAAOSClassSerialDescriptorBuilder *))builder __attribute__((swift_name("buildSerialDescriptor(serialName:kind:typeParameters:builder:)")));

/**
 * Creates a descriptor for the type `List<T>`.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)listSerialDescriptor __attribute__((swift_name("listSerialDescriptor()")));

/**
 * Creates a descriptor for the type `List<T>` where `T` is the type associated with [elementDescriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)listSerialDescriptorElementDescriptor:(id<MEGAAOSSerialDescriptor>)elementDescriptor __attribute__((swift_name("listSerialDescriptor(elementDescriptor:)")));

/**
 * Creates a descriptor for the type `Map<K, V>`.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)mapSerialDescriptor __attribute__((swift_name("mapSerialDescriptor()")));

/**
 * Creates a descriptor for the type `Map<K, V>` where `K` and `V` are types
 * associated with [keyDescriptor] and [valueDescriptor] respectively.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)mapSerialDescriptorKeyDescriptor:(id<MEGAAOSSerialDescriptor>)keyDescriptor valueDescriptor:(id<MEGAAOSSerialDescriptor>)valueDescriptor __attribute__((swift_name("mapSerialDescriptor(keyDescriptor:valueDescriptor:)")));

/**
 * Retrieves descriptor of type [T] using reified [serializer] function.
 *
 * Example:
 * ```
 * serialDescriptor<List<String>>() // Returns kotlin.collections.ArrayList(PrimitiveDescriptor(kotlin.String))
 * ```
 */
+ (id<MEGAAOSSerialDescriptor>)serialDescriptor __attribute__((swift_name("serialDescriptor()")));

/**
 * Retrieves descriptor of a type associated with the given [KType][type].
 *
 * Example:
 * ```
 * val type = typeOf<List<String>>()
 *
 * serialDescriptor(type) // Returns kotlin.collections.ArrayList(PrimitiveDescriptor(kotlin.String))
 * ```
 */
+ (id<MEGAAOSSerialDescriptor>)serialDescriptorType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serialDescriptor(type:)")));

/**
 * Creates a descriptor for the type `Set<T>`.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)setSerialDescriptor __attribute__((swift_name("setSerialDescriptor()")));

/**
 * Creates a descriptor for the type `Set<T>` where `T` is the type associated with [elementDescriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)setSerialDescriptorElementDescriptor:(id<MEGAAOSSerialDescriptor>)elementDescriptor __attribute__((swift_name("setSerialDescriptor(elementDescriptor:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialFormatKt")))
@interface MEGAAOSSerialFormatKt : MEGAAOSBase

/**
 * Decodes and deserializes the given [byte array][bytes] to the value of type [T] using deserializer
 * retrieved from the reified type parameter.
 *
 * @throws SerializationException in case of any decoding-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 */
+ (id _Nullable)decodeFromByteArray:(id<MEGAAOSBinaryFormat>)receiver bytes:(MEGAAOSKotlinByteArray *)bytes __attribute__((swift_name("decodeFromByteArray(_:bytes:)")));

/**
 * Decodes byte array from the given [hex] string and the decodes and deserializes it
 * to the value of type [T], delegating it to the [BinaryFormat].
 *
 * This method is a counterpart to [encodeToHexString].
 *
 * @throws SerializationException in case of any decoding-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 */
+ (id _Nullable)decodeFromHexString:(id<MEGAAOSBinaryFormat>)receiver hex:(NSString *)hex __attribute__((swift_name("decodeFromHexString(_:hex:)")));

/**
 * Decodes byte array from the given [hex] string and the decodes and deserializes it
 * to the value of type [T], delegating it to the [BinaryFormat].
 *
 * This method is a counterpart to [encodeToHexString].
 *
 * @throws SerializationException in case of any decoding-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 */
+ (id _Nullable)decodeFromHexString:(id<MEGAAOSBinaryFormat>)receiver deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer hex:(NSString *)hex __attribute__((swift_name("decodeFromHexString(_:deserializer:hex:)")));

/**
 * Decodes and deserializes the given [string] to the value of type [T] using deserializer
 * retrieved from the reified type parameter.
 *
 * @throws SerializationException in case of any decoding-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 */
+ (id _Nullable)decodeFromString:(id<MEGAAOSStringFormat>)receiver string:(NSString *)string __attribute__((swift_name("decodeFromString(_:string:)")));

/**
 * Serializes and encodes the given [value] to byte array using serializer
 * retrieved from the reified type parameter.
 *
 * @throws SerializationException in case of any encoding-specific error
 * @throws IllegalArgumentException if the encoded input does not comply format's specification
 */
+ (MEGAAOSKotlinByteArray *)encodeToByteArray:(id<MEGAAOSBinaryFormat>)receiver value:(id _Nullable)value __attribute__((swift_name("encodeToByteArray(_:value:)")));

/**
 * Serializes and encodes the given [value] to byte array, delegating it to the [BinaryFormat],
 * and then encodes resulting bytes to hex string.
 *
 * Hex representation does not interfere with serialization and encoding process of the format and
 * only applies transformation to the resulting array. It is recommended to use for debugging and
 * testing purposes.
 *
 * @throws SerializationException in case of any encoding-specific error
 * @throws IllegalArgumentException if the encoded input does not comply format's specification
 */
+ (NSString *)encodeToHexString:(id<MEGAAOSBinaryFormat>)receiver value:(id _Nullable)value __attribute__((swift_name("encodeToHexString(_:value:)")));

/**
 * Serializes and encodes the given [value] to byte array, delegating it to the [BinaryFormat],
 * and then encodes resulting bytes to hex string.
 *
 * Hex representation does not interfere with serialization and encoding process of the format and
 * only applies transformation to the resulting array. It is recommended to use for debugging and
 * testing purposes.
 *
 * @throws SerializationException in case of any encoding-specific error
 * @throws IllegalArgumentException if the encoded input does not comply format's specification
 */
+ (NSString *)encodeToHexString:(id<MEGAAOSBinaryFormat>)receiver serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToHexString(_:serializer:value:)")));

/**
 * Serializes and encodes the given [value] to string using serializer retrieved from the reified type parameter.
 *
 * @throws SerializationException in case of any encoding-specific error
 * @throws IllegalArgumentException if the encoded input does not comply format's specification
 */
+ (NSString *)encodeToString:(id<MEGAAOSStringFormat>)receiver value:(id _Nullable)value __attribute__((swift_name("encodeToString(_:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersKt")))
@interface MEGAAOSSerializersKt : MEGAAOSBase

/**
 * Retrieves a serializer for the given type [T].
 * This overload is a reified version of `serializer(KType)`.
 *
 * This overload works with full type information, including type arguments and nullability,
 * and is a recommended way to retrieve a serializer.
 * For example, `serializer<List<String?>>()` returns [KSerializer] that is able
 * to serialize and deserialize a list of nullable strings — i.e. `ListSerializer(String.serializer().nullable)`.
 *
 * Variance of [T]'s type arguments is not used by the serialization and is not taken into account.
 * Star projections in [T]'s type arguments are prohibited.
 *
 * @throws SerializationException if serializer cannot be created (provided [T] or its type argument is not serializable).
 * @throws IllegalArgumentException if any of [T]'s type arguments contains star projection
 */
+ (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Retrieves a [KSerializer] for the given [KClass].
 * The given class must be annotated with [Serializable] or be one of the built-in types.
 *
 * This method uses platform-specific reflection available for the given erased `KClass`
 * and is not recommended to use this method for anything, but last-ditch resort, e.g.,
 * when all type info is lost, your application has crashed, and it is the final attempt to log or send some serializable data.
 *
 * The recommended way to retrieve the serializer is inline [serializer] function and [`serializer(KType)`][serializer]
 *
 * This API is not guaranteed to work consistently across different platforms or
 * to work in cases that slightly differ from "plain @Serializable class" and have platform- and reflection-specific limitations.
 *
 * ### Constraints
 * This paragraph explains known (but not all!) constraints of the `serializer()` implementation.
 * Please note that they are not bugs but implementation restrictions that we cannot work around.
 *
 * * This method may behave differently on JVM, JS and Native because of runtime reflection differences
 * * Serializers for classes with generic parameters are ignored by this method
 * * External serializers generated with `Serializer(forClass = )` are not looked up consistently
 * * Serializers for classes with named companion objects are not looked up consistently
 *
 * @throws SerializationException if the serializer can't be found.
 *
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)serializer:(id<MEGAAOSKotlinKClass>)receiver __attribute__((swift_name("serializer(_:)")));

/**
 * Creates a serializer for the given [type].
 * [type] argument is usually obtained with [typeOf] method.
 *
 * This overload works with full type information, including type arguments and nullability,
 * and is a recommended way to retrieve a serializer.
 * For example, `serializer(typeOf<List<String?>>())` returns [KSerializer] that is able
 * to serialize and deserialize a list of nullable strings — i.e. `ListSerializer(String.serializer().nullable)`.
 *
 * Variance of [type]'s type arguments is not used by the serialization and is not taken into account.
 * Star projections in [type]'s arguments are prohibited.
 *
 * **Pitfall**: the returned serializer may return incorrect results or throw a [ClassCastException] if it receives
 * a value that's not a valid instance of the [KType], even though the type allows passing such a value.
 * Consider using the `serializer()` overload accepting a type argument (for example, `serializer<List<String>>()`),
 * which returns the serializer with the correct type.
 *
 * @throws SerializationException if serializer cannot be created (provided [type] or its type argument is not serializable).
 * @throws IllegalArgumentException if any of [type]'s arguments contains star projection
 */
+ (id<MEGAAOSKSerializer>)serializerType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serializer(type:)")));

/**
 * Retrieves serializer for the given [kClass].
 * This method uses platform-specific reflection available.
 *
 * If [kClass] is a parametrized type then it is necessary to pass serializers for generic parameters in the [typeArgumentsSerializers].
 * The nullability of returned serializer is specified using the [isNullable].
 *
 * Note that it is impossible to create an array serializer with this method,
 * as an array serializer needs additional information: type token for an element type.
 * To create array serializer, use overload with [KType] or [ArraySerializer] directly.
 *
 * Caching on JVM platform is disabled for this function, so it may work slower than an overload with [KType].
 *
 * **Pitfall**: the returned serializer may return incorrect results or throw a [ClassCastException] if it receives
 * a value that's not a valid instance of the [KClass], even though the type allows passing such a value.
 * Consider using the `serializer()` overload accepting a type argument (for example, `serializer<List<String>>()`),
 * which returns the serializer with the correct type.
 *
 * @throws SerializationException if serializer cannot be created (provided [kClass] or its type argument is not serializable)
 * @throws SerializationException if [kClass] is a `kotlin.Array`
 * @throws SerializationException if size of [typeArgumentsSerializers] does not match the expected generic parameters count
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)serializerKClass:(id<MEGAAOSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MEGAAOSKSerializer>> *)typeArgumentsSerializers isNullable:(BOOL)isNullable __attribute__((swift_name("serializer(kClass:typeArgumentsSerializers:isNullable:)")));

/**
 * Retrieves a [KSerializer] for the given [KClass] or returns `null` if none is found.
 * The given class must be annotated with [Serializable] or be one of the built-in types.
 * This method uses platform-specific reflection available for the given erased `KClass`
 * and it is not recommended to use this method for anything, but last-ditch resort, e.g.,
 * when all type info is lost, your application has crashed, and it is the final attempt to log or send some serializable data.
 *
 * This API is not guaranteed to work consistently across different platforms or
 * to work in cases that slightly differ from "plain @Serializable class".
 *
 * ### Constraints
 * This paragraph explains known (but not all!) constraints of the `serializerOrNull()` implementation.
 * Please note that they are not bugs but implementation restrictions that we cannot work around.
 *
 * * This method may behave differently on JVM, JS and Native because of runtime reflection differences
 * * Serializers for classes with generic parameters are ignored by this method
 * * External serializers generated with `Serializer(forClass = )` are not looked up consistently
 * * Serializers for classes with named companion objects are not looked up consistently
 *
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAAOSKSerializer> _Nullable)serializerOrNull:(id<MEGAAOSKotlinKClass>)receiver __attribute__((swift_name("serializerOrNull(_:)")));

/**
 * Creates a serializer for the given [type] if possible.
 * [type] argument is usually obtained with [typeOf] method.
 *
 * This overload works with full type information, including type arguments and nullability,
 * and is a recommended way to retrieve a serializer.
 * For example, `serializerOrNull(typeOf<List<String?>>())` returns [KSerializer] that is able
 * to serialize and deserialize a list of nullable strings — i.e. `ListSerializer(String.serializer().nullable)`.
 *
 * Variance of [type]'s arguments is not used by the serialization and is not taken into account.
 * Star projections in [type]'s arguments are prohibited.
 *
 * **Pitfall**: the returned serializer may return incorrect results or throw a [ClassCastException] if it receives
 * a value that's not a valid instance of the [KType], even though the type allows passing such a value.
 *
 * @return [KSerializer] for the given [type] or `null` if serializer cannot be created (given [type] or its type argument is not serializable).
 * @throws IllegalArgumentException if any of [type]'s arguments contains star projection
 */
+ (id<MEGAAOSKSerializer> _Nullable)serializerOrNullType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serializerOrNull(type:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersModuleKt")))
@interface MEGAAOSSerializersModuleKt : MEGAAOSBase

/**
 * A [SerializersModule] which is empty and always returns `null`.
 */
@property (class, readonly) MEGAAOSSerializersModule *EmptySerializersModule __attribute__((swift_name("EmptySerializersModule"))) __attribute__((deprecated("Deprecated in the favour of 'EmptySerializersModule()'")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersModuleBuildersKt")))
@interface MEGAAOSSerializersModuleBuildersKt : MEGAAOSBase

/**
 * A [SerializersModule] which is empty and returns `null` from each method.
 */
+ (MEGAAOSSerializersModule *)EmptySerializersModule __attribute__((swift_name("EmptySerializersModule()")));

/**
 * A builder function for creating a [SerializersModule].
 * Serializers can be added via [SerializersModuleBuilder.contextual] or [SerializersModuleBuilder.polymorphic].
 * Since [SerializersModuleBuilder] also implements [SerializersModuleCollector],
 * it is possible to copy whole another module to this builder with [SerializersModule.dumpTo]
 */
+ (MEGAAOSSerializersModule *)SerializersModuleBuilderAction:(void (^)(MEGAAOSSerializersModuleBuilder *))builderAction __attribute__((swift_name("SerializersModule(builderAction:)")));

/**
 * Returns a [SerializersModule] which has one class with one [serializer] for [ContextualSerializer].
 */
+ (MEGAAOSSerializersModule *)serializersModuleOfSerializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializersModuleOf(serializer:)")));

/**
 * Returns a [SerializersModule] which has one class with one [serializer] for [ContextualSerializer].
 */
+ (MEGAAOSSerializersModule *)serializersModuleOfKClass:(id<MEGAAOSKotlinKClass>)kClass serializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializersModuleOf(kClass:serializer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StreamingJsonDecoderKt")))
@interface MEGAAOSStreamingJsonDecoderKt : MEGAAOSBase
+ (MEGAAOSJsonElement *)decodeStringToJsonTreeJson:(MEGAAOSJson *)json deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer source:(NSString *)source __attribute__((swift_name("decodeStringToJsonTree(json:deserializer:source:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringOpsKt")))
@interface MEGAAOSStringOpsKt : MEGAAOSBase
@property (class, readonly) MEGAAOSKotlinArray<NSString *> *ESCAPE_STRINGS __attribute__((swift_name("ESCAPE_STRINGS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TreeJsonDecoderKt")))
@interface MEGAAOSTreeJsonDecoderKt : MEGAAOSBase
+ (id _Nullable)readJsonJson:(MEGAAOSJson *)json element:(MEGAAOSJsonElement *)element deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer __attribute__((swift_name("readJson(json:element:deserializer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TreeJsonEncoderKt")))
@interface MEGAAOSTreeJsonEncoderKt : MEGAAOSBase
+ (MEGAAOSJsonElement *)writeJsonJson:(MEGAAOSJson *)json value:(id _Nullable)value serializer:(id<MEGAAOSSerializationStrategy>)serializer __attribute__((swift_name("writeJson(json:value:serializer:)")));
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


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.3")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinInstant")))
@interface MEGAAOSKotlinInstant : MEGAAOSBase <MEGAAOSKotlinComparable>
@property (class, readonly, getter=companion) MEGAAOSKotlinInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MEGAAOSKotlinInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MEGAAOSKotlinInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(MEGAAOSKotlinInstant *)other __attribute__((swift_name("minus(other:)")));
- (MEGAAOSKotlinInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MEGAAOSKotlinAnnotation
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MEGAAOSKotlinNothing : MEGAAOSBase
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MEGAAOSKotlinEnumCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface MEGAAOSKotlinCharArray : MEGAAOSBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(MEGAAOSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MEGAAOSKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
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
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
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
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
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
@property (class, readonly) NSArray<MEGAAOSKotlinDurationUnit *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.4")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUuid")))
@interface MEGAAOSKotlinUuid : MEGAAOSBase <MEGAAOSKotlinComparable>
@property (class, readonly, getter=companion) MEGAAOSKotlinUuidCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MEGAAOSKotlinUuid *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MEGAAOSKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)toHexDashString __attribute__((swift_name("toHexDashString()")));
- (NSString *)toHexString __attribute__((swift_name("toHexString()")));
- (id _Nullable)toLongsAction:(id _Nullable (^)(MEGAAOSLong *, MEGAAOSLong *))action __attribute__((swift_name("toLongs(action:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.ExperimentalUnsignedTypes
*/
- (id)toUByteArray __attribute__((swift_name("toUByteArray()")));
- (id _Nullable)toULongsAction:(id _Nullable (^)(MEGAAOSULong *, MEGAAOSULong *))action __attribute__((swift_name("toULongs(action:)")));
@end

__attribute__((swift_name("KotlinComparator")))
@protocol MEGAAOSKotlinComparator
@required
- (int32_t)compareA:(id _Nullable)a b:(id _Nullable)b __attribute__((swift_name("compare(a:b:)")));
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

__attribute__((swift_name("KotlinSequence")))
@protocol MEGAAOSKotlinSequence
@required
- (id<MEGAAOSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
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

__attribute__((swift_name("KotlinCharIterator")))
@interface MEGAAOSKotlinCharIterator : MEGAAOSBase <MEGAAOSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
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
@property (class, readonly) NSArray<MEGAAOSKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface MEGAAOSKotlinKTypeProjectionCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (MEGAAOSKotlinKTypeProjection *)contravariantType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (MEGAAOSKotlinKTypeProjection *)covariantType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (MEGAAOSKotlinKTypeProjection *)invariantType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) MEGAAOSKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
