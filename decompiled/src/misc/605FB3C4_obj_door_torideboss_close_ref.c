/* obj_door_torideboss_close_ref
 * address: 0x605FB3C4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall obj_door_torideboss_close_ref(int a1)
{
  int v1; // r0
  int v2; // r4
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v2 = a1 + 6300;
  v1 = FIELD_U32(a1, 6300);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "obj_door_torideboss_close";
  sub_6040F4B8(v1, (int)v3, 0, 1.0, 0.0);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 24) = 1065353216;
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 4));
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 4), 0);
}
