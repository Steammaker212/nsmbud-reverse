/* sub_601FD9E0
 * address: 0x601FD9E0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FD9E0(int a1)
{
  *(_DWORD *)a1 = off_60BD8300;
  FIELD_U8(dword_60C9CFB8, 20) = 0;
  sub_6045C0A0(a1 + 2788);
  sub_6045C0A0(a1 + 2384);
  sub_6045C0A0(a1 + 1980);
  sub_6045C0A0(a1 + 1576);
  sub_6045C0A0(a1 + 1172);
  nullsub_113(a1 + 1000);
  nullsub_111(a1 + 912);
  nullsub_113(a1 + 740);
  nullsub_111(a1 + 652);
  sub_60954610(a1 + 584);
  sub_60954610(a1 + 516);
  sub_60954610(a1 + 448);
  sub_60954610(a1 + 380);
  sub_60954610(a1 + 312);
  sub_60954610(a1 + 244);
  if ( FIELD_U8(a1, 192) )
    dword_60C8C188 = 0;
  return sead__CalculateTask__dtor((_DWORD *)a1);
}
