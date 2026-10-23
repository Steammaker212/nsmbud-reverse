/* wait_long_ref_2
 * address: 0x606ED404   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall wait_long_ref_2(int *a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r1
  const char *v5; // r0
  int v6; // r0
  int v7; // r5
  int v8; // r1
  const char *v9; // r0
  int v10; // r0
  int (**v11)(); // [sp+0h] [bp-20h] BYREF
  const char *v12; // [sp+4h] [bp-1Ch]
  int (**v13)(); // [sp+8h] [bp-18h] BYREF
  const char *v14; // [sp+Ch] [bp-14h]

  if ( *((_BYTE *)a1 + 84) )
  {
    result = *a1;
    if ( (*(_BYTE *)(**(_DWORD **)(*a1 + 12) + 28) & 0x10) != 0 )
    {
      *((_WORD *)a1 + 42) = 0;
      v3 = **(_DWORD **)(result + 12);
      if ( *((_BYTE *)a1 + 86) )
      {
        v13 = &sead__SafeStringBase__vtable;
        v14 = "lift_trampoline";
        v4 = LoadResource(ResourceMgrRelated_instance, &v13);
        v11 = &sead__SafeStringBase__vtable;
        v5 = "wait_long";
      }
      else
      {
        v13 = &sead__SafeStringBase__vtable;
        v14 = "lift_trampoline";
        v4 = LoadResource(ResourceMgrRelated_instance, &v13);
        v11 = &sead__SafeStringBase__vtable;
        v5 = "wait";
      }
      v12 = v5;
      SkeletalAnim_play(v3, v4, (const char **)&v11);
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*a1 + 12) + 4), 1);
      v6 = **(_DWORD **)(*a1 + 12);
      FIELD_U32(v6, 20) = 0;
      FIELD_U32(v6, 28) |= 2u;
      *(_DWORD *)(**(_DWORD **)(*a1 + 12) + 24) = 1065353216;
      v7 = a1[1];
      if ( *((_BYTE *)a1 + 86) )
      {
        v13 = &sead__SafeStringBase__vtable;
        v14 = "lift_trampoline";
        v8 = LoadResource(ResourceMgrRelated_instance, &v13);
        v11 = &sead__SafeStringBase__vtable;
        v9 = "wait_long";
      }
      else
      {
        v13 = &sead__SafeStringBase__vtable;
        v14 = "lift_trampoline";
        v8 = LoadResource(ResourceMgrRelated_instance, &v13);
        v11 = &sead__SafeStringBase__vtable;
        v9 = "wait";
      }
      v12 = v9;
      TexAnim_play(v7, v8, &v11);
      AnimationCtrl_setRepeat((ModelAnimation *)(a1[1] + 4), 1);
      v10 = a1[1];
      FIELD_U32(v10, 20) = 0;
      FIELD_U32(v10, 28) |= 2u;
      result = a1[1];
      FIELD_U32(result, 24) = 1065353216;
    }
  }
  else
  {
    result = *(unsigned __int8 *)(a1[1] + 28);
    if ( (result & 0x10) != 0 )
    {
      result = 0;
      *((_BYTE *)a1 + 85) = 0;
    }
  }
  return result;
}
