/* SE_VOC_IGG_JUMP_ref
 * address: 0x6009BE4C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_IGG_JUMP_ref(int a1)
{
  sub_60421AD4(FIELD_U32(a1, 7096));
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  return sub_608134CC(a1 + 6332, "SE_VOC_IGG_JUMP", FIELD_S16(a1, 6640), 0);
}
