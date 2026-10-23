/* sub_60691D3C
 * address: 0x60691D3C   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60691D3C(int a1)
{
  _DWORD *v2; // r6
  unsigned int result; // r0
  StateBase *CurrentState; // r0
  int v5; // r5
  unsigned int v6; // r0
  float *v7; // r1
  float v8; // s12
  float v9; // s0
  float v10; // s2
  float v11; // s8
  float v12; // s4
  float v13; // s10
  int v14; // r0
  bool v15; // zf
  Vec2 v16; // [sp+0h] [bp-28h] BYREF
  signed int v17; // [sp+8h] [bp-20h] BYREF
  signed int v18; // [sp+Ch] [bp-1Ch] BYREF
  Vec2 a2; // [sp+10h] [bp-18h] BYREF

  v2 = (_DWORD *)(a1 + 6568);
  if ( FIELD_U32(a1, 6568)
    || FIELD_U8(a1, 6572)
    && (CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
        v5 == (*(int (**)(void))(dword_60CB9028 + 8))())
    && FIELD_U32(a1, 6576) )
  {
    result = FIELD_U32(a1, 6564) + 0x10000000;
    FIELD_U32(a1, 6564) = result;
  }
  else
  {
    if ( FIELD_U32(a1, 6576) == 60 )
      sub_60690D34(a1 + 6100);
    v16.x = 0.0;
    v16.y = 0.0;
    v6 = FIELD_U32(a1, 164);
    v7 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
    v8 = FIELD_F32(a1, 6552);
    v9 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
    v10 = FIELD_F32(a1, 6556);
    v11 = v7[2] + (float)(v9 * v7[3]);
    v12 = *v7 + (float)(v7[1] * v9);
    v13 = FIELD_F32(a1, 112);
    a2.x = FIELD_F32(a1, 108) + (float)((float)(v8 * v11) - (float)(v12 * v10));
    a2.y = (float)((float)(v10 * v11) + (float)(v12 * v8)) + v13;
    result = distanceToPLayer(&v16, &a2);
    if ( result <= 3 )
    {
      v14 = *(_DWORD *)(PlayerMgr_instance + 4 * result + 32);
      v15 = v14 == 0;
      if ( v14 )
        v15 = (FIELD_U8(v14, 1212) & 0x40) == 0;
      if ( v15 )
      {
        LODWORD(a2.x) = sub_6000F7B8(v16.y, v16.x) - FIELD_U32(a1, 164);
        v18 = 0x10000000;
        v17 = 0x200000;
        return (unsigned int)sub_608322C0((int *)(a1 + 6564), (int *)&a2, &v18, &v17);
      }
      else
      {
        *v2 = 64;
        return 64;
      }
    }
  }
  return result;
}
