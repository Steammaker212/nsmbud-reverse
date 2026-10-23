/* sub_6072EC94
 * address: 0x6072EC94   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072EC94(int a1)
{
  float v2; // s16
  float v3; // r8
  int v4; // r5
  float v5; // s16
  _BYTE *v6; // r7
  char v7; // r12
  int v8; // r0
  _BYTE *v9; // r1
  int i; // r9
  _BYTE *v11; // r6
  char v12; // r12
  int v13; // r0
  _BYTE *v14; // r1
  int result; // r0
  ActorBuildInfo buildInfo; // [sp+18h] [bp-60h] BYREF

  v2 = FIELD_F32(dword_60CC6484, 124);
  v3 = FIELD_F32(dword_60CC6484, 112);
  memset(&buildInfo, 0, sizeof(buildInfo));
  v4 = 0;
  v5 = (float)((float)(v2 + -120.0) + -12.0) + -12.0;
  do
  {
    buildInfo.settings1 = 16;
    buildInfo.profile = Profile__get(0x33Eu);
    buildInfo.position.x = v3;
    buildInfo.position.y = v5;
    buildInfo.position.z = 0.0;
    v6 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
    if ( ((unsigned int)&dword_60CBD948 & ~(1618144656 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD948) )
    {
      dword_60CBD944 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CBD948);
    }
    if ( v6 )
    {
      v8 = (**(int (__fastcall ***)(_BYTE *, int *))v6)(v6, &dword_60CBD944);
      v9 = v6;
      if ( !v8 )
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    StateMgr__changeState((StateMgr *)(v9 + 6084), (StateBase *)&dword_60CBD9E4);
    *(_DWORD *)(a1 + 6116 + 4 * v4++) = *((_DWORD *)v6 + 2);
  }
  while ( v4 != 30 );
  for ( i = 0; i != 30; ++i )
  {
    buildInfo.settings1 = 17;
    buildInfo.profile = Profile__get(0x33Eu);
    buildInfo.position.x = v3;
    buildInfo.position.y = v5;
    buildInfo.position.z = 64.0;
    v11 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
    if ( ((unsigned int)&dword_60CBD948 & ~(1618144964 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD948) )
    {
      dword_60CBD944 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CBD948);
    }
    if ( v11 )
    {
      v13 = (**(int (__fastcall ***)(_BYTE *, int *))v11)(v11, &dword_60CBD944);
      v14 = v11;
      if ( !v13 )
        v14 = 0;
    }
    else
    {
      v14 = 0;
    }
    StateMgr__changeState((StateMgr *)(v14 + 6084), (StateBase *)&dword_60CBD9E4);
    result = *((_DWORD *)v11 + 2);
    *(_DWORD *)(a1 + 6236 + 4 * i) = result;
  }
  return result;
}
