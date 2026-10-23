/* sub_6075C23C
 * address: 0x6075C23C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075C23C(_DWORD *a1)
{
  int v2; // r0
  unsigned int v3; // r5
  signed int v4; // r0
  int v5; // r0
  int result; // r0
  _BYTE v7[96]; // [sp+8h] [bp-130h] BYREF
  _DWORD v8[52]; // [sp+68h] [bp-D0h] BYREF

  v2 = operator_new(0x4C8u);
  a1[141] = sub_60436A4C(v2);
  v3 = a1[139];
  sub_604186F8((int)v8);
  sub_6042A9E8(dword_60C9C0FC, v8, v3);
  sub_6042F294(v7, a1 + 138);
  qmemcpy(v8, v7, 0x5Cu);
  v4 = sub_60436B70((_DWORD *)a1[141], v8, v3, a1[140], 0);
  v5 = sub_6075C4E0(v4, a1 + 142, a1[60], 3);
  sub_6075C4E0(v5, a1 + 210, a1[64], 4);
  result = a1[141];
  FIELD_U32(result, 876) = a1 + 142;
  FIELD_U32(result, 880) = a1 + 210;
  return result;
}
