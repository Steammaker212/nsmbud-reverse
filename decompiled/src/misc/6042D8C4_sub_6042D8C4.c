/* sub_6042D8C4
 * address: 0x6042D8C4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042D8C4(_DWORD *a1, int a2)
{
  int v4; // r0
  unsigned int v5; // r2
  _DWORD *result; // r0
  _DWORD *v7; // r1
  int v8; // [sp+4h] [bp-14h] BYREF

  v4 = *a1;
  v5 = FIELD_U32(v4, 608);
  result = *(_DWORD **)(v4 + 612);
  v7 = result;
  if ( v5 > 0x11 )
    v7 = result + 51;
  if ( *v7 != -1 )
  {
    sub_6091B890(v7, a2, 4, a1 + 336);
    v5 = *(_DWORD *)(*a1 + 608);
    result = *(_DWORD **)(*a1 + 612);
  }
  if ( v5 > 0xF )
    result += 45;
  v8 = a1[340];
  if ( *result != -1 )
    return (_DWORD *)sub_6091B890(result, a2, 1, &v8);
  return result;
}
