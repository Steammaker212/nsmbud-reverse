/* sub_608D9838
 * address: 0x608D9838   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608D9838(_DWORD *a1, _BYTE *a2, _BYTE *a3, size_t a4)
{
  unsigned int v4; // r12
  int v5; // r4
  int v6; // r3
  unsigned __int8 *v7; // r0
  char v8; // t1
  unsigned int v9; // r12
  unsigned int v10; // r3
  bool v11; // cc

  if ( (*a1 & 0x100) == 0
    || (v4 = *a1,
        v5 = (v4 & 1)
           + ((v4 >> 1) & 1)
           + ((v4 >> 2) & 1)
           + ((v4 >> 3) & 1)
           + ((v4 >> 4) & 1)
           + ((v4 >> 5) & 1)
           + ((v4 >> 6) & 1)
           + ((v4 >> 7) & 1),
        v5 == -1) )
  {
    *a2 = 127;
    if ( a4 )
      memset(a3, 0, a4);
  }
  else
  {
    v6 = a1[v5 + 1];
    v8 = *((_BYTE *)a1 + v6);
    v7 = (unsigned __int8 *)a1 + v6;
    *a2 = v8;
    v9 = v7[1];
    v10 = v9;
    if ( v9 >= 3 )
      v10 = 3;
    v11 = v10 != 0;
    if ( v10 )
    {
      *a3 = v7[2];
      v11 = v10 > 1;
    }
    if ( v11 )
    {
      a3[1] = v7[3];
      if ( v9 >= 3 )
        a3[2] = v7[4];
    }
  }
}
