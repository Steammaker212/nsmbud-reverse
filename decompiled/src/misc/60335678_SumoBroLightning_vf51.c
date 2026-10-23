/* SumoBroLightning_vf51
 * address: 0x60335678   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SumoBroLightning_vf51(int a1, int a2, int a3)
{
  int result; // r0

  result = FIELD_U32(a3, 64);
  if ( result )
    return (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)result + 1168))(result, FIELD_U32(a2, 64), 13);
  return result;
}
