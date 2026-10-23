/* sub_6049DAC4
 * address: 0x6049DAC4   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049DAC4(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r2
  int *v4; // r1
  int v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r3
  int v8; // r3
  unsigned int v9; // r1
  unsigned int v10; // r3
  unsigned int v11; // r12
  unsigned int v12; // r2
  unsigned int v13; // r1

  result = (StateMethodExecuter *)FIELD_U8(a1, 4678);
  if ( result )
    return result;
  if ( sub_604A2454(a1) == 1 )
  {
LABEL_3:
    FIELD_U32(a1, 22492) = 0;
    return (StateMethodExecuter *)22492;
  }
  if ( FIELD_U8(a1, 4679) )
  {
    v3 = &dword_60CA0D0C;
    if ( !FIELD_U32(a1, 22480) )
      v3 = &dword_60CA0EEC;
    v4 = &dword_60CA0ECC;
    goto LABEL_28;
  }
  if ( (FIELD_U8(a1, 20317) & 0x40) != 0 || (FIELD_U8(a1, 21933) & 0x40) != 0 )
  {
    FIELD_U32(a1, 4664) = 0;
    v3 = &dword_60CA0D0C;
    if ( !FIELD_U32(a1, 22480) )
      v3 = &dword_60CA0EEC;
    v4 = &dword_60CA0EAC;
LABEL_28:
    FIELD_U32(a1, 40) = v3;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v4);
  }
  v5 = FIELD_U32(a1, 22496);
  if ( v5 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = 0;
      if ( v6 < 4 )
        v7 = v6;
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 4 * v7 + 20276) + 2689) )
      {
        v8 = a1;
        if ( v6 < 7 )
          v8 = a1 + v6;
        if ( !FIELD_U8(v8, 22388) )
          goto LABEL_3;
      }
      if ( (int)++v6 >= v5 )
      {
        v9 = 0;
        while ( 1 )
        {
          v10 = 0;
          if ( v9 < 7 )
            v10 = v9;
          if ( !*(_DWORD *)(a1 + 4 * v10 + 22332) )
            break;
          if ( (int)++v9 >= v5 )
          {
            v11 = 1;
            goto LABEL_31;
          }
        }
        v11 = 2;
LABEL_31:
        v12 = 0;
        while ( 1 )
        {
          v13 = 0;
          if ( v12 < 7 )
            v13 = v12;
          if ( *(_DWORD *)(a1 + 4 * v13 + 22332) == 1 )
            break;
          if ( (int)++v12 >= v5 )
            goto LABEL_36;
        }
        result = (StateMethodExecuter *)(a1 + 22492);
        if ( v11 <= 1 )
          goto LABEL_37;
        if ( (int)FIELD_U32(result, 0x0)++ < 59 )
          return result;
        v4 = &dword_60CA0D4C;
        return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v4);
      }
    }
  }
LABEL_36:
  result = (StateMethodExecuter *)(a1 + 22492);
LABEL_37:
  FIELD_U32(result, 0x0) = 0;
  return result;
}
