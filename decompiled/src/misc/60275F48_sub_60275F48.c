/* sub_60275F48
 * address: 0x60275F48   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60275F48(int a1)
{
  float v2; // r1
  unsigned int v3; // r0
  int v4; // r1
  int v5; // r0
  float v6; // s0
  __int64 v7; // r0
  Vec2 position; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  v3 = FIELD_U32(a1, 20);
  v4 = (v3 >> 2) & 0x1C;
  v5 = v3 & 1;
  FIELD_U32(a1, 80) = v5;
  FIELD_F32(a1, 6496) = *(float *)((char *)&flt_60AFDD1C[8 * v5] + v4);
  LineFollower_init((LineFollower *)(a1 + 6316), &position, FIELD_U8(a1, 86), 0, 0);
  ((void (__fastcall *)(int, _DWORD))LineFollower_start)(a1 + 6316, 0);
  FIELD_U8(a1, 6472) = 0;
  FIELD_U32(a1, 6480) = -1;
  FIELD_U32(a1, 6476) = -1;
  FIELD_U32(a1, 6488) = 0;
  v6 = FIELD_F32(a1, 112) - FIELD_F32(a1, 588);
  FIELD_F32(a1, 120) = FIELD_F32(a1, 108) - FIELD_F32(a1, 584);
  FIELD_U32(a1, 124) = 1077936128;
  FIELD_U32(a1, 128) = 0;
  if ( v6 > 0.0 )
    FIELD_F32(a1, 124) = v6 + 3.0;
  FIELD_U32(a1, 100) = -1103101952;
  v7 = 0x10000196CLL;
  if ( FIELD_U32(a1, 164) )
    BYTE4(v7) = 2;
  FIELD_U8(a1, 6508) = BYTE4(v7);
  return v7;
}
