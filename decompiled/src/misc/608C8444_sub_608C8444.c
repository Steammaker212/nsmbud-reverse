/* sub_608C8444
 * address: 0x608C8444   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C8444(_DWORD *result)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r7
  _DWORD *v3; // r6
  _DWORD *v4; // r0
  int v5; // r5

  v1 = result;
  v2 = (_DWORD *)result[4];
  v3 = result + 3;
  while ( v2 != v3 )
  {
    v4 = v2;
    v5 = (int)(v2 - 211);
    v2 = (_DWORD *)v2[1];
    if ( *((_BYTE *)v4 - 667) )
    {
      result = *(_DWORD **)(FIELD_U32(v5, 364) + 552);
      if ( result )
        continue;
      sub_608C7364(v5, 1);
      result = (_DWORD *)FIELD_U8(v5, 177);
      if ( FIELD_U8(v5, 177) )
        continue;
    }
    sub_608C7D68(v5, 0);
    result = sub_608C825C(v1, (_DWORD *)v5);
  }
  return result;
}
