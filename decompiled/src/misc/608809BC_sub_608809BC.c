/* sub_608809BC
 * address: 0x608809BC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608809BC(int a1)
{
  _DWORD *v1; // r1
  _BOOL4 result; // r0
  int v3; // r2
  int v4; // r2
  int v5; // r1

  v1 = *(_DWORD **)(a1 + 348);
  result = 0;
  v3 = v1[146];
  if ( v3 )
    result = FIELD_U32(v3, 260) != -1 || FIELD_U32(v3, 264) != -1;
  v4 = v1[147];
  if ( v4 )
  {
    if ( FIELD_U32(v4, 260) == -1 )
    {
      if ( FIELD_U32(v4, 264) != -1 )
        result = 1;
    }
    else
    {
      result = 1;
    }
  }
  v5 = v1[148];
  if ( v5 )
  {
    if ( FIELD_U32(v5, 260) == -1 )
    {
      if ( FIELD_U32(v5, 264) != -1 )
        return 1;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
