/* jcb_demo_battleA_ref
 * address: 0x60034C20   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcb_demo_battleA_ref(int a1)
{
  _DWORD *v1; // r0
  int v2; // r4
  int v3; // r1
  int *v4; // r1
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  _DWORD v12[6]; // [sp+0h] [bp-18h] BYREF

  v2 = a1 + 7100;
  v1 = *(_DWORD **)(a1 + 7100);
  v3 = *(_DWORD *)(v2 - 4);
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "jcb_demo_battleA";
  sub_60421938(v1, v3, (int)v12);
  v4 = *(int **)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += v5;
  v6 = *v4;
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v10 )
    v9 += 4 * v10;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), 0);
  FIELD_U32(v2, 672) = 1;
  FIELD_U8(v2, 164) = 0;
  return (*(int (__fastcall **)(_DWORD, int *))(**(_DWORD **)(v2 + 524) + 192))(FIELD_U32(v2, 524), &dword_60C800C4);
}
