/* sub_6042C76C
 * address: 0x6042C76C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042C76C(int *a1, int a2, int a3, int a4, int a5)
{
  int v9; // r0
  unsigned int v10; // r2
  _DWORD *result; // r0
  _DWORD *v12; // r1
  _DWORD *v13; // r1

  v9 = *a1;
  v10 = FIELD_U32(v9, 608);
  result = *(_DWORD **)(v9 + 612);
  v12 = result;
  if ( v10 > 1 )
    v12 = result + 3;
  if ( *v12 != -1 )
  {
    sub_6091B890(v12, a2, 12, a3);
    v10 = *(_DWORD *)(*a1 + 608);
    result = *(_DWORD **)(*a1 + 612);
  }
  v13 = result;
  if ( v10 > 2 )
    v13 = result + 6;
  if ( *v13 != -1 )
  {
    sub_6091B890(v13, a2, 16, a4);
    result = *(_DWORD **)(*a1 + 612);
  }
  if ( *result != -1 )
    return (_DWORD *)sub_6091B890(result, a2, 12, a5);
  return result;
}
