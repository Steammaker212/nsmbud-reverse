/* sub_605430EC
 * address: 0x605430EC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605430EC(int a1)
{
  int result; // r0
  bool v3; // zf
  float v4; // s0
  _DWORD *v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r12
  int v9; // lr
  int v10; // r0
  int v11; // r1
  int v12; // r0

  result = FIELD_U8(a1, 3586);
  v3 = result == 0;
  if ( result )
  {
    result = FIELD_U32(a1, 3552);
    v3 = result == 0;
  }
  if ( !v3 )
  {
    v4 = sub_60478864(result);
    v5 = *(_DWORD **)(a1 + 3552);
    v6 = FIELD_U32(a1, 3564);
    v7 = v5[24];
    v8 = v5[25];
    v9 = v5[26];
    v10 = v5[27];
    FIELD_F32(v6, 32) = v4;
    FIELD_U32(v6, 24) = v7;
    FIELD_U32(v6, 28) = v10;
    FIELD_U8(v6, 64) |= 0x10u;
    v11 = FIELD_U32(a1, 3568);
    FIELD_F32(v11, 32) = v4;
    FIELD_U32(v11, 24) = v9;
    FIELD_U32(v11, 28) = v10;
    FIELD_U8(v11, 64) |= 0x10u;
    v12 = FIELD_U32(a1, 3572);
    FIELD_F32(v12, 32) = v4;
    FIELD_U32(v12, 24) = v7;
    FIELD_U32(v12, 28) = v8;
    FIELD_U8(v12, 64) |= 0x10u;
    result = FIELD_U32(a1, 3576);
    FIELD_F32(result, 32) = v4;
    FIELD_U32(result, 24) = v9;
    FIELD_U32(result, 28) = v8;
    FIELD_U8(result, 64) |= 0x10u;
  }
  return result;
}
