/* sub_606C39A8
 * address: 0x606C39A8   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C39A8(int a1)
{
  int v2; // r0
  int v3; // r3
  __int64 v4; // r0
  int result; // r0
  int v6; // r1
  int v7; // r5
  unsigned int v8; // r2
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r0

  v2 = FIELD_U8(a1, 539);
  if ( v2 )
  {
    v3 = v2 - 33;
    HIDWORD(v4) = 1u >> (33 - v2);
    LODWORD(v4) = 1 << (v2 - 1);
    if ( v3 >= 0 )
    {
      HIDWORD(v4) = 1 << v3;
      LODWORD(v4) = 0;
    }
    result = (*(_QWORD *)(EventMgr__instance + 16) & v4) != 0;
  }
  else
  {
    result = 0;
  }
  v6 = FIELD_U8(a1, 540);
  if ( !FIELD_U8(a1, 540) )
  {
    if ( result != 1 )
      return result;
    goto LABEL_12;
  }
  v7 = v6 - 33;
  v8 = 1u >> (33 - v6);
  v9 = 1 << (v6 - 1);
  if ( v7 >= 0 )
  {
    v8 = 1 << v7;
    v9 = 0;
  }
  result |= (*(_DWORD *)(EventMgr__instance + 16) & v9 | *(_DWORD *)(EventMgr__instance + 20) & v8) != 0;
  if ( result )
  {
LABEL_12:
    v10 = FIELD_U32(a1, 24);
    if ( (v10 & 0x80000) != 0 )
    {
      return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBAAB8);
    }
    else
    {
      result = (v10 >> 20) & 0xF | (v10 >> 8) & 0xF0;
      if ( result )
      {
        v11 = a1 + 6228;
        if ( (FIELD_U8(a1, 22) & 8) != 0 )
          sub_606C4BFC(v11);
        else
          sub_606C47E8(v11);
        FIELD_U32(a1, 6336) = FIELD_U32(a1, 6296);
        FIELD_U32(a1, 6340) = FIELD_U32(a1, 6300);
        return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBAAD8);
      }
    }
  }
  return result;
}
