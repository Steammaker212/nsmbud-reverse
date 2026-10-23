/* frozen_ref_33922C
 * address: 0x6033922C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall frozen_ref_33922C(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // t1
  int *v3; // r1
  unsigned int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r1
  unsigned int v8; // r0
  int *v9; // r1
  unsigned int v10; // r0
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r0
  ActiveCollider *v15; // r4
  ActiveColliderMgr *v16; // r5
  _DWORD v18[6]; // [sp+0h] [bp-18h] BYREF

  v2 = *(_DWORD **)(a1 + 6304);
  v1 = (_DWORD *)(a1 + 6304);
  v3 = (int *)v2[3];
  v4 = v2[17];
  if ( v2[2] > v4 )
    v3 += v4;
  v5 = *v3;
  v6 = *(v1 - 1);
  v18[0] = &sead__SafeStringBase__vtable;
  v18[1] = "frozen";
  SkeletalAnim_play(v5, v6, (int)v18);
  v7 = *(_DWORD *)(*v1 + 12);
  v8 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v8 )
    v7 += 4 * v8;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), 0);
  v9 = *(int **)(*v1 + 12);
  v10 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v10 )
    v9 += v10;
  v11 = *v9;
  FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  v12 = *(_DWORD *)(*v1 + 12);
  v13 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v13 )
    v12 += 4 * v13;
  *(_DWORD *)(*(_DWORD *)v12 + 24) = 0;
  v14 = v1[1];
  v15 = (ActiveCollider *)(v1 + 19);
  FIELD_U32(v14, 24) = 0;
  v16 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v15);
  ActiveColldierMgr_removeFromCreateList(v16, v15);
  return ActiveColldierMgr_removeFromList3(v16, (int)v15);
}
