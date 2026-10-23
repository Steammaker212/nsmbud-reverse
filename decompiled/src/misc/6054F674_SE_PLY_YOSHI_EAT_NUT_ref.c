/* SE_PLY_YOSHI_EAT_NUT_ref
 * address: 0x6054F674   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_YOSHI_EAT_NUT_ref(int a1)
{
  char v1; // r12
  int result; // r0
  bool v4; // cc
  int v5; // r5
  char v6; // r12
  float v7; // r1
  const char *v8; // r6
  int v9; // r7
  int v10; // r0
  Vec2 v11; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  result = FIELD_U32(a1, 3836);
  v4 = result < 0;
  FIELD_U32(a1, 3836) = result - 1;
  if ( result <= 0 )
  {
    result = FIELD_U32(a1, 3828);
    v4 = result < FIELD_U32(a1, 3832);
  }
  if ( v4 )
  {
    FIELD_U32(a1, 3836) = 15;
    FIELD_U32(a1, 3800) += 15;
    FIELD_U32(a1, 3828) = result + 1;
    if ( ((unsigned int)&dword_60CACE30[3] & ~(1616180944 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CACE30[3]) )
    {
      dword_60CACE40 = (int)"SE_PLY_YOSHI_EAT_NUT";
      dword_60CACE44 = (int)"SE_PLY_YOSHI_EAT_NUT_2";
      dword_60CACE48 = (int)"SE_PLY_YOSHI_EAT_NUT_3";
      dword_60CACE4C = (int)"SE_PLY_YOSHI_EAT_NUT_4";
      dword_60CACE50 = (int)"SE_PLY_YOSHI_EAT_NUT_5";
      _cxa_guard_release(&dword_60CACE30[3]);
    }
    v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 3824));
    if ( v5 )
    {
      if ( ((unsigned int)&dword_60C7B408 & ~(1616181104 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
      {
        dword_60C7B404 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B408);
      }
      if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B404) == 1 )
      {
        v7 = FIELD_F32(v5, 112);
        v8 = (const char *)dword_60CACE30[FIELD_U32(a1, 3828) + 3];
        v9 = Global_BasicSoundActor2;
        position.x = FIELD_F32(v5, 108);
        position.y = v7;
        mapPositionToScreen(&v11, &position);
        BasicSoundActor2_play(v9, v8, &v11.x, 0);
      }
    }
    else
    {
      StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CACD8C);
      FIELD_U32(a1, 3800) = 0;
    }
    sub_60473DE4((_DWORD *)(a1 + 40), 1u, &dword_60CACBD4, 0);
    sub_6047455C(a1 + 40, 1u, (float)FIELD_S32(a1, 3828));
    v10 = sub_6047482C(a1 + 40, 1u);
    return (*(int (__fastcall **)(int, float))(*(_DWORD *)v10 + 96))(v10, (float)FIELD_S32(a1, 3828));
  }
  return result;
}
