/* sub_607A0990
 * address: 0x607A0990   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A0990(int a1)
{
  int v2; // r4

  v2 = 1;
  if ( (FIELD_U8(a1, 1238) & 0x10) == 0 && !sub_60766708(a1) && !FIELD_U32(a1, 9572) && !FIELD_U32(a1, 9576) )
    return FIELD_U8(a1, 1205) & 1;
  return v2;
}
