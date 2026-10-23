/* SE_EMY_TERESA_STOP_ref
 * address: 0x603AB65C   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_TERESA_STOP_ref(int a1)
{
  _DWORD *v2; // r7
  int v3; // r5
  int v4; // r5
  int v5; // r5
  int v6; // r5
  float v7; // r1
  int v8; // r5
  int v9; // r5
  int v10; // r5
  Vec2 v12; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 6096);
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v3 == (*(int (**)(void))(dword_60C97B2C + 8))()
    || (v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2), v4 == (*(int (**)(void))(dword_60C97B6C + 8))())
    || (v5 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2), v5 == (*(int (**)(void))(dword_60C97BAC + 8))()) )
  {
    sub_603AD914(a1, 1);
    sub_603ADA8C(a1, 0);
    v6 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
    if ( v6 != (*(int (**)(void))(dword_60C97BAC + 8))() && !FIELD_U32(a1, 6652) )
    {
      v7 = FIELD_F32(a1, 112);
      v8 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v7;
      mapPositionToScreen(&v12, &position);
      BasicSoundActor1_playSound(v8, "SE_EMY_TERESA_STOP", (int)&v12, 0);
    }
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 4), 0);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 20) + 4), 0);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4), 0);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 20) + 4), 0);
    v9 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
    if ( v9 == (*(int (**)(void))(dword_60C97B2C + 8))()
      || (v10 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2),
          v10 == (*(int (**)(void))(dword_60C97B6C + 8))()) )
    {
      FIELD_U32(a1, 6896) = 3;
    }
  }
  FIELD_U8(a1, 6684) = 1;
  FIELD_U32(a1, 6640) = 300;
  FIELD_U16(a1, 6672) = 0;
  return 6672;
}
