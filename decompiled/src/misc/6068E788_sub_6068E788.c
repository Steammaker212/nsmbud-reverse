/* sub_6068E788
 * address: 0x6068E788   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6068E788(int r0_0)
{
  int v2; // r0
  _BYTE *v3; // r5
  unsigned int result; // r0
  unsigned int v5; // r1
  float v6; // s12
  float v7; // s14
  float *v8; // r0
  float v9; // s0
  float v10; // s2
  float v11; // s8
  float v12; // s4
  int v13; // r0
  bool v14; // zf
  signed int v15; // [sp+0h] [bp-28h] BYREF
  signed int v16; // [sp+4h] [bp-24h] BYREF
  Vec2 a1; // [sp+8h] [bp-20h] BYREF
  Vec2 a2; // [sp+10h] [bp-18h] BYREF

  v3 = (_BYTE *)(r0_0 + 6824);
  v2 = FIELD_U8(r0_0, 6824);
  if ( v2 )
  {
    *v3 = v2 - 1;
    result = FIELD_U32(r0_0, 6820) + 0x10000000;
    FIELD_U32(r0_0, 6820) = result;
  }
  else
  {
    if ( FIELD_U8(r0_0, 6832) == 60 )
      sub_60690D34(r0_0 + 6736);
    v5 = FIELD_U32(r0_0, 164);
    v6 = FIELD_F32(r0_0, 6796);
    v7 = FIELD_F32(r0_0, 112);
    v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
    v9 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
    v10 = FIELD_F32(r0_0, 6792);
    v11 = v8[2] + (float)(v9 * v8[3]);
    v12 = *v8 + (float)(v8[1] * v9);
    a2.x = FIELD_F32(r0_0, 108) + (float)((float)(v10 * v11) - (float)(v12 * v6));
    a2.y = (float)((float)(v6 * v11) + (float)(v12 * v10)) + v7;
    result = distanceToPLayer(&a1, &a2);
    if ( result <= 3 )
    {
      v13 = *(_DWORD *)(PlayerMgr_instance + 4 * result + 32);
      v14 = v13 == 0;
      if ( v13 )
        v14 = (FIELD_U8(v13, 1212) & 0x40) == 0;
      if ( v14 )
      {
        LODWORD(a2.x) = sub_6000F7B8(a1.y, a1.x) - FIELD_U32(r0_0, 164);
        v16 = 0x10000000;
        v15 = 0x200000;
        return (unsigned int)sub_608322C0((int *)(r0_0 + 6820), (int *)&a2, &v16, &v15);
      }
      else
      {
        *v3 = 64;
        return 64;
      }
    }
  }
  return result;
}
