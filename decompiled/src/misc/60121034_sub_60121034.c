/* sub_60121034
 * address: 0x60121034   size: 1548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60121034(StateActor *a1, double a2, double a3)
{
  int v4; // r4
  int v5; // r1
  int *v6; // r0
  unsigned int v7; // r7
  unsigned int v8; // r2
  int *v9; // r5
  int v10; // r3
  float v11; // s4
  int v12; // r1
  float v13; // s0
  int *p_direction; // r6
  int v15; // r0
  int v16; // r1
  int v17; // r0
  char *collisionMgr; // r5
  int result; // r0
  int v20; // r0
  int v21; // r2
  int v22; // r6
  unsigned int v23; // r12
  int v24; // lr
  int v25; // r11
  char *v26; // r3
  float v27; // s0
  float v28; // s2
  float v29; // s14
  unsigned int v30; // r9
  float v31; // s14
  int v32; // r5
  int v33; // r10
  float v34; // s1
  unsigned int v35; // r5
  float x; // s4
  float y; // s6
  float v38; // s2
  float v39; // s0
  unsigned int direction; // r0
  int v41; // r0
  int v42; // [sp+0h] [bp-48h]

  v4 = -12582912;
  if ( HIWORD(a1[1]._._.field_B0) && !a1[1]._.collisionMgr[2574] && !a1[1]._.collisionMgr[2576]
    || *(_DWORD *)&a1[1]._.collisionMgr[2596]
    || FIELD_U32(a1, 0x0)._.position.y < -670.0 )
  {
    v5 = (unsigned __int8)a1[1]._.collisionMgr[2577];
    v6 = dword_60121470;
    v7 = *(_DWORD *)&a1[1]._.collisionMgr[2152];
    if ( a1[1]._.collisionMgr[2577] )
      v6 = &dword_60121470[1];
    *(float *)&a2 = *(float *)v6
                  * (float)(*(float *)((char *)&sinLutTable[2] + ((v7 >> 20) & 0xFF0))
                          + (float)((float)((float)(v7 & 0xFFFFFF)
                                          * *(float *)((char *)&sinLutTable[3] + ((v7 >> 20) & 0xFF0)))
                                  * 0.000000059605));
    FIELD_U32(a1, 0x0)._.speed.x = *(float *)&a2;
    v8 = *(_DWORD *)&a1[1]._.collisionMgr[2160];
    v9 = dword_60121478;
    if ( v5 )
      v9 = &dword_60121478[1];
    *(float *)&a3 = *(float *)v9
                  * (float)(*(float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0))
                          + (float)((float)((float)(v8 & 0xFFFFFF)
                                          * *(float *)((char *)&sinLutTable[1] + ((v8 >> 20) & 0xFF0)))
                                  * 0.000000059605));
    FIELD_U32(a1, 0x0)._.speed.y = *(float *)&a3;
    v10 = 6291456;
    if ( v5 )
      v10 = -6291456;
    else
      v4 = 12582912;
    *(_DWORD *)&a1[1]._.collisionMgr[2152] = v7 + v10;
    *(_DWORD *)&a1[1]._.collisionMgr[2160] = v8 + v4;
    v11 = *(float *)&a1[1]._.collisionMgr[2240] + (float)(*(float *)&a2 * 0.5);
    *(float *)&a1[1]._.collisionMgr[2240] = v11;
    *(float *)&a2 = *(float *)&a3 + *(float *)&a1[1]._.collisionMgr[2244];
    LODWORD(a3) = -1004044288;
    *(_DWORD *)&a1[1]._.collisionMgr[2244] = LODWORD(a2);
    *(float *)&a1[1]._.collisionMgr[2248] = FIELD_U32(a1, 0x0)._.position.z;
    FIELD_U32(a1, 0x0)._.position.x = v11;
    LODWORD(FIELD_U32(a1, 0x0)._.position.y) = vmax_f32(*(float32x2_t *)&a2, *(float32x2_t *)&a3).n64_u32[0];
    v12 = 0;
    FIELD_U32(a1, 0x0)._.speed.z = 0.0;
    v13 = v11 - FIELD_U32(a1, 0x0)._.field_248.x;
    if ( v13 > 0.0 || (v12 = 1, v13 < 0.0) )
    {
      FIELD_U32(a1, 0x0)._.direction = v12;
      p_direction = &FIELD_U32(a1, 0x0)._.direction;
    }
    else
    {
      p_direction = &FIELD_U32(a1, 0x0)._.direction;
    }
    v15 = (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 628))(a1);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v15 + 1036))(v15, FIELD_U32(a1, 0x0)._.direction);
    v16 = *(_DWORD *)&a1[1]._.collisionMgr[204] - 1;
    *(_DWORD *)&a1[1]._.collisionMgr[204] = v16;
    if ( !v16 )
    {
      *(_DWORD *)&a1[1]._.collisionMgr[204] = 120;
      v17 = (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 628))(a1);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 1032))(v17) == 1 )
        (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 772))(a1);
    }
    collisionMgr = FIELD_U32(a1, 0x0).collisionMgr;
    CollisionMgr_process(FIELD_U32(a1, 0x0).collisionMgr);
    if ( (*(_DWORD *)&FIELD_U32(a1, 0x0).collisionMgr[2224] & 0x10400) == 0x400 )
      FIELD_U32(a1, 0x0)._.speed.y = 0.0;
    result = *p_direction;
    if ( (*(_DWORD *)&collisionMgr[4 * ((*p_direction + 18) >> 5) + 2224] & (1 << ((*(_BYTE *)p_direction + 18) & 0x1F))) != 0
      || (*(_DWORD *)&collisionMgr[4 * ((result + 22) >> 5) + 2224] & (1 << ((result + 22) & 0x1F))) != 0 )
    {
      v20 = result + 28;
      v21 = v20 >> 5;
      result = v20 & 0x1F;
      if ( (*(_DWORD *)&collisionMgr[4 * v21 + 2224] & (1 << result)) == 0 )
      {
        result = 0;
        FIELD_U32(a1, 0x0)._.speed.x = 0.0;
      }
    }
    return result;
  }
  sub_600D17F4((int)a1);
  if ( *(int *)&a1[1]._.collisionMgr[212] >= 0 )
    *(_DWORD *)((*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 628))(a1) + 7240) = *(_DWORD *)&a1[1]._.collisionMgr[212];
  v22 = 60;
  v23 = *(_DWORD *)&a1[1]._.collisionMgr[2152];
  v24 = (unsigned __int8)a1[1]._.collisionMgr[2577];
  v25 = (unsigned __int8)a1[1]._.collisionMgr[2520];
  v26 = &a1[1]._.collisionMgr[2160];
  v42 = *(_DWORD *)&a1[1]._.collisionMgr[2248];
  v27 = *(float *)&a1[1]._.collisionMgr[2240];
  v28 = *(float *)&a1[1]._.collisionMgr[2244];
  do
  {
    v29 = *(float *)((char *)&sinLutTable[2] + ((v23 >> 20) & 0xFF0))
        + (float)((float)((float)(v23 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[3] + ((v23 >> 20) & 0xFF0)))
                * 0.000000059605);
    if ( v25 )
    {
      if ( v24 )
      {
        v30 = *(_DWORD *)v26;
LABEL_35:
        v31 = v29 * -1.4;
        v32 = -12582912;
        v33 = -6291456;
        v34 = -(float)(*(float *)((char *)sinLutTable + ((v30 >> 20) & 0xFF0))
                     + (float)((float)((float)(v30 & 0xFFFFFF)
                                     * *(float *)((char *)&sinLutTable[1] + ((v30 >> 20) & 0xFF0)))
                             * 0.000000059605));
        goto LABEL_39;
      }
      v30 = *(_DWORD *)v26;
    }
    else
    {
      if ( v24 )
      {
        v30 = *(_DWORD *)v26;
        goto LABEL_35;
      }
      v30 = *(_DWORD *)v26;
    }
    v31 = v29 * 1.4;
    v33 = 6291456;
    v32 = 12582912;
    v34 = *(float *)((char *)sinLutTable + ((v30 >> 20) & 0xFF0))
        + (float)((float)((float)(v30 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v30 >> 20) & 0xFF0)))
                * 0.000000059605);
LABEL_39:
    v27 = v27 + (float)(v31 * 0.5);
    v28 = v28 + (float)(v34 * 0.7);
    v23 += v33;
    v35 = v30 + v32;
    --v22;
    *(_DWORD *)&a1[1]._.collisionMgr[2152] = v23;
    *(_DWORD *)v26 = v35;
  }
  while ( v22 );
  *(float *)&a1[1]._.collisionMgr[2252] = v27;
  *(float *)&a1[1]._.collisionMgr[2256] = v28;
  *(_DWORD *)&a1[1]._.collisionMgr[2260] = v42;
  if ( v28 <= -670.0 )
  {
    v28 = -670.0;
    *(_DWORD *)&a1[1]._.collisionMgr[2256] = -1004044288;
  }
  x = FIELD_U32(a1, 0x0)._.position.x;
  y = FIELD_U32(a1, 0x0)._.position.y;
  *(float *)&a1[1]._.collisionMgr[2296] = v27 - x;
  *(float *)&a1[1]._.collisionMgr[2300] = v28 - y;
  *(_DWORD *)&a1[1]._.collisionMgr[2156] = v23;
  *(_DWORD *)&a1[1]._.collisionMgr[2164] = v35;
  v38 = *(float *)&a1[1]._.collisionMgr[196];
  v39 = *(float *)&a1[1]._.collisionMgr[200];
  if ( x >= v39 )
  {
    if ( v38 >= x )
    {
      direction = FIELD_U32(a1, 0x0)._.direction;
      if ( direction >= 2 )
        direction = 0;
      *(_DWORD *)&a1[1]._.collisionMgr[72] = *(_DWORD *)&a1[1]._.collisionMgr[4 * direction + 196];
      *(_DWORD *)&a1[1]._.collisionMgr[76] = *(_DWORD *)&a1[1]._.collisionMgr[52];
    }
    else
    {
      *(float *)&a1[1]._.collisionMgr[72] = v39;
    }
  }
  else
  {
    *(float *)&a1[1]._.collisionMgr[72] = v38;
  }
  FIELD_U32(a1, 0x0)._.direction = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x0)._.position);
  v41 = (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 628))(a1);
  if ( v41 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v41 + 1036))(v41, FIELD_U32(a1, 0x0)._.direction);
  a1[1]._.collisionMgr[2576] = 0;
  return (*(int (__fastcall **)(StateActor *, int *))(FIELD_U32(a1, 0x0)._._.vtable + 192))(a1, &dword_60C86C48);
}
