/* sub_608A40DC
 * address: 0x608A40DC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A40DC(int a1)
{
  _DWORD *v1; // r2
  int v2; // r3
  int v3; // r0
  char v4; // r4
  int v5; // r3
  int v6; // r4
  bool v7; // zf
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r3
  int v12; // r0
  int v13; // r1

  v1 = (_DWORD *)(a1 + FIELD_U32(a1, 20));
  v2 = v1[15];
  v3 = v1[16];
  v4 = (_BYTE)v1 + v2;
  if ( (char *)v1 + v2 )
    v4 = 1;
  v5 = (v2 != 0) & (unsigned __int8)v4;
  v6 = 1;
  if ( v5 )
    v6 = 2;
  if ( !(_DWORD *)((char *)v1 + v3) )
    v6 = v5;
  v7 = v3 == 0;
  v8 = v1[17];
  if ( v7 )
    v6 = v5;
  v9 = v6;
  if ( (char *)v1 + v8 )
    v9 = v6 + 1;
  v7 = v8 == 0;
  v10 = v1[18];
  if ( v7 )
    v9 = v6;
  v11 = v9;
  if ( (char *)v1 + v10 )
    v11 = v9 + 1;
  v7 = v10 == 0;
  v12 = v1[19];
  if ( v7 )
    v11 = v9;
  v13 = v11;
  if ( (char *)v1 + v12 )
    v13 = v11 + 1;
  if ( !v12 )
    v13 = v11;
  return 16 * v1[2] * v13 + 4 * v1[14];
}
