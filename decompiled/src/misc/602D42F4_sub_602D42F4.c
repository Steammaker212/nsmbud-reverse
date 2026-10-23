/* sub_602D42F4
 * address: 0x602D42F4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_602D42F4(int a1)
{
  int v2; // r5
  _DWORD *v3; // r5
  int v4; // r6
  int ResArchiveById; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  __int64 result; // r0
  _DWORD v11[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v2 != (*(int (**)(void))(dword_60C91BE0 + 8))() )
  {
    v4 = a1 + 6856;
    v3 = *(_DWORD **)(a1 + 6856);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v11[0] = &sead__SafeStringBase__vtable;
    v11[1] = "walk";
    sub_60421938(v3, ResArchiveById, (int)v11);
    v6 = *(_DWORD *)(FIELD_U32(a1, 6856) + 12);
    v7 = *(_DWORD *)(FIELD_U32(a1, 6856) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6856) + 8) > v7 )
      v6 += 4 * v7;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 1);
    v8 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v9 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v9 )
      v8 += 4 * v9;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
    FIELD_U32(a1, 6664) = ((15 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32)
                           | 0x30;
  }
  result = dword_60AF2020[FIELD_U8(a1, 6672)];
  FIELD_U64(a1, 120) = result;
  return result;
}
