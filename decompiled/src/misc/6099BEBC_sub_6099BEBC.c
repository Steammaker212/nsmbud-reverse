/* sub_6099BEBC
 * address: 0x6099BEBC   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099BEBC(int a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  int v8; // r5

  v8 = 0;
  if ( a3 >= 0x40 )
  {
    if ( FIELD_U8(a1, 784) )
    {
      sub_608CF768(a2);
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 48))(a2, a4, 1);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a2) == 1 )
      {
        if ( !a5 )
          return a2;
        v8 = a2;
        if ( a6 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 56))(a2);
          return a2;
        }
      }
    }
  }
  return v8;
}
