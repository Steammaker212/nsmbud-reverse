/* sub_601A8410
 * address: 0x601A8410   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A8410(int a1)
{
  int v2; // r11
  int v3; // r5
  int *v4; // r10
  __guard *v5; // r5
  __guard *v6; // r6
  int *v7; // r5
  int *v8; // r9
  int *v9; // t1
  signed int v10; // r6
  int v11; // r0
  bool v12; // cc
  int (**v14)(); // [sp+8h] [bp-38h] BYREF
  int *v15; // [sp+Ch] [bp-34h]
  int v16; // [sp+10h] [bp-30h]
  int v17; // [sp+14h] [bp-2Ch] BYREF

  FIELD_U32(a1, 484) = 150;
  v2 = a1 + 80;
  FIELD_U32(a1, 428) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 432) = FIELD_U32(a1, 84);
  FIELD_U32(a1, 436) = FIELD_U32(a1, 88);
  v3 = FIELD_U32(a1, 488);
  v15 = &v17;
  v14 = &BufferedSafeStringBase_char_vtable_probably;
  v16 = 8;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v14);
  v14 = &off_60BD58EC;
  v4 = v15;
  v5 = &dword_60C8A350[2 * v3];
  v6 = v5 + 9;
  (*(void (__fastcall **)(__guard *))(v5[9] + 12))(v5 + 9);
  v9 = (int *)v5[10];
  v7 = v5 + 10;
  v8 = v9;
  if ( v4 != v9 )
  {
    (*(void (__fastcall **)(__guard *))(*v6 + 12))(v6);
    v10 = 0;
    v11 = *v7;
    while ( *(_BYTE *)(v11 + v10) )
    {
      if ( !*(_BYTE *)(v11 + v10 + 1) )
      {
        ++v10;
        break;
      }
      if ( !*(_BYTE *)(v11 + v10 + 2) )
      {
        v10 += 2;
        break;
      }
      v12 = v10 + 2 < 0x80000;
      v10 += 3;
      if ( !v12 )
      {
        v10 = 0;
        break;
      }
    }
    if ( v10 >= v16 )
      v10 = v16 - 1;
    qmemcpy(v4, v8, v10);
    *((_BYTE *)v4 + v10) = 0;
  }
  v14 = &off_60BD4B8C;
  sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 440), 0, 0, (int)&v14);
  FIELD_U32(a1, 444) = FIELD_U32(a1, 84);
  FIELD_F32(a1, 448) = FIELD_F32(a1, 448) + -700.0;
  FIELD_U32(a1, 472) = sub_608332B0(v2, a1 + 440);
  FIELD_U32(a1, 204) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 200) = 1099956224;
  return 1099956224;
}
