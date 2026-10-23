/* sub_608B4A30
 * address: 0x608B4A30   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B4A30(int result)
{
  if ( FIELD_U8(result, 12) )
  {
    FIELD_U8(result, 12) = 0;
    *(_DWORD *)result = 0;
    FIELD_U32(result, 4) = 0;
    FIELD_U32(result, 8) = 0;
  }
  return result;
}
