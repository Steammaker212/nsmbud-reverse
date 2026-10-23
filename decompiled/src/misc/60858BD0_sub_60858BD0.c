/* sub_60858BD0
 * address: 0x60858BD0   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60858BD0(int result, int a2, int a3)
{
  int v4; // r1
  int v5; // r6
  int v6; // r5

  v4 = 0;
  while ( *(unsigned __int8 *)(result + v4 + 136) == *(unsigned __int8 *)(a2 + v4) )
  {
    if ( *(_BYTE *)(result + v4 + 136) )
    {
      if ( ++v4 < 24 )
        continue;
    }
    return result;
  }
  if ( a3 != 1 )
    return 0;
  v5 = FIELD_U32(result, 20);
  v6 = result + 16;
  if ( v5 == result + 16 )
    return 0;
  while ( 1 )
  {
    result = (*(int (__fastcall **)(int, int))(*(_DWORD *)(v5 - 4) + 92))(v5 - 4, a2);
    if ( result )
      break;
    v5 = FIELD_U32(v5, 4);
    if ( v5 == v6 )
      return 0;
  }
  return result;
}
