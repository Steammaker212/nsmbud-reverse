/* SumoBroLightning_vf53
 * address: 0x603356D4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SumoBroLightning_vf53(int a1, int a2, int a3)
{
  int v3; // r0

  v3 = FIELD_U32(a3, 64);
  if ( v3 )
    (*(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v3 + 1168))(v3, FIELD_U32(a2, 64), 13);
  return 1;
}
