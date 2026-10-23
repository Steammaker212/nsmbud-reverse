/* SkeletalAnim_calculate
 * address: 0x60448BB0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SkeletalAnim_calculate(float *a1)
{
  int result; // r0
  bool v3; // zf
  int v4; // r5

  result = *((_DWORD *)a1 + 34);
  v3 = result == 0;
  if ( result )
  {
    result = *((_DWORD *)a1 + 32);
    v3 = result == 0;
  }
  if ( !v3 )
  {
    v4 = *((_DWORD *)a1 + 9);
    *(float *)v4 = (*(float (__fastcall **)(_DWORD, float, float, float))(v4 + 16))(
                     FIELD_U32(v4, 20),
                     a1[5],
                     FIELD_F32(v4, 4),
                     FIELD_F32(v4, 8));
    return nn__g3d__SkeletalAnimObj__Calculate(a1 + 8);
  }
  return result;
}
