/* sub_60473624
 * address: 0x60473624   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60473624(int a1, _DWORD *a2)
{
  int v4; // r6
  _DWORD *v5; // r0
  int v6; // r6
  int *v7; // r8
  int v8; // r7
  int v9; // r0
  unsigned int v10; // r6
  int v11; // r7
  int v12; // r0
  int v14; // [sp+0h] [bp-28h] BYREF
  unsigned int v15; // [sp+4h] [bp-24h]
  int *v16; // [sp+8h] [bp-20h]

  v4 = FIELD_U32(a1, 16);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v5 = (_DWORD *)sub_60980818(v4, a2[1]);
  sub_60851BDC(&v14, v5);
  v6 = sub_60851D10(&v14);
  v7 = (int *)operator_new_8DE2C8(4 * v6, dword_60CC7F90, 4);
  v16 = v7;
  sub_6090B310(dword_60CCF464);
  v8 = FIELD_U32(a1, 16);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v9 = sub_60980680(v8, a2[1], 0);
  v14 = v9;
  v15 = v6;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      *v7 = v9;
    }
    else
    {
      v10 = 0;
      do
      {
        v11 = FIELD_U32(a1, 16);
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v12 = sub_60980940(v11, a2[1], v10, 0, v14);
        v16[v10++] = v12;
      }
      while ( v10 < v15 );
    }
  }
  sub_6090B32C(dword_60CCF464);
  return sub_60473758(a1 + 32, a2, &v14);
}
