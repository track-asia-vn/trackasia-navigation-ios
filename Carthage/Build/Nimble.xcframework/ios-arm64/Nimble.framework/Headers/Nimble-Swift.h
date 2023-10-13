#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.8.1 (swiftlang-5.8.0.124.5 clang-1403.0.22.11.100)
#ifndef NIMBLE_SWIFT_H
#define NIMBLE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import XCTest;
#endif

#import <Nimble/Nimble.h>

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Nimble",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSCoder;
@class NSString;
@class NSObject;

/// A simple NSException subclass. It’s not required to subclass NSException (since the exception type is represented in the name) but this helps for identifying the exception through runtime type.
SWIFT_CLASS_NAMED("BadInstructionException")
@interface BadInstructionException : NSException
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// An Objective-C callable function, invoked from the <code>mach_exc_server</code> callback function <code>catch_mach_exception_raise_state</code> to push the <code>raiseBadInstructionException</code> function onto the stack.
+ (int)receiveReply:(bad_instruction_exception_reply_t)reply SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithName:(NSExceptionName _Nonnull)aName reason:(NSString * _Nullable)aReason userInfo:(NSDictionary * _Nullable)aUserInfo SWIFT_UNAVAILABLE;
@end

@class XCTestCase;

/// Helper class providing access to the currently executing XCTestCase instance, if any
SWIFT_CLASS("_TtC6Nimble22CurrentTestCaseTracker")
@interface CurrentTestCaseTracker : NSObject <XCTestObservation>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) CurrentTestCaseTracker * _Nonnull sharedInstance;)
+ (CurrentTestCaseTracker * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (void)testCaseWillStart:(XCTestCase * _Nonnull)testCase;
- (void)testCaseDidFinish:(XCTestCase * _Nonnull)testCase;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Encapsulates the failure message that matchers can report to the end user.
/// This is shared state between Nimble and matchers that mutate this value.
SWIFT_CLASS("_TtC6Nimble14FailureMessage")
@interface FailureMessage : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



/// Protocol for types to support beLessThan(), beLessThanOrEqualTo(),
/// beGreaterThan(), beGreaterThanOrEqualTo(), and equal() matchers.
/// Types that conform to Swift’s Comparable protocol will work implicitly too
SWIFT_PROTOCOL("_TtP6Nimble13NMBComparable_")
@protocol NMBComparable
- (NSComparisonResult)NMB_compare:(id <NMBComparable> _Null_unspecified)otherObject SWIFT_WARN_UNUSED_RESULT;
@end


@class NMBPredicate;

SWIFT_CLASS("_TtC6Nimble14NMBExpectation")
@interface NMBExpectation : NSObject
- (nonnull instancetype)initWithActualBlock:(NSObject * _Nullable (^ _Nonnull)(void))actualBlock negative:(BOOL)negative file:(NSString * _Nonnull)file line:(NSUInteger)line OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NMBExpectation * _Nonnull (^ _Nonnull withTimeout)(NSTimeInterval);
@property (nonatomic, readonly, copy) NMBExpectation * _Nonnull (^ _Nonnull to)(NMBPredicate * _Nonnull);
@property (nonatomic, readonly, copy) NMBExpectation * _Nonnull (^ _Nonnull toWithDescription)(NMBPredicate * _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) NMBExpectation * _Nonnull (^ _Nonnull toNot)(NMBPredicate * _Nonnull);
@property (nonatomic, readonly, copy) NMBExpectation * _Nonnull (^ _Nonnull toNotWithDescription)(NMBPredicate * _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) NMBExpectation * _Nonnull (^ _Nonnull notTo)(NMBPredicate * _Nonnull);
@property (nonatomic, readonly, copy) NMBExpectation * _Nonnull (^ _Nonnull notToWithDescription)(NMBPredicate * _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toEventually)(NMBPredicate * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toEventuallyWithDescription)(NMBPredicate * _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toEventuallyNot)(NMBPredicate * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toEventuallyNotWithDescription)(NMBPredicate * _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toNotEventually)(NMBPredicate * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toNotEventuallyWithDescription)(NMBPredicate * _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toNever)(NMBPredicate * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toNeverWithDescription)(NMBPredicate * _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull neverTo)(NMBPredicate * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull neverToWithDescription)(NMBPredicate * _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toAlways)(NMBPredicate * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull toAlwaysWithDescription)(NMBPredicate * _Nonnull, NSString * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull alwaysTo)(NMBPredicate * _Nonnull);
@property (nonatomic, readonly, copy) void (^ _Nonnull alwaysToWithDescription)(NMBPredicate * _Nonnull, NSString * _Nonnull);
+ (void)failWithMessage:(NSString * _Nonnull)message file:(NSString * _Nonnull)file line:(NSUInteger)line;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6Nimble21NMBExpectationMessage")
@interface NMBExpectationMessage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6Nimble12NMBPredicate")
@interface NMBPredicate : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6Nimble25NMBObjCBeCloseToPredicate")
@interface NMBObjCBeCloseToPredicate : NMBPredicate
@property (nonatomic, readonly, copy) NMBObjCBeCloseToPredicate * _Nonnull (^ _Nonnull within)(double);
@end


SWIFT_CLASS("_TtC6Nimble30NMBObjCRaiseExceptionPredicate")
@interface NMBObjCRaiseExceptionPredicate : NMBPredicate
@property (nonatomic, readonly, copy) NMBObjCRaiseExceptionPredicate * _Nonnull (^ _Nonnull named)(NSString * _Nonnull);
@property (nonatomic, readonly, copy) NMBObjCRaiseExceptionPredicate * _Nonnull (^ _Nonnull reason)(NSString * _Nullable);
@property (nonatomic, readonly, copy) NMBObjCRaiseExceptionPredicate * _Nonnull (^ _Nonnull userInfo)(NSDictionary * _Nullable);
@property (nonatomic, readonly, copy) NMBObjCRaiseExceptionPredicate * _Nonnull (^ _Nonnull satisfyingBlock)(void (^ _Nullable)(NSException * _Nonnull));
@end


@class NSNumber;

@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)haveCountMatcher:(NSNumber * _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)satisfyAnyOfMatcher:(NSArray<NMBPredicate *> * _Nonnull)predicates SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)beNilMatcher SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)satisfyAllOfMatcher:(NSArray<NMBPredicate *> * _Nonnull)predicates SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)beEmptyMatcher SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)beIdenticalToMatcher:(NSObject * _Nullable)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)beginWithMatcher:(id _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)beGreaterThanOrEqualToMatcher:(id <NMBComparable> _Nullable)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)containMatcher:(NSArray<NSObject *> * _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBObjCRaiseExceptionPredicate * _Nonnull)raiseExceptionMatcher SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)beGreaterThanMatcher:(id <NMBComparable> _Nullable)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)beLessThanMatcher:(id <NMBComparable> _Nullable)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)equalMatcher:(NSObject * _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)containElementSatisfyingMatcher:(BOOL (^ _Nonnull)(NSObject * _Nonnull))predicate SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)matchMatcher:(NSString * _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)beAKindOfMatcher:(Class _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)allPassMatcher:(NMBPredicate * _Nonnull)predicate SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)beAnInstanceOfMatcher:(Class _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)beLessThanOrEqualToMatcher:(id <NMBComparable> _Nullable)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBObjCBeCloseToPredicate * _Nonnull)beCloseToMatcher:(NSNumber * _Nonnull)expected within:(double)within SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)endWithMatcher:(id _Nonnull)expected SWIFT_WARN_UNUSED_RESULT;
@end


