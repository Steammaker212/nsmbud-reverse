/* SE_OBJ_CMN_TOUCH_QUAKE_LV_ref
 * address: 0x6061AEEC   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_TOUCH_QUAKE_LV_ref(int a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  int *v4; // r1
  int v5; // r0
  float v6; // r1
  int v7; // r7
  int v8; // r6
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v3 = (_DWORD *)(a1 + 6848);
  v2 = FIELD_U32(a1, 6848);
  if ( v2 )
    *v3 = v2 - 1;
  if ( !sub_60003B88(a1, (_DWORD *)(a1 + 6104)) )
    ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 6804, a1 + 108);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( FIELD_U8(a1, 6856) )
  {
    v4 = (int *)(a1 + 6852);
    if ( *v3 )
    {
      v5 = ((unsigned __int8)*v4 + 1) & 7;
      FIELD_U32(a1, 6860) = dword_60AF4CF0[*v4];
      *v4 = v5;
      v6 = FIELD_F32(a1, 112);
      v7 = FIELD_U32(a1, 8);
      v8 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v6;
      mapPositionToScreen(&out, &position);
      SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v8, "SE_OBJ_CMN_TOUCH_QUAKE_LV", v7, &out, 0);
    }
    else
    {
      *v4 = 0;
      FIELD_U32(a1, 6860) = 0;
      FIELD_U8(a1, 6856) = 0;
    }
  }
  sub_6061AD00(a1);
  ShapedCollider_execute((ColliderBase *)(a1 + 6104));
  StageActor__cullCheck((StageActor *)a1, 8);
  return 1;
}
