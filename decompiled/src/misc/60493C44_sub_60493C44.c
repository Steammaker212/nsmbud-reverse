/* sub_60493C44
 * address: 0x60493C44   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60493C44(int a1)
{
  char v1; // r12
  _BYTE *v3; // r1
  StateMethodExecuter *result; // r0
  StateMethodExecuter **v5; // r5
  StateBase *v6; // r1
  int v7; // r1
  int v8; // r2
  unsigned int v9; // r3
  int *v10; // r4
  unsigned int v11; // t1
  int v12; // r1
  void *v13; // r1
  StateBase *v14; // r1
  int v15; // r2
  unsigned int v16; // r3
  int *v17; // r4
  unsigned int v18; // t1
  int v19; // r1

  v3 = (_BYTE *)(a1 + 4899);
  if ( !FIELD_U8(a1, 4899) )
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 4902);
    if ( FIELD_U8(a1, 4902) )
      return result;
    result = (StateMethodExecuter *)FIELD_U8(a1, 4898);
    if ( FIELD_U8(a1, 4898) )
      return result;
    result = (StateMethodExecuter *)(v3 - 1043);
    *v3 = 0;
    v7 = *(_DWORD *)(FIELD_U32(a1, 5952) + 4);
    if ( (v7 & 0x2000) != 0 )
    {
      sub_60502694(result);
      result = *(StateMethodExecuter **)(a1 + 4884);
      if ( (unsigned int)result < 4 )
      {
        v14 = (StateBase *)&unk_60CA0070;
      }
      else if ( (unsigned int)&result[-1].currentState >= 4 )
      {
        if ( result != (StateMethodExecuter *)8 )
          return result;
        v14 = (StateBase *)&unk_60CA0030;
      }
      else
      {
        v14 = (StateBase *)&unk_60CA0090;
      }
    }
    else
    {
      if ( (v7 & 0x4000) == 0 )
      {
        if ( (v7 & 0x40) != 0 )
        {
          if ( ((unsigned int)dword_60CA0494 & ~(1615412924 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CA0494) )
          {
            unk_60CA0500 = 0;
            unk_60CA0504 = 1;
            unk_60CA0508 = 2;
            unk_60CA050C = 3;
            _cxa_guard_release(dword_60CA0494);
          }
          if ( ((unsigned int)&dword_60CA0494[1] & ~(1615413020 << v1) & 1) == 0
            && _cxa_guard_acquire(&dword_60CA0494[1]) )
          {
            unk_60CA0510 = 4;
            unk_60CA0514 = 5;
            unk_60CA0518 = 6;
            unk_60CA051C = 7;
            _cxa_guard_release(&dword_60CA0494[1]);
          }
          result = (StateMethodExecuter *)FIELD_U8(a1, 5956);
          if ( !FIELD_U8(a1, 5956) )
            return result;
          result = (StateMethodExecuter *)(a1 + 4884);
          v15 = FIELD_U32(a1, 4884);
          v18 = FIELD_U32(a1, 5940);
          v17 = (int *)(a1 + 5940);
          v16 = v18;
          v19 = 0;
          if ( v18 >= 4 )
            v16 = 0;
          if ( v15 != *((_DWORD *)&unk_60CA04F0 + v16 + 4) )
            return result;
          if ( (unsigned int)*v17 < 4 )
            v19 = *v17;
          v13 = *((void **)&unk_60CA04F0 + v19 + 8);
        }
        else
        {
          if ( (v7 & 0x80) == 0 )
            return result;
          if ( ((unsigned int)&dword_60CA0494[2] & ~(1615412480 << v1) & 1) == 0
            && _cxa_guard_acquire(&dword_60CA0494[2]) )
          {
            unk_60CA0520 = 4;
            unk_60CA0524 = 5;
            unk_60CA0528 = 6;
            unk_60CA052C = 7;
            _cxa_guard_release(&dword_60CA0494[2]);
          }
          if ( ((unsigned int)&dword_60CA0494[3] & ~(1615412576 << v1) & 1) == 0
            && _cxa_guard_acquire(&dword_60CA0494[3]) )
          {
            unk_60CA0530 = 0;
            unk_60CA0534 = 1;
            unk_60CA0538 = 2;
            unk_60CA053C = 3;
            _cxa_guard_release(&dword_60CA0494[3]);
          }
          result = (StateMethodExecuter *)(a1 + 4884);
          v8 = FIELD_U32(a1, 4884);
          v11 = FIELD_U32(a1, 5940);
          v10 = (int *)(a1 + 5940);
          v9 = v11;
          v12 = 0;
          if ( v11 >= 4 )
            v9 = 0;
          if ( v8 != *((_DWORD *)&unk_60CA04F0 + v9 + 12) )
            return result;
          if ( (unsigned int)*v10 < 4 )
            v12 = *v10;
          v13 = *((void **)&unk_60CA04F0 + v12 + 16);
        }
        FIELD_U32(result, 0x0) = v13;
        return result;
      }
      FIELD_U32(a1, 4884) = 8;
      sub_60502694(result);
      v14 = (StateBase *)&unk_60CA0030;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 20), v14);
  }
  v5 = (StateMethodExecuter **)(a1 + 4884);
  result = *(StateMethodExecuter **)(a1 + 4884);
  if ( (unsigned int)result < 4 )
  {
    v6 = (StateBase *)&unk_60CA0070;
    goto LABEL_24;
  }
  if ( (unsigned int)&result[-1].currentState < 4 )
  {
    v6 = (StateBase *)&unk_60CA0090;
LABEL_24:
    StateMgr__changeState((StateMgr *)(a1 + 20), v6);
    result = *v5;
    if ( *v5 != (StateMethodExecuter *)8 )
      return result;
    v14 = (StateBase *)&unk_60CA0050;
    return StateMgr__changeState((StateMgr *)(a1 + 20), v14);
  }
  if ( result == (StateMethodExecuter *)8 )
  {
    v6 = (StateBase *)&unk_60CA0030;
    goto LABEL_24;
  }
  return result;
}
