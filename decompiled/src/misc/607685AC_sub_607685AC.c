/* sub_607685AC
 * address: 0x607685AC   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607685AC(int a1)
{
  int result; // r0
  _DWORD *v3; // r6
  int v4; // r5

  v3 = (_DWORD *)(a1 + 9704);
  result = FIELD_U32(a1, 9704);
  if ( result == 2 )
  {
    result = dword_60C9CF0C;
    if ( FIELD_S8(dword_60C9CF0C, 1404) >= 0 )
    {
      result = FIELD_U8(dword_60C9CF0C, 1406);
      if ( !FIELD_U8(dword_60C9CF0C, 1406) )
        return (int)sub_60766314(a1, &stru_60CBF37C, 0);
    }
  }
  else
  {
    if ( result != 1 )
    {
      if ( !result )
      {
        v4 = dword_60CBFA90;
        result = FIELD_U8(dword_60CBFA90, 448);
        if ( FIELD_U8(dword_60CBFA90, 448) )
        {
          result = sub_607782F4(dword_60CBFA90);
          if ( result == FIELD_S8(a1, 84) )
          {
            *v3 = 1;
            if ( FIELD_U32(v4, 440) != result )
            {
              FIELD_U32(a1, 9712) = 10;
              return 9712;
            }
          }
        }
      }
      return result;
    }
    result = FIELD_U32(a1, 9712);
    if ( result )
      return result;
    sub_60778334(dword_60CBFA90);
    result = FIELD_U32(a1, 9696);
    switch ( result )
    {
      case 2:
        sub_60766314(a1, &stru_60CBF37C, 0);
        FIELD_U32(a1, 124) = -1073741824;
        return sub_607612CC(a1, 0);
      case 1:
        return (int)sub_60766314(a1, (StateBase *)&unk_60CBF64C, 4);
      case 0:
        sub_60766314(a1, &stru_60CBF37C, 0);
        sub_607663F4(a1);
        return sub_607612CC(a1, 0);
    }
  }
  return result;
}
