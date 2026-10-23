/* sub_603F0A44
 * address: 0x603F0A44   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603F0A44(int a1, int a2, int a3, int a4)
{
  switch ( a3 )
  {
    case 0:
      if ( dword_60CBD830 )
        sub_6071DF2C(dword_60CBD830, a4);
      break;
    case 1:
      if ( dword_60CBD830 )
      {
        sub_6071E5AC(dword_60CBD830, a4);
        sub_6071E664(dword_60CBD830, a4);
      }
      break;
    case 2:
      if ( dword_60CBD830 )
      {
        sub_6071E638(dword_60CBD830, a4);
        sub_6071E9D0(dword_60CBD830, a4);
      }
      break;
    case 3:
      if ( dword_60CBD830 )
        sub_6071EB4C(dword_60CBD830, a4);
      break;
    default:
      return;
  }
}
