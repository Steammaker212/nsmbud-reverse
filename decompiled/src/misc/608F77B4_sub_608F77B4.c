/* sub_608F77B4
 * address: 0x608F77B4   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F77B4(_BYTE *a1, int a2, int a3)
{
  int v6; // r6
  int v7; // r8
  int v8; // r0
  int v9; // r7
  unsigned int v10; // r0
  unsigned int v11; // r1
  int v12; // r2
  _DWORD *v13; // r1

  v6 = 0;
  if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 68))(a1) == 1 )
  {
    v6 = 0;
    v7 = 0;
    if ( (a1[120] & 1) != 0 )
    {
      v7 = (int)(a1 + 84);
      sead__CriticalSection__lock((int)(a1 + 84));
    }
    v8 = *(_DWORD *)(a2 - 4);
    v9 = v8 - 1;
    if ( (v8 & 1) == 0 )
      v9 = a2 - 16;
    v10 = (a3 + 3) & 0xFFFFFFFC;
    v11 = FIELD_U32(v9, 12);
    if ( v11 >= v10 )
    {
      if ( v11 != v10 )
      {
        v12 = v11 - v10;
        if ( v11 - v10 >= 0x10 )
        {
          FIELD_U32(v9, 12) = v10;
          v13 = (_DWORD *)(v10 + v9 + FIELD_U16(v9, 10));
          v13[4] = 0;
          v13 += 4;
          v13[1] = 0;
          v13[2] = 0;
          v13[3] = 0;
          v13[3] = v12 - 16;
          sub_608F7394((int)a1, (unsigned int)v13);
        }
      }
      v6 = v9 + FIELD_U16(v9, 10) + 16;
    }
    if ( v7 )
      sead__CriticalSection__unlock(v7);
  }
  return v6;
}
