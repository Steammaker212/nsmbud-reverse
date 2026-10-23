/* sub_606B3690
 * address: 0x606B3690   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606B3690(
        _DWORD *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        float a5,
        float a6,
        float a7,
        char a8,
        char a9)
{
  unsigned int *v9; // r12
  unsigned int v10; // lr
  int v11; // r5
  int v12; // r4
  int v13; // r4
  bool v14; // vf
  int v15; // r5
  int *v16; // r5
  int v17; // r7
  int v18; // r0
  int v19; // r7

  v9 = a1 + 21608;
  v10 = a1[21608];
  v11 = a1[5];
  v12 = a1[7];
  if ( v12 < v11 )
  {
    a1[7] = v12 + 1;
    v13 = a1[6] + v12;
    v14 = __OFSUB__(v13, v11);
    v15 = v13 - v11;
    if ( v15 < 0 != v14 )
      v15 = v13;
    if ( v10 >= 0x190 )
      v10 = 0;
    *(_DWORD *)(a1[4] + 4 * v15) = &a1[53 * v10 + 408];
    v12 = a1[7];
    v10 = *v9;
  }
  *v9 = v10 + 1;
  v16 = (int *)a1[4];
  if ( v12 >= 1 )
  {
    v17 = a1[5];
    v18 = v12 + a1[6] - 1;
    v14 = __OFSUB__(v18, v17);
    v19 = v18 - v17;
    if ( v19 < 0 != v14 )
      v19 = v18;
    v16 += v19;
  }
  sub_606B2A18(*v16, a2, a3, a4, a5, a6, a7, a8, a9);
}
