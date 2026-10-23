/* sub_6057574C
 * address: 0x6057574C   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6057574C(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  _BYTE *result; // r0
  int v5; // r0
  char v6; // r1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (_BYTE *)(*(int (**)(void))(dword_60CAEB88 + 8))();
  if ( (_BYTE *)v3 == result )
  {
    result = (_BYTE *)sub_605B4CC4(a1);
    if ( result )
    {
      if ( FIELD_U8(dword_60CC6D8C, 17) )
      {
        if ( result != (_BYTE *)3 )
        {
LABEL_9:
          FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 1.0;
          if ( result == (_BYTE *)2 )
          {
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0558);
            v5 = 3;
            v6 = 2;
          }
          else
          {
            if ( result != (_BYTE *)1 )
              return (_BYTE *)sub_605BA078(dword_60CB061C, a1 + 6980, 1, FIELD_U8(LevelInfo_instance, 18));
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0534);
            v5 = 2;
            v6 = 1;
          }
          FIELD_U8(a1, 6846) = v6;
          FIELD_U32(a1, 6864) = v5;
          return (_BYTE *)sub_605BA078(dword_60CB061C, a1 + 6980, 1, FIELD_U8(LevelInfo_instance, 18));
        }
      }
      else if ( !FIELD_U32(a1, 6828) )
      {
        goto LABEL_9;
      }
      return BlockBase__vf178(a1);
    }
  }
  return result;
}
