/* sub_602C47E0
 * address: 0x602C47E0   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C47E0(int a1)
{
  _BYTE *v2; // r0
  int v3; // t1
  int result; // r0
  int v5; // r1

  v3 = FIELD_U8(a1, 6334);
  v2 = (_BYTE *)(a1 + 6334);
  if ( v3 == 1 )
  {
    *v2 = 0;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C915C4);
  }
  else
  {
    FIELD_U32(a1, 6096) = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6092) + 8))(FIELD_U32(a1, 6092));
    (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 12))(FIELD_U32(a1, 6084), a1 + 6092);
    v5 = FIELD_U32(a1, 6100);
    FIELD_U32(a1, 6100) = 0;
    result = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 16))(FIELD_U32(a1, 6084), v5);
    FIELD_U32(a1, 6092) = result;
  }
  return result;
}
