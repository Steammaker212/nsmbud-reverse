/* sub_606A6AAC
 * address: 0x606A6AAC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A6AAC(int a1, _DWORD *a2)
{
  char v2; // r2
  int result; // r0

  v2 = FIELD_U8(a1, 23);
  result = 0;
  if ( (v2 & 0x10) != 0 )
  {
    *a2 = 5;
    return 1;
  }
  return result;
}
