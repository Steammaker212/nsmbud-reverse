/* sub_6081A048
 * address: 0x6081A048   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081A048(int a1)
{
  int result; // r0
  unsigned int v3; // r1

  result = 0;
  v3 = FIELD_U32(a1, 16);
  if ( v3 <= 0x1C )
  {
    sub_60817728(dword_60CC6B68, v3);
    ++FIELD_U32(a1, 16);
    return 1;
  }
  return result;
}
