/* sub_6032E7AC
 * address: 0x6032E7AC   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032E7AC(int a1)
{
  unsigned int *v1; // r4
  _DWORD *v2; // r5
  unsigned int v3; // r7
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int *v9; // r1
  unsigned int v10; // r0
  int v11; // r0
  int result; // r0
  char v13; // r12
  int (__fastcall ***v14)(_DWORD, int *); // r4
  int v15; // r6
  bool v16; // zf
  _DWORD v17[8]; // [sp+0h] [bp-20h] BYREF

  v1 = (unsigned int *)(a1 + 6300);
  v2 = *(_DWORD **)(a1 + 6300);
  v3 = FIELD_U32(a1, 160);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v17[0] = &sead__SafeStringBase__vtable;
  v17[1] = off_60BEC290[v3 >> 31];
  sub_60421938(v2, ResArchiveById, (int)v17);
  v5 = *(_DWORD *)(*v1 + 12);
  v6 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
  v7 = *(_DWORD *)(*v1 + 12);
  v8 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  v9 = *(int **)(*v1 + 12);
  v10 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v10 )
    v9 += v10;
  v11 = *v9;
  FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  *(v1 - 1545) = 0;
  *(v1 - 1544) = 0;
  *(v1 - 1543) = 0;
  result = ActorMgrRelated_getById(ActorMgr__instance + 27168, v1[202]);
  v14 = (int (__fastcall ***)(_DWORD, int *))result;
  if ( result )
  {
    if ( ((unsigned int)dword_60C8F0A4 & ~(1613949168 << v13) & 1) == 0 && _cxa_guard_acquire(dword_60C8F0A4) )
    {
      dword_60C8F0A0 = (int)&off_60BC04AC;
      _cxa_guard_release(dword_60C8F0A4);
    }
    v15 = (int)(v14 + 4137);
    v16 = (**v14)(v14, &dword_60C8F0A0) == 0;
    result = 1;
    if ( v16 )
      v15 = 16548;
    *(_BYTE *)v15 = 1;
  }
  return result;
}
