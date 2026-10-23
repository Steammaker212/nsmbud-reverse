/* sub_603FFE2C
 * address: 0x603FFE2C   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603FFE2C(int *a1, const void *a2)
{
  unsigned int result; // r0
  int v4; // r2
  int v5; // r3
  int v6; // r5
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r2
  unsigned int v10; // r2
  unsigned int v11; // r2
  unsigned int v12; // r2
  unsigned int v13; // r2
  unsigned int v14; // r2
  unsigned int v15; // r2
  unsigned int v16; // r2
  unsigned int v17; // r2

  qmemcpy(a1, a2, 0x38u);
  *a1 = off_60C5CB10(*a1);
  a1[1] = off_60C5CB10(a1[1]);
  a1[2] = off_60C5CB10(a1[2]);
  a1[3] = off_60C5CB10(a1[3]);
  a1[4] = off_60C5CB10(a1[4]);
  a1[5] = off_60C5CB10(a1[5]);
  a1[6] = off_60C5CB10(a1[6]);
  a1[7] = off_60C5CB10(a1[7]);
  a1[8] = off_60C5CB10(a1[8]);
  a1[9] = off_60C5CB10(a1[9]);
  a1[10] = off_60C5CB10(a1[10]);
  a1[11] = off_60C5CB10(a1[11]);
  a1[12] = off_60C5CB10(a1[12]);
  result = off_60C5CB10(a1[13]);
  v4 = 999999;
  v5 = 99999;
  v6 = 999;
  if ( (unsigned int)*a1 < 0xF423F )
    v4 = *a1;
  v7 = 9999;
  *a1 = v4;
  v8 = a1[1];
  if ( v8 >= 0x270F )
    v8 = 9999;
  a1[1] = v8;
  v9 = a1[2];
  if ( v9 >= 0x270F )
    v9 = 9999;
  a1[2] = v9;
  v10 = a1[3];
  if ( v10 >= 0x1869F )
    v10 = 99999;
  a1[3] = v10;
  v11 = a1[4];
  if ( v11 >= 0x1869F )
    v11 = 99999;
  a1[4] = v11;
  v12 = a1[5];
  if ( v12 >= 0x1869F )
    v12 = 99999;
  a1[5] = v12;
  v13 = a1[6];
  if ( v13 >= 0x3E7 )
    v13 = 999;
  a1[6] = v13;
  v14 = a1[7];
  if ( v14 >= 0x1869F )
    v14 = 99999;
  a1[7] = v14;
  if ( (unsigned int)a1[8] < 0x1869F )
    v5 = a1[8];
  a1[8] = v5;
  v15 = a1[9];
  if ( v15 >= 0x3E7 )
    v15 = 999;
  a1[9] = v15;
  if ( (unsigned int)a1[10] < 0x3E7 )
    v6 = a1[10];
  a1[10] = v6;
  v16 = a1[11];
  if ( v16 >= 0x270F )
    v16 = 9999;
  a1[11] = v16;
  v17 = a1[12];
  if ( v17 >= 0x270F )
    v17 = 9999;
  if ( result < 0x270F )
    v7 = result;
  a1[12] = v17;
  a1[13] = v7;
  return result;
}
