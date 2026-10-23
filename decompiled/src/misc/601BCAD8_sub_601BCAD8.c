/* sub_601BCAD8
 * address: 0x601BCAD8   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601BCAD8(int a1)
{
  unsigned int v3; // r3
  char v4; // r0
  int v5; // r2
  int v6; // r1
  int v7; // r3
  int v8; // r7
  int v9; // r5
  int v10; // r10
  char v11; // r1
  char v12; // r9
  int v13; // r5
  int v14; // r8
  int v15; // r1

  if ( (FIELD_U32(a1, 264) | 1) == 7 )
  {
    if ( sub_603FD44C(dword_60C99DEC + 16) == 1 )
    {
      return (StateMethodExecuter *)sub_601BCD10(a1);
    }
    else
    {
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 132) = 0;
      FIELD_U32(a1, 136) = 0;
      FIELD_U8(a1, 216) |= 2u;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 128))(a1);
      v13 = (*(int (**)(void))(dword_60C8ABB0 + 8))();
      if ( v13 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(a1, 440) &= ~4u;
      return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)&dword_60C8ABB0);
    }
  }
  else
  {
    v3 = FIELD_U32(a1, 1476);
    v4 = 0;
    v5 = FIELD_U32(a1, 1472);
    if ( v3 >= 6 )
      v3 = 0;
    v6 = dword_60C99DEC + 72 * v3;
    v7 = FIELD_U32(v6, 48);
    v8 = FIELD_U8(v6, 36);
    FIELD_U32(a1, 1472) = v7;
    FIELD_U32(a1, 264) = v7;
    if ( v5 != v7 )
      FIELD_U32(a1, 1060) = 239;
    v9 = FIELD_U32(v6, 44);
    v10 = FIELD_U8(v6, 66);
    v11 = FIELD_U8(v6, 66);
    if ( v9 == 8 )
      v4 = 1;
    if ( v10 )
      v11 = 1;
    v12 = v4 | v11;
    if ( v8 )
    {
      sub_601BCD10(a1);
    }
    else
    {
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 132) = 0;
      FIELD_U32(a1, 136) = 0;
      FIELD_U8(a1, 216) |= 2u;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 128))(a1);
      v14 = (*(int (**)(void))(dword_60C8ABB0 + 8))();
      if ( v14 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(a1, 440) &= ~4u;
      StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)&dword_60C8ABB0);
    }
    sub_6078E608(*(_DWORD *)(*(_DWORD *)(a1 + 920 + 4 * FIELD_U32(a1, 1472)) + 12), v9);
    FIELD_U32(a1, 268) = v9;
    FIELD_U8(a1, 552) = (v8 != 0) & v12;
    v15 = **(_DWORD **)(*(_DWORD *)(a1 + 920 + 4 * FIELD_U32(a1, 1472)) + 4);
    if ( v10 )
      return (StateMethodExecuter *)(*(int (**)(void))(v15 + 156))();
    else
      return (StateMethodExecuter *)(*(int (**)(void))(v15 + 160))();
  }
}
