/* sub_6005F760
 * address: 0x6005F760   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005F760(_DWORD *a1)
{
  int v2; // r0
  _DWORD v4[2]; // [sp+0h] [bp-40h] BYREF
  _DWORD v5[14]; // [sp+8h] [bp-38h] BYREF

  v5[2] = &sead__SafeStringBase__vtable;
  v5[3] = "fly_return";
  sub_60051780((int)a1);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "fly_return";
  sub_60051794((int)a1, (int)v5, 0);
  v2 = a1[1959];
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "fly_wing_return";
  sub_60421AE4(v2, v4, 0);
  a1[1810] = 0;
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[1963] = 0;
  return 7852;
}
