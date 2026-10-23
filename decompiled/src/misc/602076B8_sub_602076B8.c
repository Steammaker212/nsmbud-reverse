/* sub_602076B8
 * address: 0x602076B8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602076B8(int a1)
{
  int result; // r0
  int v3; // r4
  float v4; // t1
  float v5; // r0
  _DWORD *v6; // r0
  int v7; // r1
  _DWORD v8[2]; // [sp+4h] [bp-34h] BYREF
  _DWORD v9[3]; // [sp+Ch] [bp-2Ch] BYREF
  Vec3 v10; // [sp+18h] [bp-20h] BYREF

  result = sub_601860F8(a1);
  if ( result == 1 )
  {
    v4 = FIELD_F32(a1, 80);
    v3 = a1 + 80;
    v10.x = v4;
    v5 = FIELD_F32(v3, 4);
    v10.z = FIELD_F32(v3, 8);
    v10.y = v5;
    v9[0] = 1065353216;
    v9[1] = 1065353216;
    v9[2] = 1065353216;
    EffectData_create(1125, &v10, 0, (int)v9);
    sub_601E4C88((_DWORD *)dword_60C8B13C, 136, (_DWORD *)v3);
    v6 = *(_DWORD **)(v3 + 188);
    v7 = FIELD_U32(v3, 192);
    v8[0] = &sead__SafeStringBase__vtable;
    v8[1] = "wait";
    sub_60421938(v6, v7, (int)v8);
    StateMgr__changeState((StateMgr *)(v3 + 216), (StateBase *)&unk_60C8C750);
    return sub_601E4C88((_DWORD *)dword_60C8B13C, 136, (_DWORD *)v3);
  }
  return result;
}
