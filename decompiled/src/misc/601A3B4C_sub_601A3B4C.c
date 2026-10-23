/* sub_601A3B4C
 * address: 0x601A3B4C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A3B4C(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r6
  unsigned int v7; // r8
  unsigned int v8; // r1
  int v9; // r11
  int v10; // r5
  _DWORD *v11; // r7
  int v12; // r0
  int v13; // r1
  _DWORD *v14; // r0
  int *v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r1
  _DWORD *v19; // r0
  int v20; // r2
  int v21; // r3
  _DWORD v23[4]; // [sp+0h] [bp-40h] BYREF
  _DWORD v24[12]; // [sp+10h] [bp-30h] BYREF

  v4 = a4;
  v7 = 0;
  v8 = a4 + 2 * a3;
  if ( v8 >= 0x12 )
    v8 = 0;
  v9 = a1 + 4 * v8;
  v10 = FIELD_U32(v9, 28);
  sub_60181E90(v10, a2);
  v11 = v23;
  v24[0] = dword_60C89E08;
  v24[1] = dword_60C89E0C;
  v24[2] = dword_60C89E10;
  v23[2] = dword_60C89E10;
  v23[0] = dword_60C89E08;
  v23[1] = dword_60C89E0C;
  v12 = sub_60181FC0(v10, a2, v24, v23);
  if ( v12 != 5 )
  {
    if ( v4 >= 2 )
      v4 = 0;
    if ( a3 < 9 )
      v7 = a3;
    v13 = dword_60C89E18;
    *(_DWORD *)(dword_60C89E18 + 8 * v7 + 4 * v4 + 2336) = v12;
    v14 = (_DWORD *)(v13 + 24 * v7 + 12 * v4);
    v15 = v24;
    if ( a3 == 5 )
      v15 = v23;
    v16 = *v15;
    v17 = v15[1];
    v18 = v15[2];
    if ( a3 == 5 )
      v11 = v24;
    v14[602] = v16;
    v14[603] = v17;
    v14[604] = v18;
    v19 = v14 + 656;
    v20 = v11[1];
    v21 = v11[2];
    *v19 = *v11;
    v19[1] = v20;
    v19[2] = v21;
  }
  return sub_60177E70(FIELD_U32(v9, 100), FIELD_U32(v9, 28), a2, a3);
}
