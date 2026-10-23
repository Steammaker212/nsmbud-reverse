/* damage_ref_F4100
 * address: 0x600F4100   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall damage_ref_F4100(int a1)
{
  _DWORD *v2; // r5
  int v3; // r7
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  signed int v9; // r0
  int v10; // r6
  CollisionMgr *v11; // r4
  _DWORD v12[8]; // [sp+0h] [bp-20h] BYREF

  v3 = a1 + 7096;
  v2 = *(_DWORD **)(a1 + 7096);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "damage";
  sub_60421938(v2, ResArchiveById, (int)v12);
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  FIELD_U8(a1, 6136) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1088421888;
  FIELD_U32(a1, 128) = 0;
  v9 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v9;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 100) = -1103101952;
  v10 = byte_60AFE3F4[v9];
  FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v10;
  FIELD_U32(a1, 7176) = 1;
  FIELD_U32(a1, 116) = 1167867904;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1352))(a1);
  FIELD_U32(a1, 7092) = 1;
  v11 = (CollisionMgr *)(a1 + 648);
  CollisionMgr_setSensor(v11, &stru_60AF5FEC, 3);
  CollisionMgr_setSensor(v11, 0, 2);
  CollisionMgr_setSensor(v11, 0, 0);
  CollisionMgr_setSensor(v11, 0, 1);
}
