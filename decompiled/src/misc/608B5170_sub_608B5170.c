/* sub_608B5170
 * address: 0x608B5170   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B5170(int a1, int a2)
{
  int v3; // r7
  int v4; // r0
  int AudioRendererWorkBufferSize; // r6
  int v6; // r5
  int v7; // r0
  int v8; // r5
  int v9; // r2
  int v10; // r8
  int v11; // r6
  int v12; // r0
  int v13; // r0
  _DWORD v15[5]; // [sp+8h] [bp-50h] BYREF
  int v16; // [sp+1Ch] [bp-3Ch]
  int v17; // [sp+20h] [bp-38h]
  int v18; // [sp+24h] [bp-34h]
  char v19; // [sp+28h] [bp-30h]
  int v20; // [sp+34h] [bp-24h]
  int v21; // [sp+38h] [bp-20h]

  v3 = FIELD_U8(a2, 27);
  nn__audio__InitializeAudioRendererParameter(v15);
  v15[0] = *(_DWORD *)a2;
  v15[1] = 5 * v15[0] / 0x3E8u;
  v15[2] = FIELD_U32(a2, 20);
  v15[3] = FIELD_U32(a2, 16);
  v15[4] = FIELD_U32(a2, 8);
  v16 = 1;
  v17 = FIELD_U32(a2, 4) + 4;
  v18 = 0;
  v19 = FIELD_U8(a2, 33);
  if ( FIELD_U8(a2, 24) )
    v18 = 3;
  if ( !FIELD_U8(a2, 27) )
    v17 = 0;
  v4 = 2;
  if ( FIELD_U8(a2, 28) )
  {
    v16 = 2;
    v4 = 3;
  }
  if ( FIELD_U8(a2, 29) )
    v16 = v4;
  if ( FIELD_U8(a2, 38) )
  {
    v20 = 1;
    v21 = 1;
  }
  AudioRendererWorkBufferSize = nn__audio__GetAudioRendererWorkBufferSize(v15);
  v6 = nn__audio__GetAudioRendererConfigWorkBufferSize(v15) + AudioRendererWorkBufferSize;
  v7 = v3;
  if ( v3 )
    v7 = 1;
  v8 = v6 + sub_608D0A1C(v7);
  if ( FIELD_U8(a2, 30) )
  {
    v9 = v3;
    v10 = FIELD_U8(a2, 26);
    v11 = 6;
    if ( v3 )
      v9 = 1;
    v12 = 1;
    if ( FIELD_U8(a2, 27) )
      v12 = 4;
    if ( FIELD_U8(a2, 31) )
      v11 = 2;
    v8 += sub_608D1590(v12, v11, 1, v11, v9);
    if ( v10 )
    {
      v13 = v3;
      if ( v3 )
        v13 = 1;
      v8 += sub_608D1590(1, v11, 1, v11, v13);
    }
    if ( FIELD_U8(a2, 25) )
      v8 += sub_608D1590(3, 2, 1, v11, v3 != 0);
  }
  return v8;
}
