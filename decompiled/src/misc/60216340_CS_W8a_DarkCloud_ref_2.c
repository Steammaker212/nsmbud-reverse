/* CS_W8a_DarkCloud_ref_2
 * address: 0x60216340   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall CS_W8a_DarkCloud_ref_2(int a1, int a2, float a3)
{
  char v3; // r12
  int Resource; // r7
  __guard *v8; // r6
  int v9; // r9
  int v10; // r0
  unsigned int v11; // r1
  _DWORD **v12; // r0
  int v13; // r0
  unsigned int v14; // r1
  int v15; // r0
  int v16; // r0
  unsigned int v17; // r1
  int v18; // r0
  _DWORD v19[12]; // [sp+0h] [bp-30h] BYREF

  if ( ((unsigned int)dword_60C8D260 & ~(1612800872 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C8D260) )
  {
    dword_60C8D268 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D26C = (int)"CS_W8a_DarkCloud";
    dword_60C8D270 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D274 = (int)"CS_W8a_DarkCloud_Demo1";
    dword_60C8D278 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D27C = (int)"CS_W8a_DarkCloud_Demo1After";
    dword_60C8D280 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D284 = (int)"CS_W8a_DarkCloud_Demo2";
    sub_60000288();
    _cxa_guard_release(dword_60C8D260);
  }
  if ( ((unsigned int)&dword_60C8D260[1] & ~(1612801032 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D260[1]) )
  {
    dword_60C8D288 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D28C = (int)&byte_60ABC94D;
    dword_60C8D290 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D294 = (int)"CS_W8a_DarkCloud_Demo1";
    dword_60C8D298 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D29C = (int)"CS_W8a_DarkCloud_Demo1After";
    dword_60C8D2A0 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D2A4 = (int)"CS_W8a_DarkCloud_Demo2";
    sub_60000288();
    _cxa_guard_release(&dword_60C8D260[1]);
  }
  v19[0] = &sead__SafeStringBase__vtable;
  v19[1] = "CS_W8a";
  Resource = LoadResource(ResourceMgrRelated_instance, v19);
  v8 = &dword_60C8D260[2 * a2];
  SkeletalAnim_play(**(_DWORD **)(FIELD_U32(a1, 276) + 12), Resource, (int)(v8 + 2));
  *(float *)(**(_DWORD **)(FIELD_U32(a1, 276) + 12) + 24) = a3;
  v9 = dword_60AF2454[a2];
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 276) + 12) + 4), v9);
  sub_60446088(**(_DWORD **)(FIELD_U32(a1, 276) + 28), Resource, (int)(v8 + 2));
  *(float *)(**(_DWORD **)(FIELD_U32(a1, 276) + 28) + 24) = a3;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 276) + 28) + 4), v9);
  if ( *(_BYTE *)v8[11] )
  {
    v10 = FIELD_U32(a1, 276);
    v11 = FIELD_U32(v10, 24);
    v12 = *(_DWORD ***)(v10 + 28);
    if ( v11 > 1 )
      ++v12;
    ShuAnim_play(*v12, Resource, (int)&dword_60C8D260[2 * a2 + 10]);
    v13 = FIELD_U32(a1, 276);
    v14 = FIELD_U32(v13, 24);
    v15 = FIELD_U32(v13, 28);
    if ( v14 > 1 )
      v15 += 4;
    *(float *)(*(_DWORD *)v15 + 24) = a3;
    v16 = FIELD_U32(a1, 276);
    v17 = FIELD_U32(v16, 24);
    v18 = FIELD_U32(v16, 28);
    if ( v17 > 1 )
      v18 += 4;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v18 + 4), v9);
  }
}
