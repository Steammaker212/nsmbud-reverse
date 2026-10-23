/* Lava_onCreate
 * address: 0x605A7D68   size: 888   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Lava_onCreate(MultiStateActor *a1)
{
  int v2; // r1
  signed int result; // r0
  int settings1; // r0
  int v5; // r5
  float v6; // s2
  float v7; // s0
  int v8; // s6
  float v9; // s2
  int v10; // r3
  int v11; // r1
  StateBase *CurrentState; // r0
  int v13; // r5
  unsigned int settigns2; // r0

  v2 = ((int (*)(void))TerrainActor_initLocation)();
  result = 2;
  if ( v2 == 1 )
  {
    ++FIELD_U32(EnemyCounterMaybe_instance, 32);
    if ( (FIELD_U32(a1, 0x18) & 0x10000000) != 0 )
      a1[1]._.collisionMgr[143] = 1;
    settings1 = FIELD_U32(a1, 0x14);
    if ( (settings1 & 0x800) == 0 )
    {
      *(float *)&a1[1]._.collisionMgr[104] = *(float *)&a1[1]._.collisionMgr[104] - 8.0;
      a1[1]._.collisionMgr[142] = 1;
      sub_60002B50((int)&a1[0xB]._.collisionMgr[0x1170]);
      settings1 = FIELD_U32(a1, 0x14);
    }
    v5 = settings1 & 0x400;
    if ( *(_DWORD *)&a1[1]._.collisionMgr[84] == 1 )
    {
      v6 = *(float *)&a1[1]._.collisionMgr[104];
      v7 = *(float *)&a1[1]._.collisionMgr[100];
      *(float *)&v8 = v6 * -0.5;
      v9 = v6 + 48.0;
      FIELD_F32(a1, 0x1EC) = v7 * 0.5;
      FIELD_U32(a1, 0x1F0) = v8;
      FIELD_F32(a1, 0x1F4) = v7;
      FIELD_F32(a1, 0x1F8) = v9;
      FIELD_F32(a1, 0x1FC) = v7;
      *(float *)&FIELD_U32(a1, 0x200) = v9;
      ColliderBase_setType((ColliderBase *)&a1[1]._._._.field_20, 20);
      ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)&a1[1]._._._.field_20);
      a1[1]._.collisionMgr[141] = 1;
      if ( a1[1]._.collisionMgr[142] )
        TerrainEffects_init((int)&a1[1]._.collisionMgr[0x94], 0, v5 != 0, 1, *(void **)&a1[0xB]._.collisionMgr[0x1180]);
    }
    else
    {
      *(_DWORD *)&a1[1]._.collisionMgr[120] = 1077936128;
      sub_605A5114(*(float *)&a1[1]._.collisionMgr[92] + -3.0);
      FIELD_U32(TileMgr_instance, 0x2824) = 3;
      if ( a1[1]._.collisionMgr[0x8E] )
      {
        if ( (FIELD_U32(a1, 0x18) & 1) != 0 )
          v10 = 3;
        else
          v10 = 1;
        TerrainEffects_init((int)&a1[1]._.collisionMgr[0x94], 1, v5 != 0, v10, *(void **)&a1[11]._.collisionMgr[4480]);
      }
      sub_605A512C((int)a1, *(float *)&a1[1]._.collisionMgr[92] - *(float *)&a1[1]._.collisionMgr[120]);
    }
    v11 = 0;
    if ( (FIELD_U32(a1, 0x14) & 0x100) != 0 )
    {
      v11 = 1;
      FIELD_U8(dword_60CBD830, 1509) = 1;
    }
    sub_605A51B0((int)a1, v11);
    CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
    v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v13 == (*(int (**)(void))(dword_60CAFEE8 + 8))() )
      sub_605A512C((int)a1, *(float *)&a1[1]._.collisionMgr[0x5C]);
    sub_605A53E4((int)a1);
    Lava_onCreate_helper(a1);
    ((void (__fastcall *)(MultiStateActor *))loc_605A4EAC)(a1);
    (*(void (__fastcall **)(MultiStateActor *))(FIELD_U32(a1, 0x0) + 204))(a1);
    sub_605A8604(a1);
    if ( a1[1]._.collisionMgr[0x8E] )
    {
      settigns2 = FIELD_U32(a1, 0x18);
      if ( (settigns2 & 1) != 0 )
      {
        TerrainEffects_setWaveValues(
          (int)&a1[1]._.collisionMgr[0x94],
          (unsigned __int8)settigns2 >> 4,
          HIWORD(settigns2) & 0xF,
          (settigns2 >> 8) & 0xF,
          (settigns2 >> 20) & 0xF,
          (unsigned __int16)settigns2 >> 12,
          HIBYTE(settigns2) & 0xF);
        a1[1]._.collisionMgr[140] = 1;
      }
      TerrainEffects_update((int)&a1[1]._.collisionMgr[0x94]);
    }
    FIELD_U32(a1, 0x4C) |= 2u;
    FIELD_F32(EnemyCounterMaybe_instance, 0x3AC) = FIELD_F32(a1, 0x70);
    return 1;
  }
  return result;
}
