/* sub_607F41AC
 * address: 0x607F41AC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F41AC(int a1)
{
  int result; // r0
  bool v3; // zf

  result = FIELD_U32(dword_60C99DD0, 3668);
  v3 = result == 0;
  if ( result )
  {
    result = FIELD_U8(result, 1042);
    v3 = result == 0;
  }
  if ( v3 )
  {
    if ( !FIELD_U8(a1, 49) )
    {
      FIELD_U32(a1, 52) = 1;
      return (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CC6200);
    }
    result = FIELD_U32(a1, 56);
    if ( result != 5 )
    {
      if ( result == 4 )
      {
        FIELD_U32(a1, 52) = 2;
        sub_6040D3F4(LevelInfo_instance, 1);
        FIELD_U8(a1, 48) = 1;
        return sub_6002420C();
      }
      if ( result != 2 )
        return result;
    }
    FIELD_U32(a1, 52) = 4;
    FIELD_U8(a1, 48) = 1;
    return sub_6002420C();
  }
  return result;
}
