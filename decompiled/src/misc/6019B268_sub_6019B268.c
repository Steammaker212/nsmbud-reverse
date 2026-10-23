/* sub_6019B268
 * address: 0x6019B268   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019B268(unsigned __int8 a1)
{
  int v1; // r4
  int v2; // r5
  bool v3; // r7
  char v4; // r7
  char v5; // r7
  char v6; // r7
  int v7; // r0

  v1 = a1;
  v2 = dword_60CC6D78 + 796;
  v3 = sub_603F6AA0(dword_60CC6D78 + 796, a1, 36) > 2;
  v4 = v3 | (sub_603F6B0C(v2, v1, 36) > 2);
  v5 = v4 | (sub_603F6AA0(v2, v1, 36) == 3);
  v6 = v5 | (sub_603F6B0C(v2, v1, 36) == 3);
  v7 = sub_603F6AA0(v2, v1, 36);
  return v6 & 1 | (v7 == 4) | (sub_603F6B0C(v2, v1, 36) == 4);
}
