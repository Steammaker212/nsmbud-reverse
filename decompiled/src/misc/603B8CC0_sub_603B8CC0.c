/* sub_603B8CC0
 * address: 0x603B8CC0   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603B8CC0(int a1)
{
  char v1; // r12
  unsigned int v3; // r1
  unsigned int v4; // r2
  float *v5; // r1
  float v6; // s0
  float v7; // s2
  float v8; // r0
  unsigned int v9; // r1
  float *v10; // r2
  float v11; // s4
  float v12; // s6
  float v13; // s8
  float v14; // s10
  float v15; // s12
  EnemyFreezeMgr_Info v17; // [sp+0h] [bp-80h] BYREF
  unsigned int v18; // [sp+20h] [bp-60h] BYREF
  unsigned int v19; // [sp+24h] [bp-5Ch] BYREF
  unsigned int v20; // [sp+28h] [bp-58h] BYREF
  Mtx34 v21; // [sp+30h] [bp-50h] BYREF

  if ( ((unsigned int)dword_60C982A4 & ~(1614515424 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C982A4) )
  {
    byte_60C982A0 = 0;
    byte_60C982A1 = 0;
    byte_60C982A2 = 1;
    _cxa_guard_release(dword_60C982A4);
  }
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C982A0);
  SE_OBJ_PNGN_ICE_FREEZE_ref(a1 + 6152);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v18 = FIELD_U32(a1, 156);
  v19 = v3;
  v20 = v4;
  v5 = (float *)(a1 + 6456);
  if ( FIELD_U8(a1, 22613) )
  {
    v6 = *v5 + FIELD_F32(a1, 22628);
    v7 = FIELD_F32(a1, 6452) + FIELD_F32(a1, 22624);
  }
  else
  {
    v6 = *v5;
    v7 = FIELD_F32(a1, 6452);
  }
  v8 = FIELD_F32(a1, 116);
  v9 = FIELD_U32(a1, 156) - 0x40000000;
  v10 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
  v11 = *v10;
  v12 = v10[1];
  v13 = v10[2];
  v14 = v10[3];
  v21.cells[0] = 1.0;
  v21.cells[1] = 0.0;
  v21.cells[2] = 0.0;
  v21.cells[4] = 0.0;
  v21.cells[5] = 1.0;
  v15 = (float)(v9 & 0xFFFFFF);
  v21.cells[6] = 0.0;
  v21.cells[8] = 0.0;
  v21.cells[9] = 0.0;
  v21.cells[10] = 1.0;
  v21.cells[3] = v7 - (float)((float)(v13 + (float)((float)(v15 * v14) * 0.000000059605)) * 8.0);
  v21.cells[7] = v6 - (float)((float)(v11 + (float)((float)(v12 * v15) * 0.000000059605)) * 8.0);
  v21.cells[11] = v8;
  Mtx34_rotateY((float32x2_t *)&v21, &v19);
  v17.settings = dword_60AF1EC0[FIELD_U32(a1, 80)] - v19;
  Mtx34_rotateY((float32x2_t *)&v21, (unsigned int *)&v17);
  Mtx34_rotateX((float32x2_t *)&v21, &v18);
  v17.settings = v19 - dword_60AF1EC0[FIELD_U32(a1, 80)];
  Mtx34_rotateY((float32x2_t *)&v21, (unsigned int *)&v17);
  Mtx34_rotateZ((float32x2_t *)&v21, &v20);
  v17.settings = 0;
  v17.position.x = v21.cells[3];
  v17.position.y = v21.cells[7] + -11.0;
  v17.position.z = v21.cells[11];
  v17.scale.x = 1.15;
  v17.scale.y = 1.15;
  v17.scale.z = 1.15;
  v17.field_1C = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), &v17, 1u);
}
