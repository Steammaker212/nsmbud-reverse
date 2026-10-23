/* SE_BOSS_JR_CLOWN_MOVE_ref_FD910
 * address: 0x600FD910   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_MOVE_ref_FD910(int a1)
{
  float v2; // r1
  int result; // r0
  float v4; // s0
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v5, &position);
  sub_60813574(a1 + 9476, "SE_BOSS_JR_CLOWN_MOVE", &v5, 0);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  sub_600D17F4(a1);
  ((void (__fastcall *)(int))loc_601005C0)(a1);
  result = a1 + 6812;
  v4 = FIELD_F32(a1, 6812);
  if ( FIELD_F32(a1, 112) >= v4 )
  {
    FIELD_F32(a1, 112) = v4;
    FIELD_U32(a1, 9420) = 0;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C85E74);
  }
  return result;
}
