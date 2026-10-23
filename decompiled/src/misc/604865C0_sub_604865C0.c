/* sub_604865C0
 * address: 0x604865C0   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604865C0(int result, int a2, int a3, int a4)
{
  int v4; // r4
  int v6; // r12
  int v7; // r1
  int v8; // r6
  int v9; // r0
  int v10; // r1

  v4 = result;
  v6 = FIELD_U32(result, 20);
  v7 = v6;
  while ( v7 < a3 )
  {
    v8 = v7 + 1;
    v9 = FIELD_U32(v4, 16) + 4 * v7++;
    result = *(unsigned __int8 *)(FIELD_U32(v9, 4) + 8);
    if ( (result & 0x10) != 0 )
    {
      FIELD_U32(v4, 20) = v8;
      sub_604DE988(v4);
      v10 = *(_DWORD *)(FIELD_U32(v4, 16) + 4 * v8);
      return sub_6047EBB4(v4 + 24, v10);
    }
  }
  if ( v6 > a2 && a4 == 1 )
  {
    while ( 1 )
    {
      result = *(unsigned __int8 *)(*(_DWORD *)(FIELD_U32(v4, 16) + 4 * a2) + 8);
      if ( (result & 0x10) != 0 )
        break;
      if ( ++a2 >= v6 )
        return result;
    }
    FIELD_U32(v4, 20) = a2;
    sub_604DE988(v4);
    v10 = *(_DWORD *)(FIELD_U32(v4, 16) + 4 * a2);
    return sub_6047EBB4(v4 + 24, v10);
  }
  return result;
}
