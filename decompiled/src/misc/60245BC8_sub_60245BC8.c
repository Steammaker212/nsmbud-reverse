/* sub_60245BC8
 * address: 0x60245BC8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60245BC8(int a1)
{
  if ( !FIELD_U32(a1, 6320) )
  {
    sub_603F01A0(dword_60C99D6C, FIELD_S8(a1, 6314), 20, 0);
    sub_603F01A0(dword_60C99D6C, FIELD_S8(a1, 6314), 26, 0);
    sub_603F01A0(dword_60C99D6C, FIELD_S8(a1, 6314), 25, 0);
    sub_603F01A0(dword_60C99D6C, FIELD_S8(a1, 6314), 30, 0);
  }
  EffectData_create(440, (Vec3 *)(a1 + 6328), 0, a1 + 144);
  return StageActor__delete((StateActor *)a1, 1);
}
