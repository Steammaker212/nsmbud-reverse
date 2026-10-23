/* jc_damage_s_ref
 * address: 0x600D1EBC   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_damage_s_ref(float *a1)
{
  float *v2; // r4
  _DWORD *v3; // t1
  int *v4; // r1
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r1
  unsigned int v9; // r0
  int *v10; // r1
  unsigned int v11; // r0
  int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  ActiveColliderMgr *v15; // r6
  _BOOL4 v16; // r0
  int result; // r0
  _DWORD v18[8]; // [sp+0h] [bp-20h] BYREF

  (*(void (__fastcall **)(float *, int))(*(_DWORD *)a1 + 780))(a1, 2);
  v3 = *((_DWORD **)a1 + 1576);
  v2 = a1 + 1576;
  v4 = (int *)v3[3];
  v5 = v3[17];
  if ( v3[2] > v5 )
    v4 += v5;
  v6 = *v4;
  v7 = *((_DWORD *)v2 - 1);
  v18[0] = &sead__SafeStringBase__vtable;
  v18[1] = "jc_damage_s";
  SkeletalAnim_play(v6, v7, (int)v18);
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v9 )
    v8 += 4 * v9;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), 1);
  v10 = *(int **)(*(_DWORD *)v2 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
    v10 += v11;
  v12 = *v10;
  FIELD_U32(v12, 20) = 0;
  FIELD_U32(v12, 28) |= 2u;
  v13 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v14 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v14 )
    v13 += 4 * v14;
  *(_DWORD *)(*(_DWORD *)v13 + 24) = 0;
  *(v2 - 1537) = 0.0;
  *(v2 - 1536) = 0.0;
  *(v2 - 1535) = 0.0;
  v15 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v2 - 1529));
  ActiveColldierMgr_removeFromCreateList(v15, (ActiveCollider *)(v2 - 1529));
  ActiveColldierMgr_removeFromList3(v15, (int)(v2 - 1529));
  v16 = (float)(*(v2 - 1549) - FIELD_F32(dword_60CC6484, 116)) > 0.0;
  *((_DWORD *)v2 - 5) = v16;
  *((_DWORD *)v2 - 1546) = dword_60AFE3F8[v16];
  *(v2 - 1545) = 3.9;
  *(v2 - 1544) = 0.0;
  *(v2 - 1543) = 0.0;
  *(v2 - 1542) = -4.0;
  *(v2 - 1541) = 0.0;
  *(v2 - 1550) = 0.0;
  result = unk_60C906E8;
  *((_DWORD *)v2 - 1551) = unk_60C906E8;
  return result;
}
