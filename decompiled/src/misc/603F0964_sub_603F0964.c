/* sub_603F0964
 * address: 0x603F0964   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603F0964(int a1, int a2, int a3, int a4)
{
  switch ( a3 )
  {
    case 0:
      if ( dword_60CBD830 )
        lava_line_texture_ref(dword_60CBD830, a4);
      break;
    case 1:
      gaussian_ref(dword_60C9BAAC, 2, a4);
      if ( dword_60CBD830 )
        JUMPOUT(0x6071DF7C);
      return;
    case 2:
      if ( dword_60CBD830 )
        sub_6071E5F0(dword_60CBD830, a4);
      break;
    case 3:
      if ( dword_60CBD830 )
        j_gbuffer_texture_ref_2(dword_60CBD830, a4);
      break;
    default:
      return;
  }
}
