/* sub_6016860C
 * address: 0x6016860C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6016860C(int a1, int a2)
{
  return (FIELD_U32(a2, 24) & 0xFF0000) != 0x40000 && (unsigned __int16)FIELD_U32(a2, 24) == 0xD;
}
