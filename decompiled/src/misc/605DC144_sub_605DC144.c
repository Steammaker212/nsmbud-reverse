/* sub_605DC144
 * address: 0x605DC144   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DC144(int a1)
{
  int v2; // r6
  unsigned int v3; // r0
  int v4; // r5
  int v5; // r1
  int v6; // r2
  int v7; // r0
  unsigned int v8; // r7
  float v9; // s0
  int v10; // r0
  int v11; // r6
  signed int v12; // r0
  int v13; // r0

  v2 = 0;
  if ( !sub_605DC344() )
  {
    v3 = FIELD_S8(a1, 6336);
    if ( v3 <= 3 )
    {
      v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
      if ( v4 )
      {
        v5 = FIELD_U32(v4, 124);
        v6 = FIELD_U32(v4, 128);
        FIELD_U32(a1, 120) = FIELD_U32(v4, 120);
        FIELD_U32(a1, 124) = v5;
        FIELD_U32(a1, 128) = v6;
        v7 = FIELD_U32(v4, 160);
        FIELD_U32(a1, 164) = FIELD_U32(v4, 164);
        FIELD_U32(a1, 160) = v7;
        FIELD_U32(a1, 156) = FIELD_U32(v4, 156);
        FIELD_U32(a1, 80) = FIELD_U32(v4, 80);
        FIELD_F32(a1, 636) = sub_6075F8F8(v4);
        ((void (__fastcall *)(int, int))loc_605DC44C)(a1, v4);
        if ( (FIELD_U8(a1, 6263) & 4) == 0 )
        {
          v8 = 0;
          if ( FIELD_U32(v4, 11412) == 3 && (FIELD_U8(v4, 1211) & 0x40) != 0 )
          {
            v9 = 1.0 - sub_6079D45C(v4);
            if ( v9 >= 0.0 )
            {
              if ( v9 > 1.0 )
                v9 = 1.0;
            }
            else
            {
              v9 = 0.0;
            }
            v8 = -(int)(float)((float)(v9 * 536870000.0)
                             * (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(v4, 156) >> 20) & 0xFF0))
                                     + (float)((float)((float)(FIELD_U32(v4, 156) & 0xFFFFFF)
                                                     * *(float *)((char *)&sinLutTable[1]
                                                                + ((FIELD_U32(v4, 156) >> 20) & 0xFF0)))
                                             * 0.000000059605)));
          }
          if ( (FIELD_U8(v4, 1235) & 0x20) == 0 && (FIELD_U8(v4, 6900) & 1) != 0 )
          {
            v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4);
            v11 = v10;
            if ( v10 )
            {
              v12 = sub_6014C4A4(v10);
              if ( sub_6014C57C(v11, v12) )
              {
                v13 = sub_6014C508(v11, FIELD_U32(v4, 80));
                v8 = ((int)(((unsigned __int64)(1431655765LL * v13) >> 32) - v13) >> 1)
                   + ((unsigned int)(((unsigned __int64)(1431655765LL * v13) >> 32) - v13) >> 31);
              }
            }
          }
          FIELD_U32(a1, 6172) = v8;
        }
        sub_605DC9A0(a1);
        v2 = 1;
        if ( (FIELD_U8(v4, 1215) & 8) != 0 )
          sub_605E5638(a1, FIELD_S8(v4, 84));
      }
    }
  }
  return v2;
}
