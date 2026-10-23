/* sub_60543508
 * address: 0x60543508   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60543508(int result)
{
  _DWORD *v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r12
  int v5; // lr
  int v6; // r1
  int v7; // r2
  int v8; // r1
  int v9; // r1
  int v10; // r2
  char v11; // r1

  if ( FIELD_U8(result, 3582) )
  {
    v1 = *(_DWORD **)(result + 3552);
    if ( v1 )
    {
      v2 = FIELD_U32(result, 3560);
      v3 = v1[24];
      v4 = v1[25];
      v5 = v1[26];
      v6 = v1[27];
      FIELD_U32(v2, 24) = v3;
      FIELD_U32(v2, 28) = v6;
      FIELD_U32(v2, 32) = 0;
      FIELD_U8(v2, 64) |= 0x10u;
      v7 = FIELD_U32(result, 3564);
      FIELD_U32(v7, 24) = v5;
      FIELD_U32(v7, 28) = v6;
      FIELD_U32(v7, 32) = 0;
      FIELD_U8(v7, 64) |= 0x10u;
      v8 = FIELD_U32(result, 3568);
      FIELD_U32(v8, 24) = v3;
      FIELD_U32(v8, 28) = v4;
      FIELD_U32(v8, 32) = 0;
      FIELD_U8(v8, 64) |= 0x10u;
      v9 = FIELD_U32(result, 3572);
      FIELD_U32(v9, 24) = v5;
      FIELD_U32(v9, 28) = v4;
      FIELD_U32(v9, 32) = 0;
      FIELD_U8(v9, 64) |= 0x10u;
    }
    FIELD_U8(result, 3580) = 1;
    if ( FIELD_U8(result, 3581) )
    {
      v10 = FIELD_U32(result, 3576);
      v11 = v10 - 26;
      FIELD_U32(result, 3576) = v10 - 26;
      if ( v10 <= 25 )
      {
        v11 = 0;
        FIELD_U32(result, 3576) = 0;
        FIELD_U8(result, 3581) = 0;
        if ( FIELD_U8(result, 3582) )
          FIELD_U8(result, 3580) = 0;
        FIELD_U8(result, 3582) = 0;
      }
      *(_BYTE *)(FIELD_U32(result, 3556) + 65) = v11;
    }
    if ( FIELD_U8(result, 3584) || !FIELD_U8(result, 3583) )
      return sub_60473B58((_DWORD *)(result + 4), 0xEu, 0);
  }
  return result;
}
