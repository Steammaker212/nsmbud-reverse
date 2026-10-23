/* sub_6083625C
 * address: 0x6083625C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083625C(int result, __int16 a2)
{
  if ( (a2 & 0x49C0) != 0 )
    return dword_60CC7970(FIELD_U32(result, 184), 1);
  return result;
}
