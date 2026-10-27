/* nn__atk__SoundActor__dtor_8A9794
 * address: 0x608A9794   size: 16   group: sdklib
 * sym: nn::atk::SoundActor::~SoundActor() as D0
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall nn__atk__SoundActor__dtor_8A9794(int a1)
{
  void *v1; // r0

  v1 = (void *)nn__atk__SoundActor__dtor(a1);
  operator_delete(v1);
}
