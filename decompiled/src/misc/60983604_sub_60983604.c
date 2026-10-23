/* sub_60983604
 * address: 0x60983604   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60983604(int result, int (__fastcall *a2)(_DWORD *, int, int), int a3)
{
  _DWORD *v3; // r7
  _DWORD *i; // r6
  int v7; // r0

  v3 = *(_DWORD **)(result + 32);
  for ( i = (_DWORD *)(result + 28); v3 != i; v3 = (_DWORD *)v3[1] )
  {
    result = v3[4] & v3[5];
    if ( result == -1 )
    {
      v7 = (*(int (__fastcall **)(_DWORD *))(v3[2] + 32))(v3 + 2);
      result = a2(v3 + 4, v7, a3);
    }
  }
  return result;
}
