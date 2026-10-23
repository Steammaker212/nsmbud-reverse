/* SE_BOSS_KOOPA_AUX_FALL_ref
 * address: 0x606DF9F8   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall SE_BOSS_KOOPA_AUX_FALL_ref(int a1)
{
  _BYTE *v2; // r5
  int v3; // r0
  ModelWrapper **v4; // r7
  float v5; // r1
  int v6; // r5
  ModelWrapper *v7; // r0
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  v2 = (_BYTE *)(a1 + 6992);
  if ( !FIELD_U8(a1, 6992) )
  {
    v3 = FIELD_U32(a1, 6988);
    FIELD_U32(a1, 6988) = v3 + 1;
    if ( v3 >= 49 )
    {
      AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 6, 3, 0, 0);
      *v2 = 1;
    }
  }
  v4 = (ModelWrapper **)(a1 + 6104);
  if ( sub_60418548(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 4, 30.0) == 1 && !FIELD_U8(a1, 6993) )
  {
    FIELD_U8(a1, 6993) = 1;
    v5 = FIELD_F32(a1, 112);
    v6 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v6, "SE_BOSS_KOOPA_AUX_FALL", &out.x, 0);
  }
  v7 = *v4;
  if ( (*((_BYTE *)*(*v4)->sklAnims.animations + 28) & 0x20) != 0 )
  {
    EventMgr_set(EventMgr__instance, 0xAu, 0, 1, 0, 0, 0, 0);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBBD34);
    v7 = *v4;
  }
  return ModelWrapper_updateAnims(v7);
}
