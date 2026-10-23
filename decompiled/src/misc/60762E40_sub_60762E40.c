/* sub_60762E40
 * address: 0x60762E40   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60762E40(int a1)
{
  int v1; // r1

  if ( (FIELD_U8(a1, 1234) & 4) != 0 )
    return 0;
  if ( (FIELD_U8(a1, 6906) & 1) == 0 )
    return 0;
  v1 = (unsigned __int8)FIELD_U32(a1, 6636) >> 4;
  return v1 != 2 && v1 != 4;
}
