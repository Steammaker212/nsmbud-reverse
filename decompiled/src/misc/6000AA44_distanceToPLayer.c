/* distanceToPLayer
 * address: 0x6000AA44   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall distanceToPLayer(Vec2 *out, Vec2 *pos)
{
  float v2; // s0
  float v3; // s16
  float v4; // s22
  signed int v5; // r7
  signed int v6; // r10
  float v7; // s18
  int v8; // r5
  float v9; // s20
  float v10; // s0
  float v11; // s2
  float v12; // s4
  int v13; // r7
  float v14; // s16
  float v15; // s0
  float v16; // s4
  float v17; // s0
  float v18; // s4
  float v19; // s0
  float v20; // s4
  float v21; // s0
  float v22; // s2
  float v26; // [sp+Ch] [bp-54h] BYREF
  float v27; // [sp+10h] [bp-50h]

  FIELD_F32(out, 0x0) = 0.0;
  FIELD_F32(out, 0x4) = 0.0;
  if ( !AreaTask_intance )
    return -1;
  if ( (unsigned int)(FIELD_U32(AreaTask_intance, 1828) - 1) <= 1 )
  {
    AreaTask_getWrappedXPos(AreaTask_intance);
    v3 = v2;
    v4 = 3.4028e38;
    v5 = 0;
    v6 = -1;
    v7 = FIELD_F32(AreaTask_intance, 0x71C) - FIELD_F32(AreaTask_intance, 1812);
    v8 = PlayerMgr_instance;
    v9 = v7 * 0.5;
    while ( (FIELD_U16(v8, 66) & (unsigned __int16)(1 << v5)) == 0 )
    {
LABEL_13:
      if ( ++v5 == 4 )
        return v6;
    }
    sub_6075DE94(dword_60CBF354, &v26, v5);
    AreaTask_getWrappedXPos(AreaTask_intance);
    v26 = v10;
    if ( v3 >= v10 )
    {
      if ( (float)(v3 - v10) <= v9 )
        goto LABEL_11;
      v10 = v7 + v10;
    }
    else
    {
      if ( (float)(v10 - v3) <= v9 )
        goto LABEL_11;
      v10 = v10 - v7;
    }
    v26 = v10;
LABEL_11:
    v11 = v27 - FIELD_F32(pos, 0x4);
    v12 = v10 - v3;
    if ( (float)((float)(v11 * v11) + (float)(v12 * v12)) < v4 )
    {
      v4 = (float)(v11 * v11) + (float)(v12 * v12);
      v6 = v5;
      FIELD_F32(out, 0x0) = v12;
      FIELD_F32(out, 0x4) = v11;
    }
    goto LABEL_13;
  }
  v13 = PlayerMgr_instance;
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0) == 1 )
  {
    sub_6075DE94(dword_60CBF354, &v26, 0);
    v14 = 3.4028e38;
    v6 = -1;
    v15 = v27 - FIELD_F32(pos, 0x4);
    v16 = v26 - FIELD_F32(pos, 0x0);
    if ( (float)((float)(v15 * v15) + (float)(v16 * v16)) < 3.4028e38 )
    {
      v14 = (float)(v15 * v15) + (float)(v16 * v16);
      v6 = 0;
      FIELD_F32(out, 0x0) = v16;
      FIELD_F32(out, 0x4) = v15;
    }
  }
  else
  {
    v14 = 3.4028e38;
    v6 = -1;
  }
  if ( PlayerMgr_hasPlayer(v13, 1u) == 1 )
  {
    sub_6075DE94(dword_60CBF354, &v26, 1);
    v17 = v27 - FIELD_F32(pos, 0x4);
    v18 = v26 - FIELD_F32(pos, 0x0);
    if ( (float)((float)(v17 * v17) + (float)(v18 * v18)) < v14 )
    {
      v14 = (float)(v17 * v17) + (float)(v18 * v18);
      v6 = 1;
      FIELD_F32(out, 0x0) = v18;
      FIELD_F32(out, 0x4) = v17;
    }
  }
  if ( PlayerMgr_hasPlayer(v13, 2u) == 1 )
  {
    sub_6075DE94(dword_60CBF354, &v26, 2);
    v19 = v27 - FIELD_F32(pos, 0x4);
    v20 = v26 - FIELD_F32(pos, 0x0);
    if ( (float)((float)(v19 * v19) + (float)(v20 * v20)) < v14 )
    {
      v14 = (float)(v19 * v19) + (float)(v20 * v20);
      v6 = 2;
      FIELD_F32(out, 0x0) = v20;
      FIELD_F32(out, 0x4) = v19;
    }
  }
  if ( PlayerMgr_hasPlayer(v13, 3u) == 1 )
  {
    sub_6075DE94(dword_60CBF354, &v26, 3);
    v21 = v27 - FIELD_F32(pos, 0x4);
    v22 = v26 - FIELD_F32(pos, 0x0);
    if ( (float)((float)(v21 * v21) + (float)(v22 * v22)) < v14 )
    {
      v6 = 3;
      FIELD_F32(out, 0x0) = v22;
      FIELD_F32(out, 0x4) = v21;
    }
  }
  return v6;
}
