/* sub_60437600
 * address: 0x60437600   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60437600(_DWORD *result, int *a2, int *a3)
{
  int v3; // r12
  int v4; // lr
  int v5; // r3
  int v6; // r12
  int v7; // r3
  int v8; // r1

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  result[214] = a2[3];
  result[213] = v5;
  result[212] = v4;
  result[211] = v3;
  v6 = *a3;
  v7 = a3[1];
  v8 = a3[2];
  result[218] = a3[3];
  result[217] = v8;
  result[216] = v7;
  result[215] = v6;
  return result;
}
