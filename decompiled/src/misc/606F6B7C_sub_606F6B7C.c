/* sub_606F6B7C
 * address: 0x606F6B7C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F6B7C(int result)
{
  __int16 v1; // r1

  FIELD_U32(result, 148) = 0;
  FIELD_U32(result, 6116) = 0;
  if ( FIELD_U8(result, 6516) )
    v1 = 10 * FIELD_U8(result, 6516) - 10;
  else
    v1 = 60;
  FIELD_U16(result, 6148) = v1;
  return result;
}
