/* sub_608B1F9C
 * address: 0x608B1F9C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608B1F9C(int a1, int *a2)
{
  int v2; // r2
  _DWORD *result; // r0
  int v4; // t1
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r3

  v2 = FIELD_U32(a1, 4);
  v4 = *(_DWORD *)(a1 + v2);
  result = (_DWORD *)(a1 + v2);
  v5 = -1;
  v6 = -1;
  if ( v4 )
    v6 = result[1];
  *a2 = v6;
  if ( *result >= 2u )
    v5 = result[2];
  a2[1] = v5;
  v7 = -1;
  v8 = -1;
  if ( *result >= 3u )
    v8 = result[3];
  a2[2] = v8;
  if ( *result >= 4u )
    v7 = result[4];
  a2[3] = v7;
  return result;
}
