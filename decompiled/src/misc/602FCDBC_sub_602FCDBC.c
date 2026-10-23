/* sub_602FCDBC
 * address: 0x602FCDBC   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FCDBC(int a1)
{
  int v2; // r1
  int v3; // r5
  _BOOL4 v4; // r0
  int result; // r0
  _DWORD *v6; // r0
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r0
  int v10; // r1
  float v11[6]; // [sp+0h] [bp-18h] BYREF

  sub_60300AA0();
  v2 = FIELD_U32(a1, 8500);
  if ( v2 )
    FIELD_U32(a1, 8500) = v2 - 1;
  sub_602FD474(a1);
  v3 = 0;
  v4 = 0;
  if ( FIELD_U32(a1, 8504) != -1 )
  {
    sub_60300AE4(a1, v11);
    v4 = fabsf(v11[0]) < 288.0 && (float)(v11[1] + FIELD_F32(a1, 576)) > 0.0;
  }
  FIELD_U32(a1, 13980) = v4;
  sub_60300AE4(a1, v11);
  if ( v11[0] < 0.0 )
    v3 = 1;
  FIELD_U32(a1, 80) = v3;
  FIELD_U32(a1, 160) += *((_DWORD *)&unk_60C92B34 + v3);
  result = moveValueTo((int *)(a1 + 160), (int *)&unk_60C92B2C + v3, (int *)&unk_60C92B34);
  if ( result == 1 )
  {
    v6 = *(_DWORD **)(a1 + 6300);
    v7 = v6[3];
    v8 = v6[2];
    v9 = v6[17];
    if ( v8 > v9 )
      v7 += 4 * v9;
    result = *(unsigned __int8 *)(*(_DWORD *)v7 + 28);
    if ( (result & 8) != 0 )
    {
      if ( FIELD_U32(a1, 13980) )
        v10 = 14;
      else
        v10 = 13;
      sub_603005F4(a1, v10);
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C92B7C);
    }
  }
  return result;
}
