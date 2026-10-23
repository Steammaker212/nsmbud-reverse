/* sub_604F9430
 * address: 0x604F9430   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F9430(_DWORD *a1)
{
  int *v2; // r6
  int v3; // r0
  int v4; // r1
  int *v5; // r2
  _DWORD *v6; // r3
  int v7; // t1
  int v8; // r0
  int v9; // r1
  int *v10; // r2
  _DWORD *v11; // r3
  int v12; // t1
  int v13; // r0
  int v14; // r1
  int *v15; // r2
  _DWORD *v16; // r3
  int v17; // t1
  int v18; // r0
  int v19; // r1
  int *v20; // r2
  _DWORD *v21; // r3
  int v22; // t1
  int v23; // r0
  int v24; // r1
  _DWORD *v25; // r2
  int v26; // t1
  int result; // r0
  _BYTE v28[88]; // [sp+0h] [bp-58h] BYREF

  v2 = a1 + 911;
  v3 = operator_new(0x50u);
  v4 = 68;
  v5 = v2;
  v6 = v28;
  do
  {
    v7 = *v5++;
    v4 -= 4;
    *v6++ = v7;
  }
  while ( v4 );
  a1[887] = sub_604F8B68(v3, a1[908], a1[909], a1[910]);
  v8 = operator_new(0x50u);
  v9 = 68;
  v10 = v2;
  v11 = v28;
  do
  {
    v12 = *v10++;
    v9 -= 4;
    *v11++ = v12;
  }
  while ( v9 );
  a1[888] = sub_604F8B68(v8, a1[908], a1[909], a1[910]);
  v13 = operator_new(0x50u);
  v14 = 68;
  v15 = v2;
  v16 = v28;
  do
  {
    v17 = *v15++;
    v14 -= 4;
    *v16++ = v17;
  }
  while ( v14 );
  a1[889] = sub_604F8B68(v13, a1[908], a1[909], a1[910]);
  v18 = operator_new(0x50u);
  v19 = 68;
  v20 = v2;
  v21 = v28;
  do
  {
    v22 = *v20++;
    v19 -= 4;
    *v21++ = v22;
  }
  while ( v19 );
  a1[890] = sub_604F8B68(v18, a1[908], a1[909], a1[910]);
  v23 = operator_new(0x50u);
  v24 = 68;
  v25 = v28;
  do
  {
    v26 = *v2++;
    v24 -= 4;
    *v25++ = v26;
  }
  while ( v24 );
  a1[891] = sub_604F8B68(v23, a1[908], a1[909], a1[910]);
  result = a1[892];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
