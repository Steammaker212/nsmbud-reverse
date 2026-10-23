/* sub_60881DA8
 * address: 0x60881DA8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60881DA8(int result, const char *a2, char a3)
{
  int i; // r6

  for ( i = FIELD_U32(result, 320); i; i = FIELD_U32(i, 120) )
  {
    result = strcmp((const char *)(FIELD_U32(i, 136) + 16), a2);
    if ( !result )
      FIELD_U8(i, 2) = a3;
  }
  return result;
}
