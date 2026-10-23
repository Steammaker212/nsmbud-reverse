/* sub_60787A24
 * address: 0x60787A24   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60787A24(char a1, Vec3 *a2, char a3, int a4, int a5, int a6)
{
  ActorBuildInfo v17; // [sp+0h] [bp-50h] BYREF

  memset(&v17, 0, sizeof(v17));
  v17.profile = Profile__get(0x1BCu);
  if ( a4 == 5 )
    v17.profile = Profile__get(0x1BBu);
  v17.position = *a2;
  _R1 = a5 << 16;
  __asm { UXTB16          R1, R1 }
  v17.settings1 = a1 & 0xF | (16 * (a3 & 0xF)) | (a4 << 8) & 0xF00 | _R1 | (a6 << 24) & 0xF000000;
  return ActorMgr__create((void *)ActorMgr__instance, &v17, 0);
}
