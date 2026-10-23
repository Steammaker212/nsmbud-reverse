/* sub_607EBD84
 * address: 0x607EBD84   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607EBD84(int a1)
{
  return !FIELD_U8(a1, 36)
      || *(_DWORD *)(*(_DWORD *)a1 + 496)
      || *(_DWORD *)(FIELD_U32(a1, 4) + 496)
      || *(_DWORD *)(FIELD_U32(a1, 8) + 496)
      || *(_DWORD *)(FIELD_U32(a1, 12) + 496)
      || *(_DWORD *)(FIELD_U32(a1, 16) + 496)
      || *(_DWORD *)(FIELD_U32(a1, 20) + 496)
      || *(_DWORD *)(FIELD_U32(a1, 24) + 496)
      || *(_DWORD *)(FIELD_U32(a1, 28) + 496)
      || *(_DWORD *)(FIELD_U32(a1, 32) + 496) != 0;
}
