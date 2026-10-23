/* sub_601E51D8
 * address: 0x601E51D8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E51D8(int a1, const char *a2, int a3, int a4)
{
  double v8[4]; // [sp+0h] [bp-20h] BYREF

  sub_6002442C(v8, a3);
  return BasicSoundActor2_play(a1, a2, (float *)v8, a4);
}
