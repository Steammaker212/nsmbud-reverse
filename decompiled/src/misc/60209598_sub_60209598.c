/* sub_60209598
 * address: 0x60209598   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60209598(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  int v4; // r0
  int ResArchiveById; // r0
  _DWORD *v6; // r0
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r0
  _DWORD *v10; // r0
  int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r0
  int a5[4]; // [sp+0h] [bp-10h] BYREF

  result = (StateMethodExecuter *)FIELD_U8(dword_60C8996C, 1385);
  if ( FIELD_U8(dword_60C8996C, 1385) )
  {
    result = (StateMethodExecuter *)sub_60185D08((Actor *)a1);
    if ( result == (StateMethodExecuter *)1 )
    {
      if ( sub_601916EC(dword_60C8996C) == 32 )
      {
        v3 = sub_601CF9C0(dword_60C8AEF0);
        v4 = sub_608332B0(a1 + 80, v3 + 80);
        FIELD_U32(a1, 520) = v4;
        FIELD_U32(a1, 192) = v4;
        FIELD_U32(a1, 180) = v4;
        a5[0] = (int)&sead__SafeStringBase__vtable;
        a5[1] = (int)"walk";
        ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
        sub_60421938(*(_DWORD **)(a1 + 408), ResArchiveById, (int)a5);
        v6 = *(_DWORD **)(a1 + 408);
        v7 = v6[3];
        v8 = v6[2];
        v9 = v6[17];
        if ( v8 > v9 )
          v7 += 4 * v9;
        *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
        v10 = *(_DWORD **)(a1 + 408);
        v11 = v10[3];
        v12 = v10[2];
        v13 = v10[17];
        if ( v12 > v13 )
          v11 += 4 * v13;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
      }
      return StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8CA04);
    }
  }
  return result;
}
