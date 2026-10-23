/* sub_601ED458
 * address: 0x601ED458   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601ED458(int a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0
  _DWORD *v4; // r4
  int v5; // r4
  float v6; // t1
  float v7; // r0
  _DWORD v8[3]; // [sp+4h] [bp-2Ch] BYREF
  Vec3 v9; // [sp+10h] [bp-20h] BYREF

  v2 = FIELD_U32(a1, 376);
  if ( v2 )
  {
    result = (StateMethodExecuter *)(v2 - 1);
    FIELD_U32(a1, 376) = result;
    if ( !result )
    {
      v4 = (_DWORD *)(a1 + 80);
      sub_601E4C88((_DWORD *)dword_60C8B13C, 120, v4);
      return (StateMethodExecuter *)sub_601E4C88((_DWORD *)dword_60C8B13C, 142, v4);
    }
  }
  else
  {
    result = (StateMethodExecuter *)sub_601860F8(a1);
    if ( result == (StateMethodExecuter *)1 )
    {
      v6 = FIELD_F32(a1, 80);
      v5 = a1 + 80;
      v9.x = v6;
      v7 = FIELD_F32(v5, 4);
      v9.z = FIELD_F32(v5, 8);
      v9.y = v7;
      v8[0] = 1065353216;
      v8[1] = 1065353216;
      v8[2] = 1065353216;
      EffectData_create(889, &v9, 0, (int)v8);
      sub_601E4C88((_DWORD *)dword_60C8B13C, 208, (_DWORD *)v5);
      return StateMgr__changeState((StateMgr *)(v5 + 220), (StateBase *)&unk_60C8B284);
    }
  }
  return result;
}
