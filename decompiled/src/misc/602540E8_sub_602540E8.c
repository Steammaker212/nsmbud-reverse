/* sub_602540E8
 * address: 0x602540E8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602540E8(int a1, unsigned int a2)
{
  int v2; // r3
  int result; // r0

  if ( a2 >= 0x64 )
    a2 = 0;
  v2 = a1 + 4 * a2;
  result = a1 + a2;
  FIELD_U32(v2, 16) = 0;
  FIELD_U8(result, 416) = -1;
  return result;
}
