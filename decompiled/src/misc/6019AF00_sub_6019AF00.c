/* sub_6019AF00
 * address: 0x6019AF00   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019AF00(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r8
  int v3; // r5
  int v4; // r6
  bool v5; // zf

  v2 = a1;
  v3 = a2;
  v4 = dword_60CC6D78 + 796;
  v5 = sub_603F6AA0(dword_60CC6D78 + 796, a1, a2) == 3;
  return v5 | (sub_603F6B0C(v4, v2, v3) == 3);
}
