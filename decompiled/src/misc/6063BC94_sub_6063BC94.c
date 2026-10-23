/* sub_6063BC94
 * address: 0x6063BC94   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063BC94(int a1, _DWORD *a2)
{
  char v2; // r12
  int v5; // r2
  int v6; // r1
  int v7; // r0
  int v8; // r6
  float v9; // s0
  float v10; // s0
  SolidOnTopColliderInfo v12; // [sp+0h] [bp-40h] BYREF
  float v13[10]; // [sp+18h] [bp-28h] BYREF

  if ( ((unsigned int)dword_60CB55A0 & ~(1617149108 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CB55A0) )
  {
    dword_60CB55AC = 1162870784;
    dword_60CB55B0 = 1155530752;
    _cxa_guard_release(dword_60CB55A0);
  }
  FIELD_U32(a1, 492) = -1056964608;
  FIELD_U32(a1, 496) = 1132462080;
  v5 = dword_60CB55B0;
  FIELD_U32(a1, 500) = dword_60CB55AC;
  FIELD_U32(a1, 504) = v5;
  if ( ((unsigned int)&dword_60CB55A0[1] & ~(1617149224 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB55A0[1]) )
  {
    dword_60CB55B4 = 1151860736;
    dword_60CB55B8 = 1146093568;
    _cxa_guard_release(&dword_60CB55A0[1]);
  }
  a2[2] = dword_60CB55B4;
  a2[3] = dword_60CB55B8;
  v6 = (FIELD_U32(a1, 20) >> 8) & 3;
  if ( v6 == 3 )
    v6 = 0;
  v7 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 260))(a1, v6);
  v8 = v7;
  if ( ((FIELD_U32(a1, 20) >> 12) & 1) != 0 )
    v9 = 3250.0 - FIELD_F32(a1, 116);
  else
    v9 = 0.0;
  FIELD_F32(a1, 6772) = v9;
  sub_6063BEA4(a1, v7);
  *a2 = a1 + 6240;
  a2[1] = a1 + 6284;
  v10 = FIELD_F32(v8, 32);
  memset(&v12, 0, 16);
  v12.points = (Vec2 *)v13;
  v12.rotation = 0;
  v13[0] = -v10;
  v13[1] = 0.0;
  v13[2] = v10;
  v13[3] = 0.0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6288), (StageActor *)a1, &v12);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 244))(a1, a1 + 6288);
  FIELD_U32(a1, 6240) = a1 + 6288;
  if ( (FIELD_U8(a1, 22) & 0x10) != 0 )
    FIELD_U8(a1, 6782) = 1;
  return 1;
}
