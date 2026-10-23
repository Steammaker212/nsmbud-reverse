/* sub_604292C8
 * address: 0x604292C8   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604292C8(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  unsigned int v7; // r4
  int v8; // r10
  int v9; // r1
  int v10; // r2
  int v11; // r7

  *a1 = off_60BFA4C4;
  a1[1] = a2;
  (*(void (__fastcall **)(int *))(dword_60C9C0B8 + 12))(&dword_60C9C0B8);
  v6 = sub_604293E8(a2, dword_60C9C0BC);
  if ( v6 >= 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( *(int *)(*(_DWORD *)(*(_DWORD *)a1[1] + 88) + 32 * v6 + 20) < 0 )
        break;
      v9 = FIELD_U32(a3, 88);
      v10 = v9 + 32 * v6;
      if ( v10 && FIELD_U8(v10, 16) == 30 )
      {
        a1[3 * v7 / 4 + 2] = 3;
        *(_DWORD *)(v9 + 32 * v6) = off_60BFA4E0[v8];
        *(_BYTE *)(v9 + 32 * v6 + 28) = 1;
        *(_DWORD *)(a1[1] + 60) = a1;
      }
      if ( v8 == 7 )
        break;
      v11 = a1[1];
      ++v8;
      (*(void (__fastcall **)(int *))(dword_60C9C080[v7 / 4 + 16] + 12))(&dword_60C9C080[v7 / 4 + 16]);
      v6 = sub_604293E8(v11, dword_60C9C080[v7 / 4 + 17]);
      v7 += 8;
    }
    while ( v6 >= 0 );
  }
  return a1;
}
