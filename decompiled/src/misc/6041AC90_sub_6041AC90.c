/* sub_6041AC90
 * address: 0x6041AC90   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041AC90(int a1, int a2)
{
  int v3; // r1
  int v4; // r0
  int v5; // r1
  int v6; // r8
  int v7; // r9
  int v8; // r10
  int v9; // r0
  int v10; // r7
  int v11; // r0
  int v12; // r5
  int v13; // r0
  int v14; // r5
  int v15; // r0
  int v16; // r10
  int v17; // r0
  int v18; // r5
  int v19; // r0
  int v20; // r6
  int v21; // r7
  int v22; // r4
  int v23; // r0
  int v24; // r4
  int v25; // r0
  int v26; // r4
  int v27; // r4
  int v28; // r4
  int v29; // r0
  int v30; // r4
  int v31; // r0
  int v32; // r4
  int v33; // r4
  int v34; // r5
  int v35; // r0
  int v36; // r4
  int v37; // r0
  int v38; // r5
  int v39; // r9
  int v40; // r6
  int v41; // r4
  int v42; // r7
  int v44; // [sp+20h] [bp-148h]
  int v45; // [sp+24h] [bp-144h]
  _DWORD *v46; // [sp+28h] [bp-140h]
  int ExpressionCount; // [sp+2Ch] [bp-13Ch]
  _BYTE v48[36]; // [sp+30h] [bp-138h] BYREF
  int v49; // [sp+54h] [bp-114h]
  int v50; // [sp+58h] [bp-110h]
  int v51; // [sp+70h] [bp-F8h] BYREF

  v46 = (_DWORD *)dword_60C9BAF4;
  ExpressionCount = nn__mii__GetExpressionCount(*(nn__mii **)(a1 + 48), a2);
  v3 = 7281;
  if ( !FIELD_U8(a1, 53) )
  {
    if ( (FIELD_U32(a1, 32) & 7) == 4 )
    {
      v4 = v46[201];
      v5 = v46[202];
    }
    else
    {
      v4 = v46[198];
      v5 = v46[199];
    }
    v6 = v4 + v5 + 7153;
    v7 = sub_6083DA78(a1 + 4);
    v8 = sub_6083DA90(a1 + 4);
    v9 = sub_6083DAA8(dword_60C9BAF4 + 32);
    v10 = sub_609159A8(v9);
    v11 = sub_6083DAAC(dword_60C9BAF4 + 32);
    v12 = sub_609159B8(v11);
    v13 = sub_6083DAB0(FIELD_U32(dword_60CCFC8C, 24), a1 + 4);
    v14 = v6 + 160 * ExpressionCount + v7 + v8 + v10 + v12 + sub_609159A8(v13);
    v15 = sub_6083DAB4(FIELD_U32(dword_60CCFC8C, 24), a1 + 4);
    v3 = v14 + sub_609159B8(v15) + 1008;
  }
  v45 = v3;
  v44 = sub_6083DE38();
  v16 = sub_6083DE40();
  v17 = sub_6083DE48(FIELD_U32(dword_60CCFC8C, 24), dword_60C9BAF4 + 32);
  v18 = sub_609159A8(v17);
  v19 = sub_6083DE4C(FIELD_U32(dword_60CCFC8C, 24), dword_60C9BAF4 + 32);
  v20 = sub_609159B8(v19);
  v21 = sub_6083E1C0();
  v22 = sub_6083E1C8();
  v23 = sub_6083E1D0(FIELD_U32(dword_60CCFC8C, 24), dword_60C9BAF4 + 32, FIELD_U32(a1, 48));
  v24 = v45 + v44 + v16 + v18 + v20 + v21 + v22 + sub_609159A8(v23);
  v25 = sub_6083E1D4(FIELD_U32(dword_60CCFC8C, 24), dword_60C9BAF4 + 32, FIELD_U32(a1, 48));
  v26 = v24 + sub_609159B8(v25);
  v27 = v26 + sub_6083DF44();
  v28 = v27 + sub_6083DF4C();
  v29 = sub_6083DF54(FIELD_U32(dword_60CCFC8C, 24));
  v30 = v28 + sub_609159A8(v29);
  v31 = sub_6083DF58(FIELD_U32(dword_60CCFC8C, 24));
  v32 = v30 + sub_609159B8(v31);
  v33 = v32 + sub_6083E304();
  v34 = v33 + sub_6083E30C();
  v35 = sub_6083E314(FIELD_U32(dword_60CCFC8C, 24));
  v36 = sub_609159A8(v35);
  v37 = sub_6083E318(FIELD_U32(dword_60CCFC8C, 24));
  v38 = v34 + (sub_609159B8(v37) + v36) * ExpressionCount;
  if ( FIELD_U8(a1, 54) )
  {
    agl_TextureData_ref(v48);
    sub_6091FDB0(v48, 1, 61, FIELD_U32(a1, 56), FIELD_U32(a1, 60), 1, 1, 0, 0, 1);
    v39 = v49;
    v40 = v50;
    v41 = sub_60921694(v46 + 58, 1, 2);
    v42 = sub_60921694(v46 + 82, 1, 10);
    sub_609175E4(&v51);
    v38 += ((v40 + 0xFFFF) & 0xFFFF0000) + v41 + ((v39 + 0xFFFF) & 0xFFFF0000) + v42 + 69660;
  }
  return v38;
}
