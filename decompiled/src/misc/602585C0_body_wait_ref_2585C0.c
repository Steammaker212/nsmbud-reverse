/* body_wait_ref_2585C0
 * address: 0x602585C0   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall body_wait_ref_2585C0(int a1)
{
  ModelWrapper **v1; // r4
  int v2; // r5
  Profile **v3; // r7
  int ResArchiveById; // r0
  char *v5; // r6
  int v6; // r5
  int v7; // r0
  _DWORD *v8; // r0
  int (**v10)(); // [sp+0h] [bp-28h] BYREF
  const char *v11; // [sp+4h] [bp-24h]

  FIELD_U32(a1, 6920) = 60;
  v1 = (ModelWrapper **)(a1 + 6300);
  v2 = **(_DWORD **)(FIELD_U32(a1, 6300) + 20);
  v3 = (Profile **)(a1 + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v10 = &sead__SafeStringBase__vtable;
  v11 = "touch";
  TexAnim_play(v2, ResArchiveById, &v10);
  v5 = (char *)*(*v1)->texAnims.animations;
  AnimationCtrl_setRepeat((ModelAnimation *)(v5 + 4), 0);
  sub_6041838C((ModelAnimation *)(v5 + 4));
  *((float *)v5 + 6) = *((float *)v5 + 2) / 60.0;
  v6 = (int)*(*v1)->sklAnims.animations;
  v7 = Profile__getResArchiveById(*v3, 0);
  v10 = &sead__SafeStringBase__vtable;
  v11 = "body_wait";
  SkeletalAnim_play(v6, v7, (int)&v10);
  v8 = *(*v1)->shuAnims.animations;
  v8[5] = 0;
  v8[7] |= 2u;
  return ModelWrapper_updateAnims(*v1);
}
