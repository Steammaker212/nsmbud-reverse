/* sub_6021C710
 * address: 0x6021C710   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021C710(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r1
  int v14; // r2
  int result; // r0

  v6 = sub_601A4454(dword_60C89E18, *(_DWORD *)a2, FIELD_U32(a2, 4));
  v7 = (_DWORD *)sub_60178780(v6, FIELD_U32(a2, 8));
  v8 = v7[18];
  v9 = v7[19];
  v10 = v7[20];
  a1[204] = v8;
  a1[205] = v9;
  a1[206] = v10;
  v11 = sub_601A4454(dword_60C89E18, *(_DWORD *)a3, FIELD_U32(a3, 4));
  v12 = (_DWORD *)sub_60178780(v11, FIELD_U32(a3, 8));
  v13 = v12[18];
  v14 = v12[19];
  result = v12[20];
  a1[207] = v13;
  a1[208] = v14;
  a1[209] = result;
  return result;
}
