/* sub_603C59EC
 * address: 0x603C59EC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C59EC(_DWORD *a1)
{
  int v1; // r1
  _DWORD *v2; // r1
  int v3; // r2
  int result; // r0

  v1 = ((unsigned __int16)a1[3625] + 1) & 0x3FF;
  a1[3625] = v1;
  v2 = &a1[2 * v1];
  v3 = a1[27];
  result = a1[28];
  v2[1577] = v3;
  v2[1578] = result;
  return result;
}
