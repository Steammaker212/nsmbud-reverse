/* sub_602E1B0C
 * address: 0x602E1B0C   size: 1392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E1B0C(int a1)
{
  char v1; // r12
  int v3; // r0
  signed int v4; // r7
  unsigned int v5; // r5
  float v6; // s0
  float v7; // s0
  int v8; // r0
  char v9; // r0
  int v10; // s2
  int v11; // r3
  float v12; // r7
  float v13; // r3
  float v14; // r7
  float v15; // s4
  float v16; // s6
  float v17; // s0
  float v18; // s2
  float v19; // s4
  float v20; // s0
  float v21; // s6
  float v22; // s0
  float v23; // s2
  int v25; // [sp+4h] [bp-54h] BYREF
  float v26; // [sp+8h] [bp-50h] BYREF
  float v27; // [sp+Ch] [bp-4Ch]
  int v28; // [sp+10h] [bp-48h]
  float v29[4]; // [sp+18h] [bp-40h] BYREF
  int v30; // [sp+28h] [bp-30h] BYREF
  float v31; // [sp+2Ch] [bp-2Ch]
  int v32; // [sp+30h] [bp-28h]

  FIELD_F32(a1, 116) = (float)((float)((FIELD_U32(a1, 20) >> 8) & 0xF) * -32.0) + 1500.0;
  v3 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 15404) = v3;
  FIELD_U32(a1, 15408) = v3;
  if ( ((unsigned int)&algn_60C922D3[1] & ~(1613634400 << v1) & 1) == 0
    && _cxa_guard_acquire((__guard *)&algn_60C922D3[1]) )
  {
    byte_60C922D0[0] = 0;
    byte_60C922D1 = 1;
    byte_60C922D2 = 1;
    _cxa_guard_release((__guard *)&algn_60C922D3[1]);
  }
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)byte_60C922D0);
  sub_602E6CCC(a1 + 6300);
  v4 = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 620) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1115684864;
  FIELD_U32(a1, 500) = 1140850688;
  FIELD_U32(a1, 504) = 1124073472;
  v5 = FIELD_U32(a1, 15348);
  v6 = *(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
     + (float)((float)((float)(v5 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v5 >> 20) & 0xFF0)))
             * 0.000000059605);
  FIELD_F32(a1, 6320) = v6 + v6;
  v7 = (float)(*(float *)((char *)sinLutTable + (((2 * v5 - 0x40000000) >> 20) & 0xFF0))
             + (float)((float)((float)((2 * v5 - 0x40000000) & 0xFFFFFE)
                             * *(float *)((char *)&sinLutTable[1] + (((2 * v5 - 0x40000000) >> 20) & 0xFF0)))
                     * 0.000000059605))
     * 0.25;
  FIELD_F32(a1, 6312) = (float)(-0.25 - v7) + 1.0;
  FIELD_F32(a1, 6316) = (float)(v7 + 0.25) + 1.0;
  FIELD_U8(a1, 15364) = 0;
  FIELD_U32(a1, 6388) = 0;
  FIELD_U32(a1, 6392) = 0;
  FIELD_U32(a1, 6396) = 0;
  FIELD_U32(a1, 6400) = 1065353216;
  FIELD_U32(a1, 6404) = 1065353216;
  sub_602E209C(a1);
  v8 = FIELD_U32(a1, 20) & 3;
  if ( v8 == 2 )
  {
    v4 = 1;
  }
  else if ( v8 != 1 )
  {
    if ( v8 )
      goto LABEL_10;
    v4 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  }
  FIELD_U32(a1, 80) = v4;
LABEL_10:
  sub_602E6F78(a1 + 6328);
  FIELD_U32(a1, 15388) = 10;
  v9 = ((FIELD_U32(a1, 20) & 0x10) != 0) + 1;
  FIELD_U8(a1, 15382) = v9;
  FIELD_U8(a1, 15383) = v9;
  sub_602E25E4(a1);
  FIELD_F64(a1, 15444) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 15440))(a1 + 15440);
  FIELD_U32(a1, 15452) = v10;
  v11 = FIELD_U32(a1, 108);
  v12 = FIELD_F32(a1, 112);
  v32 = FIELD_U32(a1, 116);
  v31 = v12;
  v30 = v11;
  v13 = FIELD_F32(a1, 160);
  v14 = FIELD_F32(a1, 164);
  v29[0] = FIELD_F32(a1, 156);
  v29[1] = v13;
  v29[2] = v14;
  v28 = FIELD_U32(a1, 15452);
  v27 = FIELD_F32(a1, 15448);
  v26 = FIELD_F32(a1, 15444);
  v26 = FIELD_F32(a1, 6400) * v26;
  v27 = FIELD_F32(a1, 6404) * v27;
  ((void (__fastcall *)(int, int *, float *, int, float *, int))sub_602E6DD8)(
    a1 + 6300,
    &v30,
    v29,
    a1 + 6388,
    &v26,
    v25);
  sub_602E26AC(a1);
  if ( FIELD_U8(a1, 15383) >= 2u )
  {
    FIELD_U8(a1, 15384) = 2;
    j_ibaramushi_ref((_DWORD *)(a1 + 6300), 2, 1);
  }
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92204);
  v15 = FIELD_F32(a1, 112);
  v16 = FIELD_F32(a1, 6380);
  v17 = FIELD_F32(a1, 6376) - FIELD_F32(a1, 108);
  FIELD_F32(a1, 304) = v17;
  FIELD_F32(a1, 308) = v16 - v15;
  FIELD_F32(a1, 10900) = v17;
  FIELD_F32(a1, 10904) = v16 - v15;
  sub_602E3CEC(a1);
  v18 = FIELD_F32(a1, 108);
  v19 = FIELD_F32(a1, 112);
  v20 = FIELD_F32(a1, 6504) - v18;
  v21 = FIELD_F32(a1, 6508) - v19;
  FIELD_F32(a1, 10292) = v20;
  FIELD_F32(a1, 10296) = v21;
  FIELD_F32(a1, 14852) = v20;
  FIELD_F32(a1, 14856) = v21;
  v22 = FIELD_F32(a1, 6516) - v18;
  v23 = FIELD_F32(a1, 6520) - v19;
  FIELD_F32(a1, 10596) = v22;
  FIELD_F32(a1, 10600) = v23;
  FIELD_F32(a1, 15156) = v22;
  FIELD_F32(a1, 15160) = v23;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v32 = FIELD_U32(a1, 6512);
    v31 = FIELD_F32(a1, 6508);
    v30 = FIELD_U32(a1, 6504);
    v29[0] = v31;
    ((void (__fastcall *)(int *, float *, int *, _DWORD))checkLiquidCollisions)(
      &v25,
      v29,
      &v30,
      FIELD_U8(a1, 86));
    if ( v25 == 5 && v29[0] > v31 )
      FIELD_U8(a1, 15436) = 1;
    v32 = FIELD_U32(a1, 6524);
    v31 = FIELD_F32(a1, 6520);
    v30 = FIELD_U32(a1, 6516);
    v29[0] = v31;
    ((void (__fastcall *)(int *, float *, int *, _DWORD))checkLiquidCollisions)(
      &v25,
      v29,
      &v30,
      FIELD_U8(a1, 86));
    if ( v25 == 5 && v29[0] > v31 )
      FIELD_U8(a1, 15437) = 1;
  }
  return 1;
}
