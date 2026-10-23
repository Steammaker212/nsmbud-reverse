/* sub_6091AC94
 * address: 0x6091AC94   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091AC94(int result)
{
  char v1; // r2
  char v2; // r3

  v1 = FIELD_U8(result, 279);
  v2 = v1 & 0xFE;
  if ( FIELD_U16(result, 34) == 5 )
    v2 = v1 | 1;
  FIELD_U8(result, 279) = v2;
  return result;
}
