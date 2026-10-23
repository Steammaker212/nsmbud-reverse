/* sub_6029F478
 * address: 0x6029F478   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029F478(int a1)
{
  unsigned int v1; // r7
  int v3; // r5
  int Area; // r6
  int result; // r0
  bool v6; // zf
  int v7; // r1
  unsigned int v8; // r2
  int v9; // r1
  int v10; // r1
  int v11; // t1
  int v12; // s6
  float v13; // s16
  float v14; // s18

  v3 = FIELD_U8(a1, 22);
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  result = sub_60727908(Area, v3);
  v6 = result == 0;
  if ( result )
  {
    v1 = FIELD_U16(result, 4);
    v6 = v1 == 0;
  }
  if ( !v6 )
  {
    result = sub_60727950(Area, v3);
    if ( result )
    {
      v7 = FIELD_U32(a1, 20);
      v8 = (unsigned __int8)__ROR4__(v7, 8) + 1;
      v9 = BYTE1(v7);
      if ( v8 >= v1 )
      {
        FIELD_U8(a1, 6472) = 0;
        return 6472;
      }
      else
      {
        v10 = 20 * v9;
        v11 = *(__int16 *)(result + v10);
        v12 = *(__int16 *)(result + v10 + 2);
        v13 = (float)*(__int16 *)(result + 20 * v8) - (float)v11;
        v14 = (float)v12 - (float)*(__int16 *)(result + 20 * v8 + 2);
        FIELD_F32(a1, 6432) = (float)v11 + (float)(v13 * 0.5);
        FIELD_F32(a1, 6436) = (float)(v14 * 0.5) - (float)v12;
        FIELD_U32(a1, 6440) = 0;
        FIELD_U32(a1, 6464) = sub_6000F7B8(v13, -v14);
        result = a1 + 6448;
        FIELD_F32(a1, 6448) = sqrtf((float)(v14 * v14) + (float)(v13 * v13)) * 0.0625;
      }
    }
  }
  return result;
}
