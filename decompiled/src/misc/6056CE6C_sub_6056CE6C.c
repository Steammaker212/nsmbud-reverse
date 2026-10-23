/* sub_6056CE6C
 * address: 0x6056CE6C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056CE6C(int a1)
{
  if ( sub_605B9FEC(dword_60CB061C, a1 + 6980, FIELD_U8(LevelInfo_instance, 18)) == 1 )
    FIELD_U32(a1, 6856) = 21;
  return 1;
}
