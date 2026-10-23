/* sub_608D3DBC
 * address: 0x608D3DBC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D3DBC(int result, int a2)
{
  _DWORD *v2; // r1
  int v3; // t1

  v3 = FIELD_U32(a2, 4);
  v2 = (_DWORD *)(a2 + 4);
  *v2 = *(_DWORD *)result;
  FIELD_U32(v3, 4) = result;
  *(_DWORD *)(*(_DWORD *)result + 4) = v2;
  *(_DWORD *)result = v3;
  return result;
}
