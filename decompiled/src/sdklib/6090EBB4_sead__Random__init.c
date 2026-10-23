/* sead__Random__init
 * address: 0x6090EBB4   size: 96   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sead__Random__init(unsigned int *a1)
{
  unsigned int result; // r0
  unsigned int v3; // r2
  unsigned int v4; // r3
  unsigned int v5; // [sp+0h] [bp-10h] BYREF

  nn__os__GetSystemTick((nn__os *)&v5);
  result = 1812433253 * (v5 ^ (v5 >> 30)) + 1;
  v3 = 1812433253 * (result ^ (result >> 30)) + 2;
  v4 = 1812433253 * (v3 ^ (v3 >> 30)) + 3;
  *a1 = result;
  a1[1] = v3;
  a1[2] = v4;
  a1[3] = 1812433253 * (v4 ^ (v4 >> 30)) + 4;
  return result;
}
