/* sub_60487AC8
 * address: 0x60487AC8   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60487AC8(int a1)
{
  char v1; // r12
  unsigned int *v3; // r6
  unsigned int v4; // r1
  StateMethodExecuter *result; // r0
  unsigned int v6; // r1
  int v7; // r5
  unsigned int v8; // r1
  int v9; // r0
  unsigned int v10; // r2
  StateMethodExecuter **v11; // r0
  int v12; // r0
  StateBase *v13; // r1
  unsigned int a5; // [sp+0h] [bp-18h]
  _BYTE v15[20]; // [sp+4h] [bp-14h] BYREF

  v3 = (unsigned int *)(a1 + 14228);
  a5 = FIELD_U32(a1, 14228);
  if ( ((unsigned int)dword_60C9FD78 & ~(1615362808 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C9FD78) )
  {
    unk_60C9FE0C = 0;
    unk_60C9FE10 = 1;
    unk_60C9FE14 = 2;
    unk_60C9FE18 = 3;
    _cxa_guard_release(dword_60C9FD78);
  }
  v4 = a5;
  result = 0;
  if ( a5 >= 4 )
    v4 = 0;
  v6 = dword_60C9FDD0[v4 + 15];
  v7 = FIELD_U32(a1, 3548);
  if ( FIELD_U32(a1, 3544) > v6 )
    v7 += 20 * v6;
  if ( FIELD_U8(v7, 16) )
  {
    v8 = FIELD_U32(a1, 14232);
    if ( v8 < 4 )
      result = *(StateMethodExecuter **)(a1 + 14232);
    v9 = *(_DWORD *)(a1 + 4 * (_DWORD)result + 13800);
    v10 = FIELD_U32(v9, 3508);
    v11 = *(StateMethodExecuter ***)(v9 + 3512);
    if ( v10 > 4 )
      v11 += 20;
    result = *v11;
    if ( *(float *)&result[3].currentState == 0.0 )
    {
      v12 = 1;
      *v3 = v8;
      v15[0] = 1;
      v15[1] = 1;
      if ( *v3 != 3 )
      {
        if ( *v3 )
          goto LABEL_18;
        v12 = 0;
      }
      *(_BYTE *)((unsigned int)v15 | v12) = 0;
LABEL_18:
      sub_6048FEE8(a1, v15);
      if ( FIELD_U32(a1, 47820) || FIELD_U32(a1, 47824) )
        v13 = (StateBase *)&unk_60C9F4A0;
      else
        v13 = &stru_60C9F4C0;
      return StateMgr__changeState((StateMgr *)(a1 + 20), v13);
    }
  }
  return result;
}
