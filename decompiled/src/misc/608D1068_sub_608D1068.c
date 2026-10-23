/* sub_608D1068
 * address: 0x608D1068   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D1068(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int result; // r0
  char *v10; // r7
  char *v11; // r0
  int v12; // r0
  int v13; // r3
  int v14; // r0
  int v15; // r2
  int v16; // r0
  int v17; // r1
  _BYTE *v18; // r2
  char v19; // r7
  _DWORD *v20; // r4
  int v21; // t1
  int v22; // r0
  _BYTE v23[30]; // [sp+Ah] [bp-1Eh] BYREF

  result = (*(int (__fastcall **)(_DWORD *))(*a2 + 8))(a2);
  if ( result == 1 )
  {
    sub_608CDCDC((int)a2, a4, a5);
    v10 = (char *)sub_608065A0();
    v11 = (char *)sub_608065A0();
    result = ((int (__fastcall *)(_DWORD *, char *, char *, _DWORD *))loc_608CD9F8)(a2, v10 + 12, v11 + 1260, a1);
    if ( result == 1 )
    {
      v12 = (*(int (__fastcall **)(_DWORD *))(*a1 + 4))(a1);
      v13 = v12;
      if ( v12 >= 1 )
      {
        v14 = v12 * a3;
        v15 = 0;
        if ( (v13 & 1) != 0 )
        {
          v15 = 1;
          v23[0] = v14;
        }
        if ( v13 != 1 )
        {
          v16 = v15 + v14;
          v17 = v13 - v15;
          v18 = &v23[v15 + 1];
          do
          {
            v19 = v16 + 1;
            *(v18 - 1) = v16;
            v16 += 2;
            v17 -= 2;
            *v18 = v19;
            v18 += 2;
          }
          while ( v17 );
        }
      }
      sub_608CDB20((int)a2, (int)v23);
      nn__os__LockMutex(a1 + 1);
      v21 = a2[1];
      v20 = a2 + 1;
      v22 = a1[7] + 8 * a3;
      *v20 = *(_DWORD *)v22;
      FIELD_U32(v21, 4) = v22;
      *(_DWORD *)(*(_DWORD *)v22 + 4) = v20;
      *(_DWORD *)v22 = v21;
      return nn__os__UnlockMutex(a1 + 1);
    }
  }
  return result;
}
