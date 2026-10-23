/* sub_6053FBD4
 * address: 0x6053FBD4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053FBD4(int result)
{
  _DWORD *v1; // r1

  v1 = (_DWORD *)(result + 34688);
  if ( FIELD_U32(result, 34688) == 1 )
  {
    FIELD_U32(result, 34692) = 1;
    *v1 = 0;
    return 0;
  }
  return result;
}
