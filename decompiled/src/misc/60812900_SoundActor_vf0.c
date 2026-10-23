/* SoundActor_vf0
 * address: 0x60812900   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SoundActor_vf0(_DWORD *a1)
{
  void *v2; // r0

  *a1 = SoundActor_vtable;
  if ( a1[33] )
  {
    nullsub_62();
    operator_delete(v2);
  }
  return nn__atk__SoundActor__dtor(a1);
}
