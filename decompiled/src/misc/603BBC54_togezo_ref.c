/* togezo_ref
 * address: 0x603BBC54   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall togezo_ref(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r0
  int v6; // r1
  int v7; // s0
  _DWORD *v8; // r7
  int v9; // r5
  int v10; // r5
  int v11; // r5
  int v12; // r5
  int Resource; // r0
  _DWORD v15[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v16[8]; // [sp+8h] [bp-20h] BYREF

  v4 = FIELD_U32(a1, 6352);
  v2 = (_DWORD *)(a1 + 6352);
  v3 = v4;
  if ( v4 != 1 )
  {
    FIELD_U32(a1, 6356) = v3;
    *v2 = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  v5 = FIELD_U32(a1, 80);
  v6 = 786432000;
  FIELD_U32(a1, 156) = 0;
  if ( v5 == 1 )
    v6 = -786432000;
  FIELD_U32(a1, 160) = v6;
  v7 = byte_60AFE3F4[v5];
  FIELD_U32(a1, 164) = 0;
  FIELD_F32(a1, 120) = (float)v7 * 0.5;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 136) = -1065353216;
  v8 = (_DWORD *)(a1 + 6096);
  v9 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v9 != (*(int (**)(void))(dword_60C98390 + 8))() )
  {
    v10 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v8 + 8))(*v8);
    if ( v10 != (*(int (**)(void))(dword_60C97768 + 8))() )
    {
      v11 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v8 + 8))(*v8);
      if ( v11 != (*(int (**)(void))(dword_60C9778C + 8))() )
      {
        v12 = **(_DWORD **)(FIELD_U32(a1, 6824) + 12);
        v16[0] = &sead__SafeStringBase__vtable;
        v16[1] = "togezo";
        Resource = LoadResource(ResourceMgrRelated_instance, v16);
        v15[0] = &sead__SafeStringBase__vtable;
        v15[1] = "walk";
        SkeletalAnim_play(v12, Resource, (int)v15);
      }
    }
  }
  FIELD_U8(a1, 6840) = 0;
  return 6840;
}
