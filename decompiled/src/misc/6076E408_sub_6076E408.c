/* sub_6076E408
 * address: 0x6076E408   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076E408(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 1227);
  if ( (result & 0x40) != 0 )
    return sub_60777C78(dword_60CBFA90);
  return result;
}
