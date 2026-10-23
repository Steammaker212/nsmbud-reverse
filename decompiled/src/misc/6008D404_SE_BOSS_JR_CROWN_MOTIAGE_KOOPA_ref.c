/* SE_BOSS_JR_CROWN_MOTIAGE_KOOPA_ref
 * address: 0x6008D404   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CROWN_MOTIAGE_KOOPA_ref(CollisionActor *a1)
{
  float v2; // s0
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12
  int v5; // r6
  int result; // r0
  _DWORD v7[2]; // [sp+0h] [bp-20h] BYREF
  Vec2 out; // [sp+8h] [bp-18h] BYREF

  FIELD_F32(a1, 0x7C) = FIELD_F32(a1, 0x64) + FIELD_F32(a1, 0x7C);
  v2 = CollisionActor__handleSpeed(a1);
  ((void (__fastcall *)(CollisionActor *, float))loc_601005C0)(a1, v2);
  v3 = *(int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                ActorMgr__instance,
                                                374,
                                                FIELD_U32(ActorMgr__instance, 27172));
  if ( ((unsigned int)&dword_60C81738 & ~(1611191396 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  v5 = (int)(v3 + 31);
  result = (**v3)(v3, &dword_60C81734);
  if ( !result )
    v5 = 124;
  if ( *(float *)v5 > 0.0 )
  {
    v7[0] = FIELD_U32(dword_60CC6484, 116);
    v7[1] = FIELD_U32(dword_60CC6484, 128);
    mapPositionToScreen(&out, (Vec3 *)v7);
    return sub_60813574(&a1[1].collisionMgr[2764], "SE_BOSS_JR_CROWN_MOTIAGE_KOOPA", &out, 0);
  }
  return result;
}
