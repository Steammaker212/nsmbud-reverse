/* sub_605D79F8
 * address: 0x605D79F8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605D79F8(CollisionActor *a1, unsigned int a2)
{
  if ( a2 == 2 && a1[1]._.aCollider._.containingHeap != 1 )
    (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 200))(a1);
  CollisionActor__afterCreate(a1, a2);
}
