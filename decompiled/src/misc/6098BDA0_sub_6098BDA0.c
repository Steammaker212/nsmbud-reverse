/* sub_6098BDA0
 * address: 0x6098BDA0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098BDA0(int result, int a2)
{
  if ( FIELD_S8(result, 121) >= a2 )
    FIELD_U8(result, 121) = a2;
  if ( !FIELD_U8(result, 122) )
    return sub_6098D918(FIELD_U32(result, 20), FIELD_U32(result, 88));
  return result;
}
