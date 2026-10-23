/* sub_6042FB94
 * address: 0x6042FB94   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042FB94(int a1, void *a2)
{
  int v3; // r0
  int v4; // r11
  int v5; // r9
  _DWORD *v6; // r4
  int v7; // r1
  int v8; // r2
  unsigned int v9; // r0
  _BYTE v12[96]; // [sp+10h] [bp-140h] BYREF
  _DWORD v13[46]; // [sp+70h] [bp-E0h] BYREF
  int v14; // [sp+128h] [bp-28h] BYREF

  v3 = FIELD_U32(a1, 36);
  v4 = 15 - v3;
  if ( 15 - v3 >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v3 > 14 )
        break;
      v6 = (_DWORD *)operator_new_8DE25C(0x4C8u, a2, 4);
      sub_60436A4C((int)v6);
      v14 = v4 & 0xFFFFFF | 0x5000000;
      sub_604186F8((int)v13);
      sub_6042A9E8(dword_60C9C0FC, v13, 3u);
      sub_6042F294(v12, &v14);
      qmemcpy(v13, v12, 0x5Cu);
      sub_60436B70(v6, (int)v13, 3, FIELD_U32(a1, 36), 0);
      v3 = FIELD_U32(a1, 36);
      if ( v3 <= 14 )
      {
        v7 = a1 + 40;
        v8 = 0;
        if ( (unsigned int)v3 >= 0xF )
          v3 = 0;
        v6[252] = v7 + 16 * v3;
        v9 = FIELD_U32(a1, 36);
        if ( v9 < 0xF )
          v8 = FIELD_U32(a1, 36);
        v3 = v9 + 1;
        *(_DWORD *)(v7 + 16 * v8) = v6;
        FIELD_U32(a1, 36) = v3;
      }
      ++v5;
    }
    while ( v5 < v4 );
  }
  return 1;
}
