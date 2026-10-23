/* sub_603C4CB0
 * address: 0x603C4CB0   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603C4CB0(int a1)
{
  unsigned __int8 *v2; // r5
  float v3; // s0
  float v4; // s2
  signed int v5; // r6
  unsigned int v6; // r7
  signed int v7; // r0
  int v8; // r1
  int v9; // r0
  float v10; // s6
  float v11; // s8
  signed int v12; // r0
  unsigned int v13; // r0
  unsigned int v14; // r1
  int v15; // r0
  int v16; // r1
  float v17; // s10
  float v18; // s6
  float v19; // s0
  float v20; // s4
  float v21; // s2
  float v22; // s6
  float v23; // s10
  unsigned int v24; // r0
  int v25; // r0
  float v26; // s10
  float result; // s0
  _BYTE v28[12]; // [sp+4h] [bp-54h] BYREF
  float v29; // [sp+10h] [bp-48h]
  float v30; // [sp+20h] [bp-38h]

  v2 = (unsigned __int8 *)(a1 + 27030);
  if ( FIELD_U8(a1, 27030) )
  {
    v3 = FIELD_F32(a1, 108);
    v4 = FIELD_F32(a1, 112);
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = 0;
      if ( (unsigned int)v5 < 0x20 )
        v7 = v5;
      v8 = a1 + 304 * v7;
      v9 = a1 + 28 * v7;
      v10 = FIELD_F32(v9, 14964);
      v11 = FIELD_F32(v9, 14968);
      FIELD_F32(v8, 16004) = v10 - v3;
      FIELD_F32(v8, 16008) = v11 - v4;
      v12 = *v2;
      if ( v5 > v12 - 3 )
      {
        v13 = 0;
        v14 = v5 - 1;
        if ( v6 < 3 )
          v13 = v6;
        ++v6;
        if ( v14 >= 0x20 )
          v14 = 0;
        v15 = a1 + 304 * v13;
        v16 = a1 + 28 * v14;
        v17 = (float)((float)(v10 + FIELD_F32(v16, 14964)) * 0.5) - v3;
        v18 = (float)((float)(v11 + FIELD_F32(v16, 14968)) * 0.5) - v4;
        FIELD_F32(v15, 26036) = v17;
        FIELD_F32(v15, 26040) = v18;
        v12 = *v2;
      }
      ++v5;
    }
    while ( v5 < v12 );
  }
  (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 14956) + 108))(
    **(_DWORD **)(a1 + 14956),
    FIELD_U8(a1, 27033),
    v28);
  v19 = FIELD_F32(a1, 108);
  v20 = v29;
  v21 = FIELD_F32(a1, 112);
  v22 = v30;
  v23 = v30 - v21;
  FIELD_F32(a1, 25732) = v29 - v19;
  FIELD_F32(a1, 25736) = v23;
  v24 = *v2 - 1;
  if ( v24 >= 0x20 )
    v24 = 0;
  v25 = a1 + 28 * v24;
  v26 = FIELD_F32(v25, 14968);
  result = (float)((float)(v20 + FIELD_F32(v25, 14964)) * 0.5) - v19;
  FIELD_F32(a1, 26644) = result;
  FIELD_F32(a1, 26648) = (float)((float)(v22 + v26) * 0.5) - v21;
  return result;
}
