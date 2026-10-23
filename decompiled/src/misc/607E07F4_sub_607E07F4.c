/* sub_607E07F4
 * address: 0x607E07F4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E07F4(int result)
{
  int v1; // r2

  v1 = 10;
  if ( FIELD_U8(dword_60C9A1F0, 6559) == 2 )
    v1 = 9;
  FIELD_U32(result, 52) = v1;
  FIELD_U8(result, 44) = 1;
  return result;
}
