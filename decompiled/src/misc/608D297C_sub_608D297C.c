/* sub_608D297C
 * address: 0x608D297C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608D297C(_DWORD *a1, int a2, unsigned int a3)
{
  int v6; // r9
  void *v7; // r0
  int v8; // r8
  _DWORD *v9; // r0
  char v10; // r12
  unsigned int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r8
  void *v14; // r0
  unsigned int v15; // r9
  unsigned int v16; // lr
  int v17; // r3
  int v18; // r1
  unsigned int v19; // r6
  unsigned int v20; // r0
  int v21; // r2
  unsigned int v22; // r0
  unsigned int v23; // r0
  unsigned int v24; // r0
  unsigned int v25; // r2
  bool v26; // cf
  int v27; // r0

  v6 = 0;
  if ( a3 )
  {
    v7 = sub_608065A0();
    v8 = sub_608B5468((int)v7);
    v9 = sub_608065A0();
    v11 = ((unsigned int)(a1 + 3) | (1619863996 << v10)) + v9[316] * v8;
    v12 = a1[2];
    v13 = v12 - v11;
    if ( v12 < v11 )
      v13 = 0;
    if ( v13 >= a3 )
      v13 = a3;
    if ( v13 )
    {
      v14 = sub_608065A0();
      v15 = sub_608B5468((int)v14);
      v16 = *((_DWORD *)sub_608065A0() + 316);
      v17 = 0;
      v18 = v16 * v15;
      do
      {
        v19 = a1[2];
        v20 = a1[7] + a1[5] + a1[8] * v15;
        v21 = v20 - v19;
        if ( v20 < v19 )
          v21 = a1[7] + a1[5] + a1[8] * v15;
        *(_WORD *)(*a1 + 2 * v21) = *(_WORD *)(a2 + 2 * v17);
        v22 = a1[8] + 1;
        a1[8] = v22;
        if ( v22 >= v16 )
        {
          a1[8] = 0;
          v23 = a1[7] + 1;
          a1[7] = v23;
          if ( v23 >= v15 )
          {
            a1[7] = 0;
            v24 = a1[2];
            v25 = a1[5] + v18;
            v26 = v25 >= v24;
            v27 = v25 - v24;
            if ( !v26 )
              v27 = a1[5] + v18;
            a1[5] = v27;
            while ( (unsigned int)(a1 + 3) | ((((unsigned int)(a1 + 3) | (1619864188 << v16)) + v18) << v16) )
              ;
          }
        }
        ++v17;
      }
      while ( v17 != v13 );
      return v13;
    }
  }
  return v6;
}
