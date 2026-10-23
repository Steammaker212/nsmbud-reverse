/* dokan_touch_ref
 * address: 0x602930D8   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall dokan_touch_ref(_DWORD **a1)
{
  _DWORD **v1; // r4
  int ResArchiveById; // r1
  _DWORD *v3; // t1
  int v4; // r0
  _DWORD v6[4]; // [sp+0h] [bp-10h] BYREF

  v1 = a1;
  sub_6040EB10(a1 + 1884);
  v1[1675] = 0;
  ResArchiveById = Profile__getResArchiveById((Profile *)v1[3], 0);
  v3 = v1[1875];
  v1 += 1875;
  v4 = *(_DWORD *)v3[3];
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "dokan_touch";
  SkeletalAnim_play(v4, ResArchiveById, (int)v6);
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)(*v1)[3] + 4), 0);
  (*(void (__fastcall **)(_DWORD, _DWORD, float))(*(_DWORD *)**v1 + 164))(**v1, 0, 1.0);
  return (*(int (__fastcall **)(_DWORD, int, float))(*(_DWORD *)**v1 + 164))(**v1, 1, 0.0);
}
