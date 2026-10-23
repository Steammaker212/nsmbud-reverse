/* sub_6053561C
 * address: 0x6053561C   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053561C(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  int v4; // t1
  int *v5; // r1
  int v6; // r3
  int v7; // r1
  int v8; // r1

  v4 = FIELD_U32(a1, 16728);
  result = (StateMethodExecuter *)(a1 + 16728);
  v3 = v4;
  if ( BYTE2(result[1].vtable) )
    return result;
  if ( FIELD_U8(a1, 16743) )
  {
    if ( v3 == 10 )
    {
      FIELD_U32(a1, 52) = &dword_60CAB1E4;
      v5 = &dword_60CAAF44;
    }
    else
    {
      FIELD_U32(a1, 52) = &dword_60CAB104;
      v5 = &dword_60CAAF84;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v5);
  }
  if ( FIELD_U8(a1, 16746) )
    return result;
  v6 = FIELD_U32(a1, 83604);
  if ( (v6 & 0x4000) != 0 )
  {
    FIELD_U32(result, 0x0) = (void *)10;
    FIELD_U32(a1, 52) = &dword_60CAB1E4;
    v5 = &dword_60CAAF24;
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v5);
  }
  if ( (v6 & 0x2000) != 0 )
  {
    sub_60502694((int)&result[-86].owner);
    FIELD_U32(a1, 52) = &dword_60CAB104;
    v5 = &dword_60CAAF84;
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v5);
  }
  if ( v3 == 3 )
  {
    if ( (v6 & 0x40) == 0 )
      return result;
    v8 = FIELD_U32(dword_60CC6E04, 40);
    if ( FIELD_U8(v8, 536) )
      goto LABEL_21;
  }
  else
  {
    if ( v3 != 2 )
    {
      if ( v3 != 1 || (v6 & 0x80) == 0 )
        return result;
      v7 = FIELD_U32(dword_60CC6E04, 40);
      if ( !FIELD_U8(v7, 536) )
        goto LABEL_25;
LABEL_21:
      FIELD_U32(result, 0x0) = (void *)2;
      return result;
    }
    if ( (v6 & 0x40) == 0 )
    {
      if ( (v6 & 0x80) == 0 )
        return result;
      v7 = FIELD_U32(dword_60CC6E04, 40);
LABEL_25:
      if ( FIELD_U8(v7, 1056) )
        FIELD_U32(result, 0x0) = (void *)3;
      return result;
    }
    v8 = FIELD_U32(dword_60CC6E04, 40);
  }
  if ( FIELD_U8(v8, 16) )
    FIELD_U32(result, 0x0) = (void *)1;
  return result;
}
