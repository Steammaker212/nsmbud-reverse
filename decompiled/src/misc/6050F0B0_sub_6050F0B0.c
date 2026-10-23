/* sub_6050F0B0
 * address: 0x6050F0B0   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050F0B0(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v6; // r5
  int result; // r0
  int v8[9]; // [sp+4h] [bp-24h] BYREF

  v6 = a1 + 15;
  sub_604734E4(a1 + 15, 0);
  sub_60476388(v6, a2, a3);
  v8[0] = 4;
  sub_60474848((int)v6, &dword_60CA815C, v8);
  sub_6050F518(a1);
  sub_6050F728(a1);
  v8[0] = 1;
  sub_604751FC((int)v6, (int)(a1 + 930), &dword_60CA8140, v8);
  v8[0] = 8;
  sub_604752D4((int)v6, (int)(a1 + 931), dword_60CA81C0, v8);
  v8[0] = 1;
  sub_604753A8((int)v6, (int)(a1 + 939), &dword_60CA8148, v8);
  result = sub_608DE334(0x68u, 0, 4);
  if ( result )
  {
    *(_DWORD *)result = 24;
    FIELD_U32(result, 4) = 4;
    FIELD_U32(result, 16) = -1;
    FIELD_U32(result, 20) = -1;
    FIELD_U32(result, 8) = off_60BFDB94;
    result += 8;
    FIELD_U16(result, 16) = 0;
    FIELD_U16(result, 18) = 0;
    FIELD_U32(result, 36) = -1;
    FIELD_U32(result, 32) = -1;
    FIELD_U32(result, 24) = off_60BFDB94;
    FIELD_U16(result, 40) = 0;
    FIELD_U16(result, 42) = 0;
    FIELD_U32(result, 60) = -1;
    FIELD_U32(result, 56) = -1;
    FIELD_U32(result, 48) = off_60BFDB94;
    FIELD_U16(result, 64) = 0;
    FIELD_U16(result, 66) = 0;
    FIELD_U32(result, 80) = -1;
    FIELD_U32(result, 84) = -1;
    FIELD_U32(result, 72) = off_60BFDB94;
    FIELD_U16(result, 88) = 0;
    FIELD_U16(result, 90) = 0;
    a1[944] = 4;
    a1[945] = result;
  }
  return result;
}
