/* sub_6028B05C
 * address: 0x6028B05C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028B05C(int a1)
{
  int v1; // r1
  int v2; // r2
  bool v3; // zf
  bool v4; // nf
  _BOOL4 v5; // r2
  _BOOL4 v6; // r3
  int v7; // r2
  _DWORD *v8; // r3
  int v9; // r1
  _DWORD *v10; // r0
  int *v11; // r2
  unsigned int v12; // r3
  unsigned int v13; // r0
  int result; // r0

  v1 = FIELD_U32(a1, 80);
  if ( FIELD_U8(a1, 6607) )
  {
    v2 = FIELD_U32(a1, 160);
    v3 = v2 == 0;
    v4 = v2 < 0;
    v5 = v2 < 0;
    v6 = !v4 && !v3;
    if ( !v1 )
      v6 = v5;
    if ( v6 )
      v1 ^= 1u;
    FIELD_U32(a1, 160) = dword_60AF1EC0[v1];
  }
  v7 = FIELD_U8(a1, 6606);
  if ( v7 == 1 )
    FIELD_U32(a1, 160) = 0;
  v8 = &unk_60AFDF14;
  if ( !v1 )
    v8 = &unk_60AFDF28;
  v9 = v8[v7];
  v10 = *(_DWORD **)(a1 + 6300);
  v11 = (int *)v10[3];
  v12 = v10[2];
  v13 = v10[17];
  if ( v12 > v13 )
    v11 += v13;
  result = *v11;
  FIELD_U32(result, 20) = v9;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
