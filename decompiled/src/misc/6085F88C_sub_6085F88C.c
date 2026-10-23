/* sub_6085F88C
 * address: 0x6085F88C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085F88C(int a1, float a2, float a3, int a4, int a5, int a6)
{
  int v10; // r5
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r5
  int v14; // r0

  sub_608A7DBC(a2, a3);
  *(_DWORD *)a1 = off_60C5A554;
  FIELD_U32(a1, 48) = a6;
  FIELD_F32(a1, 40) = a2 + a2;
  FIELD_F32(a1, 44) = a3 + a3;
  sub_608A7E94(a1, 4 * a6 + 20);
  sub_608A7E9C(a1, 12 * FIELD_U32(a1, 48) + 18);
  v10 = sub_608A7E14(a1);
  v11 = sub_608A7E58(a1);
  sub_608A7E84(a1, v11 * v10);
  v12 = sub_608A7E50(a1);
  v13 = 1;
  if ( v12 <= 2 )
    v13 = dword_60B1507C[v12];
  v14 = sub_608A7E60(a1);
  sub_608A7E8C(a1, v14 * v13);
  return a1;
}
