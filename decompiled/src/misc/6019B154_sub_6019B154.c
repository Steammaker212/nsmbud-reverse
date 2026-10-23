/* sub_6019B154
 * address: 0x6019B154   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019B154(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4
  int v3; // r5
  int v4; // r6
  bool v5; // r7
  char v6; // r7
  char v7; // r7
  char v8; // r7
  int v9; // r0

  v2 = a1;
  v3 = a2;
  v4 = dword_60CC6D78 + 796;
  v5 = sub_603F6AA0(dword_60CC6D78 + 796, a1, a2) > 2;
  v6 = v5 | (sub_603F6B0C(v4, v2, v3) > 2);
  v7 = v6 | (sub_603F6AA0(v4, v2, v3) == 3);
  v8 = v7 | (sub_603F6B0C(v4, v2, v3) == 3);
  v9 = sub_603F6AA0(v4, v2, v3);
  return v8 & 1 | (v9 == 4) | (sub_603F6B0C(v4, v2, v3) == 4);
}
