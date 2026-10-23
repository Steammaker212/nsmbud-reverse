/* sub_602B9F54
 * address: 0x602B9F54   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B9F54(int a1)
{
  int ResArchiveById; // r0
  int v3; // r5
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r0
  _DWORD v8[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v9[8]; // [sp+8h] [bp-20h] BYREF

  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "throw";
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v3 = a1 + 6300;
  sub_60421938(*(_DWORD **)(a1 + 6300), ResArchiveById, (int)v9);
  v4 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
  v5 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "throw";
  v6 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  TexAnim_play(**(_DWORD **)(*(_DWORD *)v3 + 20), v6, v8);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 4), 0);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 648))(a1);
}
