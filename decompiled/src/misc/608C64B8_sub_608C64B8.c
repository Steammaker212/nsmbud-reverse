/* sub_608C64B8
 * address: 0x608C64B8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C64B8(int a1)
{
  int v1; // r2
  int v2; // r1
  int result; // r0

  v1 = FIELD_U32(a1, 8);
  v2 = a1 + 4;
  result = -1;
  while ( v1 != v2 )
  {
    v1 = FIELD_U32(v1, 4);
    ++result;
  }
  return result;
}
