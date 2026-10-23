/* sub_606C1F94
 * address: 0x606C1F94   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C1F94(int a1)
{
  int v2; // lr
  int v3; // r2
  unsigned int v4; // r1
  unsigned int v5; // r3
  int v6; // r0
  StateMgr *v7; // r0
  int *v8; // r1
  _DWORD v10[6]; // [sp+10h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6100) = v2;
  v3 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6104) = v3;
  FIELD_U32(a1, 6108) = FIELD_U32(a1, 116);
  v4 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 6216) = (v4 & 0x40000) != 0;
  v5 = FIELD_U32(a1, 24);
  v6 = (v5 >> 20) & 0xF;
  if ( v6 )
  {
    FIELD_U8(a1, 6228) = 1;
    FIELD_F32(a1, 6240) = (float)(unsigned int)v6 * 8.0;
    FIELD_U32(a1, 6236) = (HIWORD(v5) & 0xF) * dword_60CBA9C4;
    if ( (v5 & 0x10000000) != 0 )
      FIELD_U8(a1, 6244) = 1;
  }
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 6220) = v2;
  FIELD_U32(a1, 6224) = v3;
  if ( (v5 & 0xF00000) != 0 )
    FIELD_U32(a1, 6232) = dword_60CBA9C8 * (HIBYTE(v5) & 0xF);
  v10[0] = v2;
  v10[1] = v3;
  sub_607D8938(a1 + 6112, v10, (v4 >> 20) & 0xF, (v4 >> 19) & 1, HIWORD(v4) & 3, HIBYTE(v4), BYTE1(v4));
  if ( (FIELD_U8(a1, 20) & 8) != 0
    && (FIELD_U8(a1, 6245) = FIELD_U32(a1, 24) & 1,
        (FIELD_U64(EventMgr__instance, 16)
       & sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540))) == 0) )
  {
    v7 = (StateMgr *)(a1 + 6084);
    v8 = &dword_60CBA984;
  }
  else
  {
    v7 = (StateMgr *)(a1 + 6084);
    v8 = &dword_60CBA9A4;
  }
  StateMgr__changeState(v7, (StateBase *)v8);
  return 1;
}
