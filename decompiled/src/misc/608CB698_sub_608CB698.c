/* sub_608CB698
 * address: 0x608CB698   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CB698(int result, int a2, _WORD *a3)
{
  FIELD_U8(result, 113) = a2;
  if ( a2 )
  {
    FIELD_U16(result, 120) = a3[3];
    FIELD_U16(result, 118) = a3[2];
    FIELD_U16(result, 116) = a3[1];
    FIELD_U16(result, 114) = *a3;
    FIELD_U16(result, 122) = a3[4];
  }
  return result;
}
