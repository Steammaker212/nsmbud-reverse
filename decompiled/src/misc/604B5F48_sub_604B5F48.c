/* sub_604B5F48
 * address: 0x604B5F48   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_604B5F48(int a1)
{
  int v2; // r0
  int *result; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r6
  int *v7; // r5

  if ( FIELD_U8(a1, 3778) )
  {
    if ( (FIELD_U8(a1, 3764) & 2) == 0 )
      goto LABEL_9;
    FIELD_U8(a1, 3778) = 0;
  }
  v2 = FIELD_U32(a1, 3784);
  if ( v2 < 1 )
  {
    if ( FIELD_U32(a1, 3724) != 4 || sub_604B8420(a1) == 1 )
      StateMgr__changeState((StateMgr *)(a1 + 3748), (StateBase *)&dword_60CA1DD8);
  }
  else
  {
    FIELD_U32(a1, 3784) = v2 - 1;
  }
LABEL_9:
  result = &dword_60CC62E4;
  v4 = dword_60CC62E4;
  if ( dword_60CC62E4 )
  {
    v5 = sub_607F695C(dword_60CC62E4);
    if ( v5 )
    {
      v6 = v5 + 568;
      if ( FIELD_U8(a1, 3788) || sub_6051BE4C(v5 + 568) == 1 )
      {
        if ( sub_6051BD84(v6) == 1 )
          FIELD_U8(a1, 3720) = 0;
        FIELD_U8(a1, 3788) = sub_6051BE4C(v6);
      }
    }
    result = (int *)sub_607F6A0C(v4);
    if ( result )
    {
      v7 = result + 157;
      if ( FIELD_U8(a1, 3789) || (result = (int *)sub_60562274(result + 157), result == (int *)1) )
      {
        if ( sub_60561FA8(v7) == 1 )
          FIELD_U8(a1, 3720) = 0;
        result = (int *)sub_60562274(v7);
        FIELD_U8(a1, 3789) = (_BYTE)result;
      }
    }
  }
  return result;
}
