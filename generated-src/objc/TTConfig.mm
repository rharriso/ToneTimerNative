// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ToneTimer.djinni

#import "TTConfig.h"


@implementation TTConfig

- (nonnull instancetype)initWithIntervalDuration:(int32_t)intervalDuration
                                   intervalBreak:(int32_t)intervalBreak
                                         setSize:(int32_t)setSize
                                        setBreak:(int32_t)setBreak
                                        setCount:(int32_t)setCount
{
    if (self = [super init]) {
        _intervalDuration = intervalDuration;
        _intervalBreak = intervalBreak;
        _setSize = setSize;
        _setBreak = setBreak;
        _setCount = setCount;
    }
    return self;
}

+ (nonnull instancetype)configWithIntervalDuration:(int32_t)intervalDuration
                                     intervalBreak:(int32_t)intervalBreak
                                           setSize:(int32_t)setSize
                                          setBreak:(int32_t)setBreak
                                          setCount:(int32_t)setCount
{
    return [[self alloc] initWithIntervalDuration:intervalDuration
                                    intervalBreak:intervalBreak
                                          setSize:setSize
                                         setBreak:setBreak
                                         setCount:setCount];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p intervalDuration:%@ intervalBreak:%@ setSize:%@ setBreak:%@ setCount:%@>", self.class, self, @(self.intervalDuration), @(self.intervalBreak), @(self.setSize), @(self.setBreak), @(self.setCount)];
}

@end
