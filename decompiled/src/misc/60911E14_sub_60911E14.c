/* sub_60911E14
 * address: 0x60911E14   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60911E14(int a1)
{
  int v2; // r1
  _BOOL4 result; // r0

  v2 = sub_609131DC();
  result = 0;
  if ( v2 == 1 )
    return FIELD_U32(a1, 12) == 2;
  return result;
}
