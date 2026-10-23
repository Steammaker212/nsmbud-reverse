/* sub_60891894
 * address: 0x60891894   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60891894(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  int v9; // r0
  int v10; // r1
  float v11; // r1
  int v12; // r3
  int v13; // r4
  float v14; // r1
  int v15; // r2
  int v16; // r5
  float v17; // r1
  int v18; // r2
  int v19; // r7
  float v20; // r1
  int v21; // r2
  int v22; // r7

  v9 = sub_60891658((int)a1, (int)a2, (int)a3, (int)a4);
  v10 = v9;
  if ( *a5 <= *a4 && (*a5 < *a4 || *((_DWORD *)a5 + 1) < *((_DWORD *)a4 + 1)) )
  {
    v11 = *a4;
    v12 = *((_DWORD *)a4 + 1);
    v13 = *((_DWORD *)a5 + 1);
    *a4 = *a5;
    *((_DWORD *)a4 + 1) = v13;
    *a5 = v11;
    *((_DWORD *)a5 + 1) = v12;
    v10 = v9 + 1;
    if ( *a4 <= *a3 && (*a4 < *a3 || *((_DWORD *)a4 + 1) < *((_DWORD *)a3 + 1)) )
    {
      v14 = *a3;
      v15 = *((_DWORD *)a3 + 1);
      v16 = *((_DWORD *)a4 + 1);
      *a3 = *a4;
      *((_DWORD *)a3 + 1) = v16;
      *a4 = v14;
      *((_DWORD *)a4 + 1) = v15;
      v10 = v9 + 2;
      if ( *a3 <= *a2 && (*a3 < *a2 || *((_DWORD *)a3 + 1) < *((_DWORD *)a2 + 1)) )
      {
        v17 = *a2;
        v18 = *((_DWORD *)a2 + 1);
        v19 = *((_DWORD *)a3 + 1);
        *a2 = *a3;
        *((_DWORD *)a2 + 1) = v19;
        *a3 = v17;
        *((_DWORD *)a3 + 1) = v18;
        v10 = v9 + 3;
        if ( *a2 <= *a1 && (*a2 < *a1 || *((_DWORD *)a2 + 1) < *((_DWORD *)a1 + 1)) )
        {
          v20 = *a1;
          v21 = *((_DWORD *)a1 + 1);
          v22 = *((_DWORD *)a2 + 1);
          *a1 = *a2;
          *((_DWORD *)a1 + 1) = v22;
          *a2 = v20;
          *((_DWORD *)a2 + 1) = v21;
          return v9 + 4;
        }
      }
    }
  }
  return v10;
}
