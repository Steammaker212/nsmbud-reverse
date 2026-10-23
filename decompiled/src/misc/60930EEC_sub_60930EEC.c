/* sub_60930EEC
 * address: 0x60930EEC   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60930EEC(int result, int a2)
{
  if ( FIELD_U8(result, 140) != a2 )
  {
    FIELD_U8(result, 140) = a2;
    return sub_6092DC18(result);
  }
  return result;
}
