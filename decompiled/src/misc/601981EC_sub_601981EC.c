/* sub_601981EC
 * address: 0x601981EC   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601981EC(int a1, int a2)
{
  unsigned int v4; // r0
  int v5; // r1
  int result; // r0
  float v7; // s2
  float v8; // s0
  float v9; // s0
  float v10; // s0
  int v11; // r0
  _DWORD v12[7]; // [sp+4h] [bp-1Ch] BYREF

  sub_60198DFC(a1);
  ((void (__fastcall *)(int))loc_60168DF8)(a1);
  v4 = FIELD_U32(a1, 492) + 60817408;
  FIELD_U32(a1, 492) = v4;
  v5 = (v4 >> 20) & 0xFF0;
  result = v4 & 0xFFFFFF;
  FIELD_F32(a1, 84) = (float)(FIELD_F32(a1, 364) + 490.0)
                      + (float)(FIELD_F32(a1, 464)
                              * (float)(*(float *)((char *)sinLutTable + v5)
                                      + (float)((float)((float)(unsigned int)result
                                                      * *(float *)((char *)&sinLutTable[1] + v5))
                                              * 0.000000059605)));
  if ( !a2 )
  {
    result = FIELD_U32(a1, 484);
    switch ( result )
    {
      case 2:
        result = ((int (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, 3.0, 0.1, 0.08, 0.04);
        if ( FIELD_F32(a1, 200) <= 2.99 )
          return result;
        FIELD_U32(a1, 200) = 1077936128;
        result = 0;
        goto LABEL_13;
      case 1:
        result = ((int (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, 0.0, 0.1, 0.08, 0.04);
        v9 = FIELD_F32(a1, 200);
        if ( v9 <= 0.00000011921 && v9 >= -0.00000011921 )
        {
          v10 = FIELD_F32(a1, 368);
          v11 = FIELD_U32(a1, 364);
          v12[0] = FIELD_U32(a1, 360);
          v12[1] = v11;
          *(float *)&v12[2] = v10 + -25.0;
          FIELD_U32(a1, 192) = sub_608332B0(a1 + 80, v12);
          FIELD_U8(a1, 518) = 1;
          result = FIELD_U32(a1, 484) + 1;
          goto LABEL_13;
        }
        break;
      case 0:
        v7 = FIELD_F32(a1, 360);
        v8 = FIELD_F32(a1, 80);
        if ( v8 > (float)(v7 + 100.0) || v8 < (float)(v7 + -100.0) )
        {
          result = 1;
LABEL_13:
          FIELD_U32(a1, 484) = result;
        }
        break;
    }
  }
  return result;
}
