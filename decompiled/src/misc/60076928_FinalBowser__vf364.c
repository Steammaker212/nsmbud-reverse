/* FinalBowser__vf364
 * address: 0x60076928   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268BC
// 
// Overridden by: None
int __fastcall FinalBowser__vf364(int a1)
{
  char v2; // r12
  Actor **v3; // r6
  Actor **i; // r5
  Actor *v5; // r4
  float v6; // r0
  int v7; // r5
  char v8; // r12
  int v9; // r4
  int v11; // [sp+4h] [bp-3Ch]
  Vec3 v12; // [sp+10h] [bp-30h] BYREF

  sub_602A3EFC(a1 + 6688, 24);
  v11 = a1;
  StageActor__removeActiveColliders(a1);
  v3 = *(Actor ***)(ActorMgr__instance + 27172);
  for ( i = *(Actor ***)(ActorMgr__instance + 27180); i != v3; ++v3 )
  {
    v5 = *v3;
    if ( ((unsigned int)&dword_60C7B364 & ~(1611098588 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v5
      && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v5, 0x0))(v5, &StageActor_RTTI) == 1
      && Actor__getProfileId(v5) == 725 )
    {
      SE_BOSS_KOOPA_L_FIRE_DISAPP_ref_7F57C(v5);
    }
  }
  sub_60072F14(v11);
  v6 = FIELD_F32(v11, 7472);
  v12.y = FIELD_F32(v11, 7476);
  v12.x = v6;
  v12.z = 4500.0;
  EffectData_create(1105, &v12, 0, v11 + 144);
  ((void (__fastcall *)(int))loc_60076118)(v11);
  v7 = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( ((unsigned int)&dword_60C81200 & ~(1611098808 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C81200) )
  {
    dword_60C811FC = (int)&off_60BC210C;
    _cxa_guard_release(&dword_60C81200);
  }
  if ( v7 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C811FC) == 1 )
    {
      v9 = 0;
      if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0) == 1
        || (v9 = 1, PlayerMgr_hasPlayer(PlayerMgr_instance, 1u))
        || (v9 = 2, PlayerMgr_hasPlayer(PlayerMgr_instance, 2u))
        || (v9 = 3, PlayerMgr_hasPlayer(PlayerMgr_instance, 3u)) )
      {
        FIELD_U32(v7, 6212) = v9;
      }
    }
  }
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)v11 + 192))(v11, &dword_60C815AC);
}
