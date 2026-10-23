/* sub_60494628
 * address: 0x60494628   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60494628(int a1)
{
  FIELD_U8(a1, 4910) = 0;
  sub_60502548(a1 + 3856);
  FIELD_U16(a1, 4908) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3896));
  FIELD_U8(a1, 5936) = 0;
  FIELD_U8(a1, 5937) = 0;
  FIELD_U32(a1, 5948) = 4;
  JUMPOUT(0x608169B8);
}
