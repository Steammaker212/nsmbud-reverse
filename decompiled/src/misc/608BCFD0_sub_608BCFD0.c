/* sub_608BCFD0
 * address: 0x608BCFD0   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BCFD0(int a1, char *a2, signed int a3)
{
  unsigned int *v5; // r1
  int result; // r0
  char *v7; // r1
  unsigned int v8; // r2

  v5 = (unsigned int *)sub_608BCA30(FIELD_U32(a1, 4));
  result = 0;
  if ( v5 && (int)*v5 > a3 )
  {
    v7 = sub_608BCA70(v5, a3);
    *a2 = *v7;
    a2[1] = v7[1];
    a2[2] = v7[2];
    a2[3] = v7[3];
    v8 = (unsigned __int8)v7[*((_DWORD *)v7 + 2)];
    result = 1;
    a2[4] = v8;
    if ( v8 >= 2 )
      v8 = 2;
    if ( v8 )
    {
      a2[5] = v7[*((_DWORD *)v7 + 2) + 4];
      if ( v8 > 1 )
        a2[6] = v7[*((_DWORD *)v7 + 2) + 5];
    }
  }
  return result;
}
