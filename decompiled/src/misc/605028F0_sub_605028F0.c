/* sub_605028F0
 * address: 0x605028F0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605028F0(int a1, _DWORD *a2, int a3)
{
  int v5; // r0
  int v6; // r2

  v5 = sub_608DE61C(a1 + 52, *a2);
  v6 = 0;
  if ( v5 )
    v6 = v5 - FIELD_U32(a1, 64);
  FIELD_U8(v6, 208) = a3 ^ 1;
  FIELD_U32(v6, 204) = 0;
  return a3 ^ 1;
}
