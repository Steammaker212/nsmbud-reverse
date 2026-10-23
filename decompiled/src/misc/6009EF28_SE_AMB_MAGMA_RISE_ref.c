/* SE_AMB_MAGMA_RISE_ref
 * address: 0x6009EF28   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_AMB_MAGMA_RISE_ref(int a1)
{
  float *v2; // r4
  float *v3; // r6
  int v4; // r7
  float v5; // r1
  int v6; // r6
  int v7; // r5
  char v8; // r12
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v2 = (float *)(a1 + 8208);
  v3 = (float *)(a1 + 8212);
  if ( FIELD_F32(a1, 8208) < FIELD_F32(a1, 8212) )
  {
    ((void (__fastcall *)(float *))loc_60832560)(v2);
    if ( *v2 >= (float)(*v3 + -0.05) )
      *v2 = *v3;
    v4 = Global_BasicSoundActor2;
    v5 = FIELD_F32(a1, 112);
    v6 = FIELD_U32(a1, 8);
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v4, "SE_AMB_MAGMA_RISE", v6, &out, 0);
    v7 = *(_DWORD *)sub_60008598(ActorMgr__instance, 85, *(_DWORD *)(ActorMgr__instance + 27172));
    if ( ((unsigned int)&dword_60C82848 & ~(1611264016 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C82848) )
    {
      dword_60C82844 = (int)&off_60BC8348;
      _cxa_guard_release(&dword_60C82848);
    }
    if ( v7 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C82844) == 1 )
      {
        FIELD_F32(v7, 112) = *v2;
        ((void (__fastcall *)(int))loc_605A4D50)(v7);
      }
    }
  }
}
