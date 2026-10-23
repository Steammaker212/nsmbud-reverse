/* sub_608CF2A8
 * address: 0x608CF2A8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF2A8(_DWORD *a1, int a2)
{
  int v4; // r6
  int v5; // r9
  _DWORD *v6; // r5
  _DWORD *v7; // r7

  nullsub_101();
  v4 = a1[8];
  v5 = 0;
  v6 = (_DWORD *)((v4 + 3) & 0xFFFFFFFC);
  v7 = v6 + 4;
  if ( (unsigned int)(v6 + 4) <= a1[9] )
  {
    sub_608CF550(a1, a1[8], (char *)v7 - v4);
    a1[8] = v7;
    if ( v6 )
    {
      v5 = 1;
      *v6 = 0;
      v6[1] = 0;
      v6[2] = 0;
      v6[3] = 0;
      *v6 = a2;
      v6[1] = v4;
      v6[2] = a1[9];
      v6[3] = a1[10];
      a1[10] = v6;
    }
  }
  nullsub_102(a1);
  return v5;
}
