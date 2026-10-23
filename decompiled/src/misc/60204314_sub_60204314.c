/* sub_60204314
 * address: 0x60204314   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60204314(int a1, unsigned int a2)
{
  _DWORD *v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r0
  unsigned int v8; // r0
  int v9; // r7
  float *v10; // r0
  float v11; // r6
  float v12; // r5
  int v13; // r7
  unsigned int v14; // r8
  unsigned __int64 v15; // r0
  int v16; // r7
  __int16 v17; // r8
  int v18; // r11
  __int16 v19; // r9
  unsigned int v20; // r0
  float v22; // [sp+4h] [bp-84h]
  ActorBuildInfo buildInfo; // [sp+8h] [bp-80h] BYREF
  _DWORD v24[2]; // [sp+34h] [bp-54h] BYREF
  int v25; // [sp+3Ch] [bp-4Ch]
  _DWORD v26[3]; // [sp+40h] [bp-48h] BYREF
  _DWORD v27[15]; // [sp+4Ch] [bp-3Ch] BYREF

  v4 = (_DWORD *)sub_60186FEC(dword_60CC6D78 + 984, 2u, a2);
  v5 = v4[3];
  v6 = v4[4];
  v7 = v4[5];
  v26[0] = 2;
  v26[1] = 0;
  v26[2] = 0;
  v27[5] = v7;
  v27[4] = v6;
  v27[3] = v5;
  v24[0] = -1;
  v24[1] = -1;
  v25 = -1;
  sub_6021F6E0(dword_60C8D4EC, v24, v26, a2);
  v27[0] = 2;
  v27[1] = 0;
  v27[2] = v25;
  v8 = 0;
  if ( a2 < 5 )
    v8 = a2;
  v9 = a1 + 4 * v8;
  v10 = (float *)sub_601DFFE4((int)v24);
  v22 = v10[18];
  v11 = v10[19];
  v12 = v10[20];
  FIELD_U8(v9, 18) = 1;
  sub_60186FC0(dword_60CC6D78 + 984, 2u, a2, (int)v27);
  memset(&buildInfo, 0, sizeof(buildInfo));
  v13 = word_60AFD260[a2];
  v14 = word_60AFD26A[a2] - v13;
  v15 = v14 * (unsigned __int64)sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
  v16 = HIDWORD(v15) + v13;
  if ( v16 >= 1 )
  {
    v17 = 0;
    v18 = 0;
    v19 = 16 * word_60AFD274[a2];
    do
    {
      buildInfo.settings1 = v17 & 0xFF0;
      v20 = sub_6021EE50(2, a2);
      buildInfo.profile = Profile__get(v20);
      buildInfo.position.x = v22;
      buildInfo.position.y = v11;
      buildInfo.position.z = v12;
      buildInfo.field_1C = 0;
      buildInfo.eventId2 = 2;
      buildInfo.field_20 = 0;
      buildInfo.linkId = a2;
      LODWORD(v15) = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
      ++v18;
      v17 += v19;
    }
    while ( v18 < v16 );
  }
  return v15;
}
