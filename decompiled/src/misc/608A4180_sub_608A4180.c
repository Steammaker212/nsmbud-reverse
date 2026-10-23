/* sub_608A4180
 * address: 0x608A4180   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A4180(int a1, int a2, int a3)
{
  int v4; // r2
  int v5; // r2
  _DWORD *v6; // r12
  int v7; // t1
  int v8; // r4
  int v9; // r5
  int v10; // r6
  int v11; // r7
  int v12; // r8
  int v13; // r9

  v4 = FIELD_U32(a3, 20);
  v7 = *(_DWORD *)(a3 + v4);
  v6 = (_DWORD *)(a3 + v4);
  v5 = v7;
  v8 = v6[15];
  v9 = v6[16];
  v10 = v6[17];
  v11 = v6[18];
  v12 = v6[19];
  v13 = v6[20];
  if ( v13 )
    v13 += (int)v6;
  if ( v12 )
    v12 += (int)v6;
  if ( v11 )
    v11 += (int)v6;
  if ( v10 )
    v10 += (int)v6;
  if ( v9 )
    v9 += (int)v6;
  if ( v8 )
    v8 += (int)v6;
  return sub_608A41F0(a1, a2, v5, v6[1], v6[14], v6[2], v8, v9, v10, v11, v12, v13);
}
