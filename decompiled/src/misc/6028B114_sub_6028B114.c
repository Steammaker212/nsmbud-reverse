/* sub_6028B114
 * address: 0x6028B114   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028B114(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  int v4; // r5
  int v5; // r1
  int result; // r0

  FIELD_U32(a1, 6568) = FIELD_U32(a1, 108);
  FIELD_U8(a1, 6608) = 1;
  v2 = (_DWORD *)(a1 + 6096);
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v3 != (*(int (**)(void))(dword_60C8F30C + 8))() )
  {
    v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
    if ( v4 != (*(int (**)(void))(dword_60C8F2CC + 8))() )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F1CC);
  }
  *v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6092) + 8))(FIELD_U32(a1, 6092));
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 12))(FIELD_U32(a1, 6084), a1 + 6092);
  v5 = FIELD_U32(a1, 6100);
  FIELD_U32(a1, 6100) = 0;
  result = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 16))(FIELD_U32(a1, 6084), v5);
  FIELD_U32(a1, 6092) = result;
  return result;
}
