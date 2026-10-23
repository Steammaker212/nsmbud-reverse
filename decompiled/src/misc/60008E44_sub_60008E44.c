/* sub_60008E44
 * address: 0x60008E44   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60008E44(int a1, int (__fastcall ***a2)(_DWORD))
{
  int v4; // r6
  int v5; // r7
  int i; // r0
  bool v7; // zf

  v4 = 0;
  v5 = FIELD_U32(a1, 4);
  for ( i = FIELD_U32(a1, 12); v5 != i; v5 += 4 )
  {
    if ( *(_DWORD *)v5 )
    {
      if ( !*(_BYTE *)(*(_DWORD *)v5 + 19) )
      {
        v7 = (**a2)(a2) == 0;
        i = FIELD_U32(a1, 12);
        if ( !v7 )
          ++v4;
      }
    }
  }
  return v4;
}
