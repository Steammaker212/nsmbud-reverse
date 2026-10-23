/* sub_60525400
 * address: 0x60525400   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60525400(_DWORD *a1)
{
  int result; // r0

  sub_60473DE4(a1 + 11, 3u, &dword_60CA997C, 0);
  *(_BYTE *)(a1[1001] + 64) |= 1u;
  result = a1[1019];
  if ( result )
    FIELD_U8(result, 64) |= 1u;
  return result;
}
