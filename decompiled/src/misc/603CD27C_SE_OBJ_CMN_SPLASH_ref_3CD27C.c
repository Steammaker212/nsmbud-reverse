/* SE_OBJ_CMN_SPLASH_ref_3CD27C
 * address: 0x603CD27C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_ref_3CD27C(int a1, Vec2 *a2)
{
  return StageActor__createWaterSplash(
           (StageActor *)a1,
           a2,
           dword_60AF2108[FIELD_U32(a1, 6300)],
           dword_60AF2110[FIELD_U32(a1, 6300)],
           "SE_OBJ_CMN_SPLASH");
}
