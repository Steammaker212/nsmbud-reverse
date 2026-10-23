/* sub_601DF7DC
 * address: 0x601DF7DC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601DF7DC(int result)
{
  if ( FIELD_U32(result, 272) != 2 )
  {
    FIELD_U32(result, 272) = 2;
    return (*(int (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(result, 268) + 4) + 84))(
             *(_DWORD *)(FIELD_U32(result, 268) + 4),
             2,
             4.0,
             5.0,
             0.0);
  }
  return result;
}
