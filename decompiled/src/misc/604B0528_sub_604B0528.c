/* sub_604B0528
 * address: 0x604B0528   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B0528(_DWORD *a1)
{
  int result; // r0

  *(_BYTE *)(a1[1542] + 64) &= ~1u;
  *(_BYTE *)(a1[1543] + 64) &= ~1u;
  *(_BYTE *)(a1[1544] + 64) &= ~1u;
  *(_BYTE *)(a1[1545] + 64) &= ~1u;
  *(_BYTE *)(a1[1546] + 64) &= ~1u;
  *(_BYTE *)(a1[1547] + 64) &= ~1u;
  *(_BYTE *)(a1[1548] + 64) &= ~1u;
  *(_BYTE *)(a1[1549] + 64) &= ~1u;
  result = a1[1550];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
