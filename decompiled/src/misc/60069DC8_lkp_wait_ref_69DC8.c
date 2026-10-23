/* lkp_wait_ref_69DC8
 * address: 0x60069DC8   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_wait_ref_69DC8(_DWORD **a1)
{
  int Resource; // r0
  _DWORD **v3; // r5
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  __int16 v8; // r5
  _DWORD v10[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v11[6]; // [sp+8h] [bp-18h] BYREF

  v10[0] = &sead__SafeStringBase__vtable;
  v11[0] = &sead__SafeStringBase__vtable;
  v10[1] = "lkp_wait";
  v11[1] = "koopa";
  Resource = LoadResource(ResourceMgrRelated_instance, v11);
  v3 = a1 + 1778;
  sub_60421938(a1[1778], Resource, (int)v10);
  v4 = a1[1778][3];
  v5 = a1[1778][17];
  if ( a1[1778][2] > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
  v6 = (*v3)[3];
  v7 = (*v3)[17];
  if ( (*v3)[2] > v7 )
    v6 += 4 * v7;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
  v8 = 30;
  if ( (int)a1[6343] <= 0 )
  {
    v8 = 94;
    if ( !((int (__fastcall *)(_DWORD **))(*a1)[179])(a1) )
      ((void (__fastcall *)(_DWORD **))(*a1)[180])(a1);
  }
  *((_WORD *)a1 + 3138) = v8;
  return 6276;
}
