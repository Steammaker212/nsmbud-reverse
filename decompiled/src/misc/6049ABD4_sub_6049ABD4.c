/* sub_6049ABD4
 * address: 0x6049ABD4   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049ABD4(int a1)
{
  int *v2; // r6
  int v3; // r5
  int v4; // r0
  int result; // r0

  v2 = (int *)(a1 + 5332);
  v3 = dword_60C9CFB8;
  if ( sub_604593D0(dword_60C9CFB8, FIELD_U32(a1, 5332)) )
  {
    FIELD_U8(a1, 5356) = 1;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA0828);
  }
  if ( sub_604592A0(v3, *v2) )
  {
    v4 = *v2;
    if ( (unsigned int)*v2 >= 4 )
      v4 = 0;
    result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 404 * v4 + 4040) + 20))(*(_DWORD *)(a1 + 404 * v4 + 4040));
    FIELD_U8(a1, 5356) = result;
    FIELD_U32(a1, 5344) = 0;
    if ( result == 1 )
      return (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA0828);
  }
  else
  {
    FIELD_U8(a1, 5356) = 0;
    return 5356;
  }
  return result;
}
