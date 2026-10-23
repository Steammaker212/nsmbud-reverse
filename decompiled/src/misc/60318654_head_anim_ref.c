/* head_anim_ref
 * address: 0x60318654   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall head_anim_ref(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  unsigned int v9; // r1
  int v10; // r5
  char v11; // r12
  int v12; // r0
  _DWORD *v13; // r3
  _DWORD v14[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (_DWORD *)(a1 + 6304);
  v2 = *(_DWORD **)(a1 + 6304);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "head_anim";
  sub_60421938(v2, ResArchiveById, (int)v14);
  v5 = *(_DWORD *)(*v3 + 12);
  v6 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*v3 + 12);
  v8 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  v9 = v3[26];
  if ( v9 )
  {
    v10 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v9);
    if ( ((unsigned int)&dword_60C93528 & ~(1613858612 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C93528) )
    {
      dword_60C93524 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C93528);
    }
    if ( v10 && (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C93524) == 1 )
    {
      v12 = FIELD_U32(a1, 80);
      v13 = dword_60AF1F60;
      FIELD_F32(a1, 108) = flt_60AF2080[v12] + FIELD_F32(a1, 108);
      FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -8.0;
      if ( !FIELD_U32(a1, 6392) )
        v13 = &unk_60AF2088;
      FIELD_U32(a1, 120) = v13[v12];
      FIELD_U32(a1, 124) = 0x40000000;
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 132) = 0;
      FIELD_U32(a1, 136) = -1065353216;
      FIELD_U32(a1, 140) = 0;
      FIELD_U32(a1, 160) = FIELD_U32(v10, 160);
      FIELD_U32(a1, 6396) = 0;
      FIELD_U32(a1, 100) = -1103101952;
      FIELD_U32(a1, 6400) = 83886080;
      if ( FIELD_U8(a1, 6412) )
      {
        FIELD_U32(a1, 6396) = 4;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        FIELD_U32(a1, 128) = 0;
        FIELD_U32(a1, 6400) = 0;
      }
    }
  }
}
