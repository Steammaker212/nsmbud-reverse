/* sub_6080A9F4
 * address: 0x6080A9F4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A9F4(int a1)
{
  int v2; // r0

  STRM_BGM_ref();
  sub_6080AC6C(a1);
  v2 = ((int (__fastcall *)(int))loc_6080AEEC)(a1);
  ((void (__fastcall *)(int))loc_6080B148)(v2);
  if ( byte_60CC6B21 == 1 )
  {
    if ( dword_60CC6B28 < 1 )
    {
      if ( !dword_60CC6B28 )
      {
        byte_60CC6B21 = 0;
        sub_6080B284(a1, 0);
      }
    }
    else
    {
      --dword_60CC6B28;
    }
  }
  return sub_6091000C(&dword_60CC6B38);
}
