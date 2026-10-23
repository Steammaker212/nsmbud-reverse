/* sub_608C83E4
 * address: 0x608C83E4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C83E4(_DWORD *result)
{
  _DWORD *v1; // r8
  _DWORD *v2; // r7
  _DWORD *v3; // r6
  _DWORD *v4; // r4

  v1 = result;
  v2 = (_DWORD *)result[4];
  v3 = result + 3;
  if ( v2 != result + 3 )
  {
    do
    {
      v4 = (_DWORD *)v2[1];
      sub_608C7364((int)(v2 - 211), 1);
      result = (_DWORD *)*((unsigned __int8 *)v2 - 667);
      if ( !*((_BYTE *)v2 - 667) )
      {
        sub_608C7D68((int)(v2 - 211), 0);
        result = sub_608C825C(v1, v2 - 211);
      }
      v2 = v4;
    }
    while ( v4 != v3 );
  }
  return result;
}
