/* sub_601F2C4C
 * address: 0x601F2C4C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F2C4C(int result)
{
  unsigned int v1; // r1

  v1 = FIELD_U32(result, 716);
  if ( v1 != -1 )
    return sub_601E4F60(dword_60C8B13C, v1);
  return result;
}
