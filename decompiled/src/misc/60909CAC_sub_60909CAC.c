/* sub_60909CAC
 * address: 0x60909CAC   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60909CAC(_DWORD *a1, signed int a2, unsigned __int8 *a3, int a4)
{
  int v8; // r3
  int v9; // r7
  _DWORD *v10; // r12
  int v11; // r2
  int *v12; // r0
  int v13; // r0
  _DWORD *v14; // r2
  int v15; // r0

  if ( a2 > 32 )
    return;
  a1[63] = a2;
  qmemcpy(a1 + 93, a3, a2);
  a1[64] = -1;
  a1[65] = -1;
  if ( a2 >= 1 && a4 == 1 )
  {
    v8 = 0;
    if ( (a2 & 1) == 0 )
      goto LABEL_9;
    v9 = *a3;
    v8 = 1;
    v10 = a1 + 65;
    if ( v9 != 24 )
    {
      if ( v9 != 20 )
        goto LABEL_9;
      v10 = a1 + 64;
    }
    *v10 = 0;
LABEL_9:
    if ( a2 != 1 )
    {
      do
      {
        v11 = a3[v8];
        v12 = a1 + 65;
        if ( v11 != 24 )
        {
          if ( v11 != 20 )
            goto LABEL_14;
          v12 = a1 + 64;
        }
        *v12 = v8;
LABEL_14:
        v13 = a3[v8 + 1];
        if ( v13 == 20 )
        {
          v14 = a1 + 64;
        }
        else
        {
          v14 = a1 + 65;
          if ( v13 != 24 )
            goto LABEL_19;
        }
        *v14 = v8 + 1;
LABEL_19:
        v8 += 2;
      }
      while ( a2 != v8 );
    }
  }
  a1[66] = -1;
  if ( a2 >= 1 )
  {
    v15 = 0;
    while ( a3[v15] != 15 )
    {
      if ( ++v15 >= a2 )
        return;
    }
    a1[66] = v15;
  }
}
