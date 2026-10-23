/* TerrainEffects_update_helper_7067D8
 * address: 0x607067D8   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TerrainEffects_update_helper_7067D8(int a1)
{
  int v2; // r2
  int result; // r0
  int v4; // r7
  int v5; // r9
  int v6; // r5
  void *v7; // r12
  float *v8; // lr
  void *v9; // r8
  void *v10; // r3
  void *v11; // r2
  float v12; // s2
  float v13; // s2
  float v14; // s0
  _DWORD *v15; // r6
  int v16; // r8
  _DWORD *v17; // r0
  int v18; // r0
  _DWORD *v19; // r1
  int v20; // r0
  float v21; // s0
  void *v22; // [sp+0h] [bp-70h]
  void *v23; // [sp+4h] [bp-6Ch]
  void *v24; // [sp+8h] [bp-68h]
  float *v25; // [sp+Ch] [bp-64h]
  void *v26; // [sp+10h] [bp-60h]

  v2 = FIELD_U8(a1, 232);
  result = TileMgr_instance + 0x2828;
  if ( v2 == 4 )
    result = TileMgr_instance + 0x2D80;
  v4 = FIELD_U32(result, 4);
  if ( v4 != result )
  {
    v5 = result - 20;
    v6 = v4 - 20;
    v7 = &unk_60B0978C;
    v8 = flt_60B0989C;
    v9 = &unk_60B09814;
    v10 = &unk_60B09924;
    v11 = &unk_60B099AC;
    do
    {
      result = FIELD_U8(v6, 16);
      if ( FIELD_U8(v6, 16) )
      {
        result = FIELD_U32(a1, 244);
        if ( result < FIELD_U32(a1, 256) )
        {
          result = FIELD_U8(a1, 232);
          if ( result != 3 )
          {
            v12 = FIELD_F32(a1, 36);
            if ( *(float *)v6 > v12 && *(float *)v6 < (float)(v12 + FIELD_F32(a1, 144)) )
            {
              v13 = FIELD_F32(a1, 40);
              v14 = FIELD_F32(v6, 4);
              if ( v14 > (float)(v13 + -16.0) && v14 < (float)(v13 + 16.0) )
              {
                v22 = v11;
                v23 = v10;
                v24 = v9;
                v25 = v8;
                v26 = v7;
                v15 = 0;
                v16 = 0;
                v17 = *(_DWORD **)(a1 + 248);
                if ( v17 )
                {
                  v15 = *(_DWORD **)(a1 + 248);
                  FIELD_U32(a1, 248) = *v17;
                }
                memset(v15, 0, 1356);
                sub_608DE510(a1 + 236, v15 + 337);
                ++FIELD_U32(a1, 244);
                v15[301] = (int)(float)((float)(*(float *)v6 - FIELD_F32(a1, 36)) * 0.5);
                v15[327] = FIELD_U32(v6, 8);
                *v15 = 1065353216;
                *((_BYTE *)v15 + 1312) = 1;
                v18 = 1208;
                v15[329] = v6;
                do
                {
                  v19 = &v15[v16++];
                  *((_BYTE *)v15 + v18++) = 0;
                  v19[1] = 0;
                  v19[201] = 0;
                  v19[101] = 1065353216;
                }
                while ( v16 != 100 );
                v20 = v15[327];
                v8 = v25;
                v7 = v26;
                v21 = v25[v20];
                v15[330] = *((_DWORD *)v26 + v20);
                v9 = v24;
                v15[331] = *((_DWORD *)v24 + v20);
                v15[332] = (int)(float)((float)(v21 * 2147500000.0) / 180.0);
                v10 = v23;
                v15[333] = *((_DWORD *)v23 + v20);
                v11 = v22;
                v15[334] = *((_DWORD *)v22 + v20);
                v15[335] = dword_60B09A34[v20];
                result = dword_60B09ABC[v20];
                v15[336] = result;
                FIELD_U8(v6, 16) = 0;
              }
            }
          }
        }
      }
      v4 = FIELD_U32(v4, 4);
      v6 = v4 - 20;
    }
    while ( v4 - 20 != v5 );
  }
  return result;
}
