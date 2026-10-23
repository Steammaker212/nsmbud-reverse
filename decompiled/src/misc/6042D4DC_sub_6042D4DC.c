/* sub_6042D4DC
 * address: 0x6042D4DC   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042D4DC(unsigned __int8 *a1, int a2)
{
  int v4; // r0
  unsigned int v5; // r2
  _DWORD *result; // r0
  _DWORD *v7; // r1
  _DWORD *v8; // r1
  _DWORD *v9; // r1
  _DWORD *v10; // r1
  int v11; // [sp+4h] [bp-14h] BYREF

  v4 = *(_DWORD *)a1;
  v5 = FIELD_U32(v4, 608);
  result = *(_DWORD **)(v4 + 612);
  v11 = a1[704];
  v7 = result;
  if ( v5 > 7 )
    v7 = result + 21;
  if ( *v7 != -1 )
  {
    sub_6091B890(v7, a2, 1, &v11);
    v5 = *(_DWORD *)(*(_DWORD *)a1 + 608);
    result = *(_DWORD **)(*(_DWORD *)a1 + 612);
  }
  v8 = result;
  if ( v5 > 8 )
    v8 = result + 24;
  if ( *v8 != -1 )
  {
    sub_6091B890(v8, a2, 3, a1 + 708);
    v5 = *(_DWORD *)(*(_DWORD *)a1 + 608);
    result = *(_DWORD **)(*(_DWORD *)a1 + 612);
  }
  v9 = result;
  if ( v5 > 9 )
    v9 = result + 27;
  if ( *v9 != -1 )
  {
    sub_6091B890(v9, a2, 4, a1 + 720);
    v5 = *(_DWORD *)(*(_DWORD *)a1 + 608);
    result = *(_DWORD **)(*(_DWORD *)a1 + 612);
  }
  v10 = result;
  if ( v5 > 0xA )
    v10 = result + 30;
  if ( *v10 != -1 )
  {
    sub_6091B890(v10, a2, 4, a1 + 736);
    v5 = *(_DWORD *)(*(_DWORD *)a1 + 608);
    result = *(_DWORD **)(*(_DWORD *)a1 + 612);
  }
  if ( v5 > 0xB )
    result += 33;
  if ( *result != -1 )
    return (_DWORD *)sub_6091B890(result, a2, 4, a1 + 752);
  return result;
}
