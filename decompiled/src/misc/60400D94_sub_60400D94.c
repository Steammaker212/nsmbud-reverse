/* sub_60400D94
 * address: 0x60400D94   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60400D94(int a1)
{
  int v1; // r6
  int *v2; // r8
  int v3; // r5
  int v4; // r0
  int v5; // r10
  int v6; // r6
  int v7; // r0
  int v8; // r7
  int v9; // r4
  int result; // r0
  int *v12; // [sp+Ch] [bp-34h]
  int v13; // [sp+10h] [bp-30h]
  int *v14; // [sp+14h] [bp-2Ch]

  v1 = 0;
  v2 = &dword_60B01A00;
  do
  {
    v3 = operator_new(0x1Cu);
    *(_DWORD *)v3 = &off_60BF9994;
    FIELD_U32(v3, 4) = -1;
    FIELD_U32(v3, 24) = 0;
    FIELD_U8(v3, 20) = 0;
    FIELD_U32(v3, 16) = 0;
    FIELD_U32(v3, 12) = 0;
    FIELD_U32(v3, 8) = 0;
    v4 = a1 + 4 * v1;
    FIELD_U32(v4, 20) = v3;
    v12 = (int *)(v4 + 20);
    sub_604013CC();
    v13 = v1;
    FIELD_U32(v3, 4) = v1;
    v5 = 0;
    v14 = v2;
    v6 = dword_60CC6E04;
    do
    {
      v7 = *v2;
      if ( *v2 != -1 )
      {
        v8 = (unsigned __int8)v7;
        v9 = (unsigned __int8)*(v2 - 1);
        if ( sub_6082920C(v6, v9, (unsigned __int8)v7) || sub_603F69FC((char *)(dword_60CC6D78 + 796), v9, v8) >= 2 )
        {
          *(_BYTE *)(v3 + 9 + v5) = 1;
          FIELD_U8(v3, 8) = 1;
          ++FIELD_U32(v3, 24);
        }
      }
      ++v5;
      v2 += 3;
    }
    while ( v5 != 12 );
    result = *v12;
    if ( *(_BYTE *)(*v12 + 8) )
    {
      FIELD_U32(a1, 68) += FIELD_U32(result, 24);
      result = FIELD_U32(a1, 64) + 1;
      FIELD_U32(a1, 64) = result;
    }
    v1 = v13 + 1;
    v2 = v14 + 36;
  }
  while ( v13 != 10 );
  return result;
}
