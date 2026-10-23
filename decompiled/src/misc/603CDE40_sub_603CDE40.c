/* sub_603CDE40
 * address: 0x603CDE40   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603CDE40(int a1)
{
  int Area; // r0
  __int16 v3; // r2
  float *v4; // r0
  bool v5; // fcf
  bool v6; // fzf
  float v7; // s8
  bool v8; // r3
  _BOOL4 result; // r0
  float *v10; // r0
  bool v11; // fcf
  bool v12; // fzf
  float v13; // s8
  bool v14; // r3
  float *v15; // r0
  bool v16; // fcf
  bool v17; // fzf
  float v18; // s8
  bool v19; // r3
  float *v20; // r0
  float v21; // s4
  float v22; // [sp+0h] [bp-18h] BYREF
  float v23; // [sp+4h] [bp-14h]
  float v24; // [sp+8h] [bp-10h]
  float v25; // [sp+Ch] [bp-Ch]

  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v22 = 3.4028e38;
  v23 = 3.4028e38;
  v24 = -3.4028e38;
  v25 = -3.4028e38;
  LevelArea_getLocation(Area, &v22, FIELD_U32(a1, 6100));
  v3 = FIELD_U16(PlayerMgr_instance, 66);
  if ( (v3 & 1) == 0
    || (v15 = *(float **)(dword_60CBF354 + 32),
        v17 = v22 == *v15,
        v16 = v22 >= *v15,
        v18 = v15[1] + 16.0,
        v19 = *v15 <= v24,
        v18 > v25)
    || (result = 1, !v17 && v16 || !v19 || v23 > v18) )
  {
    if ( (v3 & 2) == 0
      || (v4 = *(float **)(dword_60CBF354 + 36),
          v6 = v22 == *v4,
          v5 = v22 >= *v4,
          v7 = v4[1] + 16.0,
          v8 = *v4 <= v24,
          v7 > v25)
      || (result = 1, !v6 && v5 || !v8 || v23 > v7) )
    {
      if ( (v3 & 4) == 0
        || (v10 = *(float **)(dword_60CBF354 + 40),
            v12 = v22 == *v10,
            v11 = v22 >= *v10,
            v13 = v10[1] + 16.0,
            v14 = *v10 <= v24,
            v13 > v25)
        || (result = 1, !v12 && v11 || !v14 || v23 > v13) )
      {
        if ( (v3 & 8) != 0 && (v20 = *(float **)(dword_60CBF354 + 44), v21 = v20[1] + 16.0, v21 <= v25) )
          return v22 <= *v20 && *v20 <= v24 && v23 <= v21;
        else
          return 0;
      }
    }
  }
  return result;
}
