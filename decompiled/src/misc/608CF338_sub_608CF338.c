/* sub_608CF338
 * address: 0x608CF338   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF338(_DWORD *a1, int a2)
{
  _DWORD *v4; // r0
  bool v5; // zf
  int v6; // r5
  int v7; // r1
  int v8; // r2
  int v9; // r5

  nullsub_101();
  v4 = (_DWORD *)a1[10];
  v5 = a2 == 0;
  if ( a2 )
    v5 = v4 == 0;
  if ( v5 )
  {
    if ( !v4 )
    {
      v6 = 0;
      goto LABEL_9;
    }
  }
  else
  {
    while ( *v4 != a2 )
    {
      v4 = (_DWORD *)v4[3];
      if ( !v4 )
      {
        v6 = 0;
        goto LABEL_9;
      }
    }
  }
  v7 = v4[1];
  v8 = a1[8];
  v9 = a1[9];
  a1[8] = v7;
  a1[9] = v4[2];
  a1[10] = v4[3];
  sub_608CF51C(a1, v7, v8 - v7);
  sub_608CF51C(a1, v9, a1[9] - v9);
  v6 = 1;
LABEL_9:
  nullsub_102(a1);
  return v6;
}
