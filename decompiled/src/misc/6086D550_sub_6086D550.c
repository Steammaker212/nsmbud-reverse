/* sub_6086D550
 * address: 0x6086D550   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086D550(int a1, _DWORD *a2, _DWORD *a3, int a4, unsigned int a5)
{
  int v5; // r10
  unsigned int v6; // r1
  int result; // r0
  int v8; // r3
  int v9; // r11
  int v10; // r0
  unsigned __int16 v11; // r0
  int v12; // r7
  int v13; // r4
  int v14; // r5
  int v15; // r9
  int v16; // r8
  int v17; // r6
  unsigned __int16 v18; // r1
  int v19; // r7
  int v20; // r4
  int v21; // r0
  int v22; // r8
  int v23; // r5
  unsigned int v24; // r6
  int v25; // r5
  int v26; // r0
  int v27; // [sp+8h] [bp-38h]
  int v28; // [sp+Ch] [bp-34h]

  v5 = a1;
  v6 = sub_6086D43C(a1, a2);
  result = 0;
  if ( v6 <= a5 )
  {
    v8 = 1;
    v9 = 0;
    FIELD_U32(v5, 52) = a3;
    FIELD_U32(v5, 56) = a4;
    v10 = FIELD_U32(v5, 28);
    if ( v10 && (FIELD_U8(v10, 4) & 1) == 0 )
    {
      v9 = sub_6087D7B0(v10, a2);
      v8 = sub_6087D994(FIELD_U32(v5, 28), a2, a3, a4, v9);
    }
    v11 = FIELD_U16(v5, 24);
    if ( v11 )
    {
      v12 = 0;
      v13 = 0;
      v27 = v5;
      do
      {
        v14 = FIELD_U32(v5, 32) + v12;
        if ( (FIELD_U8(v14, 4) & 1) == 0 )
        {
          v28 = v8;
          v15 = sub_608754DC(FIELD_U32(v5, 32) + v12, a2);
          v16 = sub_6087552C(v14, a2);
          v17 = (v9 + v15 - 1) & -v15;
          v5 = v27;
          v9 = v17 + v16;
          v8 = v28 & sub_60875774(v14, a2, a3, v17 + a4, v16);
          v11 = FIELD_U16(v27, 24);
        }
        ++v13;
        v12 += 56;
      }
      while ( v13 < v11 );
    }
    v18 = FIELD_U16(v5, 26);
    if ( v18 )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        v21 = FIELD_U32(v5, 36) + v19;
        if ( (FIELD_U8(v21, 4) & 1) == 0 )
        {
          v22 = v8;
          v23 = sub_6086C280(v21, a2);
          v24 = sub_6086C2D8((unsigned __int8 *)(FIELD_U32(v5, 36) + v19), a2);
          v25 = (v9 + v23 - 1) & -v23;
          v26 = sub_6086C584((int *)(FIELD_U32(v5, 36) + v19), a2, a3, v25 + a4, v24);
          v18 = FIELD_U16(v5, 26);
          v9 = v25 + v24;
          v8 = v22 & v26;
        }
        ++v20;
        v19 += 72;
      }
      while ( v20 < v18 );
    }
    result = 0;
    if ( (v8 & 1) != 0 )
    {
      FIELD_U16(v5, 14) |= 1u;
      return 1;
    }
  }
  return result;
}
