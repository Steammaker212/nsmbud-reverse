/* sub_602914CC
 * address: 0x602914CC   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602914CC(int a1)
{
  signed int result; // r0
  _DWORD *v3; // r5

  v3 = (_DWORD *)(a1 + 7528);
  result = FIELD_U32(a1, 7528);
  if ( result == 2 )
  {
    result = *(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 7500) + 12) + 28);
    if ( (result & 0x20) != 0 )
      return (signed int)StageActor__delete((StateActor *)a1, 1);
  }
  else if ( result == 1 )
  {
    result = *(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 7500) + 12) + 28);
    if ( (result & 0x20) != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 756))(a1);
      FIELD_U32(a1, 160) = 0;
      result = 2;
      *v3 = 2;
    }
  }
  return result;
}
