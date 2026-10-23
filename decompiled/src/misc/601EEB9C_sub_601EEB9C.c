/* sub_601EEB9C
 * address: 0x601EEB9C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601EEB9C(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r4
  float v4; // t1
  float v5; // r0
  _DWORD v6[3]; // [sp+4h] [bp-24h] BYREF
  Vec3 v7; // [sp+10h] [bp-18h] BYREF

  result = *(StateMethodExecuter **)(a1 + 376);
  if ( result )
  {
    FIELD_U32(a1, 376) = (char *)result - 1;
    if ( result == (StateMethodExecuter *)11 )
    {
      return (StateMethodExecuter *)sub_601E4C88((_DWORD *)dword_60C8B13C, 122, (_DWORD *)(a1 + 80));
    }
    else if ( result == (StateMethodExecuter *)1 )
    {
      return (StateMethodExecuter *)sub_601ECD14(a1, 3);
    }
  }
  else
  {
    result = (StateMethodExecuter *)sub_601860F8(a1);
    if ( result == (StateMethodExecuter *)1 )
    {
      v4 = FIELD_F32(a1, 80);
      v3 = a1 + 80;
      v7.x = v4;
      v5 = FIELD_F32(v3, 4);
      v7.z = FIELD_F32(v3, 8);
      v7.y = v5;
      v6[0] = 1065353216;
      v6[1] = 1065353216;
      v6[2] = 1065353216;
      EffectData_create(900, &v7, 0, (int)v6);
      sub_601E4C88((_DWORD *)dword_60C8B13C, 211, (_DWORD *)v3);
      return StateMgr__changeState((StateMgr *)(v3 + 220), (StateBase *)&dword_60C8B3EC);
    }
  }
  return result;
}
