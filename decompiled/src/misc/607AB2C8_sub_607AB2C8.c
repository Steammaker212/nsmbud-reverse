/* sub_607AB2C8
 * address: 0x607AB2C8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607AB2C8(int a1)
{
  int v1; // r4
  _DWORD *result; // r0
  int v3; // r5

  v1 = a1;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) == 1 )
  {
    while ( 1 )
    {
      result = (_DWORD *)sub_6079D894(v1);
      v3 = (int)result;
      if ( !result )
        break;
      result[3012] = FIELD_U32(v1, 12048);
      v1 = (int)result;
      if ( !(*(int (__fastcall **)(_DWORD *))(*result + 1064))(result) )
        return (_DWORD *)SE_PLY_THROW_ICEBALL_ref(v3, 1);
    }
  }
  else
  {
    v3 = v1;
    return (_DWORD *)SE_PLY_THROW_ICEBALL_ref(v3, 1);
  }
  return result;
}
