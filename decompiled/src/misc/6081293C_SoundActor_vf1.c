/* SoundActor_vf1
 * address: 0x6081293C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SoundActor_vf1(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  *a1 = SoundActor_vtable;
  if ( a1[33] )
  {
    nullsub_62();
    operator_delete(v2);
  }
  v3 = (void *)nn__atk__SoundActor__dtor(a1);
  operator_delete(v3);
}
