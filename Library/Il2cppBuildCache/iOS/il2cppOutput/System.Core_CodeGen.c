#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000012 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000014 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000015 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000016 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000017 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000018 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001C System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000020 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000021 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000026 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000027 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002B System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000030 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000003F System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000040 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000041 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000042 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000043 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000044 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000004A System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000004B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004C System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004D System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004E System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000004F System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000050 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000051 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000052 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000054 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000058 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000059 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000005A System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000005B System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000005C System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005D System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000005E System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000005F T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000060 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[97] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[97] = 
{
	4809,
	4984,
	4984,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[34] = 
{
	{ 0x02000004, { 61, 4 } },
	{ 0x02000005, { 65, 9 } },
	{ 0x02000006, { 76, 7 } },
	{ 0x02000007, { 85, 10 } },
	{ 0x02000008, { 97, 11 } },
	{ 0x02000009, { 111, 9 } },
	{ 0x0200000A, { 123, 12 } },
	{ 0x0200000B, { 138, 1 } },
	{ 0x0200000C, { 139, 2 } },
	{ 0x0200000D, { 141, 2 } },
	{ 0x0200000E, { 143, 4 } },
	{ 0x0200000F, { 147, 21 } },
	{ 0x02000011, { 168, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 3 } },
	{ 0x06000009, { 33, 4 } },
	{ 0x0600000A, { 37, 4 } },
	{ 0x0600000B, { 41, 3 } },
	{ 0x0600000C, { 44, 1 } },
	{ 0x0600000D, { 45, 1 } },
	{ 0x0600000E, { 46, 3 } },
	{ 0x0600000F, { 49, 3 } },
	{ 0x06000010, { 52, 2 } },
	{ 0x06000011, { 54, 2 } },
	{ 0x06000012, { 56, 5 } },
	{ 0x06000022, { 74, 2 } },
	{ 0x06000027, { 83, 2 } },
	{ 0x0600002C, { 95, 2 } },
	{ 0x06000032, { 108, 3 } },
	{ 0x06000037, { 120, 3 } },
	{ 0x0600003C, { 135, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[170] = 
{
	{ (Il2CppRGCTXDataType)2, 2081 },
	{ (Il2CppRGCTXDataType)3, 8388 },
	{ (Il2CppRGCTXDataType)2, 3421 },
	{ (Il2CppRGCTXDataType)2, 2937 },
	{ (Il2CppRGCTXDataType)3, 15244 },
	{ (Il2CppRGCTXDataType)2, 2163 },
	{ (Il2CppRGCTXDataType)2, 2944 },
	{ (Il2CppRGCTXDataType)3, 15279 },
	{ (Il2CppRGCTXDataType)2, 2939 },
	{ (Il2CppRGCTXDataType)3, 15256 },
	{ (Il2CppRGCTXDataType)2, 2082 },
	{ (Il2CppRGCTXDataType)3, 8389 },
	{ (Il2CppRGCTXDataType)2, 3439 },
	{ (Il2CppRGCTXDataType)2, 2946 },
	{ (Il2CppRGCTXDataType)3, 15291 },
	{ (Il2CppRGCTXDataType)2, 2178 },
	{ (Il2CppRGCTXDataType)2, 2954 },
	{ (Il2CppRGCTXDataType)3, 15433 },
	{ (Il2CppRGCTXDataType)2, 2950 },
	{ (Il2CppRGCTXDataType)3, 15356 },
	{ (Il2CppRGCTXDataType)2, 719 },
	{ (Il2CppRGCTXDataType)3, 26 },
	{ (Il2CppRGCTXDataType)3, 27 },
	{ (Il2CppRGCTXDataType)2, 1249 },
	{ (Il2CppRGCTXDataType)3, 5842 },
	{ (Il2CppRGCTXDataType)2, 720 },
	{ (Il2CppRGCTXDataType)3, 34 },
	{ (Il2CppRGCTXDataType)3, 35 },
	{ (Il2CppRGCTXDataType)2, 1256 },
	{ (Il2CppRGCTXDataType)3, 5847 },
	{ (Il2CppRGCTXDataType)2, 927 },
	{ (Il2CppRGCTXDataType)3, 1567 },
	{ (Il2CppRGCTXDataType)3, 1568 },
	{ (Il2CppRGCTXDataType)2, 1877 },
	{ (Il2CppRGCTXDataType)2, 1373 },
	{ (Il2CppRGCTXDataType)2, 1477 },
	{ (Il2CppRGCTXDataType)2, 1570 },
	{ (Il2CppRGCTXDataType)2, 1878 },
	{ (Il2CppRGCTXDataType)2, 1374 },
	{ (Il2CppRGCTXDataType)2, 1478 },
	{ (Il2CppRGCTXDataType)2, 1571 },
	{ (Il2CppRGCTXDataType)2, 1479 },
	{ (Il2CppRGCTXDataType)2, 1572 },
	{ (Il2CppRGCTXDataType)3, 5843 },
	{ (Il2CppRGCTXDataType)2, 1102 },
	{ (Il2CppRGCTXDataType)2, 1470 },
	{ (Il2CppRGCTXDataType)2, 1471 },
	{ (Il2CppRGCTXDataType)2, 1568 },
	{ (Il2CppRGCTXDataType)3, 5841 },
	{ (Il2CppRGCTXDataType)2, 1469 },
	{ (Il2CppRGCTXDataType)2, 1567 },
	{ (Il2CppRGCTXDataType)3, 5840 },
	{ (Il2CppRGCTXDataType)2, 1372 },
	{ (Il2CppRGCTXDataType)2, 1476 },
	{ (Il2CppRGCTXDataType)2, 1371 },
	{ (Il2CppRGCTXDataType)3, 18033 },
	{ (Il2CppRGCTXDataType)3, 5230 },
	{ (Il2CppRGCTXDataType)2, 1163 },
	{ (Il2CppRGCTXDataType)2, 1473 },
	{ (Il2CppRGCTXDataType)2, 1569 },
	{ (Il2CppRGCTXDataType)2, 1661 },
	{ (Il2CppRGCTXDataType)3, 8390 },
	{ (Il2CppRGCTXDataType)3, 8392 },
	{ (Il2CppRGCTXDataType)2, 527 },
	{ (Il2CppRGCTXDataType)3, 8391 },
	{ (Il2CppRGCTXDataType)3, 8400 },
	{ (Il2CppRGCTXDataType)2, 2085 },
	{ (Il2CppRGCTXDataType)2, 2940 },
	{ (Il2CppRGCTXDataType)3, 15257 },
	{ (Il2CppRGCTXDataType)3, 8401 },
	{ (Il2CppRGCTXDataType)2, 1515 },
	{ (Il2CppRGCTXDataType)2, 1599 },
	{ (Il2CppRGCTXDataType)3, 5853 },
	{ (Il2CppRGCTXDataType)3, 18003 },
	{ (Il2CppRGCTXDataType)2, 2951 },
	{ (Il2CppRGCTXDataType)3, 15357 },
	{ (Il2CppRGCTXDataType)3, 8393 },
	{ (Il2CppRGCTXDataType)2, 2084 },
	{ (Il2CppRGCTXDataType)2, 2938 },
	{ (Il2CppRGCTXDataType)3, 15245 },
	{ (Il2CppRGCTXDataType)3, 5852 },
	{ (Il2CppRGCTXDataType)3, 8394 },
	{ (Il2CppRGCTXDataType)3, 18002 },
	{ (Il2CppRGCTXDataType)2, 2947 },
	{ (Il2CppRGCTXDataType)3, 15292 },
	{ (Il2CppRGCTXDataType)3, 8407 },
	{ (Il2CppRGCTXDataType)2, 2086 },
	{ (Il2CppRGCTXDataType)2, 2945 },
	{ (Il2CppRGCTXDataType)3, 15280 },
	{ (Il2CppRGCTXDataType)3, 8947 },
	{ (Il2CppRGCTXDataType)3, 4070 },
	{ (Il2CppRGCTXDataType)3, 5854 },
	{ (Il2CppRGCTXDataType)3, 4069 },
	{ (Il2CppRGCTXDataType)3, 8408 },
	{ (Il2CppRGCTXDataType)3, 18004 },
	{ (Il2CppRGCTXDataType)2, 2955 },
	{ (Il2CppRGCTXDataType)3, 15434 },
	{ (Il2CppRGCTXDataType)3, 8421 },
	{ (Il2CppRGCTXDataType)2, 2088 },
	{ (Il2CppRGCTXDataType)2, 2953 },
	{ (Il2CppRGCTXDataType)3, 15359 },
	{ (Il2CppRGCTXDataType)3, 8422 },
	{ (Il2CppRGCTXDataType)2, 1518 },
	{ (Il2CppRGCTXDataType)2, 1602 },
	{ (Il2CppRGCTXDataType)3, 5858 },
	{ (Il2CppRGCTXDataType)3, 5857 },
	{ (Il2CppRGCTXDataType)2, 2942 },
	{ (Il2CppRGCTXDataType)3, 15259 },
	{ (Il2CppRGCTXDataType)3, 18009 },
	{ (Il2CppRGCTXDataType)2, 2952 },
	{ (Il2CppRGCTXDataType)3, 15358 },
	{ (Il2CppRGCTXDataType)3, 8414 },
	{ (Il2CppRGCTXDataType)2, 2087 },
	{ (Il2CppRGCTXDataType)2, 2949 },
	{ (Il2CppRGCTXDataType)3, 15294 },
	{ (Il2CppRGCTXDataType)3, 5856 },
	{ (Il2CppRGCTXDataType)3, 5855 },
	{ (Il2CppRGCTXDataType)3, 8415 },
	{ (Il2CppRGCTXDataType)2, 2941 },
	{ (Il2CppRGCTXDataType)3, 15258 },
	{ (Il2CppRGCTXDataType)3, 18008 },
	{ (Il2CppRGCTXDataType)2, 2948 },
	{ (Il2CppRGCTXDataType)3, 15293 },
	{ (Il2CppRGCTXDataType)3, 8428 },
	{ (Il2CppRGCTXDataType)2, 2089 },
	{ (Il2CppRGCTXDataType)2, 2957 },
	{ (Il2CppRGCTXDataType)3, 15436 },
	{ (Il2CppRGCTXDataType)3, 8948 },
	{ (Il2CppRGCTXDataType)3, 4072 },
	{ (Il2CppRGCTXDataType)3, 5860 },
	{ (Il2CppRGCTXDataType)3, 5859 },
	{ (Il2CppRGCTXDataType)3, 4071 },
	{ (Il2CppRGCTXDataType)3, 8429 },
	{ (Il2CppRGCTXDataType)2, 2943 },
	{ (Il2CppRGCTXDataType)3, 15260 },
	{ (Il2CppRGCTXDataType)3, 18010 },
	{ (Il2CppRGCTXDataType)2, 2956 },
	{ (Il2CppRGCTXDataType)3, 15435 },
	{ (Il2CppRGCTXDataType)3, 5850 },
	{ (Il2CppRGCTXDataType)3, 5851 },
	{ (Il2CppRGCTXDataType)3, 5861 },
	{ (Il2CppRGCTXDataType)2, 3446 },
	{ (Il2CppRGCTXDataType)2, 1103 },
	{ (Il2CppRGCTXDataType)2, 1376 },
	{ (Il2CppRGCTXDataType)2, 3442 },
	{ (Il2CppRGCTXDataType)2, 1491 },
	{ (Il2CppRGCTXDataType)2, 1575 },
	{ (Il2CppRGCTXDataType)3, 5246 },
	{ (Il2CppRGCTXDataType)2, 1171 },
	{ (Il2CppRGCTXDataType)3, 6278 },
	{ (Il2CppRGCTXDataType)3, 6279 },
	{ (Il2CppRGCTXDataType)3, 6284 },
	{ (Il2CppRGCTXDataType)2, 1669 },
	{ (Il2CppRGCTXDataType)3, 6281 },
	{ (Il2CppRGCTXDataType)3, 18731 },
	{ (Il2CppRGCTXDataType)2, 1126 },
	{ (Il2CppRGCTXDataType)3, 4058 },
	{ (Il2CppRGCTXDataType)1, 1446 },
	{ (Il2CppRGCTXDataType)2, 3450 },
	{ (Il2CppRGCTXDataType)3, 6280 },
	{ (Il2CppRGCTXDataType)1, 3450 },
	{ (Il2CppRGCTXDataType)1, 1669 },
	{ (Il2CppRGCTXDataType)2, 3507 },
	{ (Il2CppRGCTXDataType)2, 3450 },
	{ (Il2CppRGCTXDataType)3, 6285 },
	{ (Il2CppRGCTXDataType)3, 6283 },
	{ (Il2CppRGCTXDataType)3, 6282 },
	{ (Il2CppRGCTXDataType)2, 408 },
	{ (Il2CppRGCTXDataType)3, 4073 },
	{ (Il2CppRGCTXDataType)2, 536 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	97,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	34,
	s_rgctxIndices,
	170,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
