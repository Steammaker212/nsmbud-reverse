/* sub_60919D48
 * address: 0x60919D48   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60919D48(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v8; // r6
  _DWORD *v9; // r9
  int v10; // r1
  int v11; // r2
  int v12; // r0
  int v13; // r0
  int v14; // r1
  int v15; // r2
  _BYTE v17[68]; // [sp+0h] [bp-70h] BYREF
  int v18[11]; // [sp+44h] [bp-2Ch] BYREF

  v8 = a1 + 3;
  v9 = a1 + 8;
  if ( a1[3] )
  {
    dword_60CC7464(a1 + 8);
    sub_60913AD4(v8);
    a1[6] = 0;
    a1[7] = 0;
  }
  v10 = a2[1];
  v11 = a2[2];
  a1[3] = *a2;
  a1[4] = v10;
  a1[5] = v11;
  a1[6] = a4;
  v12 = 4;
  a1[1] = a3;
  if ( a3 == 1 )
    v12 = 2;
  a1[7] = v12;
  dword_60CC7444(v17, FIELD_U32(dword_60CCFC8C, 28));
  dword_60CC7448(v17);
  dword_60CC744C(v17, a1[3], a1[4], a1[6] * a1[7]);
  dword_60CC745C(v9, v17);
  v13 = a1[7];
  v14 = a1[4];
  v15 = a1[5];
  v18[0] = a1[3];
  v18[1] = v14;
  v18[2] = v15;
  return sub_60913B04(v18, v13 * a4);
}
