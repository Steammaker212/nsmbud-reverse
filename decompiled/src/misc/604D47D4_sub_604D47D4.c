/* sub_604D47D4
 * address: 0x604D47D4   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D47D4(int a1)
{
  int *v2; // r6
  int *v3; // r5
  int v4; // r7
  int result; // r0
  StateBase *v6; // r1
  StateMgr *v7; // r0
  int v8; // r0
  int *v9; // r2
  int v10; // r1

  v2 = (int *)(a1 + 52640);
  --FIELD_U32(a1, 52640);
  v3 = (int *)(a1 + 52608);
  v4 = FIELD_U32(a1, 52608);
  result = sub_60502D80(v4 + 3800);
  if ( result )
    return result;
  result = FIELD_U8(v4, 4846);
  if ( FIELD_U8(v4, 4846) )
    return result;
  result = FIELD_U8(a1, 4942);
  if ( FIELD_U8(a1, 4942) )
    return result;
  result = *v2;
  if ( *v2 >= 0 )
    return result;
  FIELD_U8(a1, 4943) = 0;
  if ( (FIELD_U8(a1, 52209) & 0x20) != 0 )
  {
    sub_60502694(a1 + 3900);
    v7 = (StateMgr *)(a1 + 20);
    if ( FIELD_U32(a1, 4928) == 12 )
      v6 = (StateBase *)&unk_60CA3E58;
    else
      v6 = (StateBase *)&unk_60CA3EB8;
    goto LABEL_17;
  }
  if ( sub_6045C130(a1 + 52204) )
  {
    FIELD_U32(a1, 52612) = 9;
    v6 = &stru_60CA3E38;
    v7 = (StateMgr *)(a1 + 20);
LABEL_17:
    StateMgr__changeState(v7, v6);
    return sub_604D1A84(*v3);
  }
  v8 = FIELD_U32(a1, 52216) | FIELD_U32(a1, 52208);
  if ( (v8 & 0x10) != 0 )
  {
    result = sub_604D69A4(a1);
  }
  else
  {
    if ( (v8 & 0x20) != 0 )
    {
      sub_604D6B3C(a1);
    }
    else if ( (v8 & 0x40) != 0 )
    {
      sub_604D6C70(a1);
    }
    else
    {
      if ( (v8 & 0x80) == 0 )
      {
        result = 0;
        FIELD_U32(a1, 52612) = 0;
        goto LABEL_24;
      }
      sub_604D6DE8(a1);
    }
    result = 0;
  }
LABEL_24:
  v9 = (int *)(a1 + 52620);
  v10 = FIELD_U32(a1, 4928);
  if ( v10 >= 13 )
    v10 = *v9;
  else
    *v9 = v10;
  if ( v10 != 12 )
    FIELD_U32(a1, 52624) = v10;
  if ( result == 1 )
    return sub_604D1A84(*v3);
  return result;
}
