/* sub_603F0B38
 * address: 0x603F0B38   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603F0B38(int a1, int a2, int a3, int a4)
{
  switch ( a3 )
  {
    case 17:
      if ( dword_60CBD830 && sub_6068C438(MaskMgr_instance) == 1 )
        dark_mask_texture_ref(dword_60CBD830, a4);
      break;
    case 13:
      if ( dword_60CBD830 )
        mask_texture_ref(dword_60CBD830, a4);
      break;
    case 3:
      if ( dword_60CBD830 )
        reduce_gbuffer_texture_ref(dword_60CBD830, a4);
      break;
  }
}
