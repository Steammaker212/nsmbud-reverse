/* sub_6093426C
 * address: 0x6093426C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093426C(int a1, unsigned int a2, unsigned int a3, __int16 a4, float *a5)
{
  unsigned int v5; // r4
  int v6; // r7
  float v8; // s0
  int v9; // r5
  int v10; // r9
  int *v11; // r6
  unsigned int v12; // r0
  float v13; // s2
  int v14; // r0
  signed int v15; // r1
  int v16; // r5
  _DWORD v18[3]; // [sp+18h] [bp-38h] BYREF
  int v19[11]; // [sp+24h] [bp-2Ch] BYREF

  v5 = a3;
  v6 = FIELD_U32(a1, 1564);
  v8 = *a5;
  if ( FIELD_U32(a1, 1560) > a2 )
    v6 += 3608 * a2;
  if ( a3 >= 2 )
    v5 = 0;
  v9 = v6 + 648 * v5;
  v10 = v9 + 1448;
  v11 = (int *)(v9 + 1792);
  v12 = FIELD_U16(v9, 1816);
  if ( v12 <= 1 )
    v12 = 1;
  if ( (float)v12 != v8 )
  {
    v13 = a5[1];
LABEL_13:
    sub_6091FDB0(v9 + 1792, 1, a4, (unsigned int)v8, (unsigned int)v13, 1, 1, 0, 0, 1);
    v16 = v6 + 648 * v5;
    sub_60972444(v16 + 1816);
    sub_60913A6C(v18, v16 + 2064, 0);
    v19[0] = v18[0];
    v19[1] = v18[1];
    v19[2] = v18[2];
    sub_609208DC(v11, v19, 0);
    sub_60920EC8(v10, v11);
    goto LABEL_14;
  }
  v14 = sub_609200A0(v9 + 1792);
  v13 = a5[1];
  v15 = FIELD_U16(v9, 1818);
  if ( v14 > v15 )
    v15 = v14;
  if ( (float)(unsigned int)v15 != v13 )
  {
    v8 = *a5;
    goto LABEL_13;
  }
LABEL_14:
  *(_BYTE *)(v6 + 648 * v5 + 2092) = 1;
  return v10;
}
