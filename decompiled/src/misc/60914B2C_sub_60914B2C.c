/* sub_60914B2C
 * address: 0x60914B2C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60914B2C(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 256);
  if ( result < 0 )
  {
    dword_60CC73E4(a1);
    result = FIELD_U32(a1, 256) & 0x7FFFFFFF;
    FIELD_U32(a1, 256) = result;
  }
  return result;
}
