/* sub_60947FE0
 * address: 0x60947FE0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60947FE0(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  int result; // r0

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 24))(a1);
  if ( result == 1 )
  {
    if ( a2 != a3 && a4 != a5 )
    {
      do
      {
        (*(void (__fastcall **)(_DWORD *, int))(*a2 + 8))(a2, a4);
        a2 = (_DWORD *)a2[2];
        if ( a2 == a3 )
          break;
        a4 = FIELD_U32(a4, 8);
      }
      while ( a4 != a5 );
    }
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1);
  }
  return result;
}
