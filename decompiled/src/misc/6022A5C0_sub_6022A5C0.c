/* sub_6022A5C0
 * address: 0x6022A5C0   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6022A5C0(int a1, _DWORD *a2)
{
  int v4; // r2
  int i; // r1
  _BOOL4 result; // r0

  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v4 = a2[1];
  for ( i = 0; *(_BYTE *)(v4 + i); i += 3 )
  {
    if ( !*(_BYTE *)(v4 + i + 1) )
    {
      ++i;
      break;
    }
    if ( !*(_BYTE *)(v4 + i + 2) )
    {
      i += 2;
      break;
    }
    if ( i + 2 >= 0x80000 )
      return 0;
  }
  result = 0;
  if ( i >= 10 )
    return sub_6018506C((_DWORD *)(a1 + 52), a2) != -1;
  return result;
}
