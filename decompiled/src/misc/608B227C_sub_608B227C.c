/* sub_608B227C
 * address: 0x608B227C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B227C(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r5

  v4 = sub_608B175C(FIELD_U32(a1, 60), a2);
  v5 = v4;
  if ( !v4 )
    return 0;
  *(_DWORD *)a3 = *(_DWORD *)v4;
  FIELD_U32(a3, 4) = FIELD_U32(v4, 4);
  FIELD_U8(a3, 10) = FIELD_U8(v4, 8);
  FIELD_U32(a3, 12) = sub_608B1CC8(v4);
  FIELD_U32(a3, 16) = sub_608B1CEC(v5);
  FIELD_U32(a3, 20) = sub_608B1D14(v5);
  FIELD_U16(a3, 24) = sub_608B1D48(v5);
  FIELD_U8(a3, 9) = sub_608B1D7C(v5);
  FIELD_U8(a3, 8) = sub_608B1DA8(v5);
  FIELD_U8(a3, 11) = FIELD_U8(v5, 9);
  FIELD_U8(a3, 26) = sub_608B1EB0(v5);
  return 1;
}
