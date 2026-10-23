/* sub_602C7EA4
 * address: 0x602C7EA4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C7EA4(int a1)
{
  sub_606E6DC8();
  if ( FIELD_U8(dword_60CC6D8C, 17) && sub_60003AE0((StageActor *)a1) == 1 )
    SE_EMY_DOWN_ref_2C7F08(a1);
  ActorScaler_execute((ActorScaler *)(a1 + 6328));
  if ( FIELD_U8(a1, 536) )
    FIELD_U32(a1, 116) = 1169506304;
  return 1;
}
