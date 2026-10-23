/* sub_60995FBC
 * address: 0x60995FBC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60995FBC(_DWORD *a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r1
  int v4; // r2
  int result; // r0

  v2 = *(_DWORD *)(a1[4] + 12);
  a1[17] = *a2;
  a1[18] = a2[1];
  v3 = FIELD_U32(v2, 24);
  v4 = FIELD_U32(v2, 28);
  a1[19] = v3;
  a1[20] = v4;
  result = a1[16];
  if ( result )
    return (*(int (__fastcall **)(int, _DWORD, float))(*(_DWORD *)result + 84))(result, 0, 1.0);
  return result;
}
