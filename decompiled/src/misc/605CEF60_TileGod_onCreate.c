/* TileGod_onCreate
 * address: 0x605CEF60   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall TileGod_onCreate(int a1)
{
  unsigned int v1; // r1
  unsigned int v2; // r12
  unsigned int v3; // r1
  unsigned int v4; // r5
  int v5; // r2
  _BYTE *v6; // r8
  int v7; // r9
  int v8; // r4
  int v9; // r5
  unsigned int v10; // r6
  int v11; // r4
  int v12; // lr
  int v13; // r6
  int v14; // r4
  int v15; // r3
  unsigned int v16; // r5
  int v17; // r4
  signed int result; // r0
  __int16 v19; // r6
  unsigned int v20; // lr
  int *v21; // r7
  unsigned int v22; // r4
  int v23; // r5
  int v24; // r0
  unsigned __int16 v25; // r5
  unsigned __int16 v26; // r10
  __int16 v27; // r0
  _DWORD *v28; // [sp+4h] [bp-3Ch]
  unsigned __int16 v29; // [sp+8h] [bp-38h]
  unsigned int *v30; // [sp+Ch] [bp-34h]
  int v31; // [sp+10h] [bp-30h]
  int v32; // [sp+14h] [bp-2Ch]
  unsigned int *v33; // [sp+18h] [bp-28h]

  v1 = FIELD_U32(a1, 24);
  v2 = v1 & 0xF;
  FIELD_U32(a1, 6116) = v2;
  v3 = (v1 >> 8) & 0xF;
  FIELD_U32(a1, 6112) = v3;
  v4 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 6124) = (unsigned __int16)v4 >> 12;
  v5 = HIWORD(v4) & 0xF;
  FIELD_U32(a1, 6132) = v5;
  FIELD_U32(a1, 6128) = v4 >> 28;
  FIELD_U8(a1, 6136) = 0;
  v6 = (_BYTE *)(a1 + 6136);
  v33 = (unsigned int *)(a1 + 6112);
  if ( !v3 )
  {
    v3 = 1;
    *v33 = 1;
  }
  v30 = (unsigned int *)(a1 + 6116);
  if ( !v2 )
  {
    v2 = 1;
    *v30 = 1;
  }
  v7 = (v4 >> 8) & 0xF;
  FIELD_U32(a1, 6120) = v7;
  v8 = FIELD_U8(a1, 539);
  if ( FIELD_U8(a1, 539) )
  {
    v9 = v8 - 33;
    v10 = 1u >> (33 - v8);
    v11 = 1 << (v8 - 1);
    if ( v9 >= 0 )
    {
      v10 = 1 << v9;
      v11 = 0;
    }
    v12 = *(_DWORD *)(EventMgr__instance + 20) & v10;
    v13 = *(_DWORD *)(EventMgr__instance + 16) & v11;
  }
  else
  {
    v13 = 0;
    v12 = 0;
  }
  v14 = FIELD_U8(a1, 540);
  if ( FIELD_U8(a1, 540) )
  {
    v15 = v14 - 33;
    v16 = 1u >> (33 - v14);
    v17 = 1 << (v14 - 1);
    if ( v15 >= 0 )
    {
      v16 = 1 << v15;
      v17 = 0;
    }
    v12 |= *(_DWORD *)(EventMgr__instance + 20) & v16;
    v13 |= *(_DWORD *)(EventMgr__instance + 16) & v17;
  }
  FIELD_U32(a1, 6104) = v13;
  FIELD_U32(a1, 6108) = v12;
  if ( !(v13 | v12) )
    return 1;
  v28 = (_DWORD *)(a1 + 6128);
  if ( v7 )
  {
    SE_OBJ_KAKIKAE_B_ref();
    *v6 = 1;
  }
  else
  {
    v19 = v5 != 2;
    v20 = v3;
    v21 = (int *)(a1 + 6132);
    v29 = (unsigned int)FIELD_F32(a1, 108) & 0xFFF0;
    v22 = (unsigned int)(float)-FIELD_F32(a1, 112) & 0xFFF0;
    v23 = v5 != 2;
    v24 = 0;
    do
    {
      if ( v20 )
      {
        v31 = v23;
        v25 = v29;
        v26 = 0;
        v32 = v24;
        do
        {
          if ( v19 )
          {
            TileMgr_setTile(TileMgr_instance, v25, (unsigned __int16)v22, 0, 0);
            v5 = *v21;
            v3 = *v33;
          }
          v27 = v5;
          ++v26;
          v25 += 16;
          if ( v5 )
            v27 = 1;
          v19 ^= v27;
        }
        while ( v26 < v3 );
        v23 = v31;
        v20 = v3;
        v2 = *v30;
        v24 = v32;
      }
      else
      {
        v20 = 0;
      }
      ++v24;
      LOWORD(v22) = v22 + 16;
      if ( v5 )
      {
        v19 = v23 ^ 1;
        v23 ^= 1u;
      }
    }
    while ( (unsigned __int16)v24 < v2 );
  }
  result = 2;
  if ( !*v28 )
    return 1;
  return result;
}
