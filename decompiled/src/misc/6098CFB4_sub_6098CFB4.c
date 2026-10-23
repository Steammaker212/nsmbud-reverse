/* sub_6098CFB4
 * address: 0x6098CFB4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6098CFB4(_DWORD *a1, void *a2)
{
  int v3; // r5
  _DWORD *v4; // r4
  int (__fastcall *v5)(int, _DWORD *); // r7
  int v6; // r0
  int v7; // r0
  _DWORD v9[8]; // [sp+0h] [bp-20h] BYREF

  v3 = *(_DWORD *)(a1[5] + 836);
  v4 = (_DWORD *)operator_new_8DE25C(0x24u, a2, 4);
  sub_60982D30(v4, v3, *(_DWORD *)(a1[5] + 856));
  v5 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 32);
  v6 = (*(int (__fastcall **)(_DWORD *))(*a1 + 64))(a1);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = v6;
  v7 = v5(v3, v9);
  if ( !v7 )
    return 0;
  sub_60982EE0((int)v4, *(const char **)(v7 + 104), FIELD_U32(v7, 108));
  return v4;
}
