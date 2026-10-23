/* sub_6094A69C
 * address: 0x6094A69C   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094A69C(int a1, int a2, int a3, int a4)
{
  int v7; // r4
  int v8; // r8
  int v9; // r10
  bool v10; // r7
  unsigned int i; // r4
  int v12; // r5
  int v13; // r1
  int v14; // r9
  int v15; // r0
  int v16; // r6
  int v17; // r0
  int result; // r0
  int v19; // [sp+10h] [bp-60h]
  _DWORD v21[3]; // [sp+1Ch] [bp-54h] BYREF
  _DWORD v22[3]; // [sp+28h] [bp-48h] BYREF
  _DWORD v23[3]; // [sp+34h] [bp-3Ch] BYREF
  int v24; // [sp+40h] [bp-30h] BYREF

  v7 = a1 + 3368;
  sub_60913D88(a1 + 3368, 32 * a2 * a3 + 64, a4, 4, 0);
  sub_60913A6C(&v24, v7, 0);
  sub_60913A6C(v23, v7, 0);
  v19 = a1;
  sub_6094D248(a1 + 3648, v23, a2, a3);
  v8 = a2;
  v9 = a3;
  v10 = 1;
  for ( i = 0; i != 3; v10 = i < 3 )
  {
    v12 = v10;
    v13 = 2 * sub_6094D0B8(v8, v9, 0, i);
    if ( v10 )
      v12 = i;
    sub_60913D88(v19 + 84 * v12 + 3396, v13, a4, 4, 0);
    sub_60913A6C(v22, v19 + 84 * v12 + 3396, 0);
    sub_60913A6C(v21, v19 + 84 * v12 + 3396, 0);
    v14 = v19 + 240 * v12;
    sub_6094D4CC(v14 + 3920, v21, v8, v9, 0, i);
    v15 = sub_6094D0B8(v8, v9, 1, i);
    v16 = v19 + 84 * v12;
    sub_60913D88(v16 + 3424, 2 * v15, a4, 4, 0);
    sub_60913A6C(v22, v16 + 3424, 0);
    sub_60913A6C(v21, v16 + 3424, 0);
    sub_6094D4CC(v14 + 4000, v21, v8, v9, 1, i);
    v17 = sub_6094D0B8(v8, v9, 2, i);
    sub_60913D88(v16 + 3452, 2 * v17, a4, 4, 0);
    sub_60913A6C(v22, v16 + 3452, 0);
    sub_60913A6C(v21, v16 + 3452, 0);
    result = sub_6094D4CC(v14 + 4080, v21, v8, v9, 2, i++);
  }
  return result;
}
