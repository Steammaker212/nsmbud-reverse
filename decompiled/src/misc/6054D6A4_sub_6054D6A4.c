/* sub_6054D6A4
 * address: 0x6054D6A4   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054D6A4(_DWORD *a1)
{
  int result; // r0

  *(_BYTE *)(a1[920] + 64) &= ~1u;
  *(_BYTE *)(a1[921] + 64) &= ~1u;
  *(_BYTE *)(a1[922] + 64) &= ~1u;
  *(_BYTE *)(a1[923] + 64) &= ~1u;
  *(_BYTE *)(a1[924] + 64) &= ~1u;
  *(_BYTE *)(a1[925] + 64) &= ~1u;
  *(_BYTE *)(a1[926] + 64) &= ~1u;
  *(_BYTE *)(a1[927] + 64) &= ~1u;
  *(_BYTE *)(a1[912] + 64) &= ~1u;
  *(_BYTE *)(a1[913] + 64) &= ~1u;
  *(_BYTE *)(a1[914] + 64) &= ~1u;
  *(_BYTE *)(a1[915] + 64) &= ~1u;
  *(_BYTE *)(a1[916] + 64) &= ~1u;
  *(_BYTE *)(a1[917] + 64) &= ~1u;
  *(_BYTE *)(a1[918] + 64) &= ~1u;
  result = a1[919];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
