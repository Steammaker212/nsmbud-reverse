/* sub_6050E38C
 * address: 0x6050E38C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050E38C(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v6; // r5
  unsigned int v7; // r0
  int result; // r0
  int v9[7]; // [sp+4h] [bp-1Ch] BYREF

  v6 = a1 + 15;
  sub_604734E4(a1 + 15, 0);
  sub_60476388(v6, a2, a3);
  v9[0] = 3;
  sub_60474848((int)v6, &dword_60CA80DC, v9);
  v7 = sub_6050DF0C((int)a1);
  sub_6050E6F8(a1, v7);
  v9[0] = 1;
  sub_604751FC((int)v6, (int)(a1 + 910), &dword_60CA80B0, v9);
  v9[0] = 2;
  sub_604752D4((int)v6, (int)(a1 + 911), &dword_60CA80CC, v9);
  v9[0] = 1;
  sub_604753A8((int)v6, (int)(a1 + 913), &dword_60CA80B8, v9);
  result = sub_608DE334(0x20u, 0, 4);
  if ( result )
  {
    *(_DWORD *)result = 24;
    FIELD_U32(result, 4) = 1;
    FIELD_U32(result, 16) = -1;
    FIELD_U32(result, 20) = -1;
    FIELD_U32(result, 8) = off_60BFDB94;
    result += 8;
    FIELD_U16(result, 16) = 0;
    FIELD_U16(result, 18) = 0;
    a1[914] = 1;
    a1[915] = result;
  }
  return result;
}
