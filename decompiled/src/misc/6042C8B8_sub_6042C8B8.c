/* sub_6042C8B8
 * address: 0x6042C8B8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042C8B8(int *a1, int a2, int a3)
{
  int v3; // r0
  unsigned int v5; // r2
  _DWORD *result; // r0
  float v7; // [sp+4h] [bp-Ch] BYREF

  v3 = *a1;
  v5 = FIELD_U32(v3, 608);
  result = *(_DWORD **)(v3 + 612);
  v7 = (float)a3;
  if ( v5 > 5 )
    result += 15;
  if ( *result != -1 )
    return (_DWORD *)sub_6091B890(result, a2, 1, &v7);
  return result;
}