@interface NMBPredicate (SWIFT_EXTENSION(Nimble))
+ (NMBPredicate * _Nonnull)beTruthyMatcher SWIFT_WARN_UNUSED_RESULT;
+ (NMBPredicate * _Nonnull)beFalsyMatcher SWIFT_WARN_UNUSED_RESULT;
+ (NMBPredicate * _Nonnull)beTrueMatcher SWIFT_WARN_UNUSED_RESULT;
+ (NMBPredicate * _Nonnull)beFalseMatcher SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC6Nimble18NMBPredicateResult")
@interface NMBPredicateResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6Nimble18NMBPredicateStatus")
@interface NMBPredicateStatus : NSObject
@property (nonatomic, readonly) NSUInteger hash;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6Nimble11NMBStringer")
@interface NMBStringer : NSObject
+ (NSString * _Nonnull)stringify:(id _Nullable)obj SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Only classes, protocols, methods, properties, and subscript declarations can be
/// bridges to Objective-C via the @objc keyword. This class encapsulates callback-style
/// asynchronous waiting logic so that it may be called from Objective-C and Swift.
SWIFT_CLASS("_TtC6Nimble7NMBWait")
@interface NMBWait : NSObject
+ (void)untilTimeout:(NSTimeInterval)timeout file:(NSString * _Nonnull)file line:(NSUInteger)line action:(void (^ _Nonnull)(void (^ _Nonnull)(void)))action;
+ (void)untilFile:(NSString * _Nonnull)file line:(NSUInteger)line action:(void (^ _Nonnull)(void (^ _Nonnull)(void)))action;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end














@interface NSNumber (SWIFT_EXTENSION(Nimble)) <NMBComparable>
- (NSComparisonResult)NMB_compare:(id <NMBComparable> _Null_unspecified)otherObject SWIFT_WARN_UNUSED_RESULT;
@end





@interface NSString (SWIFT_EXTENSION(Nimble)) <NMBComparable>
- (NSComparisonResult)NMB_compare:(id <NMBComparable> _Null_unspecified)otherObject SWIFT_WARN_UNUSED_RESULT;
@end


/// “Global” state of Nimble is stored here. Only DSL functions should access / be aware of this
/// class’ existence
SWIFT_CLASS("_TtC6Nimble17NimbleEnvironment")
@interface NimbleEnvironment : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6Nimble14SourceLocation")
@interface SourceLocation : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
