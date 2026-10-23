/* SE_AMB_SANDPILLAR_SIGN_ref
 * address: 0x600F4D28   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_AMB_SANDPILLAR_SIGN_ref(int a1)
{
  _DWORD *v2; // r4
  float v3; // r1
  int v4; // r5
  int v5; // r6
  int result; // r0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 6344);
  if ( FIELD_S32(a1, 6344) >= 1 )
  {
    v3 = FIELD_F32(a1, 112);
    v4 = FIELD_U32(a1, 8);
    v5 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v5, "SE_AMB_SANDPILLAR_SIGN", v4, &out, 0);
    --*v2;
  }
  result = FIELD_U32(a1, 6316);
  if ( FIELD_F32(result, 124) < 0.0 && FIELD_F32(result, 112) > (float)(FIELD_F32(a1, 112) + 10.0) )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C85A38);
  return result;
}
