/* sub_608598B0
 * address: 0x608598B0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608598B0(int result, int a2)
{
  int v3; // r1
  int v4; // r6
  int v5; // r5

  v3 = 0;
  while ( *(unsigned __int8 *)(result + v3 + 136) == *(unsigned __int8 *)(a2 + v3) )
  {
    if ( *(_BYTE *)(result + v3 + 136) )
    {
      if ( ++v3 < 24 )
        continue;
    }
    return result;
  }
  v4 = FIELD_U32(result, 20);
  v5 = result + 16;
  if ( v4 == result + 16 )
    return 0;
  while ( 1 )
  {
    result = (*(int (__fastcall **)(int, int))(*(_DWORD *)(v4 - 4) + 92))(v4 - 4, a2);
    if ( result )
      break;
    v4 = FIELD_U32(v4, 4);
    if ( v4 == v5 )
      return 0;
  }
  return result;
}
