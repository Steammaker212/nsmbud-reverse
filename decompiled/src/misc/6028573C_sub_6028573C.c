/* sub_6028573C
 * address: 0x6028573C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6028573C(int *a1, int a2, signed int a3, int a4)
{
  int v4; // r0

  if ( a3 >= 0 )
  {
    v4 = *a1;
    if ( v4 == 2 )
    {
      sub_600228BC(0.0, 24.0, dword_60C7F52C, a2, a3, a4);
    }
    else if ( v4 == 1 )
    {
      sub_60022760(0.0, 24.0, dword_60C7F52C, a2, a3, a4);
    }
  }
}
