/* sub_6059BDF8
 * address: 0x6059BDF8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059BDF8(int a1, _DWORD *a2, int a3)
{
  int v3; // r12
  int v6; // [sp+Ch] [bp-2Ch]
  int v7; // [sp+1Ch] [bp-1Ch]
  int v8; // [sp+2Ch] [bp-Ch]

  (*(void (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 8) + 108))(FIELD_U32(a1, 8), a3, v3);
  *a2 = v6;
  a2[1] = v7;
  a2[2] = v8;
  return v8;
}
