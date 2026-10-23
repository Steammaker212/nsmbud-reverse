/* sub_6054E120
 * address: 0x6054E120   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054E120(int a1)
{
  if ( dword_60CC6484 )
    FIELD_F32(a1, 3788) = FIELD_F32(dword_60CC6484, 124) + -20.0;
  return sub_6054EF70();
}
