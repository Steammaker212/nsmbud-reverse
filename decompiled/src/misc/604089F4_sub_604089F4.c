/* sub_604089F4
 * address: 0x604089F4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604089F4(int a1, unsigned int a2)
{
  char v3; // r5
  int result; // r0

  v3 = a2;
  if ( sub_603FD91C((_DWORD *)(a1 + 16), a2) )
  {
    FIELD_U8(a1, 6558) = v3;
    sub_60408A3C(a1);
    result = 1;
  }
  else
  {
    result = 0;
  }
  FIELD_U8(a1, 6559) = result;
  return result;
}
