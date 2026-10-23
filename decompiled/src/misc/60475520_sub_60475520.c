/* sub_60475520
 * address: 0x60475520   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60475520(int a1, int a2, _DWORD *a3, int *a4)
{
  int result; // r0
  int v9; // r6
  int (__fastcall ***v10)(_DWORD); // r0

  result = *a4;
  if ( *a4 >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = sub_60474F40(a1, a3);
      a3 += 2;
      *(_DWORD *)(a2 + 4 * v9++) = v10[3];
      result = *a4;
    }
    while ( v9 < *a4 );
  }
  return result;
}
