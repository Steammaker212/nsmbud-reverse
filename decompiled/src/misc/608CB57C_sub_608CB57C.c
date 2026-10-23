/* sub_608CB57C
 * address: 0x608CB57C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CB57C(int a1)
{
  int result; // r0
  int *v3; // r0

  FIELD_U32(a1, 4) = 1;
  result = FIELD_U32(a1, 196);
  if ( result )
  {
    v3 = (int *)sub_608065A0();
    sub_608C9074(v3 + 179, FIELD_U32(a1, 196));
    FIELD_U32(a1, 196) = 0;
    return 0;
  }
  return result;
}
