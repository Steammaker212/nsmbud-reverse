/* sub_606EB5E4
 * address: 0x606EB5E4   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606EB5E4(float a1, float a2)
{
  int v4; // r4
  float v5; // s19
  float v6; // s26
  float v7; // s20
  float v8; // s24
  float v9; // s17
  float v10; // s22
  float v11; // s30
  float v12; // s0
  float v13; // s20
  float v14; // s30
  float v15; // s26
  float v16; // s0
  _BOOL4 result; // r0

  v4 = dword_60CC6484;
  v5 = FIELD_F32(EnemyCounterMaybe_instance, 16);
  v6 = FIELD_F32(dword_60CC6484, 108);
  v7 = FIELD_F32(dword_60CC6484, 24);
  v8 = FIELD_F32(dword_60CC6484, 28);
  v9 = FIELD_F32(dword_60CC6484, 32);
  v10 = FIELD_F32(dword_60CC6484, 36);
  v11 = FIELD_F32(dword_60CC6484, 104) * 0.5;
  if ( sub_607FCA88(dword_60CC6484) == 1 || sub_607FCA88(v4) == 4 )
  {
    v13 = sub_60802488(v12);
    v14 = v11 + (float)(v11 + sub_60802488(v13));
  }
  else
  {
    v13 = v7 + v11;
    if ( v5 >= 0.0 )
      v14 = (float)(v11 + v5) + 28.0;
    else
      v14 = v11 + v9;
  }
  v15 = v6 * 0.5;
  if ( sub_607FCA88(v4) == 6 )
    v16 = (float)(FIELD_F32(v4, 28) - v15) + 4.0;
  else
    v16 = v8 - v15;
  result = 0;
  if ( v13 <= a1 )
    result = v14 >= a1;
  if ( v16 > a2 )
    return 0;
  if ( (float)(v10 - v15) < a2 )
    return 0;
  return result;
}
