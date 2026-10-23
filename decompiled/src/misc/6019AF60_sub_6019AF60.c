/* sub_6019AF60
 * address: 0x6019AF60   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019AF60(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r10
  int v3; // r8
  int v4; // r6
  _BOOL4 v5; // r7
  int v6; // r9
  _BOOL4 v7; // r4
  bool v8; // r5
  int v9; // r0

  v2 = a1;
  v3 = a2;
  v4 = dword_60CC6D78 + 796;
  v5 = sub_603F6AA0(dword_60CC6D78 + 796, a1, a2) > 2;
  v6 = sub_603F6B0C(v4, v2, v3);
  v7 = sub_603F6AA0(v4, v2, v3) != 3;
  v8 = sub_603F6B0C(v4, v2, v3) != 3;
  v9 = sub_603F6AA0(v4, v2, v3);
  return (v5 && v7 || v6 > 2 && v8 || v9 == 4 && v7) | (sub_603F6B0C(v4, v2, v3) == 4 && v8);
}
