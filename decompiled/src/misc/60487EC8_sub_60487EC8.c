/* sub_60487EC8
 * address: 0x60487EC8   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60487EC8(int a1)
{
  char v1; // r12
  _DWORD *v3; // r5
  unsigned int v4; // r0
  unsigned int v5; // r0
  int v6; // r3
  StateMethodExecuter *result; // r0
  int v8; // r0
  StateBase *v9; // r1
  unsigned int a5; // [sp+0h] [bp-18h]
  _BYTE v11[20]; // [sp+4h] [bp-14h] BYREF

  v3 = (_DWORD *)(a1 + 14228);
  a5 = FIELD_U32(a1, 14228);
  if ( ((unsigned int)dword_60C9FD78 & ~(1615363832 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C9FD78) )
  {
    unk_60C9FE0C = 0;
    unk_60C9FE10 = 1;
    unk_60C9FE14 = 2;
    unk_60C9FE18 = 3;
    _cxa_guard_release(dword_60C9FD78);
  }
  v4 = a5;
  if ( a5 >= 4 )
    v4 = 0;
  v5 = dword_60C9FDD0[v4 + 15];
  v6 = FIELD_U32(a1, 3548);
  if ( FIELD_U32(a1, 3544) > v5 )
    v6 += 20 * v5;
  result = (StateMethodExecuter *)FIELD_U8(v6, 16);
  if ( FIELD_U8(v6, 16) )
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 4810);
    if ( !FIELD_U8(a1, 4810) )
    {
      *v3 = FIELD_U32(a1, 14232);
      sub_60502548(a1 + 3768);
      FIELD_U16(a1, 4820) = 0;
      sub_6047EABC((_DWORD *)(a1 + 3808));
      v8 = 1;
      v11[0] = 1;
      v11[1] = 1;
      if ( *v3 != 3 )
      {
        if ( *v3 )
          goto LABEL_14;
        v8 = 0;
      }
      *(_BYTE *)((unsigned int)v11 | v8) = 0;
LABEL_14:
      sub_6048FEE8(a1, v11);
      if ( FIELD_U32(a1, 47820) || FIELD_U32(a1, 47824) )
        v9 = (StateBase *)&unk_60C9F4A0;
      else
        v9 = &stru_60C9F4C0;
      return StateMgr__changeState((StateMgr *)(a1 + 20), v9);
    }
  }
  return result;
}
