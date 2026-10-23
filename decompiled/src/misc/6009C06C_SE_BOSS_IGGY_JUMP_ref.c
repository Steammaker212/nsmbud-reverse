/* SE_BOSS_IGGY_JUMP_ref
 * address: 0x6009C06C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_IGGY_JUMP_ref(int a1)
{
  int v2; // r0
  int *v3; // r1
  float v4; // r1
  Vec2 v6; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 7096);
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "jumpB";
  sub_60421AE4(v2, &position, 0);
  v3 = &dword_6009C14C;
  if ( FIELD_U32(a1, 80) == 1 )
    v3 = &dword_6009C150;
  FIELD_U32(a1, 120) = *v3;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U8(a1, 8160) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1284))(a1);
  v4 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&v6, &position);
  return sub_60813570(a1 + 6332, "SE_BOSS_IGGY_JUMP", &v6, 0);
}
