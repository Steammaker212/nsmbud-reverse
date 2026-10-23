/* sub_608CBE0C
 * address: 0x608CBE0C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CBE0C(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  _DWORD *v8; // r5
  _DWORD *v9; // r0
  int v10; // r1
  _DWORD *v11; // r0
  char *v12; // r0
  char v13; // r1
  char v14; // r3
  char v15; // r6
  char v16; // r0

  v7 = sub_608D9768(FIELD_U32(a1, 4), a3);
  v8 = (_DWORD *)sub_608D97B0(v7, a4);
  v9 = (_DWORD *)sub_608D9798(FIELD_U32(a1, 4));
  v10 = 0;
  if ( *v9 > *v8 )
  {
    v11 = &v9[2 * *v8];
    *(_DWORD *)a2 = v11[1];
    FIELD_U32(a2, 4) = v11[2];
    FIELD_F32(a2, 20) = sub_608D9AA0(v8);
    v12 = (char *)sub_608D9AD0(v8);
    v13 = *v12;
    v14 = v12[2];
    v15 = v12[3];
    FIELD_U8(a2, 9) = v12[1];
    FIELD_U8(a2, 12) = v12[4];
    FIELD_U8(a2, 8) = v13;
    FIELD_U8(a2, 11) = v15;
    FIELD_U8(a2, 10) = v14;
    FIELD_U8(a2, 13) = sub_608D9A08(v8);
    FIELD_U8(a2, 14) = sub_608D9A44(v8);
    FIELD_U8(a2, 15) = sub_608D9A70(v8);
    v16 = sub_608D9A20(v8);
    v10 = 1;
    FIELD_U8(a2, 16) = v16;
  }
  return v10;
}
