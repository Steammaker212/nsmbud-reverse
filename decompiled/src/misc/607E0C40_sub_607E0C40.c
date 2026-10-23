/* sub_607E0C40
 * address: 0x607E0C40   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E0C40(int result)
{
  int v1; // r5

  v1 = dword_60C99DD0;
  if ( dword_60C99DD0 && FIELD_U32(dword_60C99DD0, 3796) == 3 )
  {
    if ( FIELD_U8(dword_60C99DD0, 3793) )
    {
      result = sub_604B7FC8(dword_60C99DD0 + 16);
      if ( !result )
      {
        result = sub_604B80D0(v1 + 16);
        if ( !result )
        {
          result = FIELD_U32(v1, 3780) | 2;
          FIELD_U32(v1, 3780) = result;
        }
      }
    }
    else
    {
      return (int)StateMgr__changeState((StateMgr *)(result + 472), (StateBase *)&dword_60CC5984);
    }
  }
  return result;
}
