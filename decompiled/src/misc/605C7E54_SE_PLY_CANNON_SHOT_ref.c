/* SE_PLY_CANNON_SHOT_ref
 * address: 0x605C7E54   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_PLY_CANNON_SHOT_ref(int a1)
{
  int ProfileId; // r0
  int v3; // r1
  int v4; // r1
  int v5; // r3
  unsigned int v6; // r2
  int v7; // r1
  int v8; // r1
  unsigned int result; // r0
  int v10; // r8
  unsigned int v11; // r5
  int v12; // r9
  float v13; // s0
  float v14; // s2
  float v15; // s16
  float *v16; // r0
  float v17; // s18
  float v18; // s22
  float v19; // s20
  float v20; // s24
  float v21; // s26
  float v22; // s28
  float v23; // s3
  float v24; // s7
  float v25; // s12
  float v26; // s6
  float v27; // s14
  float v28; // s2
  float v29; // s4
  float v30; // s10
  float v31; // s8
  unsigned int v32; // r0
  int *v33; // r6
  int v34; // r7
  Vec2 out; // [sp+4h] [bp-7Ch] BYREF
  unsigned int v36; // [sp+Ch] [bp-74h]
  Vec3 position; // [sp+10h] [bp-70h] BYREF
  float v38; // [sp+1Ch] [bp-64h] BYREF
  float v39; // [sp+20h] [bp-60h]
  int v40; // [sp+24h] [bp-5Ch]

  FIELD_U32(a1, 2936) = (FIELD_U32(a1, 20) >> 28) & 3;
  ProfileId = Actor__getProfileId((Actor *)a1);
  v3 = FIELD_U32(a1, 2936);
  if ( ProfileId == 145 )
  {
    if ( v3 >= 2 )
      FIELD_U32(a1, 2936) = 1;
  }
  else
  {
    if ( v3 >= 3 )
      FIELD_U32(a1, 2936) = 2;
    v4 = FIELD_U8(a1, 539);
    if ( FIELD_U8(a1, 539) )
    {
      v5 = v4 - 33;
      v6 = 1u >> (33 - v4);
      v7 = 1 << (v4 - 1);
      if ( v5 >= 0 )
      {
        v6 = 1 << v5;
        v7 = 0;
      }
      if ( FIELD_U32(EventMgr__instance, 16) & v7 | FIELD_U32(EventMgr__instance, 20) & v6 )
        FIELD_U32(a1, 2936) = 1;
    }
  }
  v8 = FIELD_S8(a1, 2940);
  result = (unsigned __int8)v8;
  if ( (unsigned __int8)v8 <= 3u )
  {
    v10 = *(_DWORD *)(PlayerMgr_instance + 4 * v8 + 32);
    if ( v10 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v8)) != 0 )
    {
      v11 = FIELD_U32(a1, 996);
      v12 = FIELD_U32(a1, 2928);
      v13 = FIELD_F32(a1, 108);
      v14 = FIELD_F32(a1, 112);
      v15 = *(float *)v12;
      v16 = (float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0));
      v17 = *v16;
      v18 = v16[1];
      v19 = v16[2];
      v20 = v16[3];
      v40 = FIELD_U32(a1, 116);
      v38 = FIELD_F32(a1, 656) + v13;
      v21 = v38;
      v39 = FIELD_F32(a1, 660) + v14;
      v22 = v39;
      v23 = FIELD_F32(a1, 892);
      v24 = FIELD_F32(a1, 888);
      v25 = FIELD_F32(a1, 880);
      v26 = FIELD_F32(a1, 868);
      v27 = FIELD_F32(a1, 884);
      v28 = (float)((float)(FIELD_F32(a1, 860) * 0.0) + (float)(FIELD_F32(a1, 856) * 16.0))
          + (float)(FIELD_F32(a1, 864) * 0.0);
      v29 = FIELD_F32(a1, 900);
      v30 = (float)(FIELD_F32(a1, 876) * 0.0) + (float)(FIELD_F32(a1, 872) * 16.0);
      v31 = FIELD_F32(a1, 896);
      out.x = 0.0;
      out.y = 0.0;
      v36 = v11 - 0x40000000;
      position.x = v26 + v28;
      position.y = v27 + (float)(v30 + (float)(v25 * 0.0));
      position.z = v29 + (float)((float)((float)(v23 * 0.0) + (float)(v24 * 16.0)) + (float)(v31 * 0.0));
      EffectData_create(334, &position, (int)&out, 0);
      v32 = FIELD_S8(v10, 84);
      LODWORD(position.x) = 37;
      v33 = sub_60002B90(v32, unk_60C26408);
      position.x = v21;
      position.y = v22;
      v34 = Global_BasicSoundActor2;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v34, "SE_PLY_CANNON_SHOT", &out.x, (int)v33);
      v11 &= 0xFFFFFFu;
      position.x = v15 * (float)(v19 + (float)((float)((float)v11 * v20) * 0.000000059605));
      position.y = v15 * (float)(v17 + (float)((float)((float)v11 * v18) * 0.000000059605));
      sub_6079C870(v10, &v38, &position, FIELD_U8(v12, 8));
      if ( Actor__getProfileId((Actor *)a1) == 146 && (FIELD_U8(a1, 23) & 1) != 0 )
        FIELD_U32(v10, 1232) |= 0x20000000u;
      result = FIELD_U32(a1, 2936) - 1;
      if ( result <= 1 )
      {
        FIELD_U8(a1, 2941) = FIELD_U8(a1, 2940);
        FIELD_U32(a1, 2948) = FIELD_U32(dword_60CC6484, 112);
        result = FIELD_U32(v10, 108);
        FIELD_U32(a1, 2952) = result;
      }
    }
    else
    {
      FIELD_U8(a1, 2940) = -1;
      return 255;
    }
  }
  return result;
}
