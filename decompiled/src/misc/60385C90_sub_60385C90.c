/* sub_60385C90
 * address: 0x60385C90   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60385C90(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  _DWORD *result; // r0
  int v5; // r1
  float v6; // s0
  int v7; // r12
  float *v8; // r3
  int v9; // r2
  int v10; // r4
  float v11; // s2
  _DWORD v12[11]; // [sp+4h] [bp-2Ch] BYREF

  v12[0] = a1[27];
  v12[1] = a1[28];
  v12[2] = a1[29];
  v2 = a1[40];
  v3 = a1[41];
  v12[3] = a1[39];
  v12[4] = v2;
  v12[5] = v3;
  v12[6] = a1[36];
  v12[7] = a1[37];
  v12[8] = a1[38];
  sub_60386364(a1[1575], v12, a1[1576], 0);
  result = a1 + 1579;
  v5 = a1[1579];
  if ( v5 )
  {
    v6 = *((float *)a1 + 28);
    v7 = a1[29];
    v8 = (float *)(a1 + 1580);
    v9 = a1[1581];
    v10 = a1[27];
    v11 = *v8;
    FIELD_U32(v5, 4) = v9;
    FIELD_U32(v5, 12) = v10;
    FIELD_F32(v5, 16) = v6 + v11;
    FIELD_U32(v5, 20) = v7;
    return (_DWORD *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)*result + 4))(*result);
  }
  return result;
}
