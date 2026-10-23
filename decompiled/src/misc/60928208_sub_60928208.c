/* sub_60928208
 * address: 0x60928208   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60928208(_DWORD *a1, void *a2, int a3)
{
  _DWORD *v5; // r5
  int v6; // r1
  int v7; // r2
  int v8; // r3
  _BYTE v10[8]; // [sp+8h] [bp-38h] BYREF
  _BYTE v11[8]; // [sp+10h] [bp-30h] BYREF
  _BYTE v12[40]; // [sp+18h] [bp-28h] BYREF

  v5 = (_DWORD *)operator_new_8DE25C(0x1Cu, a2, 4);
  sub_60941AD8(v12, a1);
  sub_60941B04(v11, a1);
  sub_60941B30(v10, a1);
  default_ref_9419C8(v5);
  *v5 = &off_60C5DC4C;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 1065353216;
  sub_60941A08(v5, v12, v11, v10, a3);
  v6 = a1[4];
  v7 = a1[5];
  v8 = a1[6];
  v5[3] = a1[3];
  v5[4] = v6;
  v5[5] = v7;
  v5[6] = v8;
  return v5;
}
