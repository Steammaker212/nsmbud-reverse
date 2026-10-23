/* sub_604AF854
 * address: 0x604AF854   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AF854(int a1)
{
  _BYTE *v2; // r5
  int result; // r0
  _BYTE *v4; // r5

  v2 = (_BYTE *)(a1 + 38104);
  if ( !FIELD_U8(a1, 38104) )
  {
    v4 = (_BYTE *)(a1 + 38090);
    if ( FIELD_U8(a1, 38090) )
      return (int)StateMgr__changeState((StateMgr *)(a1 + 6112), (StateBase *)&dword_60CA19F4);
    FIELD_U8(AreaTask_intance, 1874) = 0;
    if ( FIELD_U32(a1, 3656) == 1 && FIELD_U32(a1, 4636) == 7 && sub_6047F1CC(a1 + 3648) )
      FIELD_U8(AreaTask_intance, 1874) = 1;
    if ( FIELD_U8(a1, 4650) )
    {
      if ( *v4 || (FIELD_U8(dword_60C99DD4, 1376) & 0xC) != 0 )
        sub_607FCB00(dword_60CC6484);
      else
        sub_607FCAE4(dword_60CC6484);
      result = 1;
      if ( FIELD_U8(a1, 38089) )
        goto LABEL_31;
      if ( *v4 )
      {
LABEL_18:
        FIELD_U8(a1, 4653) = 1;
        return 4653;
      }
    }
    else
    {
      if ( FIELD_U8(a1, 4651) )
        return (int)StateMgr__changeState((StateMgr *)(a1 + 6112), (StateBase *)&dword_60CA19D4);
      if ( !FIELD_U8(a1, 4654)
        && !FIELD_U8(a1, 38106)
        && !FIELD_U8(a1, 38107)
        && (FIELD_U8(dword_60C9CF0C, 1364) & 2) == 0
        && (FIELD_U8(a1, 5693) & 0xC) != 0 )
      {
        FIELD_U32(a1, 4636) = 7;
        sub_60502694(a1 + 3608);
        return (int)StateMgr__changeState((StateMgr *)(a1 + 6112), (StateBase *)&dword_60CA19D4);
      }
      if ( *v4 || (FIELD_U8(dword_60C99DD4, 1376) & 0xC) != 0 )
        sub_607FCB00(dword_60CC6484);
      else
        sub_607FCAE4(dword_60CC6484);
      result = 1;
      if ( FIELD_U8(a1, 38089) )
        goto LABEL_31;
      if ( *v4 )
        goto LABEL_18;
    }
    result = 0;
    if ( (FIELD_U32(dword_60C99DD4, 1376) & 8) != 0 )
      goto LABEL_18;
LABEL_31:
    FIELD_U8(a1, 4653) = result;
    return result;
  }
  result = FIELD_U8(dword_60C99DD4, 1376);
  if ( (result & 4) == 0 )
  {
    FIELD_U8(a1, 4651) = 0;
    FIELD_U8(a1, 4648) = 1;
    FIELD_U32(a1, 4636) = 7;
    result = sub_60502C84(a1 + 3608, &unk_60B02E68, 0);
    *v2 = 0;
  }
  return result;
}
