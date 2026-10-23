/* sub_608B3598
 * address: 0x608B3598   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B3598(int *a1, int a2, int a3, int a4, int a5)
{
  int v9; // r6
  int v10; // r9
  int (__fastcall *v12)(int, int); // r10
  int v13; // r0
  int v14; // r0
  int v15; // r7
  _DWORD v16[11]; // [sp+Ch] [bp-2Ch] BYREF

  v9 = (*(int (__fastcall **)(int *))(*a1 + 16))(a1);
  if ( !v9 )
  {
    v9 = 0;
    v16[0] = -1;
    v16[1] = -1;
    v16[2] = 0;
    if ( sub_608AA048(a1[1], a2, (int)v16) == 1 )
    {
      v10 = v16[0];
      if ( (unsigned int)(v16[0] + 1) >= 2 )
      {
        v12 = *(int (__fastcall **)(int, int))(*(_DWORD *)a3 + 8);
        v13 = (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a3 + 16))(a3, v16[0], a5);
        v14 = v12(a3, v13);
        v15 = v14;
        if ( v14 )
        {
          if ( sub_608B3984(a1, a2, v14, v10, 0, a4) == v10 )
          {
            nullsub_100(v15, v10);
            (*(void (__fastcall **)(int *, int, int))(*a1 + 8))(a1, a2, v15);
            return v15;
          }
        }
      }
    }
  }
  return v9;
}
