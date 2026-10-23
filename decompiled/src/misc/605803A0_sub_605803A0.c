/* sub_605803A0
 * address: 0x605803A0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605803A0(int a1)
{
  FIELD_U32(a1, 7388) = 1;
  sub_6057A4C4(a1);
  sub_6057A2D0(a1, 1);
  if ( FIELD_U32(EnemyCounterMaybe_instance, 32) )
  {
    sub_6057AF70((_DWORD *)a1);
    FIELD_U8(a1, 6056) = 1;
  }
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  return 0;
}
