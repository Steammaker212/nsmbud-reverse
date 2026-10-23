/* sub_6037BC68
 * address: 0x6037BC68   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037BC68(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  unsigned int v7; // r0
  float *v8; // r1
  float v9; // s0
  float v10; // s8
  float v11; // s4
  float v12; // s10
  int v13; // r1
  int v14; // r1
  signed int v16; // [sp+4h] [bp-14h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60C966CC + 8))() )
  {
    v5 = StateMgr__getCurrentState(v2);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    if ( v6 != (*(int (**)(void))(dword_60C8F9A0 + 8))() )
    {
      sub_606D4384(&v16, FIELD_U8(a1, 7648));
      sub_606D465C(a1 + 7616, a1 + 7628);
      v7 = FIELD_U32(a1, 7656) + FIELD_U32(a1, 7628);
      FIELD_U32(a1, 164) = v7;
      v8 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
      v9 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
      v10 = v8[2] + (float)(v9 * v8[3]);
      v11 = *v8 + (float)(v8[1] * v9);
      v12 = FIELD_F32(a1, 7608) + -32.0;
      FIELD_F32(a1, 108) = FIELD_F32(a1, 7616) + (float)((float)(v10 * 0.0) - (float)(v12 * v11));
      FIELD_F32(a1, 112) = FIELD_F32(a1, 7620) + (float)((float)(v12 * v10) + (float)(v11 * 0.0));
    }
  }
  v13 = FIELD_U32(a1, 7664);
  if ( v13 )
  {
    v14 = v13 - 1;
    FIELD_U32(a1, 7664) = v14;
    if ( !v14 )
      sub_6037BE04(a1);
  }
  return sub_6029057C();
}
