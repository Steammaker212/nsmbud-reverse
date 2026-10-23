/* sub_6034C9F4
 * address: 0x6034C9F4   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6034C9F4(int a1)
{
  char v1; // r12
  int v3; // r0
  float *v4; // r2
  float v5; // s0
  float v6; // s2
  float v7; // s4
  float v8; // s6
  float v9; // s8
  int v10; // r2
  int v11; // r1
  _DWORD v13[10]; // [sp+0h] [bp-28h] BYREF

  if ( ((unsigned int)&algn_60C94CEC[4] & ~(1614072340 << v1) & 1) == 0
    && _cxa_guard_acquire((__guard *)&algn_60C94CEC[4]) )
  {
    dword_60C94D4C = 1065353216;
    dword_60C94D50 = 1063675494;
    dword_60C94D54 = 1065353216;
    _cxa_guard_release((__guard *)&algn_60C94CEC[4]);
  }
  if ( ((unsigned int)&algn_60C94CEC[8] & ~(1614072428 << v1) & 1) == 0
    && _cxa_guard_acquire((__guard *)&algn_60C94CEC[8]) )
  {
    dword_60C94D60 = 1065772646;
    dword_60C94D64 = 1065772646;
    dword_60C94D68 = 1065772646;
    _cxa_guard_release((__guard *)&algn_60C94CEC[8]);
  }
  v3 = FIELD_U32(a1, 6820);
  v4 = (float *)&dword_60C94D60;
  if ( !FIELD_U32(a1, 6352) )
    v4 = (float *)&dword_60C94D4C;
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  if ( v3 == 1 )
  {
    v7 = v7 + v7;
    v6 = v6 + v6;
    v5 = v5 + v5;
    v8 = -4.0;
  }
  else
  {
    v8 = -2.0;
  }
  v9 = FIELD_F32(a1, 112);
  v10 = FIELD_U32(a1, 108);
  v11 = FIELD_U32(a1, 116);
  if ( v3 )
    v3 = 4352;
  v13[0] = v3;
  v13[1] = v10;
  *(float *)&v13[2] = v8 + v9;
  v13[3] = v11;
  *(float *)&v13[4] = v5;
  *(float *)&v13[5] = v6;
  *(float *)&v13[6] = v7;
  v13[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v13, 1u);
}
