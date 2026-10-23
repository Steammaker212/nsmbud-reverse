/* sub_60599BE4
 * address: 0x60599BE4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60599BE4(int a1)
{
  sub_605DB0B0();
  if ( (FIELD_U8(a1, 6262) & 8) != 0 )
  {
    if ( (FIELD_U8(a1, 6265) & 0x80) != 0 )
      sub_60833454(a1 + 144, &dword_60B3B98C, 45.0, 0.05, 0.01);
    else
      ((void (__fastcall *)(int))loc_60599C58)(a1);
  }
  JUMPOUT(0x6059B854);
}
