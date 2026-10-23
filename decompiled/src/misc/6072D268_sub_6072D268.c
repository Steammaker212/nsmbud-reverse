/* sub_6072D268
 * address: 0x6072D268   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072D268(int a1)
{
  _BYTE *v1; // r4
  int v2; // r1
  int v3; // r0
  const char *v5[6]; // [sp+0h] [bp-18h] BYREF

  FIELD_U8(a1, 6105) = 1;
  FIELD_U32(a1, 6108) = 1065353215;
  FIELD_U32(a1, 144) = 1065353215;
  FIELD_U32(a1, 148) = 1065353215;
  FIELD_U32(a1, 152) = 1065353215;
  v1 = (_BYTE *)(a1 + 6100);
  v2 = FIELD_U32(a1, 6124);
  v3 = **(_DWORD **)(FIELD_U32(a1, 6100) + 12);
  v5[0] = (const char *)&sead__SafeStringBase__vtable;
  v5[1] = "mochimakiBall_bound";
  SkeletalAnim_play(v3, v2, v5);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v1 + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 12) + 4), 0);
  *((_DWORD *)v1 - 1484) = 0;
  v1[4] = 0;
  sub_60807EF0(SoundSystem_instance, "SE_MG_CM_PANEL_NG_CNT", 0, 1);
  *((_DWORD *)v1 - 1496) = 1163575296;
  return -5984;
}
