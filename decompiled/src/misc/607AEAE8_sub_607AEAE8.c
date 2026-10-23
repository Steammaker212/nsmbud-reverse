/* sub_607AEAE8
 * address: 0x607AEAE8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AEAE8(int result)
{
  int v1; // r1
  bool v2; // zf

  v1 = FIELD_U32(result, 1320);
  v2 = v1 == 3;
  if ( v1 != 3 )
    v2 = v1 == 0;
  if ( v2 )
    FIELD_U32(result, 1208) &= ~0x1000000u;
  else
    FIELD_U32(result, 1208) |= 0x1000000u;
  return result;
}
