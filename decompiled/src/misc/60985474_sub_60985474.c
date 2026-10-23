/* sub_60985474
 * address: 0x60985474   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60985474(int a1, _WORD *a2, int a3)
{
  unsigned __int16 *v3; // r3
  unsigned __int16 v4; // lr
  int v5; // t1

  if ( *a2 )
  {
    v3 = a2 + 1;
    v4 = 0;
    do
    {
      v5 = *v3++;
      ++v4;
    }
    while ( v5 );
  }
  else
  {
    v4 = 0;
  }
  return (*(int (__fastcall **)(int, _WORD *, int, _DWORD))(*(_DWORD *)a1 + 132))(a1, a2, a3, v4);
}
