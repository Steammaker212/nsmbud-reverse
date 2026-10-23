/* sub_6046E898
 * address: 0x6046E898   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6046E898(int a1)
{
  _BOOL4 result; // r0
  int v3; // r1
  int v4; // r5
  float *v5; // r0
  float v6; // s0
  float v7; // s0
  float *v8; // r0
  float v9; // s0
  float v10; // s0
  float *v11; // r0
  float v12; // s0
  float v13; // s0
  float *v14; // r0
  float v15; // s0
  float v16; // s0

  result = 0;
  v3 = FIELD_U32(a1, 120);
  if ( v3 == 1 )
  {
    v4 = PlayerMgr_instance;
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0
      || (v5 = (float *)sub_60788F54(PlayerMgr_instance, 0)) == 0
      || (v6 = v5[27] + v5[143], FIELD_F32(a1, 104) > v6)
      || v6 > FIELD_F32(a1, 112)
      || (v7 = v5[28] + v5[144], FIELD_F32(a1, 108) > v7)
      || (result = 1, v7 > FIELD_F32(a1, 116)) )
    {
      if ( (FIELD_U8(v4, 66) & 2) == 0
        || (v8 = (float *)sub_60788F54(v4, 1)) == 0
        || (v9 = v8[27] + v8[143], FIELD_F32(a1, 104) > v9)
        || v9 > FIELD_F32(a1, 112)
        || (v10 = v8[28] + v8[144], FIELD_F32(a1, 108) > v10)
        || (result = 1, v10 > FIELD_F32(a1, 116)) )
      {
        if ( (FIELD_U8(v4, 66) & 4) == 0
          || (v11 = (float *)sub_60788F54(v4, 2)) == 0
          || (v12 = v11[27] + v11[143], FIELD_F32(a1, 104) > v12)
          || v12 > FIELD_F32(a1, 112)
          || (v13 = v11[28] + v11[144], FIELD_F32(a1, 108) > v13)
          || (result = 1, v13 > FIELD_F32(a1, 116)) )
        {
          if ( (FIELD_U8(v4, 66) & 8) != 0
            && (v14 = (float *)sub_60788F54(v4, 3)) != 0
            && (v15 = v14[27] + v14[143], FIELD_F32(a1, 104) <= v15)
            && v15 <= FIELD_F32(a1, 112)
            && (v16 = v14[28] + v14[144], FIELD_F32(a1, 108) <= v16) )
          {
            return v16 <= FIELD_F32(a1, 116);
          }
          else
          {
            return 0;
          }
        }
      }
    }
  }
  else if ( !v3 )
  {
    return (float)(FIELD_F32(a1, 80) + -32.0) <= FIELD_F32(dword_60CC6484, 120);
  }
  return result;
}
