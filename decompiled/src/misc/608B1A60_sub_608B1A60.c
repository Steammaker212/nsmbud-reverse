/* sub_608B1A60
 * address: 0x608B1A60   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B1A60(int a1)
{
  unsigned __int16 v1; // r0

  v1 = FIELD_U16(a1, 12) - 8705;
  if ( v1 <= 2u )
    return dword_60B33D30[(__int16)v1];
  else
    return 0;
}
