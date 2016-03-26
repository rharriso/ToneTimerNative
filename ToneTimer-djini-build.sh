#! /bin/sh
#
# Intervals-djini-build.sh
# Copyright (C) 2016 rharriso <rharriso@lappy>
#
# Distributed under terms of the MIT license.
#

base_dir=$(cd "`dirname "0"`" && pwd)
cpp_out="$base_dir/generated-src/cpp"
jni_out="$base_dir/generated-src/jni"
objc_out="$base_dir/generated-src/objc"
java_out="$base_dir/generated-src/java/rharriso/tonetimer"
java_package="rharriso.tonetimer"
namespace="tonetimer"
objc_prefix="TT"
djinni_file="ToneTimer.djinni"


djinni --java-out $java_out \
  --java-package $java_package \
  --ident-java-field mFooBar \
  \
  --cpp-out $cpp_out \
  --cpp-namespace $namespace \
  \
  --jni-out $jni_out \
  --ident-jni-class NativeFooBar \
  --ident-jni-file NativeFooBar \
  \
  --objc-out $objc_out \
  --objc-type-prefix $objc_prefix \
  --objcpp-out $objc_out \
  \
  --idl $djinni_file
