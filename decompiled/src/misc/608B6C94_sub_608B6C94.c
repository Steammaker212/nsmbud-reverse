/* sub_608B6C94
 * address: 0x608B6C94   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B6C94(int result)
{
  if ( FIELD_U8(result, 8) )
  {
    *(_DWORD *)result = 0;
    FIELD_U32(result, 4) = 0;
    FIELD_U8(result, 8) = 0;
  }
  return result;
}
