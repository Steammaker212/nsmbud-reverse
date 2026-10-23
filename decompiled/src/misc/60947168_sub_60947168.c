/* sub_60947168
 * address: 0x60947168   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60947168(_DWORD *a1, int a2, int a3, float a4)
{
  int v8; // r0

  v8 = a1[28];
  if ( v8 != FIELD_U32(a2, 16) )
  {
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 48))(a1, a2);
    v8 = a1[28];
  }
  if ( v8 != FIELD_U32(a3, 16) )
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 48))(a1, a3);
  return sub_609478D8(a1, a2 + FIELD_U32(a2, 20) + 48, a3 + FIELD_U32(a3, 20) + 48, a4);
}
