/* sub_601CF2A4
 * address: 0x601CF2A4   size: 1220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CF2A4(_DWORD *a1)
{
  _BYTE *v1; // r6
  char v2; // r12
  _BYTE *v3; // r5
  char v4; // r12
  int v5; // r7
  _BYTE *v6; // r5
  char v7; // r12
  int v8; // r6
  _BYTE *v9; // r7
  char v10; // r12
  int v11; // r5
  int v12; // r7
  int v13; // r8
  int v14; // r9
  int v15; // r10
  _BYTE *v16; // r0
  int v17; // r1
  ActorBuildInfo buildInfo; // [sp+8h] [bp-50h] BYREF

  memset(&buildInfo.settings2, 0, 40);
  buildInfo.profile = Profile__get(0x357u);
  memset(&buildInfo.position, 0, 16);
  buildInfo.settings1 = dword_60AFD030[FIELD_U32(dword_60C99DEC, 48)];
  v1 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  if ( ((unsigned int)&dword_60C88AB8 & ~(1612510024 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB8) )
  {
    dword_60C88AB4 = (int)&off_60BD4BA4;
    _cxa_guard_release(&dword_60C88AB8);
  }
  if ( !(**(int (__fastcall ***)(_BYTE *, int *))v1)(v1, &dword_60C88AB4) )
    v1 = 0;
  a1[5] = *((_DWORD *)v1 + 2);
  *((_DWORD *)v1 + 69) = 0;
  buildInfo.profile = Profile__get(0x358u);
  memset(&buildInfo.position, 0, 16);
  buildInfo.settings1 = 1;
  v3 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  if ( ((unsigned int)&dword_60C88AB8 & ~(1612510244 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB8) )
  {
    dword_60C88AB4 = (int)&off_60BD4BA4;
    _cxa_guard_release(&dword_60C88AB8);
  }
  v5 = 0;
  if ( v3 )
  {
    v5 = (**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &dword_60C88AB4);
    if ( v5 )
      v5 = (int)v3;
  }
  *((_DWORD *)v1 + 68) = v5;
  FIELD_U32(v5, 276) = v1;
  buildInfo.profile = Profile__get(0x358u);
  memset(&buildInfo.position, 0, 16);
  buildInfo.settings1 = 2;
  v6 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  if ( ((unsigned int)&dword_60C88AB8 & ~(1612510464 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB8) )
  {
    dword_60C88AB4 = (int)&off_60BD4BA4;
    _cxa_guard_release(&dword_60C88AB8);
  }
  v8 = 0;
  if ( v6 )
  {
    v8 = (**(int (__fastcall ***)(_BYTE *, int *))v6)(v6, &dword_60C88AB4);
    if ( v8 )
      v8 = (int)v6;
  }
  FIELD_U32(v5, 272) = v8;
  FIELD_U32(v8, 276) = v5;
  buildInfo.profile = Profile__get(0x358u);
  memset(&buildInfo.position, 0, 16);
  buildInfo.settings1 = 3;
  v9 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  if ( ((unsigned int)&dword_60C88AB8 & ~(1612510684 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB8) )
  {
    dword_60C88AB4 = (int)&off_60BD4BA4;
    _cxa_guard_release(&dword_60C88AB8);
  }
  v11 = 0;
  if ( v9 )
  {
    v11 = (**(int (__fastcall ***)(_BYTE *, int *))v9)(v9, &dword_60C88AB4);
    if ( v11 )
      v11 = (int)v9;
  }
  FIELD_U32(v8, 272) = v11;
  FIELD_U32(v11, 272) = 0;
  FIELD_U32(v11, 276) = v8;
  v12 = dword_60CC6D78;
  buildInfo.profile = Profile__get(0x359u);
  v13 = 0;
  v14 = 0;
  memset(&buildInfo.position, 0, 16);
  do
  {
    v15 = FIELD_U32(v12, 528);
    if ( v14 == v15 || (FIELD_U8(v12, 525) & (unsigned __int8)(1 << v14)) != 0 )
    {
      buildInfo.settings1 = v13 | ((v14 == v15) << 16) | dword_60AF2414[v14];
      v16 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
      if ( v14 == v15 )
      {
        FIELD_U32(v11, 272) = v16;
        *((_DWORD *)v16 + 68) = 0;
        *((_DWORD *)v16 + 69) = v11;
      }
      else
      {
        v17 = a1[6];
        if ( v17 < a1[7] )
        {
          *(_DWORD *)(a1[8] + 4 * v17) = v16;
          ++a1[6];
        }
      }
    }
    ++v14;
    v13 += 256;
  }
  while ( v14 != 4 );
  return sub_601CF80C(a1);
}
