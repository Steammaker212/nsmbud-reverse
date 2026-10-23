/* sub_608C65AC
 * address: 0x608C65AC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608C65AC(char **a1, char *a2, char *a3, int a4, int a5)
{
  char *v5; // lr
  unsigned int v6; // r3
  signed int v7; // r12
  char *v8; // r5
  unsigned int v9; // r7
  signed int v10; // r4
  char *v11; // r6
  char *v12; // r7

  v5 = (char *)((unsigned int)&a2[a5 - 1] & -a5);
  v6 = (a4 + a5 - 1) & -a5;
  v7 = (&a3[(int)a2] - v5) / v6;
  if ( v7 >= 1 )
  {
    v8 = *a1;
    v9 = ((&a3[(int)a2] - v5) / v6) & 3;
    v10 = 0;
    if ( (v7 & 3) != 0 )
    {
      v11 = (char *)((unsigned int)&a2[a5 - 1] & -a5);
      do
      {
        --v9;
        ++v10;
        *(_DWORD *)v11 = v8;
        v5 = &v11[v6];
        *a1 = v11;
        v8 = v11;
        v11 += v6;
      }
      while ( v9 );
    }
    if ( (unsigned int)(v7 - 1) >= 3 )
    {
      do
      {
        v10 += 4;
        *(_DWORD *)v5 = v8;
        *a1 = v5;
        *(_DWORD *)&v5[v6] = v5;
        v12 = &v5[v6 + v6];
        *a1 = &v5[v6];
        *(_DWORD *)v12 = &v5[v6];
        v8 = &v12[v6];
        *a1 = v12;
        *(_DWORD *)&v12[v6] = v12;
        v5 = &v12[v6 + v6];
        *a1 = &v12[v6];
      }
      while ( v10 < v7 );
    }
  }
  a1[1] = a2;
  a1[2] = a3;
  return v7;
}
