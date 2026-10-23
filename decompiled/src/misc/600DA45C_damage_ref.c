/* damage_ref
 * address: 0x600DA45C   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall damage_ref(int a1)
{
  _DWORD *v2; // r5
  int v3; // r7
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r5
  int v10; // r0
  signed int v11; // r0
  int v12; // r5
  int (**v14)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v15; // [sp+8h] [bp-28h]

  v3 = a1 + 7096;
  v2 = *(_DWORD **)(a1 + 7096);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v14 = &sead__SafeStringBase__vtable;
  v15 = "damage";
  sub_60421938(v2, ResArchiveById, (int)&v14);
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
  v9 = **(_DWORD **)(*(_DWORD *)v3 + 20);
  v10 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v14 = &sead__SafeStringBase__vtable;
  v15 = "damage";
  TexAnim_play(v9, v10, &v14);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 24) = 1065353216;
  FIELD_U8(a1, 6136) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1086324736;
  FIELD_U32(a1, 128) = 0;
  v11 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v11;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 100) = -1103101952;
  v12 = byte_60AFE3F4[v11];
  FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v12;
  FIELD_U32(a1, 7176) = 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1352))(a1);
  FIELD_U32(a1, 7092) = 0;
  return 7092;
}
