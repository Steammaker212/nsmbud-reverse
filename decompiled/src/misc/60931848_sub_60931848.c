/* sub_60931848
 * address: 0x60931848   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60931848(_DWORD *a1, void *a2, int a3)
{
  _DWORD *v5; // r5
  _BYTE v7[8]; // [sp+8h] [bp-38h] BYREF
  _BYTE v8[8]; // [sp+10h] [bp-30h] BYREF
  _BYTE v9[40]; // [sp+18h] [bp-28h] BYREF

  v5 = (_DWORD *)operator_new_8DE25C(0x1Cu, a2, 4);
  sub_60941AD8(v9, a1);
  sub_60941B04(v8, a1);
  sub_60941B30(v7, a1);
  default_ref_9419C8(v5);
  *v5 = &off_60C5E170;
  sub_60941A08(v5, v9, v8, v7, a3);
  v5[3] = a1[3];
  v5[4] = a1[4];
  v5[5] = a1[5];
  v5[6] = a1[6];
  return v5;
}
