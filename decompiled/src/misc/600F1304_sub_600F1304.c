/* sub_600F1304
 * address: 0x600F1304   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F1304(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r5

  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 716))(a1) == 1 )
  {
    result = 90;
    switch ( a1[1795] )
    {
      case 2:
      case 3:
      case 4:
        result = 92;
        break;
      case 5:
        return result;
      default:
        goto LABEL_9;
    }
  }
  else
  {
    v3 = a1 + 1795;
    if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 720))(a1) == 1 )
    {
      result = 90;
      switch ( *v3 )
      {
        case 2:
        case 3:
        case 4:
          result = 92;
          break;
        case 5:
          return result;
        default:
          goto LABEL_9;
      }
    }
    else
    {
      result = 60;
      switch ( *v3 )
      {
        case 2:
        case 3:
        case 4:
          result = 46;
          break;
        case 5:
          return result;
        default:
LABEL_9:
          result = 0;
          break;
      }
    }
  }
  return result;
}
