/* sub_602AAD14
 * address: 0x602AAD14   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602AAD14(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int ResArchiveById; // r1
  _DWORD *v5; // r2
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  unsigned int v9; // r1
  _DWORD v11[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v12[6]; // [sp+8h] [bp-18h] BYREF

  if ( FIELD_U32(a1, 80) )
  {
    v11[0] = &sead__SafeStringBase__vtable;
    v11[1] = "L_jump_ed";
    v3 = a1 + 6300;
    v2 = *(_DWORD **)(a1 + 6300);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v5 = v11;
  }
  else
  {
    v12[0] = &sead__SafeStringBase__vtable;
    v12[1] = "R_jump_ed";
    v3 = a1 + 6300;
    v2 = *(_DWORD **)(a1 + 6300);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v5 = v12;
  }
  sub_60421938(v2, ResArchiveById, (int)v5);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += 4 * v7;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 0);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v9 )
    v8 += 4 * v9;
  *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  return 0;
}
