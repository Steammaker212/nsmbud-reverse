/* sub_6066CED4
 * address: 0x6066CED4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066CED4(int a1)
{
  int result; // r0
  signed int v2; // [sp+4h] [bp-Ch] BYREF

  result = sub_606D4384(&v2, FIELD_U8(a1, 6104));
  if ( result )
    return sub_606D47D8(result, v2);
  return result;
}
