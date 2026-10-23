/* sub_6019B238
 * address: 0x6019B238   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6019B238(char a1)
{
  return (unsigned __int16)(FIELD_U16(dword_60CC6D78, 520) & (1 << a1)) != 0;
}
