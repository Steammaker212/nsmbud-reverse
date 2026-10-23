/* sub_601F0304
 * address: 0x601F0304   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F0304(int a1)
{
  int v2; // r0
  int result; // r0
  bool v4; // zf

  FIELD_U32(a1, 212) = FIELD_U32(a1, 640);
  sub_601F03B8(a1);
  v2 = FIELD_U32(a1, 636);
  FIELD_U32(a1, 128) = v2;
  FIELD_U32(a1, 132) = v2;
  FIELD_U32(a1, 136) = v2;
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 304) + 68))(**(_DWORD **)(a1 + 304), a1 + 128);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 324))(a1);
  *(_DWORD *)(**(_DWORD **)(a1 + 304) + 36) = 0;
  sub_60427EF4(dword_60C9BBD4, **(_DWORD **)(a1 + 304));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 344))(a1);
  result = FIELD_U32(a1, 592);
  v4 = result == 13;
  if ( result != 13 )
    v4 = result == 11;
  if ( v4 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 352))(a1);
  return result;
}
