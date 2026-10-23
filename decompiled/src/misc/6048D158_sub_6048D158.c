/* sub_6048D158
 * address: 0x6048D158   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6048D158(int a1)
{
  unsigned int result; // r0
  unsigned int v3; // r0
  int v4; // r8
  int *v5; // r0
  _DWORD *v6; // r7
  int v7; // r1
  int v8; // r0
  int v9; // [sp+4h] [bp-A4h]
  int v10; // [sp+8h] [bp-A0h]
  int v11; // [sp+Ch] [bp-9Ch]
  int v12; // [sp+10h] [bp-98h]
  int v13; // [sp+14h] [bp-94h]
  int v14; // [sp+18h] [bp-90h]
  int v15; // [sp+1Ch] [bp-8Ch]
  _BYTE v16[96]; // [sp+20h] [bp-88h] BYREF
  unsigned int v17; // [sp+80h] [bp-28h]

  sub_6048D2E8();
  result = 0;
  do
  {
    v9 = result;
    v17 = result;
    if ( result >= 4 )
      result = 0;
    qmemcpy(v16, (const void *)(a1 + 96 * result + 5876), sizeof(v16));
    v3 = v17;
    v4 = -24;
    if ( v17 >= 4 )
      v3 = 0;
    v5 = &dword_60C9FF70[6 * v3];
    v10 = *v5;
    v11 = v5[1];
    v12 = v5[2];
    v13 = v5[3];
    v14 = v5[4];
    v15 = v5[5];
    v6 = v16;
    do
    {
      v7 = v4 + 24;
      if ( v4 + 24 == v10 )
      {
        v8 = 1;
      }
      else
      {
        v8 = v4 + 24 == v10 || v7 == v11;
        if ( v7 != v11 )
        {
          v8 |= v7 == v12;
          if ( v7 != v12 )
          {
            v8 |= v7 == v13;
            if ( v7 != v13 )
            {
              v8 |= v7 == v14;
              if ( v7 != v14 )
                v8 |= v7 == v15;
            }
          }
        }
      }
      if ( !v8 )
      {
        sub_605028F0(a1 + 3768, v6, 1);
        *(_BYTE *)(sub_608DE61C(a1 + 3820, *v6) - FIELD_U32(a1, 3832) + 208) = 0;
      }
      ++v6;
      ++v4;
    }
    while ( v4 );
    result = v9 + 1;
    if ( v9 > 3 )
      result = 4;
  }
  while ( result != 4 );
  return result;
}
