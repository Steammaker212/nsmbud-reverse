/* sub_6095CD6C
 * address: 0x6095CD6C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095CD6C(int a1)
{
  _WORD *v2; // r0
  __int16 v3; // t1
  int v4; // r6
  int v5; // r5

  v3 = FIELD_U16(a1, 9748);
  v2 = (_WORD *)(a1 + 9748);
  *v2 = v3 | 0x28;
  v4 = *((_DWORD *)v2 - 2337);
  if ( v4 )
  {
    v5 = *((_DWORD *)v2 - 2336);
    do
    {
      sub_6097BD7C(v5);
      v5 += 2088;
      --v4;
    }
    while ( v4 );
  }
  return sub_6095C4A8(a1);
}
