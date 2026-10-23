/* sub_608CB7F8
 * address: 0x608CB7F8   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CB7F8(int a1, int a2, int a3, int *a4, int a5)
{
  _DWORD *v9; // r10
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r5
  int v14; // r7
  int v15; // r3
  int v16; // r4
  int v17; // r5
  int v18; // r7
  _DWORD *v19; // r0
  int result; // r0
  int v21; // [sp+0h] [bp-C0h] BYREF
  int v22; // [sp+8h] [bp-B8h]
  _BYTE v23[56]; // [sp+88h] [bp-38h] BYREF

  v9 = sub_608C3B10();
  v10 = sub_608C2698((int)v9, 68);
  FIELD_U32(v10, 4) = 45;
  FIELD_U32(v10, 16) = a1 + 456;
  v11 = *a4;
  v12 = a4[1];
  v13 = a4[2];
  v14 = a4[3];
  a4 += 4;
  FIELD_U32(v10, 20) = v11;
  FIELD_U32(v10, 24) = v12;
  FIELD_U32(v10, 28) = v13;
  FIELD_U32(v10, 32) = v14;
  v15 = a4[1];
  v16 = a4[2];
  v17 = a4[3];
  v18 = a4[4];
  FIELD_U32(v10, 36) = *a4;
  FIELD_U32(v10, 40) = v15;
  FIELD_U32(v10, 44) = v16;
  FIELD_U32(v10, 48) = v17;
  FIELD_U32(v10, 52) = v18;
  FIELD_U32(v10, 56) = a2;
  FIELD_U32(v10, 60) = a3;
  FIELD_U8(v10, 64) = a5;
  sub_608C2C1C(v9, (_DWORD *)v10);
  FIELD_U8(a1, 448) = a5;
  FIELD_U32(a1, 444) = a3;
  FIELD_U8(a1, 450) = 1;
  v19 = (_DWORD *)sub_608B4B98((int)v23, a3, a5);
  result = sub_608B4C78(v19, (int)&v21);
  if ( result == 1 )
  {
    result = v22;
    if ( v22 >= 2 )
      result = 2;
    FIELD_U32(a1, 452) = result;
  }
  return result;
}
