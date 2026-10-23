/* sub_60547528
 * address: 0x60547528   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60547528(_DWORD *a1)
{
  int result; // r0

  sub_60473DE4(a1 + 10, 1u, &dword_60CAC400, 0);
  *(_BYTE *)(a1[919] + 64) |= 1u;
  *(_BYTE *)(a1[920] + 64) |= 1u;
  result = a1[918];
  FIELD_U8(result, 64) |= 1u;
  return result;
}
