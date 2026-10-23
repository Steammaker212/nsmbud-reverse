/* sub_604D89AC
 * address: 0x604D89AC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D89AC(_DWORD *a1)
{
  int result; // r0

  *(_BYTE *)(a1[1443] + 64) &= ~1u;
  *(_BYTE *)(a1[1444] + 64) &= ~1u;
  *(_BYTE *)(a1[1445] + 64) &= ~1u;
  *(_BYTE *)(a1[1446] + 64) &= ~1u;
  result = a1[1447];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
