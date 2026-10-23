/* sub_603D5C90
 * address: 0x603D5C90   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D5C90(int result)
{
  int v1; // r2

  v1 = -25165824;
  if ( FIELD_U32(result, 6284) == 1 )
    v1 = 25165824;
  FIELD_U32(result, 164) += v1;
  return result;
}
