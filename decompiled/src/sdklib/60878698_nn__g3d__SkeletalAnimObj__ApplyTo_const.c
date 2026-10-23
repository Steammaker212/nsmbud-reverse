/* nn__g3d__SkeletalAnimObj__ApplyTo_const
 * address: 0x60878698   size: 44   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__g3d__SkeletalAnimObj__ApplyTo_const(int a1, int a2)
{
  return (*(int (__fastcall **)(int, _DWORD))((char *)&off_60C5A878
                                            + ((*(_DWORD *)(FIELD_U32(a1, 68) + 72) >> 9) & 0x38)))(
           a1 + (*(int *)((char *)&off_60C5A878 + ((*(_DWORD *)(FIELD_U32(a1, 68) + 72) >> 9) & 0x38) + 4) >> 1),
           FIELD_U32(a2, 28));
}
