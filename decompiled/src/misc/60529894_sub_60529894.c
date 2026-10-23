/* sub_60529894
 * address: 0x60529894   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60529894(int a1, unsigned int a2, int a3, int a4, int a5, char a6)
{
  unsigned int v10; // r0
  int v11; // r10
  int v12; // r11
  int v13; // r9
  _DWORD *v14; // r9
  int v15; // t1
  unsigned int v16; // r2
  float v17; // s0
  float v18; // s2
  int result; // r0
  float v20; // s0

  FIELD_U32(a1, 36) = a3;
  FIELD_U32(a1, 40) = a5;
  FIELD_U8(a1, 3064) = a6;
  v10 = 0;
  if ( a2 < 6 )
    v10 = a2;
  v11 = 9 * v10;
  v12 = dword_60C99DEC;
  v13 = dword_60C99DEC + 16 + 72 * v10;
  v15 = FIELD_U32(v13, 36);
  v14 = (_DWORD *)(v13 + 36);
  v16 = sub_603FCB00((_DWORD *)(dword_60C99DEC + 16), v15);
  if ( v16 > 3 )
    v16 = 0;
  sub_60402758(a1 + 44, a3, v16, a2, 0, a4, v16, 0, 1, 0);
  sub_604056C4((_DWORD *)(a1 + 44), 1);
  if ( a3 == 8 )
  {
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(FIELD_U32(a1, 60) + 12) + 180))(
      *(_DWORD *)(FIELD_U32(a1, 60) + 12),
      *v14);
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 60) + 4))(
      FIELD_U32(a1, 60),
      *(unsigned __int8 *)(v12 + 8 * v11 + 64));
  }
  FIELD_U32(a1, 2584) = a2;
  FIELD_U8(a1, 2733) = 1;
  v17 = FIELD_F32(a5, 28);
  v18 = FIELD_F32(a5, 60);
  result = FIELD_U32(a5, 24);
  FIELD_U32(a1, 3040) = result;
  v20 = (float)(v17 + (float)(v18 * -0.5)) + -85.0;
  FIELD_F32(a1, 3044) = v20;
  FIELD_U32(a1, 3048) = 1065353216;
  FIELD_U32(a1, 424) = result;
  FIELD_F32(a1, 428) = v20;
  FIELD_U32(a1, 432) = 1065353216;
  FIELD_U8(a1, 2739) = 1;
  return result;
}
