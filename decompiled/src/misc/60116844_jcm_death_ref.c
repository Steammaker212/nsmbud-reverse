/* jcm_death_ref
 * address: 0x60116844   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcm_death_ref(int a1)
{
  int v2; // r4
  _DWORD *v3; // t1
  int *v4; // r1
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r1
  int *v8; // r1
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  int ActorSlotChecked; // r0
  int v16; // r0
  int v17; // r0
  int result; // r0
  _DWORD v19[4]; // [sp+0h] [bp-10h] BYREF

  BowserJrBase__beginState_DieFall(a1);
  v3 = *(_DWORD **)(a1 + 7100);
  v2 = a1 + 7100;
  v4 = (int *)v3[3];
  v5 = v3[17];
  if ( v3[2] > v5 )
    v4 += v5;
  v6 = *v4;
  v7 = *(_DWORD *)(v2 - 4);
  v19[0] = &sead__SafeStringBase__vtable;
  v19[1] = "jcm_death";
  SkeletalAnim_play(v6, v7, (int)v19);
  v8 = *(int **)(*(_DWORD *)v2 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v9 )
    v8 += v9;
  v10 = *v8;
  FIELD_U32(v10, 20) = 0;
  FIELD_U32(v10, 28) |= 2u;
  v11 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v12 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v12 )
    v11 += 4 * v12;
  *(_DWORD *)(*(_DWORD *)v11 + 24) = 1056964608;
  v13 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v14 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v14 )
    v13 += 4 * v14;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v13 + 4), 0);
  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
  if ( ActorSlotChecked )
    FIELD_U32(ActorSlotChecked, 1216) |= 2u;
  v16 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
  if ( v16 )
    FIELD_U32(v16, 1216) |= 2u;
  v17 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
  if ( v17 )
    FIELD_U32(v17, 1216) |= 2u;
  result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
  if ( result )
    FIELD_U32(result, 1216) |= 2u;
  return result;
}
