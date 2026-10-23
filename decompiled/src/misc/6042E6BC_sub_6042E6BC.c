/* sub_6042E6BC
 * address: 0x6042E6BC   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042E6BC(_DWORD *a1, int a2, int a3)
{
  int v6; // r6
  int v7; // r9
  int v8; // r4
  _DWORD *v9; // r7
  char *v10; // r5
  int result; // r0
  int v12; // [sp+8h] [bp-30h] BYREF
  int v13; // [sp+Ch] [bp-2Ch]
  int v14; // [sp+10h] [bp-28h]
  int v15; // [sp+14h] [bp-24h]

  dword_60CC7810(FIELD_U32(a2, 192), a1[356], a1[360]);
  dword_60CC7814(FIELD_U32(a2, 192), a1[355], a1[358]);
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v6 = *a1;
  sub_6091D95C(*a1);
  v7 = sub_6083DCF0(a3, 0);
  v8 = sub_6083DD1C(a3, 0);
  sub_60835528(v7, &v12);
  dword_60CC781C(FIELD_U32(a2, 192), **(char **)(v6 + 604), v12, v13, v8);
  if ( sub_6083DCDC(a3, 2) == 1 )
  {
    v7 = sub_6083DCF0(a3, 2);
    v8 = sub_6083DD1C(a3, 2);
  }
  v9 = *(_DWORD **)(v6 + 604);
  if ( FIELD_U32(v6, 600) > 1u )
    v9 += 3;
  if ( *v9 != -1 )
  {
    sub_60835528(v7, &v12);
    dword_60CC781C(FIELD_U32(a2, 192), *(char *)v9, v12, v13, v8);
  }
  if ( sub_6083DCDC(a3, 1) == 1 )
  {
    v7 = sub_6083DCF0(a3, 1);
    v8 = sub_6083DD1C(a3, 1);
  }
  v10 = *(char **)(v6 + 604);
  if ( FIELD_U32(v6, 600) > 2u )
    v10 += 24;
  result = *(_DWORD *)v10;
  if ( *(_DWORD *)v10 != -1 )
  {
    sub_60835528(v7, &v12);
    return dword_60CC781C(FIELD_U32(a2, 192), *v10, v12, v13, v8);
  }
  return result;
}
