/* sub_603D3910
 * address: 0x603D3910   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603D3910(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  float result; // s0

  FIELD_U32(a1, 6316) = 0;
  FIELD_U32(a1, 6328) = 0;
  FIELD_U8(a1, 6331) = 1;
  FIELD_U32(a1, 100) = -1103101952;
  sub_603D4FE8(a1, 1);
  v2 = *(_DWORD **)(a1 + 6380);
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  LODWORD(result) = (int)(float)(924580000.0 / *(float *)(*(_DWORD *)v3 + 8));
  FIELD_F32(a1, 6360) = result;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  return result;
}
