/* sub_601F8174
 * address: 0x601F8174   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_601F8174(int a1)
{
  float v2; // s0
  int v3; // r0
  int v4; // s2
  int v5; // s4
  int v6; // s6
  float v7; // s2
  float v8; // s4
  float v9; // s0
  float v10; // s0
  float v11; // s2
  float v12; // s4
  float v13; // s8
  float v14; // s6
  float v15; // s2
  float v16; // s10
  float v17; // s4
  Vec3 v19; // [sp+4h] [bp-4Ch] BYREF
  __int64 v20; // [sp+10h] [bp-40h] BYREF
  __int64 v21; // [sp+18h] [bp-38h]
  __int64 v22; // [sp+20h] [bp-30h]
  __int64 v23; // [sp+28h] [bp-28h]
  __int64 v24; // [sp+30h] [bp-20h]
  __int64 v25; // [sp+38h] [bp-18h]

  v2 = 3.0;
  v3 = FIELD_U32(a1, 912);
  if ( v3 <= 82 )
  {
    if ( v3 != 3 )
    {
      if ( v3 == 43 )
      {
        v4 = -1024458752;
        v5 = 1123680256;
        v6 = 1123024896;
LABEL_11:
        FIELD_U32(a1, 852) = v6;
        FIELD_U32(a1, 856) = v5;
        FIELD_U32(a1, 860) = v4;
        v7 = v2 * FIELD_F32(a1, 128);
        v8 = v2 * FIELD_F32(a1, 132);
        v9 = v2 * FIELD_F32(a1, 136);
        FIELD_F32(a1, 864) = v7;
        FIELD_F32(a1, 868) = v8;
        FIELD_F32(a1, 872) = v9;
        goto LABEL_12;
      }
      goto LABEL_12;
    }
    v4 = 1132068864;
    v5 = 1112014848;
    v6 = -1031012352;
LABEL_10:
    v2 = 4.0;
    goto LABEL_11;
  }
  if ( v3 == 83 )
  {
    v4 = 0;
    v5 = 1112014848;
    v6 = -1018691584;
    goto LABEL_10;
  }
  if ( v3 == 123 )
  {
    v4 = -1015414784;
    v5 = -1030356992;
    v6 = -1027080192;
    goto LABEL_11;
  }
LABEL_12:
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  sub_60832684((int)&v20, (unsigned int *)(a1 + 180));
  v10 = FIELD_F32(a1, 852);
  v11 = FIELD_F32(a1, 856);
  v12 = FIELD_F32(a1, 860);
  v13 = (float)((float)(v11 * *((float *)&v20 + 1)) + (float)(v10 * *(float *)&v20)) + (float)(v12 * *(float *)&v21);
  FIELD_F32(a1, 852) = v13;
  v14 = (float)((float)(v11 * *((float *)&v22 + 1)) + (float)(v10 * *(float *)&v22)) + (float)(v12 * *(float *)&v23);
  FIELD_F32(a1, 856) = v14;
  v15 = (float)((float)(v11 * *((float *)&v24 + 1)) + (float)(v10 * *(float *)&v24)) + (float)(v12 * *(float *)&v25);
  FIELD_F32(a1, 860) = v15;
  v16 = FIELD_F32(a1, 88);
  v17 = FIELD_F32(a1, 84) + v14;
  v19.x = FIELD_F32(a1, 80) + v13;
  v19.y = v17;
  v19.z = v16 + v15;
  return sub_602375C4((EffectData *)(a1 + 776), 1128, &v19, 0, (Vec3 *)(a1 + 864));
}
