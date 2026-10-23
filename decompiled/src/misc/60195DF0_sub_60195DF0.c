/* sub_60195DF0
 * address: 0x60195DF0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60195DF0(int a1)
{
  int result; // r0

  sub_601981EC(a1, 0);
  result = FIELD_U32(a1, 484);
  if ( !result )
    JUMPOUT(0x60832560);
  return result;
}
