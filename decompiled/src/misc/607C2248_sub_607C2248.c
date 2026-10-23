/* sub_607C2248
 * address: 0x607C2248   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C2248(int a1)
{
  int v2; // r5
  float v3; // s16
  float v4; // r6
  float v5; // s0
  float v6; // r0
  float v7; // s2
  float v8; // s4
  unsigned int v9; // r0
  int v10; // r1
  int v11; // r0
  float v12; // r1
  int v13; // r2
  int v15; // [sp+4h] [bp-64h] BYREF
  float v16; // [sp+8h] [bp-60h]
  int v17; // [sp+Ch] [bp-5Ch]
  TileCheck_Result v18; // [sp+10h] [bp-58h] BYREF
  float v19[3]; // [sp+38h] [bp-30h] BYREF
  float v20[9]; // [sp+44h] [bp-24h] BYREF

  v2 = 0;
  if ( sub_60786738(a1 + 688) == 1 && (FIELD_U8(a1, 6900) & 2) == 0 )
  {
    v3 = FIELD_F32(a1, 112);
    v4 = FIELD_F32(a1, 108);
    v5 = sub_6079B208((_DWORD *)a1);
    v6 = FIELD_F32(a1, 116);
    v20[0] = v4;
    v20[1] = v3 + v5;
    v20[2] = v6;
    v7 = FIELD_F32(a1, 11372);
    v8 = FIELD_F32(a1, 112);
    v19[0] = FIELD_F32(a1, 108);
    v19[1] = v8 + v7;
    v19[2] = v6;
    v9 = sub_607160F4(
           TileMgr_instance,
           (int)v4,
           (unsigned __int16)(int)(float)-(float)(v3 + v5),
           FIELD_U8(a1, 86),
           1);
    if ( !sub_60155344(v9) )
    {
      v18.field_C = 0;
      v18.field_10 = 0;
      if ( sub_60155A60(a1 + 1328, v20, v19, &v18) == 1 && sub_60155324(v18.field_18) )
      {
        v10 = FIELD_U32(a1, 116);
        v15 = FIELD_U32(a1, 108);
        v16 = (float)((float)((float)(v18.field_8 + 1.0) * 0.0625) * 16.0) + 1.0;
        v17 = v10;
        if ( sub_60155C38(a1 + 1328, (float *)&v15, 0, 0, 8.0) != 1 )
        {
          v11 = v15;
          FIELD_U32(a1, 108) = v15;
          v12 = v16;
          FIELD_F32(a1, 112) = v16;
          v13 = v17;
          FIELD_U32(a1, 116) = v17;
          FIELD_U32(a1, 584) = v11;
          FIELD_F32(a1, 588) = v12;
          FIELD_U32(a1, 592) = v13;
          FIELD_U32(a1, 608) = v11;
          FIELD_F32(a1, 612) = v12;
          FIELD_U32(a1, 616) = v13;
          FIELD_U32(a1, 11480) = 10;
          Player_changeState(a1, (StateBase *)&dword_60CC508C, 4);
          return 1;
        }
      }
    }
  }
  return v2;
}
