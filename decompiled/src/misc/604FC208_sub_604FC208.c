/* sub_604FC208
 * address: 0x604FC208   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FC208(int a1)
{
  FIELD_U8(a1, 36555) = 1;
  FIELD_U8(a1, 36553) = 1;
  return sub_60402084(dword_60C99E68, FIELD_U32(a1, 36544));
}
