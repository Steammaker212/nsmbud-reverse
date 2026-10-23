/* sub_6042DD5C
 * address: 0x6042DD5C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042DD5C(int *a1, int a2, int a3)
{
  int v6; // r0
  unsigned int v7; // r2
  _DWORD *result; // r0
  _DWORD *v9; // r1

  v6 = *a1;
  v7 = FIELD_U32(v6, 608);
  result = *(_DWORD **)(v6 + 612);
  v9 = result;
  if ( v7 > 0x16 )
    v9 = result + 66;
  if ( *v9 != -1 )
  {
    sub_6091B890(v9, a2, 4, a3);
    v7 = *(_DWORD *)(*a1 + 608);
    result = *(_DWORD **)(*a1 + 612);
  }
  if ( v7 > 0x17 )
    result += 69;
  if ( *result != -1 )
    return (_DWORD *)sub_6091B890(result, a2, 4, a3 + 16);
  return result;
}
