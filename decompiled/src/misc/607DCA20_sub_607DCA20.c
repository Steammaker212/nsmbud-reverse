/* sub_607DCA20
 * address: 0x607DCA20   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DCA20(int a1)
{
  int v2; // r2
  int v3; // r3
  _DWORD *v4; // r0
  int v5; // r4
  int v6; // r0
  int result; // r0

  if ( !FIELD_U32(a1, 24) )
    nn__hid__VibrationPlayer__Stop(*(nn__hid__VibrationPlayer **)(a1 + 464));
  v2 = 0;
  v3 = 0;
  FIELD_U32(a1, 16) = 6;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 64) = 0;
  FIELD_U32(a1, 76) = 1065353216;
  FIELD_U32(a1, 80) = 1065353216;
  FIELD_U32(a1, 84) = 1065353216;
  FIELD_U32(a1, 88) = 1065353216;
  FIELD_U32(a1, 92) = 1065353216;
  FIELD_U8(a1, 460) = 0;
  do
  {
    v4 = (_DWORD *)(a1 + v2);
    v2 += 32;
    v5 = a1 + v3;
    v3 += 8;
    v4[28] = 1065353216;
    v4[26] = 1065353216;
    v4[27] = 1065353216;
    v4[25] = 1065353216;
    FIELD_U32(v5, 388) = 0;
    v4[32] = 1065353216;
    v4[30] = 1065353216;
    v4[31] = 1065353216;
    v4[29] = 1065353216;
    FIELD_U32(v5, 392) = 0;
  }
  while ( v2 != 288 );
  v6 = FIELD_U32(a1, 464);
  if ( v6 )
    FIELD_U32(v6, 172) = 1065353216;
  result = FIELD_U32(a1, 72);
  if ( result )
    return sub_607DABF0(result, 1.0);
  return result;
}
