/* SE_VOC_YS_YOSHI_ref
 * address: 0x607D3298   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_YS_YOSHI_ref(int a1)
{
  int v2; // r2
  _DWORD *v3; // r3
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r0
  float v8; // s0
  int v9; // r1
  int result; // r0

  FIELD_U32(a1, 80) = 0;
  v2 = a1 + 108;
  v3 = (_DWORD *)(a1 + 584);
  FIELD_U32(a1, 1236) |= 0x10000u;
  FIELD_U32(a1, 1228) |= 0x24400u;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 9944) = 5;
  v4 = FIELD_U32(a1, 108);
  v5 = FIELD_U32(v2, 4);
  v6 = FIELD_U32(v2, 8);
  *v3 = v4;
  v3[1] = v5;
  v3[2] = v6;
  FIELD_U32(a1, 608) = v4;
  FIELD_U32(a1, 612) = v5;
  FIELD_U32(a1, 616) = v6;
  v7 = sub_607CBC00(a1);
  if ( v7 )
    FIELD_U32(v7, 324) = 0;
  if ( (FIELD_U8(a1, 6902) & 4) != 0 )
  {
    v8 = 10.0;
    FIELD_U32(a1, 9940) = 0;
    v9 = 38;
    FIELD_U32(a1, 124) = 1083179008;
    FIELD_U32(a1, 100) = -1090519040;
  }
  else
  {
    v8 = 0.0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 100) = -1090519040;
    FIELD_U32(a1, 9940) = 1;
    v9 = 120;
  }
  FIELD_U32(a1, 96) = -1073741824;
  sub_60794954(a1 + 11364, v9, v8, 0.0);
  result = sub_607734E8((unsigned __int8 *)a1, (int)"SE_VOC_YS_YOSHI", 0, 0);
  FIELD_U32(a1, 160) = 0;
  return result;
}
