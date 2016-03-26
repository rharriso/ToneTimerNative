#! /bin/sh
#
# Intervals-djini-build.sh
# Copyright (C) 2016 rharriso <rharriso@lappy>
#
# Distributed under terms of the MIT license.
#


djinni --java-out src/main/java/rharriso/tonetimer \
  --java-package rharriso.tonetimer \
  --cpp-out src/main/jni \
  --idl Intervals.djinni
