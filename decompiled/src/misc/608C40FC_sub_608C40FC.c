/* sub_608C40FC
 * address: 0x608C40FC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C40FC(int a1, int a2)
{
  int result; // r0
  int v3; // r2
  int v4; // t1
  _DWORD *v5; // r1
  int v6; // t1

  v4 = FIELD_U32(a1, 524);
  result = a1 + 524;
  v3 = v4;
  v6 = FIELD_U32(a2, 4);
  v5 = (_DWORD *)(a2 + 4);
  *v5 = v3;
  FIELD_U32(v6, 4) = result;
  *(_DWORD *)(*(_DWORD *)result + 4) = v5;
  *(_DWORD *)result = v6;
  return result;
}
