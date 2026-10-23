/* sub_607E0D18
 * address: 0x607E0D18   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E0D18(int a1, unsigned int a2)
{
  int result; // r0
  int v4; // r5
  int v5; // r0
  int *v6; // r1

  result = (int)&dword_60C99DD0;
  v4 = dword_60C99DD0;
  if ( dword_60C99DD0 )
  {
    result = FIELD_U32(dword_60C99DD0, 3796);
    if ( result == 3 )
    {
      if ( FIELD_U8(dword_60C99DD0, 3793) )
      {
        result = sub_604B7FC8(dword_60C99DD0 + 16);
        if ( !result )
        {
          result = sub_604B80D0(v4 + 16);
          if ( !result )
          {
            result = FIELD_U32(v4, 3780) | 2;
            FIELD_U32(v4, 3780) = result;
          }
        }
      }
      else
      {
        v5 = FIELD_U32(dword_60C99DD0, 3668);
        if ( v5 && sub_604B6E00(v5, a2) )
          v6 = &dword_60CC5984;
        else
          v6 = &dword_60CC5904;
        return (int)StateMgr__changeState((StateMgr *)(a1 + 472), (StateBase *)v6);
      }
    }
  }
  return result;
}
