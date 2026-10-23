/* j_SoundActor_play
 * address: 0x60812204   size: 4   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// attributes: thunk
int *__fastcall j_SoundActor_play(int a1, const char *name, Vec2 *a3, float *a4)
{
  return BasicSoundActor_play(a1, name, a3, a4);
}
