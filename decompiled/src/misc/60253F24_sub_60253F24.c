/* sub_60253F24
 * address: 0x60253F24   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60253F24(int a1)
{
  int v1; // r1
  int i; // r2
  int v3; // r3
  int v4; // r4
  int v5; // r0
  _BYTE *result; // r0

  v1 = a1 + 416;
  for ( i = 0; i != 100; i += 2 )
  {
    v3 = v1 + 4 * i;
    *(_DWORD *)(v3 - 400) = 0;
    *(_BYTE *)(v1 + i) = -1;
    v4 = v1 + i;
    *(_DWORD *)(v3 - 396) = 0;
    FIELD_U8(v4, 1) = -1;
  }
  FIELD_U8(a1, 516) = 0;
  v5 = a1 + 516;
  FIELD_U8(v5, 8) = 0;
  v5 += 8;
  *(_BYTE *)(v5 - 4) = 0;
  result = (_BYTE *)(v5 - 4);
  result[7] = 0;
  result[6] = 0;
  result[5] = 0;
  result[3] = 0;
  result[2] = 0;
  result[1] = 0;
  *(result - 1) = 0;
  *(result - 2) = 0;
  *(result - 3) = 0;
  return result;
}
