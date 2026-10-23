/* sub_60746E38
 * address: 0x60746E38   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60746E38(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // lr

  v5 = 26;
  switch ( a1 )
  {
    case '&':
      v5 = 28;
      break;
    case '\'':
      v5 = 30;
      break;
    case '(':
    case ')':
    case '*':
    case '+':
LABEL_8:
      v5 = a1 - 97;
      if ( (unsigned __int16)(a1 - 97) > 0x19u )
      {
        v5 = a1 - 65;
        if ( (unsigned __int16)(a1 - 65) >= 0x1Au )
          v5 = 28;
      }
      break;
    case ',':
      return (a3 << 28) | (a2 << 24) | (a4 << 29) | (a5 << 30) | (v5 << 16);
    case '-':
      v5 = 29;
      break;
    case '.':
      v5 = 27;
      break;
    default:
      switch ( a1 )
      {
        case 225:
          v5 = 34;
          break;
        case 228:
          v5 = 33;
          break;
        case 232:
          v5 = 31;
          break;
        case 233:
          v5 = 32;
          break;
        default:
          goto LABEL_8;
      }
      break;
  }
  return (a3 << 28) | (a2 << 24) | (a4 << 29) | (a5 << 30) | (v5 << 16);
}
