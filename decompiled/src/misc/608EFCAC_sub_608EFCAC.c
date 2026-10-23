/* sub_608EFCAC
 * address: 0x608EFCAC   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608EFCAC(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r5
  int *result; // r0
  int v6; // r5
  int **v7; // r4

  v2 = a1[11];
  if ( v2 )
  {
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v2 + 36))(v2, 0);
    v3 = a1[11];
    if ( v3 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
    a1[11] = 0;
  }
  v4 = a1[39];
  if ( v4 )
  {
    if ( sub_60907F94(*(_DWORD *)(a1[10] + 32) + 4) == 1 )
    {
      sub_608F0BE8(a1, v4);
      sead__CriticalSection__unlock(*(_DWORD *)(a1[10] + 32) + 4);
    }
    a1[39] = 0;
  }
  result = &dword_60CCEEA4;
  v6 = dword_60CCEEA4;
  if ( dword_60CCEEA4 >= 1 )
  {
    v7 = (int **)(a1 + 31);
    do
    {
      result = *v7;
      if ( *v7 )
      {
        result = (int *)(*(int (__fastcall **)(int *))(*result + 16))(result);
        *v7 = 0;
      }
      ++v7;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
