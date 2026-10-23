/* sub_604DF1CC
 * address: 0x604DF1CC   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DF1CC(int a1)
{
  int result; // r0
  int v3; // r2
  int *v4; // r12
  int v5; // r1
  int *v6; // r1
  int v7; // r3
  int v8; // r2

  result = FIELD_U8(a1, 4634);
  if ( result )
    return result;
  v4 = (int *)(a1 + 4620);
  v3 = FIELD_U32(a1, 4620);
  if ( v3 && v3 != dword_60B02FCC[FIELD_U32(a1, 6288)] )
  {
    switch ( v3 )
    {
      case 3:
        v5 = 2;
        break;
      case 2:
        v5 = 1;
        break;
      case 1:
        v5 = 0;
        break;
      default:
        goto LABEL_12;
    }
    FIELD_U32(a1, 6288) = v5;
  }
LABEL_12:
  if ( FIELD_U8(a1, 4635) )
  {
    v6 = &dword_60CA51B4;
    if ( !v3 )
      v6 = &dword_60CA5154;
    FIELD_U32(a1, 40) = v6;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA5134);
  }
  v7 = FIELD_U32(a1, 5676);
  result = a1 + 3592;
  if ( (v7 & 0x800) != 0 )
  {
    *v4 = 0;
    sub_60502694(result);
    FIELD_U32(a1, 40) = &dword_60CA5154;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA5134);
  }
  if ( (v7 & 0x2000) != 0 )
  {
    *v4 = dword_60B02FCC[FIELD_U32(a1, 6288)];
    sub_60502694(result);
    FIELD_U32(a1, 40) = &dword_60CA51B4;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA5134);
  }
  if ( v3 == 3 )
  {
    if ( (v7 & 0x40) == 0 )
      return result;
    goto LABEL_27;
  }
  if ( v3 == 2 )
  {
    if ( (v7 & 0x40) != 0 )
    {
      result = 1;
      v8 = 0;
    }
    else
    {
      if ( (v7 & 0x80) == 0 )
        return result;
      result = 3;
      v8 = 2;
    }
    FIELD_U32(a1, 6288) = v8;
    *v4 = result;
    return result;
  }
  if ( v3 == 1 && (v7 & 0x80) != 0 )
  {
LABEL_27:
    FIELD_U32(a1, 6288) = 1;
    *v4 = 2;
    return 2;
  }
  return result;
}
