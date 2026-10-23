/* sub_60793114
 * address: 0x60793114   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60793114(_DWORD *a1, float a2)
{
  int v4; // r5
  int result; // r0

  v4 = **(_DWORD **)(a1[6] + 12);
  sub_6041838C((ModelAnimation *)(v4 + 4));
  FIELD_F32(v4, 20) = a2;
  FIELD_U32(v4, 28) |= 2u;
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 140))(a1);
  if ( !result )
    return (*(int (__fastcall **)(_DWORD *, float))(*a1 + 128))(a1, a2);
  return result;
}
