/* sub_608DDB18
 * address: 0x608DDB18   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DDB18(int a1, unsigned int a2)
{
  int result; // r0
  int v4; // r4
  void *v5; // r0

  result = 0;
  if ( a2 <= 2 )
  {
    if ( FIELD_U8(a1, 192) )
    {
      v4 = dword_60B3A3BC[a2];
      v5 = sub_608065A0();
      sub_608B62CC((int)v5, v4, 0);
      return 1;
    }
  }
  return result;
}
