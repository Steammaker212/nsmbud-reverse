/* sub_60165590
 * address: 0x60165590   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60165590(int a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // r1
  int i; // r0
  bool v8; // cc
  _DWORD *v9; // r2
  int v10; // r1
  int v11; // r0
  int j; // r1
  int v13; // r3
  int v14; // r3

  sub_601603E8((ColliderBase *)a1);
  FIELD_U32(a1, 152) = *a2;
  FIELD_U32(a1, 156) = a2[1];
  FIELD_U32(a1, 160) = a2[2];
  FIELD_U32(a1, 164) = a2[3];
  FIELD_U32(a1, 168) = a2[4];
  FIELD_U32(a1, 172) = *a3;
  FIELD_U32(a1, 176) = a3[1];
  FIELD_U32(a1, 188) = a3[2];
  FIELD_U32(a1, 192) = a3[3];
  FIELD_U32(a1, 244) = a3[9];
  v6 = FIELD_U32(a1, 384);
  if ( v6 >= 1 )
  {
    for ( i = 0; i < v6; ++i )
    {
      v8 = v6 > (unsigned int)i;
      v9 = *(_DWORD **)(a1 + 388);
      v10 = *(_DWORD *)(a3[8] + 4 * i);
      if ( v8 )
        v9 += i;
      *v9 = v10;
      v6 = FIELD_U32(a1, 384);
    }
  }
  v11 = FIELD_U32(a1, 392);
  if ( v11 > 0 )
  {
    for ( j = 0; j != v11; ++j )
    {
      v13 = FIELD_U32(a1, 396);
      *(_DWORD *)(v13 + 8 * j) = a3[4];
      v14 = v13 + 8 * j;
      FIELD_U32(v14, 4) = a3[5];
    }
  }
  FIELD_U32(a1, 408) = a3[4];
  FIELD_U32(a1, 412) = a3[5];
  FIELD_U32(a1, 420) = a3[6];
  FIELD_U32(a1, 424) = a3[7];
  FIELD_U32(a1, 144) = 0;
  sub_601656B0(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 52))(a1);
}
