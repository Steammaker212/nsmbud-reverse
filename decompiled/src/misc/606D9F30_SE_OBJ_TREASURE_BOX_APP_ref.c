/* SE_OBJ_TREASURE_BOX_APP_ref
 * address: 0x606D9F30   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_OBJ_TREASURE_BOX_APP_ref(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  int v4; // t1
  float v5; // r1
  int v6; // r0
  float v7; // r1
  int v8; // r5
  Vec3 v9; // [sp+0h] [bp-30h] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  v4 = FIELD_U32(a1, 6576);
  result = (StateMethodExecuter *)(a1 + 6576);
  v3 = v4;
  if ( v4 == 2 )
  {
    result = (StateMethodExecuter *)sub_606DC39C();
    if ( result == (StateMethodExecuter *)1 )
    {
      FIELD_U32(a1, 124) = 1069547520;
      v5 = FIELD_F32(a1, 112);
      v9.x = FIELD_F32(a1, 108);
      v9.y = v5;
      v9.z = 4500.0;
      v6 = EffectData_create(40, &v9, 0, 0);
      sub_606DC5F0(v6);
      ++FIELD_U32(dword_60C99DE4, 16);
      v7 = FIELD_F32(a1, 112);
      v8 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v7;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v8, "SE_OBJ_TREASURE_BOX_APP", &out.x, 0);
      sub_606DC8A4(a1);
      FIELD_U32(dword_60C99DD4, 1376) |= 2u;
      return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBB8DC);
    }
  }
  else if ( v3 == 1 && FIELD_S8(dword_60C9CF0C, 1404) >= 0 && !FIELD_U8(dword_60C9CF0C, 1406) )
  {
    FIELD_U32(result, 0x0) = (void *)2;
  }
  return result;
}
