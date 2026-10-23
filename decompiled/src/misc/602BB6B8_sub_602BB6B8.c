/* sub_602BB6B8
 * address: 0x602BB6B8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602BB6B8(int a1)
{
  int ResArchiveById; // r0
  int v3; // r1
  unsigned int v4; // r0
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "dead";
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  sub_60421938(*(_DWORD **)(a1 + 6300), ResArchiveById, (int)v6);
  v3 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
  v4 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v4 )
    v3 += 4 * v4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v3 + 4), 1);
  return Enemy__beginState_DieFumi((Enemy *)a1);
}
