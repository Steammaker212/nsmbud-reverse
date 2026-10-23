/* sub_601D9B54
 * address: 0x601D9B54   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D9B54(int result)
{
  int v1; // r4

  v1 = result;
  if ( FIELD_S32(result, 1128) >= 0 )
  {
    sub_601E4F60(dword_60C8B13C);
    FIELD_U32(v1, 1128) = -1;
    return -1;
  }
  return result;
}
