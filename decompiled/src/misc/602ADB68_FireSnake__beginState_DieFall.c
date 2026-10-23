/* FireSnake__beginState_DieFall
 * address: 0x602ADB68   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF0
// 
// Overridden by: None
int __fastcall FireSnake__beginState_DieFall(int a1)
{
  int v2; // r2
  int v3; // r3
  int *v4; // r1

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  CollisionMgr_vf14(a1 + 648);
  FIELD_U32(a1, 500) = 1124073472;
  FIELD_U32(a1, 504) = 1132462080;
  FIELD_U32(a1, 508) = 1124073472;
  FIELD_U32(a1, 512) = 1132462080;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = -1069547520;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 104) = 0;
  v2 = FIELD_S8(a1, 6124);
  if ( v2 >= 0 )
  {
    v3 = FIELD_S8(a1, 6132);
    if ( (unsigned __int8)v3 > 3u )
    {
      if ( (unsigned __int8)v3 == 4 )
        sub_600228F4(dword_60C7F52C, a1 + 108, v2);
    }
    else
    {
      sub_60022540(dword_60C7F52C, a1 + 108, v2, v3, 1);
    }
  }
  v4 = dword_602ADCEC;
  if ( (FIELD_U8(a1, 87) & 2) != 0 )
    v4 = &dword_602ADCEC[1];
  FIELD_U32(a1, 116) = *v4;
  FIELD_F32(a1, 7248) = (float)(3.0 - *(float *)&dword_60C90BB0) / 12.0;
  FIELD_F32(a1, 7252) = (float)(3.0 - *(float *)&dword_60C90BB4) / 12.0;
  FIELD_U32(a1, 7256) = 0;
  FIELD_F32(a1, 7260) = (float)(1.5 - 1.0) / 12.0;
  FIELD_F32(a1, 7264) = (float)(1.5 - 1.0) / 12.0;
  FIELD_U32(a1, 7268) = 0;
  return 7268;
}
