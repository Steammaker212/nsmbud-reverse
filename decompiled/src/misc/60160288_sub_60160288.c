/* sub_60160288
 * address: 0x60160288   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60160288(int result, int a2)
{
  if ( !FIELD_U32(a2, 2164) && !FIELD_U32(a2, 2168) && FIELD_U32(result, 268) != a2 + 2160 )
    return (*(int (__fastcall **)(int))(FIELD_U32(result, 264) + 8))(result + 264);
  return result;
}
