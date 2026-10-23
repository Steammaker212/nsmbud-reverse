/* sub_604B62B4
 * address: 0x604B62B4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604B62B4(int a1)
{
  void *v2; // r0

  *(_DWORD *)a1 = off_60BFE01C;
  if ( FIELD_U8(a1, 3776) )
    sub_608169AC(dword_60CC6B68);
  sub_6045C0A0(a1 + 5412);
  sub_6045C0A0(a1 + 5008);
  sub_6045C0A0(a1 + 4604);
  sub_6045C0A0(a1 + 4200);
  sub_6045C0A0(a1 + 3796);
  v2 = (void *)sub_604B79F4(a1);
  operator_delete(v2);
}
