/* sub_602E7388
 * address: 0x602E7388   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602E7388(int a1)
{
  float *v2; // r5
  StateMethodExecuter *result; // r0
  bool v4; // zf
  float v5; // s0
  float v6; // s0
  float v7; // r0
  StateMgr *v8; // r0
  StateBase *v9; // r1
  StateMethodExecuter *v10; // [sp+8h] [bp-20h] BYREF
  float v11; // [sp+Ch] [bp-1Ch] BYREF
  float v12; // [sp+10h] [bp-18h]
  int v13; // [sp+14h] [bp-14h]

  v2 = (float *)(a1 + 7432);
  ((void (__fastcall *)(StateMethodExecuter **, int, int, int, _DWORD))physics_21893E8)(
    &v10,
    a1 + 7432,
    a1 + 7504,
    a1 + 108,
    FIELD_U8(a1, 86));
  result = v10;
  v4 = v10 == (StateMethodExecuter *)4;
  FIELD_U32(a1, 7520) = v10;
  if ( v4 )
  {
    if ( *v2 < (float)(FIELD_F32(a1, 112) + 4.0) )
      return result;
    *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 1;
    sub_602F4160();
    FIELD_U32(a1, 124) = -1052770304;
    v9 = (StateBase *)&unk_60C92604;
    v8 = (StateMgr *)(a1 + 6084);
    return StateMgr__changeState(v8, v9);
  }
  if ( result == (StateMethodExecuter *)3 )
  {
    v5 = FIELD_F32(a1, 112);
    if ( *v2 >= (float)(v5 + 4.0) )
    {
      FIELD_U32(a1, 124) = -1052770304;
      v6 = v5 + FIELD_F32(a1, 576);
      v11 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
      v12 = v6;
      sub_602F32F8(a1 + 6784, &v11, 7, 0);
      v7 = *v2;
      v11 = FIELD_F32(a1, 108);
      v12 = v7;
      v13 = 1170939904;
      (*(void (__fastcall **)(int, float *))(*(_DWORD *)a1 + 112))(a1, &v11);
      v8 = (StateMgr *)(a1 + 6084);
      v9 = (StateBase *)&unk_60C925E4;
      return StateMgr__changeState(v8, v9);
    }
  }
  return result;
}
