/* sub_604DE8F8
 * address: 0x604DE8F8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DE8F8(int a1)
{
  _DWORD *v2; // r0

  *(_DWORD *)a1 = off_60BFD708;
  FIELD_U8(a1, 12) = 0;
  SE_SYS_BACK_ref(a1 + 24);
  v2 = sub_6045BF30();
  FIELD_U8(a1, 492) = 0;
  FIELD_U8(a1, 493) = 0;
  FIELD_U8(a1, 494) = 1;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 80) = 2;
  sub_6045BF58((int)v2, 4);
  return a1;
}
