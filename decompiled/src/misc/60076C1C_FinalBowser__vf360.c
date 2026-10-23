/* FinalBowser__vf360
 * address: 0x60076C1C   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268B8
// 
// Overridden by: None
int __fastcall FinalBowser__vf360(float *a1)
{
  char v2; // r12
  Actor **v3; // r4
  Actor **i; // r5
  Actor *v5; // r6
  float v6; // r0
  int v8; // r0
  Vec3 v9; // [sp+10h] [bp-30h] BYREF

  sub_602A3EFC(a1 + 1672, 24);
  if ( (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 728))(a1) == 1 )
  {
    StageActor__removeActiveColliders((int)a1);
    v3 = *(Actor ***)(ActorMgr__instance + 27172);
    for ( i = *(Actor ***)(ActorMgr__instance + 27180); i != v3; ++v3 )
    {
      v5 = *v3;
      if ( ((unsigned int)&dword_60C7B364 & ~(1611099368 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
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
    v9.y = a1[1869];
    v9.x = v6;
    v9.z = 4500.0;
    EffectData_create(1105, &v9, 0, (int)(a1 + 36));
    ((void (__fastcall *)(float *))loc_60076118)(a1);
    return (*(int (__fastcall **)(float *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C815AC);
  }
  else
  {
    v8 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 736))(a1);
    return SE_VOC_KP_L_DAMAGE_ref(a1, v8);
  }
}
