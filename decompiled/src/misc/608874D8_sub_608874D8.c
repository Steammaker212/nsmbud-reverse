/* sub_608874D8
 * address: 0x608874D8   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608874D8(int result, void (__fastcall *a2)(__int64 *, int, int), int a3)
{
  _DWORD *v5; // r10
  int i; // r4
  int v7; // r5
  int v8; // r1
  int v9; // r1
  int j; // r8
  int v11; // r4
  int v12; // r6
  _DWORD *v13; // r5
  __int64 v14; // [sp+0h] [bp-30h] BYREF

  v5 = (_DWORD *)result;
  if ( a2 )
  {
    result = FIELD_U32(result, 84);
    if ( result >= 1 )
    {
      for ( i = 0; i < result; ++i )
      {
        v7 = *(_DWORD *)(*(_DWORD *)(v5[22] + 40) + 8 * i);
        v8 = FIELD_U32(v7, 136);
        v14 = -1;
        a2(&v14, v8, a3);
        FIELD_U64(v7, 144) = v14;
        result = v5[21];
      }
    }
    v9 = v5[10];
    if ( v9 >= 1 )
    {
      result = v5[12];
      for ( j = 0; j < v9; ++j )
      {
        if ( *(int *)(result + 32 * j + 4) >= 1 )
        {
          v11 = 0;
          v12 = 0;
          do
          {
            v13 = (_DWORD *)(*(_DWORD *)(result + 32 * j + 16) + v11);
            v13[10] = -1;
            v13 += 10;
            v13[5] = -1;
            v13[3] = -1;
            v13[1] = -1;
            v13[4] = -1;
            v13[2] = -1;
            sub_60887620(v5, v13, *(_DWORD *)(*(v13 - 7) + 2544), *(_DWORD *)(*(v13 - 7) + 2548));
            sub_60887620(v5, v13 + 2, *(_DWORD *)(*(v13 - 7) + 2576), *(_DWORD *)(*(v13 - 7) + 2580));
            sub_60887620(v5, v13 + 4, *(_DWORD *)(*(v13 - 7) + 2608), *(_DWORD *)(*(v13 - 7) + 2612));
            result = v5[12];
            ++v12;
            v11 += 720;
          }
          while ( v12 < *(_DWORD *)(result + 32 * j + 4) );
          v9 = v5[10];
        }
      }
    }
  }
  return result;
}
