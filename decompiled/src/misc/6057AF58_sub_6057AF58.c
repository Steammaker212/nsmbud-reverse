/* sub_6057AF58
 * address: 0x6057AF58   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_6057AF58(int a1)
{
  _WORD *result; // r0
  unsigned int v2; // t1

  v2 = FIELD_U16(a1, 7332);
  result = (_WORD *)(a1 + 7332);
  if ( v2 >= 0x3D )
    *result = 60;
  return result;
}
