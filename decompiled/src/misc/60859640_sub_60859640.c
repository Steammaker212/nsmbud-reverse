/* sub_60859640
 * address: 0x60859640   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60859640(int a1, int a2)
{
  int v4; // r6
  int v5; // r7

  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
  if ( v4 )
  {
    v5 = 0;
    do
    {
      if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 44))(a1, v5) )
        (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 64))(a2);
      ++v5;
    }
    while ( v4 != v5 );
  }
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 56))(a2, a1);
}
