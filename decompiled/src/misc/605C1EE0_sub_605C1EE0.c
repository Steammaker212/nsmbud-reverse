/* sub_605C1EE0
 * address: 0x605C1EE0   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C1EE0(int a1)
{
  int result; // r0
  int v3; // r7
  int v4; // r5
  int v5; // r9
  float v6; // s2
  float v7; // s2
  float v8; // s0
  _DWORD *v9; // r0
  _DWORD *v10; // r6
  int v11; // r8
  int v12; // r1
  _DWORD *v13; // r2
  int v14; // r0
  float v15; // s2

  result = TileMgr_instance;
  v3 = FIELD_U32(TileMgr_instance, 13020);
  if ( v3 != TileMgr_instance + 13016 )
  {
    v4 = v3 - 20;
    v5 = TileMgr_instance + 12996;
    do
    {
      result = FIELD_U8(v4, 16);
      if ( FIELD_U8(v4, 16) )
      {
        result = FIELD_U32(a1, 172);
        if ( result < FIELD_U32(a1, 184) )
        {
          v6 = FIELD_F32(a1, 32);
          if ( *(float *)v4 > v6 && *(float *)v4 <= (float)((float)(v6 + FIELD_F32(a1, 92)) + 8.0) )
          {
            v7 = FIELD_F32(a1, 36);
            v8 = FIELD_F32(v4, 4);
            if ( v8 > (float)(v7 + -8.0) && v8 < (float)(v7 + 8.0) )
            {
              v9 = *(_DWORD **)(a1 + 176);
              v10 = 0;
              v11 = 0;
              if ( v9 )
              {
                v10 = *(_DWORD **)(a1 + 176);
                FIELD_U32(a1, 176) = *v9;
              }
              memset(v10, 0, 3700);
              sub_608DE510(a1 + 164, v10 + 923);
              v12 = 3372;
              ++FIELD_U32(a1, 172);
              v10[842] = (int)(float)((float)(*(float *)v4 - FIELD_F32(a1, 32)) * 0.25);
              v10[913] = FIELD_U32(v4, 8);
              *v10 = 1065353216;
              v10[1] = 0;
              *((_BYTE *)v10 + 3656) = 1;
              v10[915] = v4;
              do
              {
                v13 = &v10[v11];
                *((_BYTE *)v10 + v12++) = 0;
                v13[2] = 0;
                v13[562] = 0;
                v10[v11 + 282] = 1065353216;
                ++v11;
              }
              while ( v11 != 280 );
              v14 = v10[913];
              v15 = flt_60B05620[v14];
              *((float *)v10 + 916) = flt_60B055E8[v14] * 0.5;
              v10[917] = dword_60B05604[v14];
              v10[918] = (int)(float)((float)(v15 * 2147500000.0) / 180.0);
              v10[919] = dword_60B0563C[v14];
              v10[920] = dword_60B05658[v14];
              v10[921] = dword_60B05674[v14];
              result = dword_60B05690[v14];
              v10[922] = result;
              FIELD_U8(v4, 16) = 0;
            }
          }
        }
      }
      v3 = FIELD_U32(v3, 4);
      v4 = v3 - 20;
    }
    while ( v3 - 20 != v5 );
  }
  return result;
}
