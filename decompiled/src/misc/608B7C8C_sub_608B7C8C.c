/* sub_608B7C8C
 * address: 0x608B7C8C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B7C8C(_DWORD *a1, int *a2)
{
  unsigned int v4; // r0
  int v5; // r6
  bool v6; // zf
  int result; // r0
  int v8; // r0
  int v9; // r6
  unsigned int v10; // r7
  int v11; // r0

  a1[57] = a2[2];
  v4 = a2[1];
  if ( v4 )
  {
    v5 = 0;
    do
    {
      v6 = v4 >> 1 == 0;
      v5 += v4 & 1;
      v4 >>= 1;
    }
    while ( !v6 );
  }
  else
  {
    v5 = 0;
  }
  if ( v5 > (*(int (__fastcall **)(int))(*(_DWORD *)*a2 + 16))(*a2) )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v8 = a2[1];
  if ( v8 )
  {
    v9 = 0;
    do
    {
      v10 = v8;
      if ( (v8 & 1) != 0 )
      {
        v11 = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*a2 + 8))(*a2, a1);
        if ( v9 <= 15 )
        {
          a1[v9 + 61] = v11;
          sub_608BAD18();
        }
      }
      v8 = v10 >> 1;
      ++v9;
    }
    while ( v10 >> 1 );
  }
  result = *a2;
  a1[58] = *a2;
  return result;
}
