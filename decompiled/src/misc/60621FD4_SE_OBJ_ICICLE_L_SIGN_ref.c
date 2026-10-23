/* SE_OBJ_ICICLE_L_SIGN_ref
 * address: 0x60621FD4   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ICICLE_L_SIGN_ref(int a1)
{
  int v2; // r5
  float v3; // r1
  int v4; // r5
  int v5; // r6
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v2 = a1 + 6300;
  sub_604183EC(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4);
  if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 28) & 0x20) != 0 )
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB39E8);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 8);
  v5 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&out, &position);
  SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v5, "SE_OBJ_ICICLE_L_SIGN", v4, &out, 0);
  return sub_60621580(a1);
}
