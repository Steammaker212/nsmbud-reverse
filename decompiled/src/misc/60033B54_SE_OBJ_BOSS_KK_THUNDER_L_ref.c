/* SE_OBJ_BOSS_KK_THUNDER_L_ref
 * address: 0x60033B54   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BOSS_KK_THUNDER_L_ref(int a1)
{
  float v2; // r1
  int result; // r0
  void *v4; // r1
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v5, &position);
  sub_60813574(a1 + 6108, "SE_OBJ_BOSS_KK_THUNDER_L", &v5, 0);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( FIELD_U8(a1, 6905) )
      v4 = &unk_60C7FD58;
    else
      v4 = &unk_60C7FD38;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, v4);
  }
  return result;
}
