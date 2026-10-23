/* sub_602563F0
 * address: 0x602563F0   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602563F0(int a1)
{
  int Area; // r0
  unsigned __int16 *Location; // r1
  int result; // r0
  __int16 v5; // r2
  float *v6; // r1
  float v7; // s8
  _BOOL4 v8; // r4
  _BOOL4 v9; // r1
  float *v10; // r1
  float v11; // s8
  _BOOL4 v12; // r4
  _BOOL4 v13; // r1
  float *v14; // r1
  float v15; // s8
  _BOOL4 v16; // r4
  _BOOL4 v17; // r1
  float *v18; // r1
  float v19; // s4
  float v20; // [sp+0h] [bp-18h] BYREF
  float v21; // [sp+4h] [bp-14h]
  float v22; // [sp+8h] [bp-10h]
  float v23; // [sp+Ch] [bp-Ch]

  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v20 = 3.4028e38;
  v21 = 3.4028e38;
  v22 = -3.4028e38;
  v23 = -3.4028e38;
  Location = LevelArea_getLocation(Area, &v20, FIELD_U32(a1, 6560));
  result = 1;
  if ( Location )
  {
    v5 = FIELD_U16(PlayerMgr_instance, 66);
    if ( (v5 & 1) == 0
      || (v14 = *(float **)(dword_60CBF354 + 32), v15 = v14[1] + 16.0, v16 = *v14 <= v22, v17 = v20 <= *v14, v15 > v23)
      || !v17
      || !v16
      || v21 > v15 )
    {
      if ( (v5 & 2) == 0
        || (v6 = *(float **)(dword_60CBF354 + 36), v7 = v6[1] + 16.0, v8 = *v6 <= v22, v9 = v20 <= *v6, v7 > v23)
        || !v9
        || !v8
        || v21 > v7 )
      {
        if ( (v5 & 4) == 0
          || (v10 = *(float **)(dword_60CBF354 + 40),
              v11 = v10[1] + 16.0,
              v12 = *v10 <= v22,
              v13 = v20 <= *v10,
              v11 > v23)
          || !v13
          || !v12
          || v21 > v11 )
        {
          if ( (v5 & 8) != 0 && (v18 = *(float **)(dword_60CBF354 + 44), v19 = v18[1] + 16.0, v19 <= v23) )
          {
            if ( v20 > *v18 || *v18 > v22 || v21 > v19 )
              return 0;
          }
          else
          {
            return 0;
          }
        }
      }
    }
  }
  return result;
}
