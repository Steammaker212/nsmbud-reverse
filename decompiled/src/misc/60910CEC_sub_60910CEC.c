/* sub_60910CEC
 * address: 0x60910CEC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60910CEC(_DWORD *a1, int *a2)
{
  int v3; // r0
  int v4; // r12
  int v5; // r3
  int result; // r0

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  a1[3] = a2[3];
  *a1 = v3;
  a1[2] = v5;
  a1[1] = v4;
  result = sub_60911344(a1, a1 + 1, a1 + 2);
  a1[3] = result;
  return result;
}
