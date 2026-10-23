/* sub_601EF790
 * address: 0x601EF790   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601EF790(int a1)
{
  StateMethodExecuter *result; // r0
  float v3; // r1
  float v4; // r2
  _DWORD v5[3]; // [sp+4h] [bp-24h] BYREF
  Vec3 v6; // [sp+10h] [bp-18h] BYREF

  result = (StateMethodExecuter *)sub_601860F8(a1);
  if ( result == (StateMethodExecuter *)1 )
  {
    v3 = FIELD_F32(a1, 84);
    v4 = FIELD_F32(a1, 88);
    v6.x = FIELD_F32(a1, 80);
    v6.y = v3;
    v6.z = v4;
    v5[0] = 1065353216;
    v5[1] = 1065353216;
    v5[2] = 1065353216;
    EffectData_create(889, &v6, 0, (int)v5);
    return StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&unk_60C8B458);
  }
  return result;
}
