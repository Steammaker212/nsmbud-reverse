/* sub_604EF33C
 * address: 0x604EF33C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EF33C(int a1)
{
  int *v2; // r1
  int v3; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r0
  StateMethodExecuter *result; // r0
  int a5[3]; // [sp+0h] [bp-20h] BYREF
  Vec3 v10; // [sp+Ch] [bp-14h] BYREF

  v2 = (int *)(a1 + 74468);
  v3 = FIELD_U32(a1, 74468) + 1;
  *v2 = v3;
  if ( v3 == 45 )
  {
    v4 = FIELD_U32(a1, 74464);
    v5 = 0;
    if ( (unsigned int)(2 * v4) < 0x14 )
      v5 = 2 * v4;
    v6 = *(_DWORD *)(a1 + 4 * v5 + 74360);
    v10.z = 0.0;
    v10.x = FIELD_F32(v6, 92);
    v10.y = FIELD_F32(v6, 108);
    a5[0] = 1065353216;
    a5[1] = 1065353216;
    a5[2] = 1065353216;
    if ( FIELD_U8(dword_60CC6D78, 20) )
      v7 = 1212;
    else
      v7 = 749;
    EffectData_create(v7, &v10, 0, (int)a5);
    sub_60402084(dword_60C99E68, FIELD_U32(a1, 47124));
  }
  sub_604F39D8(a1);
  result = (StateMethodExecuter *)sub_6047EF24(a1 + 46128, FIELD_U32(a1, 47116));
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 42504), &stru_60CA6480);
  return result;
}
