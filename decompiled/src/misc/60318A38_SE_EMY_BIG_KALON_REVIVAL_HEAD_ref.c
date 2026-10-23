/* SE_EMY_BIG_KALON_REVIVAL_HEAD_ref
 * address: 0x60318A38   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BIG_KALON_REVIVAL_HEAD_ref(int a1)
{
  char v2; // r0
  int v3; // r4
  int v4; // r6
  float v5; // r1
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  if ( !FIELD_U16(a1, 6276) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C935C0);
  SE_EMY_DOWN_ref_31A028(a1);
  v2 = FIELD_U8(a1, 6404) + 1;
  FIELD_U8(a1, 6404) = v2;
  FIELD_U32(a1, 156) += *(_DWORD *)((char *)&unk_60AF2090 + (v2 & 4));
  v3 = FIELD_U32(a1, 8);
  v4 = Global_BasicSoundActor1;
  v5 = FIELD_F32(a1, 112);
  if ( FIELD_U32(a1, 6388) == 1 )
  {
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&out, &position);
    return j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v4, "SE_EMY_BIG_KALON_REVIVAL_HEAD", v3, &out, 0);
  }
  else
  {
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&out, &position);
    return j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v4, "SE_EMY_KALON_REVIVAL_HEAD", v3, &out, 0);
  }
}
