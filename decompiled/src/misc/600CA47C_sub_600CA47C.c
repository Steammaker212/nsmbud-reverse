/* sub_600CA47C
 * address: 0x600CA47C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CA47C(int a1)
{
  int v2; // r5
  int result; // r0
  _DWORD *v4; // r6

  v2 = dword_60CBFA90;
  result = sub_6077A158(dword_60CBFA90);
  if ( result == 1 )
  {
    v4 = (_DWORD *)(a1 + 6216);
    result = FIELD_U32(a1, 6216);
    switch ( result )
    {
      case 2:
        result = FIELD_U32(a1, 6220);
        if ( !result )
        {
          result = sub_6077A918(v2, 4);
          if ( result == 1 )
          {
            FIELD_U32(a1, 6220) = 0;
            *v4 = 0;
            return (int)StateMgr__changeState((StateMgr *)(a1 + 6244), (StateBase *)&dword_60C83EE0);
          }
        }
        break;
      case 1:
        FIELD_U32(v2, 60) |= 0x800u;
        result = sub_6077A918(v2, 3);
        if ( result == 1 )
        {
          FIELD_U32(a1, 6220) = 120;
          *v4 = 2;
          return 2;
        }
        break;
      case 0:
        result = sub_6077A918(v2, 2);
        if ( result == 1 )
        {
          *v4 = 1;
          return 1;
        }
        break;
    }
  }
  return result;
}
