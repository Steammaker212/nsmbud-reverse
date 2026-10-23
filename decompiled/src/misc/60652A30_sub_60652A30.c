/* sub_60652A30
 * address: 0x60652A30   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60652A30(int a1)
{
  int v1; // r1
  unsigned int v2; // r2
  char *v3; // r2
  int v4; // t1
  int v5; // r2
  _DWORD *result; // r0

  v1 = (FIELD_U32(a1, 20) >> 13) & 0x38;
  v2 = FIELD_U16(a1, 26) & 3;
  if ( v2 >= 2 )
    v2 = 2;
  v3 = (char *)&unk_60B07648 + 40 * v2;
  v4 = *(_DWORD *)&v3[v1];
  v5 = *(_DWORD *)&v3[v1 + 4];
  FIELD_U32(a1, 120) = v4;
  FIELD_U32(a1, 124) = v5;
  FIELD_U32(a1, 128) = 0;
  result = (_DWORD *)(a1 + 132);
  *result = v4;
  result[1] = v5;
  result[2] = 0;
  return result;
}
