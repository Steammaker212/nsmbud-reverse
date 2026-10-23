/* sub_6015A964
 * address: 0x6015A964   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015A964(int *a1, _DWORD *a2, int *a3)
{
  int v3; // r3
  int v4; // lr
  int v5; // r0
  int v6; // r8
  int v7; // r4
  int v8; // r5
  int v9; // r6
  int v10; // r2
  unsigned int v11; // r1
  unsigned int v12; // r3
  bool v13; // cf
  bool v14; // zf
  unsigned int v15; // r1
  unsigned int v16; // r0
  unsigned __int8 v17; // r7

  v3 = a2[1];
  v4 = a2[2];
  v5 = *a1;
  v6 = a2[3];
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v10 = a3[3];
  v11 = v5 - *a2;
  v12 = v5 - v3;
  v13 = v11 >= 2 * v7;
  v14 = v11 == 2 * v7;
  v15 = v5 - v4;
  v16 = v5 - v6;
  v17 = v14 || !v13;
  if ( v12 <= 2 * v8 )
    v17 |= 2u;
  if ( v15 <= 2 * v9 )
    v17 |= 4u;
  if ( v16 <= 2 * v10 )
    v17 |= 8u;
  return v17;
}
