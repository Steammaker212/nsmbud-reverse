/* sub_60347B2C
 * address: 0x60347B2C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60347B2C(int a1)
{
  FIELD_U32(a1, 568) &= ~4u;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 104) = 0;
  sub_6027253C((_DWORD *)a1);
  sub_60272510(a1);
  return sub_600009FC((StageActor *)a1);
}
