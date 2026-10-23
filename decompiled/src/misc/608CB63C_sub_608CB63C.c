/* sub_608CB63C
 * address: 0x608CB63C   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CB63C(int a1, int a2)
{
  int v2; // r2
  int result; // r0

  result = FIELD_U32(a1, 196);
  if ( result )
  {
    FIELD_U32(a2, 28) = 1;
    FIELD_U32(a2, 32) = 0;
    v2 = FIELD_U32(result, 188);
    if ( v2 )
      FIELD_U32(v2, 32) = a2;
    else
      FIELD_U32(result, 184) = a2;
    FIELD_U32(result, 188) = a2;
  }
  return result;
}
