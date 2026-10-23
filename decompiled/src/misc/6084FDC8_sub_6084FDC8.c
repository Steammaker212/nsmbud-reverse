/* sub_6084FDC8
 * address: 0x6084FDC8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084FDC8(int a1, int a2, int *a3, int a4)
{
  _WORD *v4; // lr
  int v5; // r12
  int v6; // r4
  unsigned int v7; // r4

  if ( (a2 & 0xFFFFFFFE) == 0xE )
  {
    v4 = (_WORD *)a3[1];
    v5 = 4;
    v6 = (unsigned __int16)*(v4 - 1);
    if ( v6 == 15 )
    {
      v7 = (unsigned int)(v4 + 2);
    }
    else
    {
      if ( v6 != 14 )
        return v5;
      v7 = (unsigned int)v4 + (unsigned __int16)v4[2] + 6;
    }
    if ( v7 > a3[2] )
      return v5;
    v5 = 0;
    if ( *v4 || v4[1] )
      return v5;
    return sub_6084FEB8(a1);
  }
  else
  {
    if ( a4 )
      JUMPOUT(0x6084C89C);
    return sub_6084C7E0(a1, a2, a3);
  }
}
