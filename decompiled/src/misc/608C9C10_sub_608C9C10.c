/* sub_608C9C10
 * address: 0x608C9C10   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C9C10(int result, float a2)
{
  __int16 v2; // t1

  if ( FIELD_F32(result, 444) != a2 )
  {
    FIELD_F32(result, 444) = a2;
    v2 = FIELD_U16(result, 424);
    result += 424;
    *(_WORD *)result = v2 | 0x10;
  }
  return result;
}
