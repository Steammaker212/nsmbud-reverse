/* sub_602B6460
 * address: 0x602B6460   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B6460(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  int v4; // r5
  int v5; // s0
  int v6; // t1

  v2 = (_DWORD *)(a1 + 6096);
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v3 == (*(int (**)(void))(dword_60C90F3C + 8))()
    || (v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2), v4 == (*(int (**)(void))(dword_60C90F5C + 8))()) )
  {
    v5 = 1033476506;
  }
  else
  {
    v5 = 1034818683;
  }
  FIELD_U32(a1, 104) = v5;
  FIELD_U32(a1, 124) = 0;
  v6 = FIELD_U8(a1, 6318);
  FIELD_U8(a1, 6318) = v6 | 2;
  return v6 | 2;
}
