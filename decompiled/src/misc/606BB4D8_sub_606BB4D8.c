/* sub_606BB4D8
 * address: 0x606BB4D8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BB4D8(int a1)
{
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6104));
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    SolidOnTopCollider_execute((ColliderBase *)(a1 + 6552));
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
