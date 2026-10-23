/* sub_60697FC0
 * address: 0x60697FC0   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60697FC0(int a1)
{
  _DWORD *result; // r0
  int v3; // r1
  int v4; // r1

  sub_60698718();
  result = (_DWORD *)(a1 + 6128);
  v3 = FIELD_U32(a1, 6128);
  if ( v3 )
  {
    v4 = v3 - 1;
    *result = v4;
    if ( v4 == 1 )
    {
      sub_603E552C((sead_ListNode *)dword_60C995D0, FIELD_U32(dword_60CBFA90, 488));
      FIELD_U32(dword_60CBFA90, 440) = FIELD_S8(a1, 6126);
      if ( (FIELD_U8(a1, 24) & 1) != 0 )
      {
        return (_DWORD *)sub_603F48B0(AreaTask_intance);
      }
      else if ( FIELD_U8(EnemyCounterMaybe_instance, 262) )
      {
        return (_DWORD *)sub_603F4998(AreaTask_intance);
      }
      else
      {
        return (_DWORD *)sub_603F49C0(AreaTask_intance);
      }
    }
  }
  return result;
}
