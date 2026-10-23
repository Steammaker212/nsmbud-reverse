/* sub_606A19D8
 * address: 0x606A19D8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A19D8(int a1)
{
  int v2; // r1
  int result; // r0

  v2 = sub_60003B88(a1, *(_DWORD **)(a1 + 6832));
  result = 0;
  if ( !v2 )
  {
    result = FIELD_U8(a1, 6840);
    if ( FIELD_U8(a1, 6840) )
      return 1;
  }
  return result;
}
