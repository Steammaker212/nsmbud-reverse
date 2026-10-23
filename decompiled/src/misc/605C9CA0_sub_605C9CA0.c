/* sub_605C9CA0
 * address: 0x605C9CA0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C9CA0(int a1)
{
  int result; // r0

  sub_605CC9DC();
  FIELD_U32(a1, 328) = 9;
  result = FIELD_U32(a1, 6144);
  if ( result )
    FIELD_U32(result, 136) |= 0x800u;
  return result;
}
