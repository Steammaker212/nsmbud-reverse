/* sub_603B5848
 * address: 0x603B5848   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603B5848(int a1)
{
  char v1; // r12
  int v3; // r0
  float v4; // s4
  float *v5; // r3
  float v6; // s6
  float v7; // s8
  float v8; // s10
  int *v9; // r3
  float v10; // s2
  int v11; // r0
  int v12; // r2
  int v13; // r3
  _DWORD v15[10]; // [sp+0h] [bp-28h] BYREF

  if ( ((unsigned int)&dword_60C980B0 & ~(1614501988 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C980B0) )
  {
    dword_60C980CC = 0;
    dword_60C980D0 = -1054448026;
    dword_60C980D4 = 0;
    _cxa_guard_release(&dword_60C980B0);
  }
  if ( ((unsigned int)&dword_60C980B4 & ~(1614502068 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C980B4) )
  {
    dword_60C980D8 = 0;
    dword_60C980DC = -1048995430;
    dword_60C980E0 = 0;
    _cxa_guard_release(&dword_60C980B4);
  }
  if ( ((unsigned int)&dword_60C980B8 & ~(1614502156 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C980B8) )
  {
    dword_60C980E4 = 1067030938;
    dword_60C980E8 = 1067030938;
    dword_60C980EC = 1067030938;
    _cxa_guard_release(&dword_60C980B8);
  }
  if ( ((unsigned int)&dword_60C980BC & ~(1614502240 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C980BC) )
  {
    dword_60C980F0 = 1072064102;
    dword_60C980F4 = 1072064102;
    dword_60C980F8 = 1072064102;
    _cxa_guard_release(&dword_60C980BC);
  }
  v3 = FIELD_U32(a1, 11804);
  v15[0] = 0;
  v4 = FIELD_F32(a1, 116);
  v5 = (float *)&dword_60C980D8;
  if ( !v3 )
    v5 = (float *)&dword_60C980CC;
  v6 = *v5;
  v7 = v5[1];
  v8 = v5[2];
  v9 = &dword_60C980F0;
  if ( !v3 )
    v9 = &dword_60C980E4;
  v10 = FIELD_F32(a1, 112) + v7;
  *(float *)&v15[1] = FIELD_F32(a1, 108) + v6;
  *(float *)&v15[2] = v10;
  *(float *)&v15[3] = v4 + v8;
  v11 = *v9;
  v12 = v9[1];
  v13 = v9[2];
  v15[4] = v11;
  v15[5] = v12;
  v15[6] = v13;
  v15[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v15, 1u);
}
