/* sub_60920FDC
 * address: 0x60920FDC   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60920FDC(int *a1, int a2, char *a3)
{
  unsigned int *v6; // r5
  unsigned int v7; // r1

  if ( *(_DWORD *)a3 == -1 )
    return 0;
  v6 = (unsigned int *)(a1 + 82);
  do
    v7 = __ldrex(v6);
  while ( __strex(0x80000000, v6) );
  if ( v7 )
  {
    if ( v7 == 0x80000000 )
    {
      while ( *v6 == 0x80000000 )
        sub_609085CC();
    }
    else
    {
      sub_609210C4(a1);
    }
  }
  a1[82] = 0;
  sub_609171A8(dword_60CCFC8C, a2, *a1, a1[1], a3, a1[68]);
  return 1;
}
