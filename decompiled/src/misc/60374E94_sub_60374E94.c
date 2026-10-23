/* sub_60374E94
 * address: 0x60374E94   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60374E94(int r0_0)
{
  unsigned int v2; // r0
  float v3; // r1
  signed int v4; // r0
  float x; // s0
  int v6; // r2
  int *v7; // r0
  int v8; // r3
  int result; // r0
  Vec2 v10; // [sp+0h] [bp-20h] BYREF
  Vec2 a1; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_U32(r0_0, 20);
  FIELD_U32(r0_0, 6168) = v2 & 0xF;
  FIELD_U32(r0_0, 6172) = (unsigned __int8)v2 >> 4;
  FIELD_U32(r0_0, 6176) = (v2 >> 8) & 0xF;
  FIELD_U32(r0_0, 6180) = ((unsigned __int16)v2 >> 12) ^ 1;
  FIELD_U8(r0_0, 6184) = BYTE2(v2) & 0xF;
  FIELD_U8(r0_0, 6185) = (v2 >> 20) & 0xF;
  v3 = FIELD_F32(r0_0, 112);
  v10.x = FIELD_F32(r0_0, 108);
  v10.y = v3;
  v4 = distanceToPLayer(&a1, &v10);
  x = a1.x;
  v6 = v4 != -1 && a1.x < 0.0;
  v7 = (int *)(r0_0 + 6180);
  if ( FIELD_U32(r0_0, 6168) == 2 )
  {
    *v7 = v6;
  }
  else
  {
    v8 = *v7;
    result = 2;
    if ( v8 != v6 )
      return result;
  }
  ((void (__fastcall *)(int, float))loc_60374F80)(r0_0, x);
  StateMgr__changeState((StateMgr *)(r0_0 + 6084), (StateBase *)&dword_60C96328);
  return 1;
}
