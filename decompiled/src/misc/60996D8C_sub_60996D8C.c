/* sub_60996D8C
 * address: 0x60996D8C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60996D8C(int a1, unsigned int a2)
{
  int result; // r0
  unsigned int v4; // r2
  int v5; // r5
  int (__fastcall *v6)(int, int); // r6
  int v7; // r0
  int v8; // r6
  bool v9; // zf

  result = FIELD_U32(a1, 36);
  v4 = a2;
  if ( a2 >= 4 )
    v4 = 0;
  v5 = *(_DWORD *)(result + 4 * v4 + 20);
  if ( v5 )
  {
    if ( v5 == result )
      return result;
    v6 = *(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 20);
    v7 = sub_6098BED8(*(_DWORD *)(FIELD_U32(a1, 16) + 72));
    result = v6(v5, v7);
    if ( result != 1 )
      return result;
  }
  else
  {
    result = ((int (__fastcall *)(int))loc_60997330)(a1);
    v5 = result;
    if ( !result )
      return result;
  }
  *(_BYTE *)(FIELD_U32(v5, 16) + 129) = 1;
  v8 = FIELD_U32(a1, 36);
  FIELD_U32(a1, 36) = v5;
  v9 = v8 == 0;
  if ( v8 )
    v9 = v8 == v5;
  if ( !v9 )
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v8 + 12) + 156))(FIELD_U32(v8, 12));
  sub_609978D8(v5, a1 + 44);
  result = FIELD_U32(v5, 16);
  FIELD_U32(result, 104) = v5;
  if ( v8 != v5 )
    return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v5 + 12) + 152))(FIELD_U32(v5, 12));
  return result;
}
