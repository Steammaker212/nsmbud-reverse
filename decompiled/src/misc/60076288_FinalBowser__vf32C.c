/* FinalBowser__vf32C
 * address: 0x60076288   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600267FC
// 
// Overridden by: None
int __fastcall FinalBowser__vf32C(float *a1, int a2)
{
  char v2; // r12
  Actor **v3; // r7
  Actor **i; // r6
  Actor *v5; // r4
  float v6; // r0
  int v7; // r5
  char v8; // r12
  float v9; // r1
  float v10; // s2
  Vec3 position; // [sp+10h] [bp-30h] BYREF

  StageActor__removeActiveColliders((int)a1);
  v3 = *(Actor ***)(ActorMgr__instance + 27172);
  for ( i = *(Actor ***)(ActorMgr__instance + 27180); i != v3; ++v3 )
  {
    v5 = *v3;
    if ( ((unsigned int)&dword_60C7B364 & ~(1611096852 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
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
  sub_60072F14((int)a1);
  v6 = a1[1868];
  position.y = a1[1869];
  position.x = v6;
  position.z = 4500.0;
  EffectData_create(1105, &position, 0, (int)(a1 + 36));
  ((void (__fastcall *)(float *))loc_60076118)(a1);
  v7 = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( ((unsigned int)&dword_60C81200 & ~(1611097072 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C81200) )
  {
    dword_60C811FC = (int)&off_60BC210C;
    _cxa_guard_release(&dword_60C81200);
  }
  if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C811FC) == 1 )
  {
    if ( a2 )
      FIELD_U32(v7, 6212) = FIELD_S8(a2, 84);
    else
      FIELD_U32(v7, 6212) = 0;
  }
  v9 = a1[1848];
  v10 = a1[1847];
  position.x = a1[1846];
  position.y = v10 + 80.0;
  position.z = v9;
  sub_60025B84((int)a1, a2, (int)&position, 7u);
  return (*(int (__fastcall **)(float *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C815AC);
}
