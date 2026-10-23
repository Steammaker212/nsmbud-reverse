/* sub_6076DF8C
 * address: 0x6076DF8C   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076DF8C(int a1)
{
  int result; // r0
  int v3; // r5
  StateMgr *v4; // r5
  StateBase *v5; // r1
  StateMgr *v6; // r0

  result = FIELD_U32(dword_60C99DD4, 764);
  if ( result == 4 )
  {
    result = dword_60C9A1F0;
    v3 = FIELD_U8(dword_60C9A1F0, 6559);
    if ( (v3 | 1) == 3 )
    {
      FIELD_U8(a1, 11352) = v3 == 2;
      result = sub_604099E0((_BYTE *)result);
      switch ( result )
      {
        case 0:
          v4 = (StateMgr *)(a1 + 11332);
          StateMgr__changeState((StateMgr *)(a1 + 11332), (StateBase *)&dword_60CBF714);
          if ( sub_60778128(dword_60CBFA90) == 1 )
          {
            v5 = &stru_60CBF738;
            goto LABEL_31;
          }
          result = FIELD_U8(a1, 6900);
          if ( (result & 1) != 0 )
          {
            if ( FIELD_U8(dword_60C9A1F0, 6526) )
              return sub_60777C78(dword_60CBFA90);
            v5 = &stru_60CBF780;
            goto LABEL_31;
          }
          return result;
        case 1:
          v6 = (StateMgr *)(a1 + 11332);
          v5 = &stru_60CBF738;
          return (int)StateMgr__changeState(v6, v5);
        case 2:
          if ( v3 == 3 )
          {
            if ( !FIELD_U8(dword_60C9A1F0, 6526) )
              return (int)StateMgr__changeState((StateMgr *)(a1 + 11332), &stru_60CBF780);
            return sub_60777C78(dword_60CBFA90);
          }
          v4 = (StateMgr *)(a1 + 11332);
          StateMgr__changeState((StateMgr *)(a1 + 11332), (StateBase *)&dword_60CBF714);
          if ( sub_60778128(dword_60CBFA90) == 1 )
          {
            v5 = &stru_60CBF738;
          }
          else
          {
            result = FIELD_U8(a1, 6900);
            if ( (result & 1) == 0 )
              return result;
            if ( FIELD_U8(dword_60C9A1F0, 6526) )
              return sub_60777C78(dword_60CBFA90);
            v5 = &stru_60CBF780;
          }
LABEL_31:
          v6 = v4;
          return (int)StateMgr__changeState(v6, v5);
        case 3:
          result = sub_60778128(dword_60CBFA90);
          if ( result == 1 )
            return (int)StateMgr__changeState((StateMgr *)(a1 + 11332), &stru_60CBF738);
          if ( v3 != 3 )
            return result;
          if ( FIELD_U8(dword_60C9A1F0, 6526) )
            return sub_60777C78(dword_60CBFA90);
          return (int)StateMgr__changeState((StateMgr *)(a1 + 11332), &stru_60CBF780);
        case 4:
          if ( FIELD_U8(dword_60C9A1F0, 6526) )
            return sub_60777C78(dword_60CBFA90);
          return (int)StateMgr__changeState((StateMgr *)(a1 + 11332), &stru_60CBF780);
        default:
          return result;
      }
    }
  }
  return result;
}
