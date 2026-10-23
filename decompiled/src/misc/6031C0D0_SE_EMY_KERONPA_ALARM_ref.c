/* SE_EMY_KERONPA_ALARM_ref
 * address: 0x6031C0D0   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KERONPA_ALARM_ref(int a1)
{
  int v2; // r9
  int v3; // r6
  float v4; // r1
  int v5; // r0
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  sub_6031C22C();
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  sub_6031C374(a1);
  if ( FIELD_S32(a1, 12588) <= 0 )
  {
    v2 = FIELD_U32(a1, 8);
    v3 = Global_BasicSoundActor1;
    v4 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v4;
    mapPositionToScreen(&out, &position);
    j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v3, "SE_EMY_KERONPA_ALARM", v2, &out, 0);
    EffectWrapper_update((EffectWrapper *)(a1 + 12480), 19, (Vec3 *)(a1 + 108), 0, 0);
  }
  v5 = FIELD_U32(a1, 12596) - 1;
  FIELD_U32(a1, 12596) = v5;
  if ( !v5 )
  {
    if ( FIELD_S32(a1, 12588) < 1 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93710);
    }
    else if ( sub_6031C45C(a1) == 1 )
    {
      FIELD_U32(a1, 12596) = 90;
    }
    else
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93680);
    }
  }
  return j_ModelWrapper_updateAnims(FIELD_U32(a1, 7124));
}
