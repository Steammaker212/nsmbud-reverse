/* sub_60660D70
 * address: 0x60660D70   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60660D70(int a1)
{
  float v2; // s4
  float v3; // s0
  float v4; // r1
  float v5; // r2
  float v6; // s0
  int v7; // r0
  bool v8; // zf
  float v9; // s8
  float v10; // s2
  float v11; // s6
  float v13[4]; // [sp+0h] [bp-48h] BYREF
  float v14[2]; // [sp+10h] [bp-38h] BYREF
  char v15; // [sp+18h] [bp-30h]
  float v16[2]; // [sp+1Ch] [bp-2Ch] BYREF
  char v17; // [sp+24h] [bp-24h]

  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_60660F88(a1);
  v2 = FIELD_F32(a1, 7040);
  FIELD_F32(a1, 6964) = (float)(FIELD_F32(a1, 112) + 8.0) + (float)(v2 * 0.5);
  FIELD_F32(a1, 6976) = (float)(v2 * 0.0625) + -1.0;
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6112));
  FIELD_U32(a1, 7012) = 0x800000;
  FIELD_U32(a1, 6992) = 16;
  FIELD_U32(a1, 6996) = 0x10000;
  FIELD_U32(a1, 7004) = 0x200000;
  FIELD_U32(a1, 7008) = 0x100000;
  FIELD_U32(a1, 6900) = sub_608337E0(a1 + 6984);
  FIELD_U32(a1, 6904) = 0;
  FIELD_U32(a1, 6908) = 0;
  v3 = FIELD_F32(a1, 7032);
  FIELD_F32(a1, 6912) = v3 * 0.0625;
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 116);
  v6 = v3 + 32.0;
  v13[0] = FIELD_F32(a1, 108);
  v13[1] = v4;
  v13[2] = v5;
  v13[0] = v13[0] - (float)(v6 * 0.5);
  sub_60645448(a1 + 6704, (int)v13, v6);
  if ( FIELD_U8(a1, 7056) )
    ++FIELD_U32(a1, 7052);
  else
    StageActor__cullCheck((StageActor *)a1, 16);
  if ( FIELD_S32(dword_60C96478, 96) >= 1 )
  {
    v7 = FIELD_U32(dword_60C96478, 104);
    v8 = v7 == 0;
    if ( v7 )
      v8 = (FIELD_U8(a1, 23) & 0x10) == 0;
    if ( !v8 )
    {
      v9 = FIELD_F32(a1, 108);
      v10 = FIELD_F32(a1, 7036) + FIELD_F32(a1, 112);
      v11 = (float)((float)(FIELD_F32(a1, 7032) * 0.5) + 14.0) / 14.0;
      v16[0] = v9 + 0.0;
      v16[1] = v10;
      v17 = 1;
      v14[0] = v9 + (float)((float)((float)(v11 * 14.0) + -4.0) + -8.0);
      v14[1] = v10;
      v15 = 1;
      sub_60379890(a1 + 7060, (int)v16, (int)v14);
    }
  }
  sub_60660AAC((ModelWrapper **)a1);
  return 1;
}
