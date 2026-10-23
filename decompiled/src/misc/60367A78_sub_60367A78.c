/* sub_60367A78
 * address: 0x60367A78   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_60367A78(StageActor *a1)
{
  FIELD_U32(a1, 0x6C).z = sub_60007178(dword_60C7B3F8);
  ActiveCollider__init(&FIELD_U32(a1, 0xBC), a1, (ActiveColliderInfo *)&unk_60BF036C, (int)&a1[10].speed.z);
  FIELD_U32(a1, 0x270) = (int)&a1[10].maxSpeed.y;
  return (char *)&a1[10].maxSpeed.y;
}
