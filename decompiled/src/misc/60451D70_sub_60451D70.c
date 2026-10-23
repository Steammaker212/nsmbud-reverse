/* sub_60451D70
 * address: 0x60451D70   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60451D70(_DWORD *result, int a2, int a3)
{
  _DWORD *v3; // r4

  if ( result[57] )
  {
    result[57] = 0;
    result[58] = -1;
  }
  result[57] = a2;
  result[58] = a3;
  if ( result[29] )
  {
    v3 = result + 8;
    sub_6086A6E0(result + 8, FIELD_U32(a2, 40));
    return (_DWORD *)sub_6086A944(v3);
  }
  else if ( result[56] )
  {
    return (_DWORD *)sub_6086B060(result + 30, FIELD_U32(a2, 40));
  }
  return result;
}
