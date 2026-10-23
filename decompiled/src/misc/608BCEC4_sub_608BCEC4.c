/* sub_608BCEC4
 * address: 0x608BCEC4   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BCEC4(int *a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r2
  _DWORD *v6; // r1
  int v7; // r3
  int v8; // r3
  int v9; // r3

  v4 = sub_608BCA14(a1[1]);
  *(_BYTE *)a2 = *(_BYTE *)v4;
  FIELD_U8(a2, 1) = FIELD_U8(v4, 1);
  FIELD_U8(a2, 2) = FIELD_U8(v4, 2);
  FIELD_U8(a2, 3) = FIELD_U8(v4, 3);
  FIELD_U32(a2, 4) = FIELD_U32(v4, 4);
  v5 = (_DWORD *)(v4 + 8);
  FIELD_U32(a2, 8) = FIELD_U32(v4, 8);
  v6 = (_DWORD *)(v4 + 12);
  FIELD_U32(a2, 12) = FIELD_U32(v4, 12);
  FIELD_U32(a2, 16) = FIELD_U32(v4, 16);
  FIELD_U32(a2, 20) = FIELD_U32(v4, 20);
  FIELD_U32(a2, 24) = FIELD_U32(v4, 24);
  FIELD_U32(a2, 28) = FIELD_U32(v4, 28);
  FIELD_U32(a2, 32) = FIELD_U32(v4, 32);
  FIELD_U32(a2, 36) = FIELD_U32(v4, 36);
  FIELD_U32(a2, 40) = FIELD_U32(v4, 40);
  FIELD_U32(a2, 44) = FIELD_U32(v4, 44);
  v7 = FIELD_U32(v4, 48);
  FIELD_U32(a2, 52) = FIELD_U32(v4, 52);
  FIELD_U32(a2, 48) = v7;
  FIELD_U16(a2, 56) = FIELD_U16(v4, 56);
  v8 = FIELD_U32(v4, 60);
  FIELD_U32(a2, 64) = FIELD_U32(v4, 64);
  FIELD_U32(a2, 60) = v8;
  v9 = 0;
  if ( *(_DWORD *)(*a1 + 8) >> 18 )
  {
    v5 = (_DWORD *)(v4 + 68);
    v6 = (_DWORD *)(v4 + 72);
  }
  FIELD_U32(a2, 68) = *v5;
  FIELD_U32(a2, 72) = *v6;
  if ( *(_DWORD *)(*a1 + 8) > 0x4FFFFu )
    v9 = FIELD_U32(v4, 76);
  FIELD_U32(a2, 76) = v9;
  return 1;
}
