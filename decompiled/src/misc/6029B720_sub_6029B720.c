/* sub_6029B720
 * address: 0x6029B720   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029B720(Actor *a1)
{
  if ( *(_DWORD *)&a1[83].movementId == 1 && FIELD_U8(dword_60CC6D8C, 17) )
    *(float *)&FIELD_U32(a1 + (1) * 80, 0x20) = *(float *)&FIELD_U32(a1 + (1) * 80, 0x20) + -64.0;
  return sub_60299850(a1);
}
