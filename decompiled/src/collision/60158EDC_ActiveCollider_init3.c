/* ActiveCollider_init3
 * address: 0x60158EDC   size: 40   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ActiveCollider_init3(
        ActiveCollider *a1,
        StateActor *a2,
        ActiveColliderInfo *a3,
        char *r3_0,
        int a5,
        int a4)
{
  ActiveCollider__init(a1, &FIELD_U32(a2, 0x0), a3, a4);
  FIELD_U8(a1, 0x6C) = *r3_0;
  FIELD_U8(a1, 0x6D) = a5;
  return a5;
}
