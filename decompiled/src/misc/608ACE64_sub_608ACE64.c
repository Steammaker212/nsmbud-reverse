/* sub_608ACE64
 * address: 0x608ACE64   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ACE64(_DWORD *a1, int a2)
{
  int v3; // r0
  _DWORD *v4; // r0
  int v5; // r1
  int result; // r0

  v3 = 0;
  if ( a2 > 0 )
    v3 = a2;
  if ( a1[9] < a2 )
    v3 = a1[9];
  a1[8] = v3;
  while ( 1 )
  {
    v4 = (_DWORD *)a1[1];
    v5 = 0;
    if ( v4 != a1 )
    {
      v5 = 0;
      do
      {
        v4 = (_DWORD *)v4[1];
        ++v5;
      }
      while ( v4 != a1 );
    }
    result = a1[8];
    if ( v5 <= result )
      break;
    (*(void (__fastcall **)(int))(*(_DWORD *)(a1[3] - 412) + 16))(a1[3] - 412);
  }
  return result;
}
