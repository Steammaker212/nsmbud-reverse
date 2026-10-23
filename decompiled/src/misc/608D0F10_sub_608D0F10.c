/* sub_608D0F10
 * address: 0x608D0F10   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D0F10(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *v9; // r5
  int result; // r0
  void *v11; // r0
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

  v9 = sub_608065A0();
  result = v9[315];
  if ( result != 32000 )
  {
LABEL_4:
    if ( result != 48000 )
      return result;
    result = sub_608D9E88(a2);
    if ( result != 1 )
      return result;
    goto LABEL_6;
  }
  if ( sub_608D9E88(a2) )
  {
    result = v9[315];
    goto LABEL_4;
  }
LABEL_6:
  (*(void (__fastcall **)(_DWORD *, int, int))(*a2 + 44))(a2, a4, a5);
  v11 = sub_608065A0();
  result = (*(int (__fastcall **)(_DWORD *, int, _DWORD *))(*a2 + 12))(a2, (int)v11 + 12, a1);
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
    (*(void (__fastcall **)(_DWORD *, _BYTE *, _BYTE *))(*a2 + 16))(a2, v23, v23);
    nn__os__LockMutex(a1 + 1);
    v21 = a2[1];
    v20 = a2 + 1;
    v22 = a1[6] + 8 * a3;
    *v20 = *(_DWORD *)v22;
    FIELD_U32(v21, 4) = v22;
    *(_DWORD *)(*(_DWORD *)v22 + 4) = v20;
    *(_DWORD *)v22 = v21;
    return nn__os__UnlockMutex(a1 + 1);
  }
  return result;
}
