/* sub_60027A7C
 * address: 0x60027A7C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60027A7C(int a1)
{
  int result; // r0

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 252))(a1);
  if ( result == 1 )
  {
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C7F6E8);
    ++FIELD_U32(dword_60C99DE4, 16);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 244))(a1);
  }
  return result;
}
