/* sub_603FFDF4
 * address: 0x603FFDF4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FFDF4(int result, int a2)
{
  unsigned int v2; // r1
  int v3; // r2

  v2 = FIELD_U32(result, 48) + a2;
  v3 = 9999;
  if ( v2 < 0x270F )
    v3 = v2;
  FIELD_U32(result, 48) = v3;
  return result;
}
