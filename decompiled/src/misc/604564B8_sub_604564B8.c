/* sub_604564B8
 * address: 0x604564B8   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604564B8(int result, char a2, char a3)
{
  FIELD_U8(result, 223) = a2;
  FIELD_U8(result, 224) = a3;
  return result;
}
