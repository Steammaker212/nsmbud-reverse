/* sub_60794848
 * address: 0x60794848   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60794848(int a1, _DWORD *a2)
{
  int v3; // r0
  bool v4; // zf
  float v5; // s16
  float v6; // s0

  FIELD_U32(a1, 4) = a2;
  v3 = a2[42];
  if ( (unsigned int)(v3 - 2) < 2 )
    goto LABEL_6;
  v4 = v3 == 1;
  if ( v3 != 1 )
    v4 = v3 == 0;
  if ( v4 )
LABEL_6:
    (*(void (__fastcall **)(_DWORD *, int, int))(*a2 + 64))(a2, -2, -2);
  v5 = (*(float (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 4) + 76))(FIELD_U32(a1, 4), 0);
  v6 = (*(float (__fastcall **)(_DWORD, _DWORD, float))(**(_DWORD **)(a1 + 4) + 80))(FIELD_U32(a1, 4), 0, v5);
  return (*(int (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(a1 + 4) + 84))(
           FIELD_U32(a1, 4),
           0,
           v5,
           v6,
           0.0);
}
