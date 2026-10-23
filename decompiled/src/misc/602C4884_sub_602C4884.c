/* sub_602C4884
 * address: 0x602C4884   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_602C4884(int a1)
{
  _BYTE *result; // r0
  _DWORD *v2; // t1
  int *v3; // r2
  unsigned int v4; // r1
  int v5; // r1
  int v6; // r2
  unsigned int v7; // r1

  v2 = *(_DWORD **)(a1 + 6304);
  result = (_BYTE *)(a1 + 6304);
  v3 = (int *)v2[3];
  v4 = v2[17];
  if ( v2[2] > v4 )
    v3 += v4;
  v5 = *v3;
  FIELD_U32(v5, 20) = 1101004800;
  FIELD_U32(v5, 28) |= 2u;
  v6 = *(_DWORD *)(*(_DWORD *)result + 12);
  v7 = *(_DWORD *)(*(_DWORD *)result + 68);
  if ( *(_DWORD *)(*(_DWORD *)result + 8) > v7 )
    v6 += 4 * v7;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 0;
  result[20] = 0;
  return result;
}
