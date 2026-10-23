/* sub_6088811C
 * address: 0x6088811C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088811C(_DWORD *a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r12
  int result; // r0

  v2 = a1[12];
  v3 = a1[13];
  v4 = a1[14];
  result = a1[15];
  *a2 = v2;
  a2[1] = v3;
  a2[2] = v4;
  a2[3] = result;
  return result;
}
