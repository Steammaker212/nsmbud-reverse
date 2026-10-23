/* sub_607A3088
 * address: 0x607A3088   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607A3088(int a1)
{
  _BOOL4 result; // r0
  int v3; // r1

  if ( (FIELD_U8(a1, 1235) & 1) == 0 )
    return 0;
  v3 = sub_6079DF08(a1);
  result = 1;
  if ( !v3 )
    return (FIELD_U8(a1, 1235) & 2) != 0;
  return result;
}
