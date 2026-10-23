/* sub_600BBE20
 * address: 0x600BBE20   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BBE20(int a1, unsigned int a2)
{
  int v4; // r7
  int v5; // r6
  int ResArchiveById; // r0
  int *v7; // r0
  int (**v9)(); // [sp+4h] [bp-24h] BYREF
  const char *v10; // [sp+8h] [bp-20h]
  int v11; // [sp+Ch] [bp-1Ch]

  v4 = a1 + 6188;
  v5 = **(_DWORD **)(FIELD_U32(a1, 6188) + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "mario_in";
  SkeletalAnim_play(v5, ResArchiveById, (int)&v9);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v4 + 12) + 4), 0);
  v9 = *(int (***)())(dword_60CC6484 + 116);
  v10 = *(const char **)(dword_60CC6484 + 128);
  v11 = 43;
  v7 = sub_60002B90(a2, unk_60C26420);
  (*(void (__fastcall **)(int, const char *, int (***)(), int *))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
    Global_BasicSoundActor2,
    "SE_OBJ_BOSS_SHIP_BOUND",
    &v9,
    v7);
  sub_60809B58(SoundSystem_instance, 50);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
  FIELD_U8(a1, 6252) = 1;
  return 6252;
}
