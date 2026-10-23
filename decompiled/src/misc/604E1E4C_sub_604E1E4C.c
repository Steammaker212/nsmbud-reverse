/* sub_604E1E4C
 * address: 0x604E1E4C   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E1E4C(int a1)
{
  unsigned int v2; // r5
  unsigned int v3; // r0
  int result; // r0
  int v5; // r7
  int v6; // r0
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r0
  float v12; // s0
  int v13; // r0
  char v14; // r1
  unsigned int v15; // r0
  int v16; // r3
  float v17; // r1
  int v18; // r2
  int v19; // [sp+4h] [bp-2Ch] BYREF
  float v20; // [sp+8h] [bp-28h]
  float v21; // [sp+Ch] [bp-24h]

  if ( dword_60CC6484 )
    FIELD_F32(a1, 5748) = FIELD_F32(dword_60CC6484, 124) + -48.0;
  v3 = FIELD_U32(a1, 5724);
  v2 = v3;
  if ( v3 >= 4 )
    v3 = 0;
  result = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
  if ( result )
  {
    v5 = dword_60C99DD4;
    v6 = sub_6079D894(result);
    if ( v6 )
      v2 = FIELD_S8(v6, 84);
    v7 = 0;
    if ( v2 < 6 )
      v7 = v2;
    v8 = v5 + 72 * v7;
    v9 = FIELD_U32(v8, 300);
    v10 = FIELD_U32(v8, 304);
    if ( v10 > 5 )
      v10 = 0;
    v11 = 5 * v10;
    FIELD_U32(a1, 5700) = dword_60B02FDC[2 * v11 + v9];
    FIELD_U32(a1, 5704) = dword_60B030CC[2 * v11 + v9];
    FIELD_U32(a1, 5708) = 0;
    sub_6075DE94(dword_60CBF354, &v19, v2);
    *(float *)&v19 = *(float *)&v19 + FIELD_F32(a1, 5700);
    v12 = v20 + FIELD_F32(a1, 5704);
    v20 = v12;
    v21 = v21 + FIELD_F32(a1, 5708);
    if ( FIELD_U32(a1, 5712) == 27 )
    {
      if ( v12 >= FIELD_F32(a1, 5748) )
      {
        v20 = v12 + -64.0;
        *(_BYTE *)(FIELD_U32(a1, 3656) + 64) |= 1u;
        *(_BYTE *)(FIELD_U32(a1, 3660) + 64) |= 1u;
        *(_BYTE *)(FIELD_U32(a1, 3648) + 64) &= ~1u;
        v13 = FIELD_U32(a1, 3652);
        v14 = FIELD_U8(v13, 64) & 0xFE;
      }
      else
      {
        *(_BYTE *)(FIELD_U32(a1, 3656) + 64) &= ~1u;
        *(_BYTE *)(FIELD_U32(a1, 3660) + 64) &= ~1u;
        *(_BYTE *)(FIELD_U32(a1, 3648) + 64) |= 1u;
        v13 = FIELD_U32(a1, 3652);
        v14 = FIELD_U8(v13, 64) | 1;
      }
      FIELD_U8(v13, 64) = v14;
    }
    sub_60833074((float *)&v19);
    v15 = FIELD_U32(a1, 5728);
    if ( v15 >= 0xF )
      v15 = 0;
    v16 = *(_DWORD *)(a1 + 4 * v15 + 3588);
    result = v19;
    v17 = v20;
    FIELD_F32(v16, 24) = *(float *)&v19;
    FIELD_F32(v16, 28) = v17;
    FIELD_U32(v16, 32) = 0;
    FIELD_U8(v16, 64) |= 0x10u;
    if ( FIELD_U32(a1, 5728) == 5 )
    {
      v18 = FIELD_U32(a1, 3612);
      FIELD_U32(v18, 24) = result;
      FIELD_F32(v18, 28) = v17;
      FIELD_U32(v18, 32) = 0;
      result = FIELD_U8(v18, 64) | 0x10;
      FIELD_U8(v18, 64) = result;
    }
  }
  return result;
}
