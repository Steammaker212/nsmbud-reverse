/* FinalBowser__vf328
 * address: 0x60075F44   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600267F8
// 
// Overridden by: None
int __fastcall FinalBowser__vf328(int a1, int a2)
{
  char v2; // r12
  Actor **v3; // r7
  Actor **i; // r6
  Actor *v5; // r4
  float v6; // r0
  float v7; // r1
  float v8; // s2
  Vec3 v12[4]; // [sp+10h] [bp-30h] BYREF

  StageActor__removeActiveColliders(a1);
  v3 = *(Actor ***)(ActorMgr__instance + 27172);
  for ( i = *(Actor ***)(ActorMgr__instance + 27180); i != v3; ++v3 )
  {
    v5 = *v3;
    if ( ((unsigned int)&dword_60C7B364 & ~(1611096016 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
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
  sub_60072F14(a1);
  v6 = FIELD_F32(a1, 7472);
  v12[0].y = FIELD_F32(a1, 7476);
  v12[0].x = v6;
  v12[0].z = 4500.0;
  EffectData_create(1105, v12, 0, a1 + 144);
  ((void (__fastcall *)(int))loc_60076118)(a1);
  v7 = FIELD_F32(a1, 7392);
  v8 = FIELD_F32(a1, 7388);
  v12[0].x = FIELD_F32(a1, 7384);
  v12[0].y = v8 + 80.0;
  v12[0].z = v7;
  sub_60025AF4(a1, a2, (int)v12, 6u);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C815AC);
}
