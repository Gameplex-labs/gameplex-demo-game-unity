#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Exception System.Linq.Error::NoMatch()
extern void Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945 (void);
// 0x00000006 System.Exception System.Linq.Error::NotSupported()
extern void Error_NotSupported_m51A0560ABF374B66CF6D1208DAF27C4CBAD9AABA (void);
// 0x00000007 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000009 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x0000000A System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<TKey,TSource>> System.Linq.Enumerable::GroupBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ConcatIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::AsEnumerable(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x00000018 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001B TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000023 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000029 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002B TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002D System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002F System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000033 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000034 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004D System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000050 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000051 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000052 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000054 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000056 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000058 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005B System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005E TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000060 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::.ctor(System.Int32)
// 0x00000064 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.IDisposable.Dispose()
// 0x00000065 System.Boolean System.Linq.Enumerable/<ConcatIterator>d__59`1::MoveNext()
// 0x00000066 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally1()
// 0x00000067 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally2()
// 0x00000068 TSource System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000069 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.Reset()
// 0x0000006A System.Object System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.get_Current()
// 0x0000006B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006C System.Collections.IEnumerator System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006F System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000070 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000071 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000072 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000073 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000074 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000075 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000076 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x00000077 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x00000078 System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x00000079 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000007A TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000007B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x0000007C System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x0000007D System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000007E System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007F System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000080 System.Func`2<TElement,TElement> System.Linq.IdentityFunction`1::get_Instance()
// 0x00000081 System.Void System.Linq.IdentityFunction`1/<>c::.cctor()
// 0x00000082 System.Void System.Linq.IdentityFunction`1/<>c::.ctor()
// 0x00000083 TElement System.Linq.IdentityFunction`1/<>c::<get_Instance>b__1_0(TElement)
// 0x00000084 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000085 TKey System.Linq.IGrouping`2::get_Key()
// 0x00000086 System.Linq.Lookup`2<TKey,TElement> System.Linq.Lookup`2::Create(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000087 System.Void System.Linq.Lookup`2::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000088 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Lookup`2::GetEnumerator()
// 0x00000089 System.Collections.IEnumerator System.Linq.Lookup`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008A System.Int32 System.Linq.Lookup`2::InternalGetHashCode(TKey)
// 0x0000008B System.Linq.Lookup`2/Grouping<TKey,TElement> System.Linq.Lookup`2::GetGrouping(TKey,System.Boolean)
// 0x0000008C System.Void System.Linq.Lookup`2::Resize()
// 0x0000008D System.Void System.Linq.Lookup`2/Grouping::Add(TElement)
// 0x0000008E System.Collections.Generic.IEnumerator`1<TElement> System.Linq.Lookup`2/Grouping::GetEnumerator()
// 0x0000008F System.Collections.IEnumerator System.Linq.Lookup`2/Grouping::System.Collections.IEnumerable.GetEnumerator()
// 0x00000090 TKey System.Linq.Lookup`2/Grouping::get_Key()
// 0x00000091 System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_Count()
// 0x00000092 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_IsReadOnly()
// 0x00000093 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Add(TElement)
// 0x00000094 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Clear()
// 0x00000095 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Contains(TElement)
// 0x00000096 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.CopyTo(TElement[],System.Int32)
// 0x00000097 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Remove(TElement)
// 0x00000098 System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.IndexOf(TElement)
// 0x00000099 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.Insert(System.Int32,TElement)
// 0x0000009A System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.RemoveAt(System.Int32)
// 0x0000009B TElement System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.get_Item(System.Int32)
// 0x0000009C System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.set_Item(System.Int32,TElement)
// 0x0000009D System.Void System.Linq.Lookup`2/Grouping::.ctor()
// 0x0000009E System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::.ctor(System.Int32)
// 0x0000009F System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.IDisposable.Dispose()
// 0x000000A0 System.Boolean System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::MoveNext()
// 0x000000A1 TElement System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A2 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.Reset()
// 0x000000A3 System.Object System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.get_Current()
// 0x000000A4 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::.ctor(System.Int32)
// 0x000000A5 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.IDisposable.Dispose()
// 0x000000A6 System.Boolean System.Linq.Lookup`2/<GetEnumerator>d__12::MoveNext()
// 0x000000A7 System.Linq.IGrouping`2<TKey,TElement> System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current()
// 0x000000A8 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.Reset()
// 0x000000A9 System.Object System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.get_Current()
// 0x000000AA System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x000000AB System.Boolean System.Linq.Set`1::Add(TElement)
// 0x000000AC System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x000000AD System.Void System.Linq.Set`1::Resize()
// 0x000000AE System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x000000AF System.Void System.Linq.GroupedEnumerable`3::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x000000B0 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.GroupedEnumerable`3::GetEnumerator()
// 0x000000B1 System.Collections.IEnumerator System.Linq.GroupedEnumerable`3::System.Collections.IEnumerable.GetEnumerator()
// 0x000000B2 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x000000B3 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B4 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000B5 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000B6 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000B7 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000B8 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000B9 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000BA TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000BB System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000BC System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000BD System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000BE System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000BF System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000C0 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000C1 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000C2 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000C3 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000C4 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000C5 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000C6 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000C7 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000C8 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000C9 System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32*,System.Int32)
extern void BitHelper__ctor_m2770BB414919277B2CF522840B54819F5082CD80 (void);
// 0x000000CA System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32[],System.Int32)
extern void BitHelper__ctor_m7A8E43BE1D2A4ED086E708B6FFE693322FC9D2EB (void);
// 0x000000CB System.Void System.Collections.Generic.BitHelper::MarkBit(System.Int32)
extern void BitHelper_MarkBit_m1C6D787021BEA9D02DCA0762C09E5D443E04A86B (void);
// 0x000000CC System.Boolean System.Collections.Generic.BitHelper::IsMarked(System.Int32)
extern void BitHelper_IsMarked_m6036A81F50D820045D3F62E52D57098A332AB608 (void);
// 0x000000CD System.Int32 System.Collections.Generic.BitHelper::ToIntArrayLength(System.Int32)
extern void BitHelper_ToIntArrayLength_m32A0B1B014CB81891165AC325514784171C8E7B3 (void);
// 0x000000CE System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000CF System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000D0 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000D1 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000D2 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000D3 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x000000D4 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000D5 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000D6 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000D7 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000D8 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000D9 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000DA System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000DB System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000DC System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000DD System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000DE System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000DF System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000E0 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000E1 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000E2 System.Void System.Collections.Generic.HashSet`1::IntersectWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000E3 System.Boolean System.Collections.Generic.HashSet`1::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000E4 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000E5 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000E6 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000E7 System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000E8 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000E9 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000EA System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000EB System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000EC System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000ED System.Boolean System.Collections.Generic.HashSet`1::ContainsAllElements(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000EE System.Void System.Collections.Generic.HashSet`1::IntersectWithHashSetWithSameEC(System.Collections.Generic.HashSet`1<T>)
// 0x000000EF System.Void System.Collections.Generic.HashSet`1::IntersectWithEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000F0 System.Int32 System.Collections.Generic.HashSet`1::InternalIndexOf(T)
// 0x000000F1 System.Collections.Generic.HashSet`1/ElementCount<T> System.Collections.Generic.HashSet`1::CheckUniqueAndUnfoundElements(System.Collections.Generic.IEnumerable`1<T>,System.Boolean)
// 0x000000F2 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000F3 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000F4 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000F5 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000F6 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000F7 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000F8 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000F9 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[249] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945,
	Error_NotSupported_m51A0560ABF374B66CF6D1208DAF27C4CBAD9AABA,
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
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BitHelper__ctor_m2770BB414919277B2CF522840B54819F5082CD80,
	BitHelper__ctor_m7A8E43BE1D2A4ED086E708B6FFE693322FC9D2EB,
	BitHelper_MarkBit_m1C6D787021BEA9D02DCA0762C09E5D443E04A86B,
	BitHelper_IsMarked_m6036A81F50D820045D3F62E52D57098A332AB608,
	BitHelper_ToIntArrayLength_m32A0B1B014CB81891165AC325514784171C8E7B3,
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
static const int32_t s_InvokerIndices[249] = 
{
	7210,
	7210,
	7464,
	7464,
	7464,
	7464,
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
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	1933,
	2319,
	3900,
	3358,
	7110,
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
static const Il2CppTokenRangePair s_rgctxIndices[71] = 
{
	{ 0x02000004, { 106, 4 } },
	{ 0x02000005, { 110, 9 } },
	{ 0x02000006, { 121, 7 } },
	{ 0x02000007, { 130, 10 } },
	{ 0x02000008, { 142, 11 } },
	{ 0x02000009, { 156, 9 } },
	{ 0x0200000A, { 168, 12 } },
	{ 0x0200000B, { 183, 1 } },
	{ 0x0200000C, { 184, 2 } },
	{ 0x0200000D, { 186, 12 } },
	{ 0x0200000E, { 198, 9 } },
	{ 0x0200000F, { 207, 11 } },
	{ 0x02000010, { 218, 6 } },
	{ 0x02000011, { 224, 2 } },
	{ 0x02000012, { 226, 4 } },
	{ 0x02000013, { 230, 3 } },
	{ 0x02000016, { 233, 17 } },
	{ 0x02000017, { 254, 5 } },
	{ 0x02000018, { 259, 1 } },
	{ 0x0200001A, { 260, 8 } },
	{ 0x0200001C, { 268, 4 } },
	{ 0x0200001D, { 272, 3 } },
	{ 0x0200001E, { 277, 5 } },
	{ 0x0200001F, { 282, 7 } },
	{ 0x02000020, { 289, 3 } },
	{ 0x02000021, { 292, 7 } },
	{ 0x02000022, { 299, 4 } },
	{ 0x02000024, { 303, 43 } },
	{ 0x02000027, { 346, 2 } },
	{ 0x06000007, { 0, 10 } },
	{ 0x06000008, { 10, 10 } },
	{ 0x06000009, { 20, 5 } },
	{ 0x0600000A, { 25, 5 } },
	{ 0x0600000B, { 30, 1 } },
	{ 0x0600000C, { 31, 2 } },
	{ 0x0600000D, { 33, 2 } },
	{ 0x0600000E, { 35, 1 } },
	{ 0x0600000F, { 36, 4 } },
	{ 0x06000010, { 40, 1 } },
	{ 0x06000011, { 41, 2 } },
	{ 0x06000012, { 43, 1 } },
	{ 0x06000013, { 44, 2 } },
	{ 0x06000015, { 46, 3 } },
	{ 0x06000016, { 49, 2 } },
	{ 0x06000017, { 51, 1 } },
	{ 0x06000018, { 52, 7 } },
	{ 0x06000019, { 59, 1 } },
	{ 0x0600001A, { 60, 2 } },
	{ 0x0600001B, { 62, 4 } },
	{ 0x0600001C, { 66, 3 } },
	{ 0x0600001D, { 69, 4 } },
	{ 0x0600001E, { 73, 3 } },
	{ 0x0600001F, { 76, 4 } },
	{ 0x06000020, { 80, 3 } },
	{ 0x06000021, { 83, 3 } },
	{ 0x06000022, { 86, 1 } },
	{ 0x06000023, { 87, 1 } },
	{ 0x06000024, { 88, 3 } },
	{ 0x06000025, { 91, 3 } },
	{ 0x06000026, { 94, 2 } },
	{ 0x06000027, { 96, 3 } },
	{ 0x06000028, { 99, 2 } },
	{ 0x06000029, { 101, 5 } },
	{ 0x06000039, { 119, 2 } },
	{ 0x0600003E, { 128, 2 } },
	{ 0x06000043, { 140, 2 } },
	{ 0x06000049, { 153, 3 } },
	{ 0x0600004E, { 165, 3 } },
	{ 0x06000053, { 180, 3 } },
	{ 0x06000086, { 250, 4 } },
	{ 0x060000B5, { 275, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[348] = 
{
	{ (Il2CppRGCTXDataType)2, 3981 },
	{ (Il2CppRGCTXDataType)3, 17916 },
	{ (Il2CppRGCTXDataType)2, 6455 },
	{ (Il2CppRGCTXDataType)2, 5670 },
	{ (Il2CppRGCTXDataType)3, 34909 },
	{ (Il2CppRGCTXDataType)2, 4149 },
	{ (Il2CppRGCTXDataType)2, 5677 },
	{ (Il2CppRGCTXDataType)3, 34976 },
	{ (Il2CppRGCTXDataType)2, 5672 },
	{ (Il2CppRGCTXDataType)3, 34926 },
	{ (Il2CppRGCTXDataType)2, 3982 },
	{ (Il2CppRGCTXDataType)3, 17917 },
	{ (Il2CppRGCTXDataType)2, 6485 },
	{ (Il2CppRGCTXDataType)2, 5679 },
	{ (Il2CppRGCTXDataType)3, 34993 },
	{ (Il2CppRGCTXDataType)2, 4170 },
	{ (Il2CppRGCTXDataType)2, 5687 },
	{ (Il2CppRGCTXDataType)3, 35195 },
	{ (Il2CppRGCTXDataType)2, 5683 },
	{ (Il2CppRGCTXDataType)3, 35085 },
	{ (Il2CppRGCTXDataType)2, 1377 },
	{ (Il2CppRGCTXDataType)3, 148 },
	{ (Il2CppRGCTXDataType)3, 149 },
	{ (Il2CppRGCTXDataType)2, 2660 },
	{ (Il2CppRGCTXDataType)3, 13586 },
	{ (Il2CppRGCTXDataType)2, 1380 },
	{ (Il2CppRGCTXDataType)3, 174 },
	{ (Il2CppRGCTXDataType)3, 175 },
	{ (Il2CppRGCTXDataType)2, 2681 },
	{ (Il2CppRGCTXDataType)3, 13598 },
	{ (Il2CppRGCTXDataType)3, 39945 },
	{ (Il2CppRGCTXDataType)2, 1399 },
	{ (Il2CppRGCTXDataType)3, 394 },
	{ (Il2CppRGCTXDataType)2, 4991 },
	{ (Il2CppRGCTXDataType)3, 27773 },
	{ (Il2CppRGCTXDataType)3, 15110 },
	{ (Il2CppRGCTXDataType)3, 15128 },
	{ (Il2CppRGCTXDataType)2, 3855 },
	{ (Il2CppRGCTXDataType)2, 2918 },
	{ (Il2CppRGCTXDataType)3, 14686 },
	{ (Il2CppRGCTXDataType)3, 39827 },
	{ (Il2CppRGCTXDataType)2, 1389 },
	{ (Il2CppRGCTXDataType)3, 257 },
	{ (Il2CppRGCTXDataType)3, 39866 },
	{ (Il2CppRGCTXDataType)2, 1391 },
	{ (Il2CppRGCTXDataType)3, 293 },
	{ (Il2CppRGCTXDataType)2, 1831 },
	{ (Il2CppRGCTXDataType)3, 3494 },
	{ (Il2CppRGCTXDataType)3, 3495 },
	{ (Il2CppRGCTXDataType)2, 4150 },
	{ (Il2CppRGCTXDataType)3, 18994 },
	{ (Il2CppRGCTXDataType)3, 39972 },
	{ (Il2CppRGCTXDataType)2, 2096 },
	{ (Il2CppRGCTXDataType)3, 5539 },
	{ (Il2CppRGCTXDataType)2, 3192 },
	{ (Il2CppRGCTXDataType)2, 3356 },
	{ (Il2CppRGCTXDataType)3, 13596 },
	{ (Il2CppRGCTXDataType)3, 13597 },
	{ (Il2CppRGCTXDataType)3, 5540 },
	{ (Il2CppRGCTXDataType)3, 39902 },
	{ (Il2CppRGCTXDataType)2, 1397 },
	{ (Il2CppRGCTXDataType)3, 380 },
	{ (Il2CppRGCTXDataType)2, 3736 },
	{ (Il2CppRGCTXDataType)2, 2982 },
	{ (Il2CppRGCTXDataType)2, 3168 },
	{ (Il2CppRGCTXDataType)2, 3346 },
	{ (Il2CppRGCTXDataType)2, 3169 },
	{ (Il2CppRGCTXDataType)2, 3347 },
	{ (Il2CppRGCTXDataType)3, 13588 },
	{ (Il2CppRGCTXDataType)2, 3737 },
	{ (Il2CppRGCTXDataType)2, 2983 },
	{ (Il2CppRGCTXDataType)2, 3170 },
	{ (Il2CppRGCTXDataType)2, 3348 },
	{ (Il2CppRGCTXDataType)2, 3171 },
	{ (Il2CppRGCTXDataType)2, 3349 },
	{ (Il2CppRGCTXDataType)3, 13589 },
	{ (Il2CppRGCTXDataType)2, 3738 },
	{ (Il2CppRGCTXDataType)2, 2984 },
	{ (Il2CppRGCTXDataType)2, 3172 },
	{ (Il2CppRGCTXDataType)2, 3350 },
	{ (Il2CppRGCTXDataType)2, 3173 },
	{ (Il2CppRGCTXDataType)2, 3351 },
	{ (Il2CppRGCTXDataType)3, 13590 },
	{ (Il2CppRGCTXDataType)2, 3735 },
	{ (Il2CppRGCTXDataType)2, 3167 },
	{ (Il2CppRGCTXDataType)2, 3345 },
	{ (Il2CppRGCTXDataType)2, 2339 },
	{ (Il2CppRGCTXDataType)2, 3151 },
	{ (Il2CppRGCTXDataType)2, 3152 },
	{ (Il2CppRGCTXDataType)2, 3342 },
	{ (Il2CppRGCTXDataType)3, 13585 },
	{ (Il2CppRGCTXDataType)2, 3150 },
	{ (Il2CppRGCTXDataType)2, 3341 },
	{ (Il2CppRGCTXDataType)3, 13584 },
	{ (Il2CppRGCTXDataType)2, 2981 },
	{ (Il2CppRGCTXDataType)2, 3165 },
	{ (Il2CppRGCTXDataType)2, 3166 },
	{ (Il2CppRGCTXDataType)2, 3344 },
	{ (Il2CppRGCTXDataType)3, 13587 },
	{ (Il2CppRGCTXDataType)2, 2980 },
	{ (Il2CppRGCTXDataType)3, 39838 },
	{ (Il2CppRGCTXDataType)3, 12353 },
	{ (Il2CppRGCTXDataType)2, 2455 },
	{ (Il2CppRGCTXDataType)2, 3154 },
	{ (Il2CppRGCTXDataType)2, 3343 },
	{ (Il2CppRGCTXDataType)2, 3501 },
	{ (Il2CppRGCTXDataType)3, 17918 },
	{ (Il2CppRGCTXDataType)3, 17920 },
	{ (Il2CppRGCTXDataType)2, 960 },
	{ (Il2CppRGCTXDataType)3, 17919 },
	{ (Il2CppRGCTXDataType)3, 17928 },
	{ (Il2CppRGCTXDataType)2, 3985 },
	{ (Il2CppRGCTXDataType)2, 5673 },
	{ (Il2CppRGCTXDataType)3, 34927 },
	{ (Il2CppRGCTXDataType)3, 17929 },
	{ (Il2CppRGCTXDataType)2, 3236 },
	{ (Il2CppRGCTXDataType)2, 3391 },
	{ (Il2CppRGCTXDataType)3, 13607 },
	{ (Il2CppRGCTXDataType)3, 39789 },
	{ (Il2CppRGCTXDataType)2, 5684 },
	{ (Il2CppRGCTXDataType)3, 35086 },
	{ (Il2CppRGCTXDataType)3, 17921 },
	{ (Il2CppRGCTXDataType)2, 3984 },
	{ (Il2CppRGCTXDataType)2, 5671 },
	{ (Il2CppRGCTXDataType)3, 34910 },
	{ (Il2CppRGCTXDataType)3, 13606 },
	{ (Il2CppRGCTXDataType)3, 17922 },
	{ (Il2CppRGCTXDataType)3, 39788 },
	{ (Il2CppRGCTXDataType)2, 5680 },
	{ (Il2CppRGCTXDataType)3, 34994 },
	{ (Il2CppRGCTXDataType)3, 17935 },
	{ (Il2CppRGCTXDataType)2, 3986 },
	{ (Il2CppRGCTXDataType)2, 5678 },
	{ (Il2CppRGCTXDataType)3, 34977 },
	{ (Il2CppRGCTXDataType)3, 19068 },
	{ (Il2CppRGCTXDataType)3, 10395 },
	{ (Il2CppRGCTXDataType)3, 13608 },
	{ (Il2CppRGCTXDataType)3, 10394 },
	{ (Il2CppRGCTXDataType)3, 17936 },
	{ (Il2CppRGCTXDataType)3, 39790 },
	{ (Il2CppRGCTXDataType)2, 5688 },
	{ (Il2CppRGCTXDataType)3, 35196 },
	{ (Il2CppRGCTXDataType)3, 17949 },
	{ (Il2CppRGCTXDataType)2, 3988 },
	{ (Il2CppRGCTXDataType)2, 5686 },
	{ (Il2CppRGCTXDataType)3, 35088 },
	{ (Il2CppRGCTXDataType)3, 17950 },
	{ (Il2CppRGCTXDataType)2, 3239 },
	{ (Il2CppRGCTXDataType)2, 3394 },
	{ (Il2CppRGCTXDataType)3, 13612 },
	{ (Il2CppRGCTXDataType)3, 13611 },
	{ (Il2CppRGCTXDataType)2, 5675 },
	{ (Il2CppRGCTXDataType)3, 34929 },
	{ (Il2CppRGCTXDataType)3, 39800 },
	{ (Il2CppRGCTXDataType)2, 5685 },
	{ (Il2CppRGCTXDataType)3, 35087 },
	{ (Il2CppRGCTXDataType)3, 17942 },
	{ (Il2CppRGCTXDataType)2, 3987 },
	{ (Il2CppRGCTXDataType)2, 5682 },
	{ (Il2CppRGCTXDataType)3, 34996 },
	{ (Il2CppRGCTXDataType)3, 13610 },
	{ (Il2CppRGCTXDataType)3, 13609 },
	{ (Il2CppRGCTXDataType)3, 17943 },
	{ (Il2CppRGCTXDataType)2, 5674 },
	{ (Il2CppRGCTXDataType)3, 34928 },
	{ (Il2CppRGCTXDataType)3, 39799 },
	{ (Il2CppRGCTXDataType)2, 5681 },
	{ (Il2CppRGCTXDataType)3, 34995 },
	{ (Il2CppRGCTXDataType)3, 17956 },
	{ (Il2CppRGCTXDataType)2, 3989 },
	{ (Il2CppRGCTXDataType)2, 5690 },
	{ (Il2CppRGCTXDataType)3, 35198 },
	{ (Il2CppRGCTXDataType)3, 19069 },
	{ (Il2CppRGCTXDataType)3, 10397 },
	{ (Il2CppRGCTXDataType)3, 13614 },
	{ (Il2CppRGCTXDataType)3, 13613 },
	{ (Il2CppRGCTXDataType)3, 10396 },
	{ (Il2CppRGCTXDataType)3, 17957 },
	{ (Il2CppRGCTXDataType)2, 5676 },
	{ (Il2CppRGCTXDataType)3, 34930 },
	{ (Il2CppRGCTXDataType)3, 39801 },
	{ (Il2CppRGCTXDataType)2, 5689 },
	{ (Il2CppRGCTXDataType)3, 35197 },
	{ (Il2CppRGCTXDataType)3, 13603 },
	{ (Il2CppRGCTXDataType)3, 13604 },
	{ (Il2CppRGCTXDataType)3, 13615 },
	{ (Il2CppRGCTXDataType)3, 397 },
	{ (Il2CppRGCTXDataType)3, 396 },
	{ (Il2CppRGCTXDataType)2, 3231 },
	{ (Il2CppRGCTXDataType)2, 3387 },
	{ (Il2CppRGCTXDataType)3, 13605 },
	{ (Il2CppRGCTXDataType)2, 3247 },
	{ (Il2CppRGCTXDataType)2, 3410 },
	{ (Il2CppRGCTXDataType)3, 399 },
	{ (Il2CppRGCTXDataType)2, 1206 },
	{ (Il2CppRGCTXDataType)2, 1400 },
	{ (Il2CppRGCTXDataType)3, 395 },
	{ (Il2CppRGCTXDataType)3, 398 },
	{ (Il2CppRGCTXDataType)3, 259 },
	{ (Il2CppRGCTXDataType)3, 260 },
	{ (Il2CppRGCTXDataType)2, 3224 },
	{ (Il2CppRGCTXDataType)2, 3382 },
	{ (Il2CppRGCTXDataType)3, 262 },
	{ (Il2CppRGCTXDataType)2, 953 },
	{ (Il2CppRGCTXDataType)2, 1390 },
	{ (Il2CppRGCTXDataType)3, 258 },
	{ (Il2CppRGCTXDataType)3, 261 },
	{ (Il2CppRGCTXDataType)3, 295 },
	{ (Il2CppRGCTXDataType)2, 5222 },
	{ (Il2CppRGCTXDataType)3, 31809 },
	{ (Il2CppRGCTXDataType)2, 3227 },
	{ (Il2CppRGCTXDataType)2, 3384 },
	{ (Il2CppRGCTXDataType)3, 31810 },
	{ (Il2CppRGCTXDataType)3, 297 },
	{ (Il2CppRGCTXDataType)2, 955 },
	{ (Il2CppRGCTXDataType)2, 1392 },
	{ (Il2CppRGCTXDataType)3, 294 },
	{ (Il2CppRGCTXDataType)3, 296 },
	{ (Il2CppRGCTXDataType)3, 382 },
	{ (Il2CppRGCTXDataType)2, 957 },
	{ (Il2CppRGCTXDataType)3, 384 },
	{ (Il2CppRGCTXDataType)2, 1398 },
	{ (Il2CppRGCTXDataType)3, 381 },
	{ (Il2CppRGCTXDataType)3, 383 },
	{ (Il2CppRGCTXDataType)2, 6497 },
	{ (Il2CppRGCTXDataType)2, 2340 },
	{ (Il2CppRGCTXDataType)2, 1331 },
	{ (Il2CppRGCTXDataType)3, 4 },
	{ (Il2CppRGCTXDataType)2, 2690 },
	{ (Il2CppRGCTXDataType)3, 13601 },
	{ (Il2CppRGCTXDataType)2, 1345 },
	{ (Il2CppRGCTXDataType)3, 16 },
	{ (Il2CppRGCTXDataType)2, 1345 },
	{ (Il2CppRGCTXDataType)2, 4767 },
	{ (Il2CppRGCTXDataType)3, 25304 },
	{ (Il2CppRGCTXDataType)3, 25306 },
	{ (Il2CppRGCTXDataType)3, 14695 },
	{ (Il2CppRGCTXDataType)3, 12390 },
	{ (Il2CppRGCTXDataType)2, 2471 },
	{ (Il2CppRGCTXDataType)2, 6572 },
	{ (Il2CppRGCTXDataType)2, 1394 },
	{ (Il2CppRGCTXDataType)3, 335 },
	{ (Il2CppRGCTXDataType)3, 25305 },
	{ (Il2CppRGCTXDataType)2, 793 },
	{ (Il2CppRGCTXDataType)2, 3514 },
	{ (Il2CppRGCTXDataType)3, 25307 },
	{ (Il2CppRGCTXDataType)3, 25308 },
	{ (Il2CppRGCTXDataType)2, 2919 },
	{ (Il2CppRGCTXDataType)3, 14694 },
	{ (Il2CppRGCTXDataType)2, 6552 },
	{ (Il2CppRGCTXDataType)2, 3175 },
	{ (Il2CppRGCTXDataType)2, 3352 },
	{ (Il2CppRGCTXDataType)3, 13592 },
	{ (Il2CppRGCTXDataType)3, 13593 },
	{ (Il2CppRGCTXDataType)3, 38927 },
	{ (Il2CppRGCTXDataType)2, 1396 },
	{ (Il2CppRGCTXDataType)3, 367 },
	{ (Il2CppRGCTXDataType)3, 14696 },
	{ (Il2CppRGCTXDataType)3, 35663 },
	{ (Il2CppRGCTXDataType)2, 1224 },
	{ (Il2CppRGCTXDataType)3, 12398 },
	{ (Il2CppRGCTXDataType)2, 2474 },
	{ (Il2CppRGCTXDataType)2, 6606 },
	{ (Il2CppRGCTXDataType)3, 31806 },
	{ (Il2CppRGCTXDataType)3, 31807 },
	{ (Il2CppRGCTXDataType)2, 3518 },
	{ (Il2CppRGCTXDataType)3, 31808 },
	{ (Il2CppRGCTXDataType)2, 848 },
	{ (Il2CppRGCTXDataType)3, 25309 },
	{ (Il2CppRGCTXDataType)2, 4769 },
	{ (Il2CppRGCTXDataType)3, 25310 },
	{ (Il2CppRGCTXDataType)3, 14687 },
	{ (Il2CppRGCTXDataType)2, 1393 },
	{ (Il2CppRGCTXDataType)3, 316 },
	{ (Il2CppRGCTXDataType)3, 27754 },
	{ (Il2CppRGCTXDataType)2, 4992 },
	{ (Il2CppRGCTXDataType)3, 27774 },
	{ (Il2CppRGCTXDataType)2, 1832 },
	{ (Il2CppRGCTXDataType)3, 3496 },
	{ (Il2CppRGCTXDataType)3, 27760 },
	{ (Il2CppRGCTXDataType)3, 10349 },
	{ (Il2CppRGCTXDataType)2, 1008 },
	{ (Il2CppRGCTXDataType)3, 27755 },
	{ (Il2CppRGCTXDataType)2, 4988 },
	{ (Il2CppRGCTXDataType)3, 4023 },
	{ (Il2CppRGCTXDataType)2, 1877 },
	{ (Il2CppRGCTXDataType)2, 2403 },
	{ (Il2CppRGCTXDataType)3, 10361 },
	{ (Il2CppRGCTXDataType)3, 27756 },
	{ (Il2CppRGCTXDataType)3, 10344 },
	{ (Il2CppRGCTXDataType)3, 10345 },
	{ (Il2CppRGCTXDataType)3, 10343 },
	{ (Il2CppRGCTXDataType)3, 10346 },
	{ (Il2CppRGCTXDataType)2, 2399 },
	{ (Il2CppRGCTXDataType)2, 6550 },
	{ (Il2CppRGCTXDataType)3, 13600 },
	{ (Il2CppRGCTXDataType)3, 10348 },
	{ (Il2CppRGCTXDataType)2, 3118 },
	{ (Il2CppRGCTXDataType)3, 10347 },
	{ (Il2CppRGCTXDataType)2, 2987 },
	{ (Il2CppRGCTXDataType)2, 6489 },
	{ (Il2CppRGCTXDataType)2, 3193 },
	{ (Il2CppRGCTXDataType)2, 3357 },
	{ (Il2CppRGCTXDataType)3, 12378 },
	{ (Il2CppRGCTXDataType)2, 2466 },
	{ (Il2CppRGCTXDataType)3, 14738 },
	{ (Il2CppRGCTXDataType)3, 14739 },
	{ (Il2CppRGCTXDataType)2, 2928 },
	{ (Il2CppRGCTXDataType)3, 14742 },
	{ (Il2CppRGCTXDataType)2, 2928 },
	{ (Il2CppRGCTXDataType)3, 14747 },
	{ (Il2CppRGCTXDataType)2, 2991 },
	{ (Il2CppRGCTXDataType)3, 14751 },
	{ (Il2CppRGCTXDataType)3, 14759 },
	{ (Il2CppRGCTXDataType)3, 14758 },
	{ (Il2CppRGCTXDataType)2, 6604 },
	{ (Il2CppRGCTXDataType)3, 14741 },
	{ (Il2CppRGCTXDataType)3, 14740 },
	{ (Il2CppRGCTXDataType)3, 14752 },
	{ (Il2CppRGCTXDataType)2, 3510 },
	{ (Il2CppRGCTXDataType)3, 14749 },
	{ (Il2CppRGCTXDataType)3, 40884 },
	{ (Il2CppRGCTXDataType)2, 2405 },
	{ (Il2CppRGCTXDataType)3, 10381 },
	{ (Il2CppRGCTXDataType)1, 3113 },
	{ (Il2CppRGCTXDataType)2, 6505 },
	{ (Il2CppRGCTXDataType)3, 14748 },
	{ (Il2CppRGCTXDataType)1, 6505 },
	{ (Il2CppRGCTXDataType)1, 3510 },
	{ (Il2CppRGCTXDataType)2, 6604 },
	{ (Il2CppRGCTXDataType)2, 6505 },
	{ (Il2CppRGCTXDataType)2, 3197 },
	{ (Il2CppRGCTXDataType)2, 3359 },
	{ (Il2CppRGCTXDataType)3, 14744 },
	{ (Il2CppRGCTXDataType)3, 14755 },
	{ (Il2CppRGCTXDataType)3, 14754 },
	{ (Il2CppRGCTXDataType)3, 14761 },
	{ (Il2CppRGCTXDataType)3, 14746 },
	{ (Il2CppRGCTXDataType)3, 14743 },
	{ (Il2CppRGCTXDataType)3, 14757 },
	{ (Il2CppRGCTXDataType)3, 14750 },
	{ (Il2CppRGCTXDataType)3, 14745 },
	{ (Il2CppRGCTXDataType)3, 14756 },
	{ (Il2CppRGCTXDataType)3, 14753 },
	{ (Il2CppRGCTXDataType)3, 14760 },
	{ (Il2CppRGCTXDataType)2, 729 },
	{ (Il2CppRGCTXDataType)3, 10398 },
	{ (Il2CppRGCTXDataType)2, 971 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	249,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	71,
	s_rgctxIndices,
	348,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
