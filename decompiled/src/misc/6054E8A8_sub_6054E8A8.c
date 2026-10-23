/* sub_6054E8A8
 * address: 0x6054E8A8   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054E8A8(int a1)
{
  float v2; // s0
  float v3; // s2
  float v4; // s0
  float v5; // s2
  float v6; // s2
  unsigned int v7; // r2
  int result; // r0
  unsigned int v9; // r2
  int v10; // r2
  unsigned int v11; // r5
  int v12; // [sp+4h] [bp-1Ch] BYREF
  float v13; // [sp+8h] [bp-18h]
  int v14; // [sp+Ch] [bp-14h]

  if ( FIELD_U8(a1, 3823) )
  {
    if ( FIELD_U8(a1, 3817) )
    {
      v12 = FIELD_U32(a1, 3720);
      v13 = FIELD_F32(a1, 3724);
      v2 = v13;
      v14 = FIELD_U32(a1, 3728);
    }
    else
    {
      v3 = FIELD_F32(a1, 3744);
      v4 = FIELD_F32(a1, 3760);
      if ( v3 <= 0.0 )
      {
        v5 = 0.0;
      }
      else
      {
        v4 = v3 + v4;
        FIELD_F32(a1, 3760) = v4;
        v5 = v3 - FIELD_F32(a1, 3752);
      }
      FIELD_F32(a1, 3744) = v5;
      v12 = FIELD_U32(a1, 3720);
      v6 = FIELD_F32(a1, 3724) + v4;
      v13 = v6;
      v2 = FIELD_F32(a1, 3788);
      if ( v6 < v2 )
        v2 = v6;
      else
        v13 = FIELD_F32(a1, 3788);
    }
    v13 = v2 + (float)FIELD_S32(dword_60C9A1E8, 231384);
  }
  else
  {
    v12 = FIELD_U32(a1, 3720);
    v13 = FIELD_F32(a1, 3724);
    v14 = FIELD_U32(a1, 3728);
  }
  sub_60833074((float *)&v12);
  v7 = FIELD_U32(a1, 3792);
  result = LODWORD(v13);
  if ( v7 <= 7 )
    goto LABEL_13;
  v11 = 0;
  if ( (v7 & 0xFFFFFFF8) == 8 )
    goto LABEL_20;
  v11 = 1;
  if ( v7 - 16 < 5 )
    goto LABEL_20;
  if ( v7 - 21 <= 4 )
  {
LABEL_13:
    v9 = FIELD_U32(a1, 3812);
    if ( v9 == 8 )
      return result;
    if ( v9 >= 8 )
      v9 = 0;
    v10 = *(_DWORD *)(a1 + 4 * v9 + 3648);
    goto LABEL_17;
  }
  if ( v7 == 26 )
  {
    v10 = FIELD_U32(a1, 3652);
LABEL_17:
    FIELD_U32(v10, 24) = v12;
    FIELD_U32(v10, 28) = result;
    FIELD_U32(v10, 32) = 0;
LABEL_23:
    result = FIELD_U8(v10, 64) | 0x10;
    FIELD_U8(v10, 64) = result;
    return result;
  }
  v11 = 2;
  if ( v7 - 27 < 5 )
  {
LABEL_20:
    if ( v11 >= 8 )
      v11 = 0;
    v10 = *(_DWORD *)(a1 + 4 * v11 + 3680);
    FIELD_U32(v10, 24) = v12;
    FIELD_U32(v10, 28) = result;
    FIELD_U32(v10, 32) = 0;
    goto LABEL_23;
  }
  if ( v7 - 32 <= 4 )
  {
    v11 = dword_60B03B90[v7 - 32];
    goto LABEL_20;
  }
  return result;
}
