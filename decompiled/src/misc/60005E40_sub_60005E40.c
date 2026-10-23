/* sub_60005E40
 * address: 0x60005E40   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60005E40(int *a1, _BYTE *a2, unsigned __int16 *a3, int *a4, int a5)
{
  int v7; // r2
  float v8; // s16
  int *v9; // r0
  int v10; // r2
  int v11; // t1
  float v12; // s0
  int v13; // t1
  int v14; // t1
  int v15; // t1
  int v16; // r1
  float v17; // s2
  int v18; // r4
  int v19; // r1
  int v20; // r2
  int v21; // r3
  float v22; // s16
  int v23; // s20
  float v24; // s18
  unsigned __int16 v25; // r0
  _BYTE *v26; // r5
  char v27; // r12
  int result; // r0
  bool v29; // zf
  ActorBuildInfo buildInfo; // [sp+4h] [bp-5Ch] BYREF

  v7 = *((unsigned __int8 *)a3 + 17);
  if ( (a4[8] & 8) != 0 )
  {
    if ( v7 )
    {
      v8 = -3100.0;
      v13 = a1[7];
      v9 = a1 + 7;
      v10 = v13;
    }
    else
    {
      v8 = 400.0;
      v15 = a1[6];
      v9 = a1 + 6;
      v10 = v15;
    }
    v12 = -8.0;
  }
  else if ( v7 )
  {
    v8 = -2500.0;
    v11 = a1[5];
    v9 = a1 + 5;
    v10 = v11;
    v12 = 16.0;
  }
  else
  {
    v8 = 2200.0;
    v14 = a1[4];
    v9 = a1 + 4;
    v10 = v14;
    v12 = -16.0;
  }
  v16 = v10 + 1;
  if ( v10 > 28 )
    v16 = 0;
  v17 = (float)v10;
  *v9 = v16;
  v18 = *a4;
  v19 = a3[1];
  v20 = a3[2];
  v21 = a4[1];
  *(_DWORD *)&buildInfo.movementId = 0;
  *(_DWORD *)&buildInfo.field_20 = 0;
  buildInfo.field_1C = 0;
  v22 = v8 + (float)(v17 * v12);
  buildInfo.settings1 = *((_DWORD *)a3 + 2);
  v23 = v21 - v20;
  buildInfo.settings2 = *((_DWORD *)a3 + 3);
  buildInfo.movementId = *((_BYTE *)a3 + 18);
  buildInfo.linkId = *((_BYTE *)a3 + 19);
  buildInfo.initStateFlag = *((_BYTE *)a3 + 20);
  buildInfo.parentId = a5;
  v24 = (float)(v19 + v18);
  buildInfo.profile = Profile__get(SpriteToProfileTable[*a3]);
  buildInfo.position.x = v24;
  buildInfo.position.y = (float)v23;
  buildInfo.position.z = v22;
  buildInfo.field_20 = *((_BYTE *)a3 + 17);
  v25 = a3[3];
  *(_WORD *)&buildInfo.eventId1 = (unsigned __int8)v25;
  buildInfo.eventId2 = HIBYTE(v25);
  buildInfo.field_28 = (int)a2;
  v26 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  result = (unsigned __int8)*a2 | 3;
  *a2 = result;
  if ( v26 )
  {
    result = FIELD_U32(dword_60C99DD4, 764);
    v29 = result == 3;
    if ( result == 3 )
    {
      result = (unsigned __int8)v26[19];
      v29 = result == 0;
    }
    if ( v29 )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1610637264 << v27) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      result = (**(int (__fastcall ***)(_BYTE *, int *))v26)(v26, &StageActor_RTTI);
      if ( result == 1 )
      {
        v26[534] = 0;
        return 0;
      }
    }
  }
  return result;
}
