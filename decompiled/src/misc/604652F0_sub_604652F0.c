/* sub_604652F0
 * address: 0x604652F0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604652F0(_DWORD *a1, int a2)
{
  int v4; // r0
  float v5; // s0

  (*(void (__fastcall **)(_DWORD *))(*a1 + 4))(a1);
  v4 = a1[9];
  v5 = FIELD_F32(a2, 112) + FIELD_F32(a2, 576);
  FIELD_F32(v4, 6652) = FIELD_F32(a2, 108) + FIELD_F32(a2, 572);
  FIELD_F32(v4, 6656) = v5;
  *(_DWORD *)(a1[9] + 80) = FIELD_U32(a2, 80);
  (*(void (__fastcall **)(_DWORD *))*a1)(a1);
  (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)a1[9] + 192))(a1[9], &dword_60C9D3AC);
  *(_BYTE *)(a1[9] + 535) = 1;
  return 1;
}
