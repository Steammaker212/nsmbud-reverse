/* sub_605EB12C
 * address: 0x605EB12C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605EB12C(int a1)
{
  int v2; // r0
  unsigned int result; // r0

  v2 = FIELD_U32(a1, 176);
  if ( (v2 & 0x20) != 0 )
  {
    sub_605EB15C(a1, FIELD_U32(a1, 12));
    v2 = FIELD_U32(a1, 176);
  }
  result = v2 & 0xFFFFFFDF;
  FIELD_U32(a1, 176) = result;
  return result;
}
