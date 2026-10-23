/* SE_PLY_CROWN_RISE_ref
 * address: 0x6008DBE0   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CROWN_RISE_ref(int a1)
{
  float v2; // s20
  float v3; // s16
  float v4; // s0
  int result; // r0
  Vec2 v6; // [sp+0h] [bp-40h] BYREF
  Vec3 position; // [sp+8h] [bp-38h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  v2 = FIELD_F32(a1, 112);
  v3 = ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(
         a1 + 112,
         FIELD_F32(a1, 6812) + -120.0,
         0.1,
         4.0,
         0.1);
  v4 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 124) = v4 - v2;
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&v6, &position);
  sub_60813574(a1 + 9476, "SE_BOSS_JR_CLOWN_MOVE", &v6, 0);
  sub_608134C8(a1 + 9476, "SE_PLY_CROWN_RISE", 0);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  FIELD_U8(a1, 86) = 2;
  CollisionMgr_process((_BYTE *)(a1 + 9888));
  FIELD_U8(a1, 86) = 0;
  ((void (__fastcall *)(int))loc_60094540)(a1);
  if ( v3 < 1.0 || (result = FIELD_U32(a1, 2872) & 0x10400, result == 1024) )
  {
    FIELD_F32(a1, 112) = FIELD_F32(a1, 6812) + -120.0;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C820E0);
  }
  return result;
}
