/* sub_6036FD84
 * address: 0x6036FD84   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036FD84(int a1)
{
  int v1; // r4
  int v2; // r2
  __int16 v3; // r3
  int v4; // r1
  bool v5; // zf
  bool v6; // zf
  bool v7; // zf
  bool v8; // zf
  bool v10; // zf
  float v11; // s4
  bool v12; // zf
  float v13; // s4
  bool v14; // zf
  float v15; // s4
  bool v16; // zf
  float v17; // s4
  int Area; // r0

  v1 = FIELD_U8(a1, 6344);
  v2 = PlayerMgr_instance;
  v3 = FIELD_U16(PlayerMgr_instance, 66);
  v4 = v3 & 1;
  if ( FIELD_U8(a1, 6344) )
  {
    v5 = v4 == 0;
    if ( (v3 & 1) != 0 )
    {
      v4 = FIELD_U32(PlayerMgr_instance, 32);
      v5 = v4 == 0;
    }
    if ( !v5 )
    {
      v4 = FIELD_U8(v4, 86);
      if ( v4 == FIELD_U8(a1, 86) )
        goto LABEL_44;
    }
    v6 = (v3 & 2) == 0;
    if ( (v3 & 2) != 0 )
    {
      v4 = FIELD_U32(PlayerMgr_instance, 36);
      v6 = v4 == 0;
    }
    if ( !v6 )
    {
      v4 = FIELD_U8(v4, 86);
      if ( v4 == FIELD_U8(a1, 86) )
        goto LABEL_44;
    }
    v7 = (v3 & 4) == 0;
    if ( (v3 & 4) != 0 )
    {
      v4 = FIELD_U32(PlayerMgr_instance, 40);
      v7 = v4 == 0;
    }
    if ( !v7 && FIELD_U8(v4, 86) == FIELD_U8(a1, 86) )
      goto LABEL_44;
    v8 = (v3 & 8) == 0;
    v4 = 0;
    if ( (v3 & 8) != 0 )
    {
      v2 = FIELD_U32(PlayerMgr_instance, 44);
      v8 = v2 == 0;
    }
    if ( !v8 && FIELD_U8(v2, 86) == FIELD_U8(a1, 86) )
    {
LABEL_44:
      Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
      LevelArea_getLocation(Area, 0, v1);
      __und(0xFDEEu);
    }
    return v4;
  }
  v10 = v4 == 0;
  if ( (v3 & 1) != 0 )
  {
    v4 = FIELD_U32(PlayerMgr_instance, 32);
    v10 = v4 == 0;
  }
  if ( !v10
    && FIELD_U8(v4, 86) == FIELD_U8(a1, 86)
    && fabsf(FIELD_F32(v4, 108) - FIELD_F32(a1, 108)) <= 128.0 )
  {
    v11 = FIELD_F32(v4, 112);
    v4 = 1;
    if ( fabsf(v11 - FIELD_F32(a1, 112)) <= 128.0 )
      return v4;
  }
  v12 = (v3 & 2) == 0;
  if ( (v3 & 2) != 0 )
  {
    v4 = FIELD_U32(PlayerMgr_instance, 36);
    v12 = v4 == 0;
  }
  if ( !v12
    && FIELD_U8(v4, 86) == FIELD_U8(a1, 86)
    && fabsf(FIELD_F32(v4, 108) - FIELD_F32(a1, 108)) <= 128.0 )
  {
    v13 = FIELD_F32(v4, 112);
    v4 = 1;
    if ( fabsf(v13 - FIELD_F32(a1, 112)) <= 128.0 )
      return v4;
  }
  v14 = (v3 & 4) == 0;
  if ( (v3 & 4) != 0 )
  {
    v4 = FIELD_U32(PlayerMgr_instance, 40);
    v14 = v4 == 0;
  }
  if ( !v14
    && FIELD_U8(v4, 86) == FIELD_U8(a1, 86)
    && fabsf(FIELD_F32(v4, 108) - FIELD_F32(a1, 108)) <= 128.0 )
  {
    v15 = FIELD_F32(v4, 112);
    v4 = 1;
    if ( fabsf(v15 - FIELD_F32(a1, 112)) <= 128.0 )
      return v4;
  }
  v16 = (v3 & 8) == 0;
  if ( (v3 & 8) != 0 )
  {
    v4 = FIELD_U32(PlayerMgr_instance, 44);
    v16 = v4 == 0;
  }
  if ( !v16
    && FIELD_U8(v4, 86) == FIELD_U8(a1, 86)
    && fabsf(FIELD_F32(v4, 108) - FIELD_F32(a1, 108)) <= 128.0 )
  {
    v17 = FIELD_F32(v4, 112);
    v4 = 1;
    if ( fabsf(v17 - FIELD_F32(a1, 112)) <= 128.0 )
      return v4;
  }
  return 0;
}
