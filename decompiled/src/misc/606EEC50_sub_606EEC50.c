/* sub_606EEC50
 * address: 0x606EEC50   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606EEC50(int a1)
{
  unsigned int v2; // r1
  int Area; // r0
  int v4; // r2
  _BOOL4 result; // r0
  float v6; // s10
  int v7; // r2
  float v8; // s10
  int v9; // r2
  float v10; // s10
  int v11; // r2
  float v12; // s10
  float v13; // [sp+0h] [bp-18h] BYREF
  float v14; // [sp+4h] [bp-14h]
  float v15; // [sp+8h] [bp-10h]
  float v16; // [sp+Ch] [bp-Ch]

  v2 = FIELD_U8(LevelInfo_instance, 18);
  v13 = 3.4028e38;
  v14 = 3.4028e38;
  v15 = -3.4028e38;
  v16 = -3.4028e38;
  Area = Level_getArea(Level_instance, v2);
  LevelArea_getLocation(Area, &v13, FIELD_U32(a1, 20) & 0xF);
  v4 = FIELD_U32(PlayerMgr_instance, 48);
  if ( !v4
    || (result = 1, (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v4, 84))) == 0)
    || (v6 = FIELD_F32(v4, 112), v6 > v16)
    || v13 > FIELD_F32(v4, 108)
    || FIELD_F32(v4, 108) > v15
    || v14 > v6 )
  {
    v7 = FIELD_U32(PlayerMgr_instance, 52);
    if ( !v7
      || (result = 1, (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v7, 84))) == 0)
      || (v8 = FIELD_F32(v7, 112), v8 > v16)
      || v13 > FIELD_F32(v7, 108)
      || FIELD_F32(v7, 108) > v15
      || v14 > v8 )
    {
      v9 = FIELD_U32(PlayerMgr_instance, 56);
      if ( !v9
        || (result = 1, (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v9, 84))) == 0)
        || (v10 = FIELD_F32(v9, 112), v10 > v16)
        || v13 > FIELD_F32(v9, 108)
        || FIELD_F32(v9, 108) > v15
        || v14 > v10 )
      {
        v11 = FIELD_U32(PlayerMgr_instance, 60);
        if ( v11
          && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v11, 84))) != 0
          && (v12 = FIELD_F32(v11, 112), v12 <= v16) )
        {
          return v13 <= FIELD_F32(v11, 108) && FIELD_F32(v11, 108) <= v15 && v14 <= v12;
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return result;
}
