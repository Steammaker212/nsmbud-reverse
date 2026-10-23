/* sub_608C527C
 * address: 0x608C527C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C527C(int a1)
{
  _DWORD *result; // r0
  bool v3; // zf
  _DWORD *v4; // [sp+4h] [bp-14h] BYREF

  FIELD_U8(a1, 24) = 0;
  do
  {
    result = sub_608C5050((_DWORD *)a1);
    v3 = result == 0;
    if ( !result )
    {
      result = (_DWORD *)FIELD_U8(a1, 24);
      v3 = result == 0;
    }
    if ( !v3 )
      break;
    nn__os__ReceiveMessageQueue(&v4, a1 + 48);
    result = v4;
  }
  while ( v4 );
  return result;
}
