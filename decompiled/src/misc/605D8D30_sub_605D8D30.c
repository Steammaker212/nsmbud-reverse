/* sub_605D8D30
 * address: 0x605D8D30   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605D8D30(int a1)
{
  StateMethodExecuter *result; // r0
  StateMethodExecuter **v3; // r5
  int v4; // r1
  int v5; // r0
  int v6; // r1
  char v7; // r2
  bool v8; // zf

  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 132) = 0;
  v3 = (StateMethodExecuter **)(a1 + 8008);
  result = *(StateMethodExecuter **)(a1 + 8008);
  if ( result )
  {
    if ( result != (StateMethodExecuter *)1 )
    {
LABEL_3:
      if ( !result )
      {
        result = (StateMethodExecuter *)(a1 + 8004);
        if ( !FIELD_U32(a1, 8004) && (FIELD_U8(a1, 6804) & 1) != 0 )
        {
          FIELD_U32(a1, 8000) = 0;
          FIELD_U32(result, 0x0) = 0;
          *v3 = 0;
          return StateMgr__changeState((StateMgr *)(a1 + 6292), &stru_60CB16B4);
        }
      }
      return result;
    }
  }
  else
  {
    if ( !sub_605E3BBC(a1) )
    {
      v4 = 0x40000000;
      FIELD_U32(a1, 120) = 0;
      v5 = FIELD_U32(a1, 6440);
      FIELD_U32(a1, 80) = v5;
      if ( v5 == 1 )
        v4 = -1073741824;
      FIELD_U32(a1, 160) = v4;
      sub_605EAB48(a1 + 6064, 0.0);
      *v3 = (StateMethodExecuter *)1;
    }
    v6 = 0;
    v7 = FIELD_U8(dword_60C9CF0C, 1361);
    v8 = (v7 & 6) == 0;
    if ( (v7 & 6) == 0 )
    {
      v6 = 1;
      v8 = (v7 & 8) == 0;
    }
    if ( !v8 )
    {
      FIELD_U32(a1, 8000) = v6;
      FIELD_U32(a1, 8004) = 0;
      *v3 = 0;
      return StateMgr__changeState((StateMgr *)(a1 + 6292), &stru_60CB17C8);
    }
    result = *v3;
    if ( *v3 != (StateMethodExecuter *)1 )
      goto LABEL_3;
  }
  result = (StateMethodExecuter *)sub_605E3BBC(a1);
  if ( result == (StateMethodExecuter *)1 )
  {
    FIELD_U32(a1, 8004) = ((30 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 30;
    result = (StateMethodExecuter *)sub_605EAC24(a1 + 6064, 15.0, 0.0);
    *v3 = 0;
  }
  return result;
}
