/* sub_6019596C
 * address: 0x6019596C   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6019596C(int a1)
{
  int v2; // r5
  StateMethodExecuter *result; // r0
  StateBase *v4; // r1

  if ( !sub_60190968(dword_60C8996C) )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C89B90);
  sub_601981EC(a1, 0);
  v2 = dword_60C8996C;
  if ( FIELD_U8(dword_60C8996C, 1384) )
  {
    result = (StateMethodExecuter *)sub_6019112C(dword_60C8996C);
    if ( result == (StateMethodExecuter *)165 )
    {
      result = (StateMethodExecuter *)sub_601916EC(v2);
      if ( result != (StateMethodExecuter *)67 )
        return result;
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, 0.0, 0.1, 0.1, 0.04);
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 464, 0.0, 0.1, 0.6, 0.04);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      result = (StateMethodExecuter *)sub_601919B0((_DWORD *)dword_60C8996C, a1);
      if ( result != (StateMethodExecuter *)1 )
        return result;
      v4 = (StateBase *)&dword_60C89C70;
    }
    else
    {
      if ( result != (StateMethodExecuter *)157 )
      {
        if ( result == (StateMethodExecuter *)48 )
        {
          result = (StateMethodExecuter *)sub_601916EC(v2);
          if ( result == (StateMethodExecuter *)67 )
          {
            ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, 0.0, 0.1, 0.1, 0.04);
            ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 464, 0.0, 0.1, 0.6, 0.04);
            return (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
          }
        }
        return result;
      }
      v4 = (StateBase *)&unk_60C89BF0;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 284), v4);
  }
  result = (StateMethodExecuter *)sub_6019112C(dword_60C8996C);
  if ( result == (StateMethodExecuter *)48 )
  {
    result = (StateMethodExecuter *)sub_601916EC(v2);
    if ( result == (StateMethodExecuter *)67 )
    {
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, 0.0, 0.1, 0.1, 0.04);
      return (StateMethodExecuter *)((int (__fastcall *)(int, float, float, float, float))loc_60832560)(
                                      a1 + 464,
                                      0.0,
                                      0.1,
                                      0.6,
                                      0.04);
    }
  }
  return result;
}
