/* sub_603FCCE4
 * address: 0x603FCCE4   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603FCCE4(_DWORD *a1, int *a2)
{
  int v4; // r5
  int v5; // r0
  int v6; // r1
  _DWORD *v7; // r5
  int v8; // r1
  int v9; // r7
  _DWORD *v10; // r7
  int v11; // r1
  int v12; // r7
  _DWORD *v13; // r7
  int v14; // r1
  int v15; // r7
  void *v16; // r5
  _DWORD *v17; // r4
  _BYTE v18[72]; // [sp+0h] [bp-60h] BYREF

  v4 = 0;
  v5 = a1[8];
  v6 = *a2;
  if ( v5 == v6
    || (v4 = 1, a1[26] == v6)
    || (v4 = 2, a1[44] == v6)
    || (v4 = 3, a1[62] == v6)
    || (v4 = 4, a1[80] == v6)
    || (v4 = 5, a1[98] == v6) )
  {
    qmemcpy(v18, a1 + 5, sizeof(v18));
    v7 = &a1[18 * v4 + 5];
    qmemcpy(a1 + 5, v7, 0x48u);
    qmemcpy(v7, v18, 0x48u);
    v5 = a1[8];
  }
  v8 = a2[1];
  v9 = 0;
  if ( v5 == v8
    || (v9 = 1, a1[26] == v8)
    || (v9 = 2, a1[44] == v8)
    || (v9 = 3, a1[62] == v8)
    || (v9 = 4, a1[80] == v8)
    || (v9 = 5, a1[98] == v8) )
  {
    qmemcpy(v18, a1 + 23, sizeof(v18));
    v10 = &a1[18 * v9 + 5];
    qmemcpy(a1 + 23, v10, 0x48u);
    qmemcpy(v10, v18, 0x48u);
    v5 = a1[8];
  }
  v11 = a2[2];
  v12 = 0;
  if ( v5 == v11
    || (v12 = 1, a1[26] == v11)
    || (v12 = 2, a1[44] == v11)
    || (v12 = 3, a1[62] == v11)
    || (v12 = 4, a1[80] == v11)
    || (v12 = 5, a1[98] == v11) )
  {
    qmemcpy(v18, a1 + 41, sizeof(v18));
    v13 = &a1[18 * v12 + 5];
    qmemcpy(a1 + 41, v13, 0x48u);
    qmemcpy(v13, v18, 0x48u);
    v5 = a1[8];
  }
  v14 = a2[3];
  v15 = 0;
  if ( v5 == v14
    || (v15 = 1, a1[26] == v14)
    || (v15 = 2, a1[44] == v14)
    || (v15 = 3, a1[62] == v14)
    || (v15 = 4, a1[80] == v14)
    || (v15 = 5, a1[98] == v14) )
  {
    v16 = a1 + 59;
    qmemcpy(v18, a1 + 59, sizeof(v18));
    v17 = &a1[18 * v15 + 5];
    qmemcpy(v16, v17, 0x48u);
    qmemcpy(v17, v18, 0x48u);
  }
}
