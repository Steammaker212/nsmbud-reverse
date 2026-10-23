/* sub_607E0B54
 * address: 0x607E0B54   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E0B54(int result)
{
  int v1; // r2
  int v2; // r3
  int v3; // r5

  v1 = FIELD_U32(result, 10856);
  v2 = v1 - 1;
  if ( v1 - 1 <= 0 )
    v2 = 0;
  FIELD_U32(result, 10856) = v2;
  if ( v1 <= 1 )
  {
    if ( FIELD_U8(result, 7286) )
    {
      v3 = dword_60C99DD0;
      if ( dword_60C99DD0 )
      {
        if ( FIELD_U8(dword_60C99DD0, 3793) )
        {
          result = sub_604B7FC8(dword_60C99DD0 + 16);
          if ( !result )
          {
            result = sub_604B80D0(v3 + 16);
            if ( !result )
            {
              result = FIELD_U32(v3, 3780) | 4;
              FIELD_U32(v3, 3780) = result;
            }
          }
        }
        else
        {
          return (int)StateMgr__changeState((StateMgr *)(result + 472), (StateBase *)&dword_60CC5924);
        }
      }
    }
  }
  return result;
}
