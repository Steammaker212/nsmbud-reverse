/* sub_6009003C
 * address: 0x6009003C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6009003C(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  int v4; // r5
  float v5; // s0
  int result; // r0

  v2 = (_DWORD *)(a1 + 6096);
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v3 == (*(int (**)(void))(dword_60C82220 + 8))()
    || (v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2), v4 == (*(int (**)(void))(dword_60C82080 + 8))()) )
  {
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 780))(a1, 0);
    v5 = 0.0;
  }
  else
  {
    v5 = -1.0;
  }
  FIELD_F32(a1, 124) = v5;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 100) = 1036831949;
  result = dword_60C82348;
  FIELD_U32(a1, 9356) = dword_60C82348;
  return result;
}
