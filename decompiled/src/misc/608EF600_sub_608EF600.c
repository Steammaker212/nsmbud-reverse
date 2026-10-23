/* sub_608EF600
 * address: 0x608EF600   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_608EF600(_BYTE *result, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r4
  _BYTE *v5; // r0
  int v6; // t1
  int v7; // r5

  v3 = a2;
  if ( dword_60CCEEA4 <= a2 )
    v3 = 0;
  v4 = *(_DWORD *)&result[4 * v3 + 68];
  if ( v4 )
  {
    v5 = &result[a2];
    v6 = (unsigned __int8)v5[84];
    result = v5 + 84;
    if ( !v6 )
    {
      *result = 1;
      if ( a3 )
        v7 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v4 + 24))(v4, a3, 4);
      else
        v7 = 0;
      result = (_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4);
      if ( v7 )
        return (_BYTE *)(*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 28))(v4, v7);
    }
  }
  return result;
}
