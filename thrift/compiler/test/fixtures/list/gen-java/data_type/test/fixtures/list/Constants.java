/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.list;

import com.facebook.swift.codec.*;
import com.google.common.collect.*;
import java.util.*;

@SwiftGenerated
public final class Constants {
    private Constants() {}

    public static final Map<Long, List<String>> TEST_MAP = ImmutableMap.<Long, List<String>>builder()
        .put(0L, ImmutableList.<String>builder()
        .add("foo")
        .add("bar")
        .build())
        .put(1L, ImmutableList.<String>builder()
        .add("baz")
        .build())
        .build();
}