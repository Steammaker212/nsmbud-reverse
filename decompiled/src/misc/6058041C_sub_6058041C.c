/* sub_6058041C
 * address: 0x6058041C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058041C(int a1)
{
  float v2; // s0
  float v3; // r1
  float v4; // r2
  int v5; // r5
  char v6; // r12
  Vec3 v8; // [sp+8h] [bp-20h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (((int (__fastcall *)(int, _DWORD, int, float))loc_6057AC94)(a1, 0, 1, 0.0) & 1) == 0 )
  {
    v3 = FIELD_F32(a1, 112);
    v4 = FIELD_F32(a1, 116);
    v8.x = FIELD_F32(a1, 108);
    v8.z = v4;
    v8.y = v3 + 8.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 7484), 357, &v8, 0, (Vec3 *)(a1 + 144));
  }
  sub_6057A200(a1);
  if ( sub_605D01D4(a1) == 1 )
  {
    v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7588));
    if ( ((unsigned int)&dword_60C92EFC & ~(1616381156 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C92EFC) )
    {
      dword_60C92EF8 = (int)&off_60BE9194;
      _cxa_guard_release(&dword_60C92EFC);
    }
    if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C92EF8) == 1 )
      ++FIELD_U32(v5, 7020);
  }
  sub_6057AEC8(a1);
  sub_6057A460((StageActor *)a1);
  return ShapedCollider_execute((ColliderBase *)(a1 + 6120));
}
