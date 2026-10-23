/* sub_608B14B4
 * address: 0x608B14B4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B14B4(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // lr
  _DWORD *v5; // r1
  _DWORD *v6; // r0
  int v7; // t1

  v4 = 0;
  v5 = (_DWORD *)(a1[4] + a2);
  if ( (unsigned int)(v5 + 4) <= a1[3] )
  {
    v4 = a1[4];
    a1[4] = ((unsigned int)v5 + 4111) & 0xFFFFF000;
    *v5 = v5;
    v5[1] = v5;
    v5[2] = a3;
    v5[3] = a4;
    v7 = a1[8];
    v6 = a1 + 8;
    *v5 = v7;
    v5[1] = v6;
    *(_DWORD *)(*v6 + 4) = v5;
    *v6 = v5;
  }
  return v4;
}
