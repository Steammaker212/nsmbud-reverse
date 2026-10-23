/* sub_60239EB0
 * address: 0x60239EB0   size: 1652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60239EB0(int a1)
{
  signed int v2; // r5
  _BYTE *v3; // r6
  signed int v4; // r0
  _BYTE *v5; // r5
  signed int i; // r6
  signed int v7; // r0

  sub_6023A5CC(a1 + 8);
  v2 = 0;
  FIELD_U32(a1, 2232) = 0;
  FIELD_U32(a1, 2236) = 0;
  FIELD_U32(a1, 2240) = 0;
  FIELD_U32(a1, 2244) = 1065353216;
  FIELD_U32(a1, 2248) = 0;
  FIELD_U32(a1, 2308) = a1 + 2316;
  FIELD_U32(a1, 2304) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 2312) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 2304);
  **(_BYTE **)(a1 + 2308) = 0;
  FIELD_U32(a1, 2304) = &off_60BD4BF0;
  FIELD_U32(a1, 2384) = a1 + 2392;
  FIELD_U32(a1, 2380) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 2388) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 2380);
  **(_BYTE **)(a1 + 2384) = 0;
  FIELD_U32(a1, 2380) = &off_60BD4BF0;
  FIELD_U32(a1, 2460) = a1 + 2468;
  FIELD_U32(a1, 2456) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 2464) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 2456);
  **(_BYTE **)(a1 + 2460) = 0;
  FIELD_U32(a1, 2456) = &off_60BD4BF0;
  FIELD_U32(a1, 2536) = a1 + 2544;
  FIELD_U32(a1, 2532) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 2540) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 2532);
  **(_BYTE **)(a1 + 2536) = 0;
  FIELD_U32(a1, 2532) = &off_60BD4BF0;
  FIELD_U32(a1, 2612) = a1 + 2620;
  FIELD_U32(a1, 2608) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 2616) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 2608);
  **(_BYTE **)(a1 + 2612) = 0;
  FIELD_U32(a1, 2608) = &off_60BD4BF0;
  FIELD_U32(a1, 2688) = a1 + 2696;
  FIELD_U32(a1, 2684) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 2692) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 2684);
  **(_BYTE **)(a1 + 2688) = 0;
  FIELD_U32(a1, 2684) = &off_60BD4BF0;
  FIELD_U32(a1, 2764) = a1 + 2772;
  FIELD_U32(a1, 2760) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 2768) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 2760);
  **(_BYTE **)(a1 + 2764) = 0;
  FIELD_U32(a1, 2760) = &off_60BD4BF0;
  FIELD_U32(a1, 2840) = a1 + 2848;
  FIELD_U32(a1, 2836) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 2844) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 2836);
  **(_BYTE **)(a1 + 2840) = 0;
  FIELD_U32(a1, 2836) = &off_60BD4BF0;
  FIELD_U32(a1, 2916) = a1 + 2924;
  FIELD_U32(a1, 2912) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 2920) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 2912);
  **(_BYTE **)(a1 + 2916) = 0;
  FIELD_U32(a1, 2912) = &off_60BD4BF0;
  FIELD_U32(a1, 2992) = a1 + 3000;
  FIELD_U32(a1, 2988) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 2996) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 2988);
  **(_BYTE **)(a1 + 2992) = 0;
  FIELD_U32(a1, 2988) = &off_60BD4BF0;
  FIELD_U32(a1, 3068) = a1 + 3076;
  FIELD_U32(a1, 3064) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 3072) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 3064);
  **(_BYTE **)(a1 + 3068) = 0;
  FIELD_U32(a1, 3064) = &off_60BD4BF0;
  FIELD_U32(a1, 3144) = a1 + 3152;
  FIELD_U32(a1, 3140) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 3148) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 3140);
  **(_BYTE **)(a1 + 3144) = 0;
  FIELD_U32(a1, 3140) = &off_60BD4BF0;
  FIELD_U32(a1, 3220) = a1 + 3228;
  FIELD_U32(a1, 3216) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 3224) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 3216);
  **(_BYTE **)(a1 + 3220) = 0;
  FIELD_U32(a1, 3216) = &off_60BD4BF0;
  FIELD_U32(a1, 3296) = a1 + 3304;
  FIELD_U32(a1, 3292) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 3300) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 3292);
  **(_BYTE **)(a1 + 3296) = 0;
  FIELD_U32(a1, 3292) = &off_60BD4BF0;
  FIELD_U32(a1, 3372) = a1 + 3380;
  FIELD_U32(a1, 3368) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 3376) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 3368);
  **(_BYTE **)(a1 + 3372) = 0;
  FIELD_U32(a1, 3368) = &off_60BD4BF0;
  FIELD_U32(a1, 3448) = a1 + 3456;
  FIELD_U32(a1, 3444) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 3452) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 3444);
  **(_BYTE **)(a1 + 3448) = 0;
  FIELD_U32(a1, 3444) = &off_60BD4BF0;
  FIELD_U32(a1, 3524) = a1 + 3532;
  FIELD_U32(a1, 3520) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 3528) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 3520);
  **(_BYTE **)(a1 + 3524) = 0;
  FIELD_U32(a1, 3520) = &off_60BD4BF0;
  FIELD_U32(a1, 3600) = a1 + 3608;
  FIELD_U32(a1, 3596) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 3604) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 3596);
  **(_BYTE **)(a1 + 3600) = 0;
  FIELD_U32(a1, 3596) = &off_60BD4BF0;
  FIELD_U64(a1, 2184) = unk_60B3B8CC;
  FIELD_U64(a1, 2192) = unk_60B3B8D4;
  FIELD_U64(a1, 2200) = unk_60B3B8DC;
  FIELD_U64(a1, 2208) = unk_60B3B8E4;
  FIELD_U64(a1, 2216) = unk_60B3B8EC;
  FIELD_U64(a1, 2224) = unk_60B3B8F4;
  FIELD_U64(a1, 2252) = unk_60B3B8CC;
  FIELD_U64(a1, 2260) = unk_60B3B8D4;
  FIELD_U64(a1, 2268) = unk_60B3B8DC;
  FIELD_U64(a1, 2276) = unk_60B3B8E4;
  FIELD_U64(a1, 2284) = unk_60B3B8EC;
  FIELD_U64(a1, 2292) = unk_60B3B8F4;
  FIELD_U32(a1, 2300) = 1065353216;
  FIELD_U32(a1, 4) = 0;
  sub_608FDDF4(a1 + 2304, "[%d]", 0);
  sub_608FDDF4(a1 + 2380, "[%d]", 1);
  sub_608FDDF4(a1 + 2456, "[%d]", 2);
  sub_608FDDF4(a1 + 2532, "[%d]", 3);
  sub_608FDDF4(a1 + 2608, "[%d]", 4);
  sub_608FDDF4(a1 + 2684, "[%d]", 5);
  sub_608FDDF4(a1 + 2760, "[%d]", 6);
  sub_608FDDF4(a1 + 2836, "[%d]", 7);
  sub_608FDDF4(a1 + 2912, "[%d]", 8);
  sub_608FDDF4(a1 + 2988, "[%d]", 9);
  sub_608FDDF4(a1 + 3064, "[%d]", 10);
  sub_608FDDF4(a1 + 3140, "[%d]", 11);
  sub_608FDDF4(a1 + 3216, "[%d]", 12);
  sub_608FDDF4(a1 + 3292, "[%d]", 13);
  sub_608FDDF4(a1 + 3368, "[%d]", 14);
  sub_608FDDF4(a1 + 3444, "[%d]", 15);
  v3 = *(_BYTE **)(a1 + 3524);
  if ( v3 != byte_60AF7EB8 )
  {
    while ( byte_60AF7EB8[v2] )
    {
      if ( v2 > 0x7FFFF )
      {
        v2 = 0;
        break;
      }
      if ( !byte_60AF7EB8[v2 + 1] )
      {
        ++v2;
        break;
      }
      v2 += 2;
    }
    v4 = FIELD_U32(a1, 3528);
    if ( v2 >= v4 )
      v2 = v4 - 1;
    qmemcpy(*(void **)(a1 + 3524), byte_60AF7EB8, v2);
    v3[v2] = 0;
  }
  v5 = *(_BYTE **)(a1 + 3600);
  if ( v5 != byte_60AF7EC8 )
  {
    for ( i = 0; byte_60AF7EC8[i]; i += 2 )
    {
      if ( i > 0x7FFFF )
      {
        i = 0;
        break;
      }
      if ( !byte_60AF7EC8[i + 1] )
      {
        ++i;
        break;
      }
    }
    v7 = FIELD_U32(a1, 3604);
    if ( i >= v7 )
      i = v7 - 1;
    qmemcpy(*(void **)(a1 + 3600), byte_60AF7EC8, i);
    v5[i] = 0;
  }
  FIELD_U32(a1, 2232) = 1065353216;
  FIELD_U32(a1, 2236) = 1065353216;
  FIELD_U32(a1, 2240) = 1065353216;
  FIELD_U32(a1, 2244) = 1065353216;
  return a1;
}
