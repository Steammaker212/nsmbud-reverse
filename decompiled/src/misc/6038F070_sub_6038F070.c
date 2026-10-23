/* sub_6038F070
 * address: 0x6038F070   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038F070(int a1)
{
  _DWORD *v1; // r4
  int ResArchiveById; // r0
  _DWORD v4[8]; // [sp+0h] [bp-20h] BYREF

  v4[2] = &sead__SafeStringBase__vtable;
  v4[3] = "swim";
  v1 = (_DWORD *)(a1 + 6300);
  sub_60421AD4(FIELD_U32(a1, 6300));
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "wait";
  ResArchiveById = Profile__getResArchiveById((Profile *)*(v1 - 1572), 0);
  TexAnim_play(**(_DWORD **)(*v1 + 20), ResArchiveById, v4);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v1 + 20) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(*v1 + 20) + 24) = 0;
  v1[18] = -1073741824;
  return -1073741824;
}
