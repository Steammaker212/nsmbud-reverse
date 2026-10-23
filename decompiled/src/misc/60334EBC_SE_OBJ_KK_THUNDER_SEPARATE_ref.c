/* SE_OBJ_KK_THUNDER_SEPARATE_ref
 * address: 0x60334EBC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_KK_THUNDER_SEPARATE_ref(int a1)
{
  float v2; // s0
  float v3; // r1
  float v4; // s0
  Vec2 v6; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  if ( (FIELD_U8(a1, 20) & 0x10) != 0 )
  {
    FIELD_U32(a1, 124) = -1073741824;
    v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
    CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  }
  v3 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&v6, &position);
  sub_60813570(a1 + 6108, "SE_OBJ_KK_THUNDER_SEPARATE", &v6, 0);
  if ( (FIELD_U8(a1, 21) & 1) != 0 )
    v4 = CollisionMgr_process((_BYTE *)(a1 + 648), v4);
  return (*(int (__fastcall **)(int, State *, float))(*(_DWORD *)a1 + 192))(a1, &stru_60C940F8, v4);
}
