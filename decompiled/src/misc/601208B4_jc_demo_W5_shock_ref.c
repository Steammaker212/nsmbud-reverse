/* jc_demo_W5_shock_ref
 * address: 0x601208B4   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_demo_W5_shock_ref(int a1)
{
  int v2; // r1
  _DWORD *v3; // r0
  int v4; // r5
  int v5; // r1
  unsigned int v6; // r0
  int *v7; // r1
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  _DWORD v13[6]; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 7660);
  v4 = a1 + 7656;
  v3 = *(_DWORD **)(a1 + 7656);
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "jc_demo_W5_shock";
  sub_60421938(v3, v2, (int)v13);
  v5 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
  v7 = *(int **)(*(_DWORD *)v4 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v8 )
    v7 += v8;
  v9 = *v7;
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  v10 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v11 )
    v10 += 4 * v11;
  *(_DWORD *)(*(_DWORD *)v10 + 24) = 1065353216;
  FIELD_U8(a1, 9331) = 0;
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 3);
}
