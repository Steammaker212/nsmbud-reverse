/* sead__Random__getU32
 * address: 0x6090EC50   size: 52   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sead__Random__getU32(void *a1)
{
  int v1; // r1
  unsigned int v2; // r2
  unsigned int v3; // r1

  v1 = *(_DWORD *)a1;
  *(_DWORD *)a1 = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = *((_DWORD *)a1 + 2);
  v2 = *((_DWORD *)a1 + 3);
  *((_DWORD *)a1 + 2) = v2;
  v3 = v1 ^ (v1 << 11) ^ ((v1 ^ (unsigned int)(v1 << 11)) >> 8) ^ v2 ^ (v2 >> 19);
  *((_DWORD *)a1 + 3) = v3;
  return v3;
}
