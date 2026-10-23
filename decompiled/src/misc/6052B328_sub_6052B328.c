/* sub_6052B328
 * address: 0x6052B328   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052B328(int a1)
{
  int v2; // r1
  int v3; // r3

  *(_DWORD *)a1 = &off_60C000C0;
  FIELD_U32(a1, 20) = &off_60C000F4;
  FIELD_U32(a1, 24) = &off_60C00104;
  FIELD_U32(a1, 28) = &off_60C00128;
  FIELD_U32(a1, 32) = a1;
  FIELD_U32(a1, 36) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 40), (StateExecuter *)(a1 + 24), (StateBase *)&dword_60CAA454);
  v2 = 60;
  FIELD_U32(a1, 20) = &off_60C000E4;
  FIELD_U8(a1, 56) = 0;
  do
  {
    *(_BYTE *)(a1 + v2) = 0;
    v3 = a1 + v2;
    v2 += 48;
    FIELD_U32(v3, 4) = 0;
    FIELD_U32(v3, 20) = 0;
    FIELD_U32(v3, 24) = 0;
    FIELD_U32(v3, 28) = 4;
    FIELD_U8(v3, 32) = 0;
    FIELD_U32(v3, 36) = 0;
    FIELD_U8(v3, 40) = 0;
    FIELD_U32(v3, 44) = 0;
  }
  while ( v3 + 48 != a1 + 2940 );
  FIELD_U8(a1, 2940) = 0;
  FIELD_U32(a1, 2944) = 0;
  FIELD_U32(a1, 2960) = 0;
  FIELD_U32(a1, 2964) = 0;
  FIELD_U32(a1, 2968) = 4;
  FIELD_U8(a1, 2972) = 0;
  FIELD_U32(a1, 2976) = 0;
  FIELD_U8(a1, 2980) = 0;
  FIELD_U32(a1, 2984) = 0;
  FIELD_U8(a1, 2988) = 0;
  FIELD_U32(a1, 2992) = 0;
  FIELD_U32(a1, 3008) = 0;
  FIELD_U32(a1, 3012) = 0;
  FIELD_U32(a1, 3016) = 4;
  FIELD_U8(a1, 3020) = 0;
  FIELD_U32(a1, 3024) = 0;
  FIELD_U8(a1, 3028) = 0;
  FIELD_U32(a1, 3032) = 0;
  FIELD_U8(a1, 3036) = 0;
  FIELD_U32(a1, 3040) = 0;
  FIELD_U32(a1, 3056) = 0;
  FIELD_U32(a1, 3060) = 0;
  FIELD_U32(a1, 3064) = 4;
  FIELD_U8(a1, 3068) = 0;
  FIELD_U32(a1, 3072) = 0;
  FIELD_U8(a1, 3076) = 0;
  FIELD_U32(a1, 3080) = 0;
  FIELD_U32(a1, 3084) = 0;
  FIELD_U32(a1, 3088) = 0;
  FIELD_U32(a1, 3220) = 0;
  FIELD_U32(a1, 3224) = -1;
  FIELD_U16(a1, 3228) = 0;
  memset((void *)(a1 + 3092), 0, 64);
  FIELD_U32(a1, 3156) = 1176256512;
  FIELD_U32(a1, 3160) = 1176256512;
  FIELD_U32(a1, 3164) = 1176256512;
  FIELD_U32(a1, 3168) = 1176256512;
  FIELD_U32(a1, 3200) = 0;
  FIELD_U32(a1, 3196) = 0;
  FIELD_U32(a1, 3192) = 0;
  FIELD_U32(a1, 3188) = 0;
  FIELD_U32(a1, 3184) = 0;
  FIELD_U32(a1, 3180) = 0;
  FIELD_U32(a1, 3176) = 0;
  FIELD_U32(a1, 3172) = 0;
  FIELD_U32(a1, 3204) = 1065353216;
  FIELD_U32(a1, 3208) = 1065353216;
  FIELD_U32(a1, 3212) = 1065353216;
  FIELD_U32(a1, 3216) = 1065353216;
  return a1;
}
