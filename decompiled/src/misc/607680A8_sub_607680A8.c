/* sub_607680A8
 * address: 0x607680A8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607680A8(int a1)
{
  unsigned int result; // r0

  result = FIELD_U32(a1, 9728);
  if ( result > 0x18 || ((1 << result) & 0x1A00000) == 0 )
    return sub_60777C18(dword_60CBFA90);
  return result;
}
