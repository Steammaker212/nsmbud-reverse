/* sub_6031D5E4
 * address: 0x6031D5E4   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031D5E4(int a1)
{
  int v2; // r4
  int v3; // r5
  unsigned int v4; // r1
  _BYTE *v5; // r6
  char v6; // r12
  int *v7; // r1
  int v8; // r9
  _DWORD *v9; // t1
  int ResArchiveById; // r0
  int v11; // r1
  unsigned int v12; // r0
  int result; // r0
  _DWORD v14[11]; // [sp+Ch] [bp-2Ch] BYREF

  v2 = 0;
  FIELD_U8(a1, 6136) = 0;
  v3 = a1 + 6336;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  do
  {
    v4 = *(_DWORD *)(v3 + 4 * v2);
    if ( v4 )
    {
      v5 = (_BYTE *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v4);
      if ( ((unsigned int)&dword_60C7B364 & ~(1613878916 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v5 && (**(int (__fastcall ***)(_BYTE *, int *))v5)(v5, &StageActor_RTTI) == 1 && !v5[6148] )
        (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v5 + 72))(v5);
    }
    ++v2;
  }
  while ( v2 != 4 );
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1077936128;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  v7 = dword_6031D810;
  if ( (FIELD_U8(a1, 87) & 1) != 0 )
    v7 = &dword_6031D810[1];
  FIELD_U32(a1, 116) = *v7;
  v9 = *(_DWORD **)(a1 + 7124);
  v8 = a1 + 7124;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v8 - 7112), 0);
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "pinch";
  sub_60421938(v9, ResArchiveById, (int)v14);
  v11 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  v12 = *(_DWORD *)(*(_DWORD *)v8 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v8 + 8) > v12 )
    v11 += 4 * v12;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
  result = **(_DWORD **)(*(_DWORD *)v8 + 20);
  FIELD_U32(result, 20) = 1065353216;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
