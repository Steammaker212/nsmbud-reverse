/* sub_602B1EC4
 * address: 0x602B1EC4   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B1EC4(int a1)
{
  float v2; // s0
  int v3; // r6
  int v4; // lr
  float v5; // s0
  int v6; // r1
  int v7; // r0
  int v8; // r0
  int v9; // r2
  int v10; // r0
  int v11; // r2
  int v12; // r0
  int v13; // r2
  int v14; // r5
  int v15; // r6
  int result; // r0
  int v17; // r4
  int v18; // t1
  _DWORD *v19; // r0

  Enemy__beginState_DieFall((Enemy *)a1);
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 108);
  v4 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 6312) = v3;
  v5 = v2 + 8.0;
  FIELD_F32(a1, 6316) = v5;
  FIELD_U32(a1, 6320) = v4;
  v6 = dword_60C90CE0;
  v7 = unk_60C90CE4;
  FIELD_U32(a1, 6332) = unk_60C90CE8;
  FIELD_U32(a1, 6328) = v7;
  FIELD_U32(a1, 6324) = v6;
  FIELD_U32(a1, 6348) = FIELD_U32(a1, 6324);
  FIELD_U32(a1, 6336) = 0;
  FIELD_U32(a1, 6340) = 0x40000000;
  FIELD_U32(a1, 6344) = 0;
  FIELD_U32(a1, 6356) = v3;
  FIELD_F32(a1, 6360) = v5;
  FIELD_U32(a1, 6364) = v4;
  v8 = dword_60C90CEC;
  v9 = dword_60C90CF0;
  FIELD_U32(a1, 6376) = dword_60C90CF4;
  FIELD_U32(a1, 6372) = v9;
  FIELD_U32(a1, 6368) = v8;
  FIELD_U32(a1, 6392) = FIELD_U32(a1, 6368);
  FIELD_U32(a1, 6380) = 0;
  FIELD_U32(a1, 6384) = 0x40000000;
  FIELD_U32(a1, 6388) = 0;
  FIELD_U32(a1, 6400) = v3;
  FIELD_F32(a1, 6404) = v5;
  FIELD_U32(a1, 6408) = v4;
  v10 = dword_60C90CF8;
  v11 = dword_60C90CFC;
  FIELD_U32(a1, 6420) = dword_60C90D00;
  FIELD_U32(a1, 6416) = v11;
  FIELD_U32(a1, 6412) = v10;
  FIELD_U32(a1, 6436) = FIELD_U32(a1, 6412);
  FIELD_U32(a1, 6424) = 0;
  FIELD_U32(a1, 6428) = 0x40000000;
  FIELD_U32(a1, 6432) = 0;
  FIELD_U32(a1, 6444) = v3;
  FIELD_F32(a1, 6448) = v5;
  FIELD_U32(a1, 6452) = v4;
  v12 = unk_60C90D04;
  v13 = unk_60C90D08;
  FIELD_U32(a1, 6464) = unk_60C90D0C;
  FIELD_U32(a1, 6460) = v13;
  FIELD_U32(a1, 6456) = v12;
  FIELD_U32(a1, 6480) = FIELD_U32(a1, 6456);
  FIELD_U32(a1, 6468) = 0;
  FIELD_U32(a1, 6472) = 0x40000000;
  FIELD_U32(a1, 6476) = 0;
  FIELD_U32(a1, 136) = -1077936128;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1067450368;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1115684864;
  FIELD_U32(a1, 96) = -1077936128;
  FIELD_U32(a1, 504) = 1111490560;
  FIELD_U32(a1, 512) = 1115684864;
  v14 = **(_DWORD **)(FIELD_U32(a1, 6300) + 28);
  v15 = FIELD_U32(v14, 20);
  FIELD_U32(v14, 24) = -1082130432;
  sub_6041838C((ModelAnimation *)(v14 + 4));
  FIELD_U32(v14, 20) = v15;
  FIELD_U32(v14, 28) |= 2u;
  v18 = FIELD_U32(a1, 6304);
  v17 = a1 + 6304;
  result = v18;
  if ( v18 )
  {
    sub_6087D120(*(_DWORD *)(*(_DWORD *)result + 68));
    sub_60448B4C(**(_DWORD **)(*(_DWORD *)v17 + 12));
    v19 = *(_DWORD **)(*(_DWORD *)v17 + 12);
    if ( *(_DWORD *)(*(_DWORD *)v17 + 8) > 1u )
      ++v19;
    return sub_60448B4C(*v19);
  }
  return result;
}
