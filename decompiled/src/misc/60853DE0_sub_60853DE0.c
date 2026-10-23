/* sub_60853DE0
 * address: 0x60853DE0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60853DE0(int a1, int a2)
{
  int result; // r0

  result = 0;
  if ( FIELD_U16(a1, 10) > a2 )
    return FIELD_U32(a1, 16) + *(_DWORD *)(FIELD_U32(a1, 16) + 4 * a2);
  return result;
}
