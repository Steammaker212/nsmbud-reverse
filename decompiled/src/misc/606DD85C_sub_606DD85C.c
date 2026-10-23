/* sub_606DD85C
 * address: 0x606DD85C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DD85C(int result)
{
  int v1; // r3

  FIELD_U32(result, 88) = 0;
  v1 = HIBYTE(FIELD_U32(result, 20));
  if ( v1 )
    LOWORD(v1) = 16 * v1;
  FIELD_U16(result, 6788) = v1;
  return result;
}
