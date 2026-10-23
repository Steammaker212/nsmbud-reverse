/* sub_604D8218
 * address: 0x604D8218   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D8218(int a1)
{
  int result; // r0
  int v3; // r0
  unsigned int v4; // r1

  if ( SE_SYS_PAGE_ref_4D9864() == 1 )
  {
    result = 4746;
    FIELD_U8(a1, 4746) = 0;
    return result;
  }
  if ( !sub_60502D80(a1 + 3692) && !FIELD_U8(a1, 4738) )
    return (int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CA4118);
  result = FIELD_U32(a1, 4720);
  if ( result == 3 )
  {
    result = a1 + 20497;
    if ( FIELD_U8(a1, 20497) )
    {
      *(_BYTE *)result = 0;
      v3 = a1 + 44;
      v4 = 2;
      return sub_6047459C(v3, v4);
    }
  }
  else if ( result == 4 )
  {
    result = a1 + 20496;
    if ( FIELD_U8(a1, 20496) )
    {
      *(_BYTE *)result = 0;
      v3 = a1 + 44;
      v4 = 3;
      return sub_6047459C(v3, v4);
    }
  }
  return result;
}
