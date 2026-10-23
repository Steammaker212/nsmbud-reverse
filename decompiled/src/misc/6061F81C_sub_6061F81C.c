/* sub_6061F81C
 * address: 0x6061F81C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061F81C(int result)
{
  int v1; // r1

  if ( FIELD_U32(result, 6312) )
    v1 = FIELD_U32(result, 6676);
  else
    LOWORD(v1) = 30;
  FIELD_U16(result, 6276) = v1;
  return result;
}
