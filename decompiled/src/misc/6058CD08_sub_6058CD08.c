/* sub_6058CD08
 * address: 0x6058CD08   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058CD08(int a1)
{
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1061997773;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 1082130432;
  FIELD_U32(a1, 136) = -1056964608;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = -1110651699;
  if ( FIELD_U32(EnemyCounterMaybe_instance, 32) )
  {
    sub_6057AF70((_DWORD *)a1);
    FIELD_U8(a1, 6056) = 1;
  }
  FIELD_U8(a1, 7402) = 1;
  FIELD_U32(a1, 3200) |= 0x800000u;
  FIELD_U32(a1, 7372) = 2;
  FIELD_U32(a1, 6004) = 1036831949;
  return 6004;
}
