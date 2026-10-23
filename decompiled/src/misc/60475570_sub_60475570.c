/* sub_60475570
 * address: 0x60475570   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60475570(int a1, int a2, _DWORD *a3, int a4, int *a5)
{
  int (__fastcall ***v7)(_DWORD); // r6
  int result; // r0
  int v9; // r7

  v7 = sub_60474F40(a1, a3);
  result = *a5;
  if ( *a5 >= 1 )
  {
    v9 = 0;
    do
    {
      *(_DWORD *)(a2 + 4 * v9++) = sub_60479C64(v7, a4);
      a4 += 8;
      result = *a5;
    }
    while ( v9 < *a5 );
  }
  return result;
}
