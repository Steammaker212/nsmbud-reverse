/* sub_6047F384
 * address: 0x6047F384   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6047F384(int a1, int a2)
{
  _BOOL4 result; // r0
  int v4; // r0

  result = 1;
  if ( (FIELD_U32(a1, 2028) & a2) == 0 )
  {
    v4 = FIELD_U32(a1, 2024) & a2;
    return v4 != 0;
  }
  return result;
}
