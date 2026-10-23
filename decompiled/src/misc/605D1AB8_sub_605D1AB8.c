/* sub_605D1AB8
 * address: 0x605D1AB8   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D1AB8(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r1
  unsigned int v4; // r2
  int v5; // r4
  int v6; // s2
  float *v7; // r5
  float *v8; // r1
  float v9; // s14
  float v10; // s0
  float v11; // s2
  float v12; // s10
  float v13; // s5
  float v14; // s6
  float v15; // s1
  float v16; // s13
  float v17; // s9
  _DWORD **v18; // r5
  _BYTE *v19; // r5
  int v20; // r1
  float v22[16]; // [sp+0h] [bp-40h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = (v4 >> 20) & 0xFF0;
  v6 = v3 & 0xFFFFFF;
  v7 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v9 = (float)(v2 & 0xFFFFFF);
  v10 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v11 = (float)(unsigned int)v6 * 0.000000059605;
  v12 = *(float *)((char *)&sinLutTable[2] + v5) + (float)(v10 * *(float *)((char *)&sinLutTable[3] + v5));
  v13 = v7[2] + (float)(v11 * v7[3]);
  v14 = *(float *)((char *)sinLutTable + v5) + (float)(v10 * *(float *)((char *)&sinLutTable[1] + v5));
  v15 = *v7 + (float)(v11 * v7[1]);
  v16 = v8[2] + (float)((float)(v9 * 0.000000059605) * v8[3]);
  v17 = *v8 + (float)((float)(v9 * 0.000000059605) * v8[1]);
  v22[0] = v13 * v12;
  v22[4] = v13 * v14;
  v22[8] = -v15;
  v22[1] = (float)((float)(v17 * v15) * v12) - (float)(v16 * v14);
  v22[5] = (float)(v16 * v12) + (float)((float)(v17 * v15) * v14);
  v22[9] = v17 * v13;
  v22[2] = (float)(v15 * (float)(v16 * v12)) + (float)(v17 * v14);
  v22[6] = (float)(v15 * (float)(v16 * v14)) - (float)(v17 * v12);
  v22[10] = v16 * v13;
  v22[3] = FIELD_F32(a1, 108);
  v22[7] = FIELD_F32(a1, 112);
  v22[11] = FIELD_F32(a1, 116);
  v18 = (_DWORD **)(a1 + 6100);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6100) + 60))(**(_DWORD **)(a1 + 6100), v22);
  sub_604218E0(*(float **)(a1 + 6100));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v18 + 52))(**v18);
  if ( (unsigned int)FIELD_S8(a1, 6976) <= 3 && FIELD_U8(a1, 6519) )
  {
    sub_60959C28(a1 + 6520, 1784 * FIELD_S8(a1, 6976) + dword_60CC6D78 + 102208, 0);
    sub_6091872C(*(_DWORD *)(**v18 + 76), 1, a1 + 6528);
  }
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v18 + 56))(**v18);
  v19 = (_BYTE *)(a1 + 6518);
  if ( !FIELD_U8(a1, 6516) && !*v19 )
    sub_60237208(a1 + 6412, (Vec3 *)(a1 + 108), 0, 0);
  if ( *v19 )
    v20 = 8;
  else
    v20 = 0;
  StageActor__cullCheck((StageActor *)a1, v20);
  return 1;
}
