/* sub_607CC9D8
 * address: 0x607CC9D8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_607CC9D8(int a1)
{
  char v1; // r1
  void *result; // r0

  v1 = *(_BYTE *)(FIELD_U32(a1, 11368) + 196);
  result = &unk_60B0D130;
  if ( (v1 & 1) != 0 )
    return &unk_60B0D10C;
  return result;
}
