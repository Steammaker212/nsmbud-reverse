/* sub_60426E38
 * address: 0x60426E38   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60426E38(int a1, int a2)
{
  int v4; // r5
  int v5; // r4
  unsigned int v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r1
  int v11; // [sp+0h] [bp-28h] BYREF

  sub_6090B310(dword_60CCF464);
  if ( a2 )
  {
    sub_60951E50(&v11);
    sub_60947118(a1 + 6896, v11);
  }
  v4 = a1 + 360;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = FIELD_U32(a1, 7300);
    if ( FIELD_U32(a1, 7296) > v6 )
      v7 += v5;
    FIELD_U32(v7, 1764) = 3;
    FIELD_U8(v7, 840) |= 4u;
    v8 = sub_60959C50(v4);
    v9 = a1 + 4 * v6++;
    v5 += 2088;
    v4 += 160;
    FIELD_U32(v9, 200) = v8;
  }
  while ( v6 != 40 );
  if ( !FIELD_U8(a1, 17944) )
    sub_604265B4(a1);
  FIELD_U32(a1, 17956) = sub_6095C088(a1 + 6896, &dword_60C9C010);
  FIELD_U32(a1, 17960) = sub_6095C088(a1 + 6896, &algn_60C9C014[4]);
  FIELD_U32(a1, 17964) = sub_6095C088(a1 + 6896, &dword_60C9C020);
  FIELD_U32(a1, 17968) = sub_6095C088(a1 + 6896, &dword_60C9C028);
  FIELD_U32(a1, 17972) = sub_6095C088(a1 + 6896, &dword_60C9C030);
  FIELD_U32(a1, 17976) = sub_6095C088(a1 + 6896, &dword_60C9C038);
  FIELD_U32(a1, 17980) = sub_6095C088(a1 + 6896, &dword_60C9C040);
  FIELD_U32(a1, 17984) = sub_6095C088(a1 + 6896, &dword_60C9C048);
  FIELD_U32(a1, 17988) = sub_6095C088(a1 + 6896, &unk_60C9C050);
  FIELD_U32(a1, 17992) = sub_6095C088(a1 + 6896, &dword_60C9C058);
  FIELD_U32(a1, 17996) = sub_6095C088(a1 + 6896, &dword_60C9C060);
  FIELD_U32(a1, 18000) = sub_6095C088(a1 + 6896, &unk_60C9C068);
  FIELD_U32(a1, 18004) = sub_6095C088(a1 + 6896, &dword_60C9C070);
  FIELD_U32(a1, 18008) = sub_6095C088(a1 + 6896, &dword_60C9C078);
  return sub_6090B32C(dword_60CCF464);
}
