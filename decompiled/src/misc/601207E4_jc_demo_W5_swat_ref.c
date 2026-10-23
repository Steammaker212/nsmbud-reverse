/* jc_demo_W5_swat_ref
 * address: 0x601207E4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_demo_W5_swat_ref(int a1)
{
  _DWORD *v1; // r0
  _BYTE *v2; // r4
  int v3; // r1
  int v4; // r1
  unsigned int v5; // r0
  int *v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int *v9; // r1
  unsigned int v10; // r0
  int result; // r0
  _DWORD v12[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (_BYTE *)(a1 + 7656);
  v1 = *(_DWORD **)(a1 + 7656);
  v3 = *((_DWORD *)v2 + 1);
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "jc_demo_W5_swat";
  sub_60421938(v1, v3, (int)v12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
  v6 = *(int **)(*(_DWORD *)v2 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v7 )
    v6 += v7;
  v8 = *v6;
  FIELD_U32(v8, 20) = 0;
  FIELD_U32(v8, 28) |= 2u;
  v9 = *(int **)(*(_DWORD *)v2 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v10 )
    v9 += v10;
  result = *v9;
  *(_DWORD *)(*v9 + 24) = 1065353216;
  v2[1675] = 0;
  return result;
}
