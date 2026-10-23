/* sub_602104B4
 * address: 0x602104B4   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602104B4(int a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0
  float *v4; // r0
  float v5; // s6
  float v6; // s2
  float v7; // s8
  float v8; // s10
  float v9; // s4
  float v10; // s16
  float v11[3]; // [sp+0h] [bp-30h] BYREF
  float v12[2]; // [sp+Ch] [bp-24h] BYREF
  float v13; // [sp+14h] [bp-1Ch]

  v2 = FIELD_U32(a1, 416);
  if ( v2 < 1 )
  {
    v10 = FIELD_F32(a1, 120);
    result = (StateMethodExecuter *)sub_601860F8(a1);
    if ( v10 >= 0.0 && FIELD_F32(a1, 120) < 0.0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C8CE80);
    }
  }
  else
  {
    result = (StateMethodExecuter *)(v2 - 1);
    FIELD_U32(a1, 416) = result;
    if ( !result )
    {
      sub_601E4C88((_DWORD *)dword_60C8B13C, 206, (_DWORD *)(a1 + 80));
      v4 = (float *)sub_601CF9C0(dword_60C8AEF0);
      v5 = v4[20];
      v6 = FIELD_F32(a1, 84);
      v7 = v4[21];
      v8 = v4[22];
      v9 = FIELD_F32(a1, 88);
      v11[0] = FIELD_F32(a1, 80);
      v12[0] = v5 - v11[0];
      v12[1] = v7 - v6;
      v13 = v8 - v9;
      v11[1] = (float)(v6 + 30.0) + 50.0;
      v11[2] = v9;
      ((void (__fastcall *)(int, float *, void *, float *))loc_60186074)(a1, v11, &unk_60AFD370, v12);
      result = (StateMethodExecuter *)sub_6000F7B8(v12[0], v13);
      FIELD_U32(a1, 180) = result;
      FIELD_U32(a1, 192) = result;
    }
  }
  return result;
}
