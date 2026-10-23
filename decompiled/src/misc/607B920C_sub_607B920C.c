/* sub_607B920C
 * address: 0x607B920C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B920C(int a1)
{
  if ( (FIELD_U8(a1, 1223) & 2) != 0 && (FIELD_U32(a1, 12088) || FIELD_U32(a1, 12092))
    || FIELD_U32(a1, 12084)
    || (FIELD_U8(a1, 6902) & 4) != 0 )
  {
    return 0;
  }
  else
  {
    return (FIELD_U8(a1, 1225) >> 2) & 1;
  }
}
