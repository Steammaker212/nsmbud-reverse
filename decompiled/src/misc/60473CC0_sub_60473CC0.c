/* sub_60473CC0
 * address: 0x60473CC0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60473CC0(_DWORD *a1, int a2, __int64 *a3)
{
  __int64 *v4; // r0
  __int64 *v6; // r1
  __int64 *v7; // r2
  __int64 v8; // d16
  __int64 v9; // d17
  int v10; // r0
  int v11; // r6
  int v12; // r7
  int v13; // r2
  int result; // r0
  __int64 v15; // [sp+10h] [bp-48h]
  __int64 v16; // [sp+18h] [bp-40h]
  __int64 v17; // [sp+20h] [bp-38h]
  __int64 v18; // [sp+28h] [bp-30h]
  __int64 v19; // [sp+30h] [bp-28h]
  __int64 v20; // [sp+38h] [bp-20h]

  v4 = a3;
  v6 = a3 + 4;
  v7 = a3 + 6;
  v8 = *v4;
  v9 = v4[1];
  v4 += 2;
  v15 = *v4;
  v16 = v4[1];
  v17 = *v6;
  v18 = v6[1];
  v19 = *v7;
  v20 = v7[1];
  sub_6085402C(a1[6]);
  *(_DWORD *)(a1[6] + 224) = a2;
  v10 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
  v11 = a1[4];
  v12 = a1[6];
  v13 = 0;
  if ( v10 )
    v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 228))(v10);
  (*(void (__fastcall **)(int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v11 + 72))(
    v11,
    v12,
    v13,
    *(_DWORD *)(*(_DWORD *)v11 + 72),
    v8,
    HIDWORD(v8),
    v9,
    HIDWORD(v9),
    v15,
    HIDWORD(v15),
    v16,
    HIDWORD(v16),
    v17,
    HIDWORD(v17),
    v18,
    HIDWORD(v18),
    v19,
    HIDWORD(v19),
    v20,
    HIDWORD(v20));
  (*(void (__fastcall **)(_DWORD, _DWORD, int))(*(_DWORD *)a1[4] + 48))(a1[4], a1[6], FIELD_U32(a2, 16) + 8);
  sub_6097F554(a1[6]);
  result = a1[6];
  FIELD_U32(result, 224) = 0;
  return result;
}
