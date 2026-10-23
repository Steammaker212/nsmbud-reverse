/* SE_AMB_DOKAN_AWA_ref
 * address: 0x606F25C8   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_AMB_DOKAN_AWA_ref(int a1)
{
  unsigned int v2; // r5
  unsigned int v3; // r7
  float v4; // r1
  int v5; // r5
  int v6; // r6
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  v2 = 0;
  sub_60237208(a1 + 6120, (Vec3 *)(a1 + 7368), 0, 0);
  sub_60237208(a1 + 6224, (Vec3 *)(a1 + 7380), 0, 0);
  if ( FIELD_U8(a1, 7512) )
  {
    v3 = 1;
    do
    {
      sub_60237208(a1 + 104 * v2 + 6328, (Vec3 *)(a1 + 12 * v2 + 7392), 0, 0);
      v2 = 0;
      if ( v3 < 0xA )
        v2 = v3;
      ++v3;
    }
    while ( *(_BYTE *)(a1 + v2 + 7512) );
  }
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_U32(a1, 8);
  v6 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&out, &position);
  return SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v6, "SE_AMB_DOKAN_AWA", v5, &out, 0);
}
