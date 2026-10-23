/* BGM_anim_ref
 * address: 0x602CF7C4   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall BGM_anim_ref(int a1)
{
  _DWORD *result; // r0
  int v3; // t1
  int ResArchiveById; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r6
  int v12; // r0
  int (**v13)(); // [sp+0h] [bp-30h] BYREF
  const char *v14; // [sp+4h] [bp-2Ch]

  v3 = FIELD_U32(a1, 6576);
  result = (_DWORD *)(a1 + 6576);
  if ( v3 != 2 )
  {
    *result = 2;
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v13 = &sead__SafeStringBase__vtable;
    v14 = "BGM_anim_head";
    sub_602D1D84(a1 + 6316, &v13, ResArchiveById, 0, 4.0, 1.0);
    v5 = FIELD_U32(a1, 6436);
    v6 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v13 = &sead__SafeStringBase__vtable;
    v14 = "BGM_anim_body_01";
    sub_602D1D84(v5, &v13, v6, 0, 4.0, 1.0);
    v7 = FIELD_U32(v5, 120);
    v8 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v13 = &sead__SafeStringBase__vtable;
    v14 = "BGM_anim_body_02";
    sub_602D1D84(v7, &v13, v8, 0, 4.0, 1.0);
    v9 = FIELD_U32(v7, 120);
    v10 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v13 = &sead__SafeStringBase__vtable;
    v14 = "BGM_anim_body_03";
    sub_602D1D84(v9, &v13, v10, 0, 4.0, 1.0);
    v11 = FIELD_U32(v9, 120);
    v12 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v13 = &sead__SafeStringBase__vtable;
    v14 = "BGM_anim_body_04";
    return (_DWORD *)sub_602D1D84(v11, &v13, v12, 0, 4.0, 1.0);
  }
  return result;
}
