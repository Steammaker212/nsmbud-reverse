/* sub_60400030
 * address: 0x60400030   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60400030(int *a1, _DWORD *a2)
{
  int v4; // r2
  int v5; // r3
  int v6; // r5
  unsigned int v7; // r0
  int v8; // r0
  unsigned int v9; // r2
  unsigned int v10; // r2
  unsigned int v11; // r2
  unsigned int v12; // r2
  unsigned int v13; // r2
  unsigned int v14; // r2
  unsigned int v15; // r2
  unsigned int v16; // r2
  unsigned int v17; // r2
  unsigned int v18; // r2
  int result; // r0

  v4 = 999999;
  v5 = 99999;
  v6 = 999;
  v7 = *a1;
  if ( v7 < 0xF423F )
    v4 = v7;
  v8 = 9999;
  *a1 = v4;
  v9 = a1[1];
  if ( v9 >= 0x270F )
    v9 = 9999;
  a1[1] = v9;
  v10 = a1[2];
  if ( v10 >= 0x270F )
    v10 = 9999;
  a1[2] = v10;
  v11 = a1[3];
  if ( v11 >= 0x1869F )
    v11 = 99999;
  a1[3] = v11;
  v12 = a1[4];
  if ( v12 >= 0x1869F )
    v12 = 99999;
  a1[4] = v12;
  v13 = a1[5];
  if ( v13 >= 0x1869F )
    v13 = 99999;
  a1[5] = v13;
  v14 = a1[6];
  if ( v14 >= 0x3E7 )
    v14 = 999;
  a1[6] = v14;
  v15 = a1[7];
  if ( v15 >= 0x1869F )
    v15 = 99999;
  a1[7] = v15;
  if ( (unsigned int)a1[8] < 0x1869F )
    v5 = a1[8];
  a1[8] = v5;
  v16 = a1[9];
  if ( v16 >= 0x3E7 )
    v16 = 999;
  a1[9] = v16;
  if ( (unsigned int)a1[10] < 0x3E7 )
    v6 = a1[10];
  a1[10] = v6;
  v17 = a1[11];
  if ( v17 >= 0x270F )
    v17 = 9999;
  a1[11] = v17;
  v18 = a1[12];
  if ( v18 >= 0x270F )
    v18 = 9999;
  a1[12] = v18;
  if ( (unsigned int)a1[13] < 0x270F )
    v8 = a1[13];
  a1[13] = v8;
  qmemcpy(a2, a1, 0x38u);
  *a2 = off_60C5CB10(*a2);
  a2[1] = off_60C5CB10(a2[1]);
  a2[2] = off_60C5CB10(a2[2]);
  a2[3] = off_60C5CB10(a2[3]);
  a2[4] = off_60C5CB10(a2[4]);
  a2[5] = off_60C5CB10(a2[5]);
  a2[6] = off_60C5CB10(a2[6]);
  a2[7] = off_60C5CB10(a2[7]);
  a2[8] = off_60C5CB10(a2[8]);
  a2[9] = off_60C5CB10(a2[9]);
  a2[10] = off_60C5CB10(a2[10]);
  a2[11] = off_60C5CB10(a2[11]);
  a2[12] = off_60C5CB10(a2[12]);
  result = off_60C5CB10(a2[13]);
  a2[13] = result;
  return result;
}
