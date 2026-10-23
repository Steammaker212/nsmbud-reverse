/* togezo_ref_3BC9D0
 * address: 0x603BC9D0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall togezo_ref_3BC9D0(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r5
  int v6; // r5
  int Resource; // r0
  int result; // r0
  _DWORD v9[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v10[6]; // [sp+8h] [bp-18h] BYREF

  v4 = FIELD_U32(a1, 6352);
  v2 = (_DWORD *)(a1 + 6352);
  v3 = v4;
  if ( v4 != 1 )
  {
    FIELD_U32(a1, 6356) = v3;
    *v2 = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  v5 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v5 == (*(int (**)(void))(dword_60C983B0 + 8))() )
  {
    v6 = **(_DWORD **)(FIELD_U32(a1, 6824) + 12);
    v10[0] = &sead__SafeStringBase__vtable;
    v10[1] = "togezo";
    Resource = LoadResource(ResourceMgrRelated_instance, v10);
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = "walk";
    SkeletalAnim_play(v6, Resource, (int)v9);
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 128) = 0;
  result = FIELD_U32(a1, 80) ^ 1;
  FIELD_U32(a1, 80) = result;
  return result;
}
