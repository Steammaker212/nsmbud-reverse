/* ActorCollisionMgr_dtorFree
 * address: 0x601542B4   size: 16   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall ActorCollisionMgr_dtorFree(int a1)
{
  void *v1; // r0

  v1 = (void *)CollisionMgr_dtor(a1);
  operator_delete(v1);
}
