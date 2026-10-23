/* sub_60989568
 * address: 0x60989568   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60989568(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r0
  unsigned int v6; // r7
  unsigned __int16 *v8; // r1
  int v9; // r2
  int v10; // r3
  __int16 v11; // r6
  float v12; // s16
  float v13; // s0
  float v15[2]; // [sp+0h] [bp-38h] BYREF
  float v16; // [sp+8h] [bp-30h]
  int v17; // [sp+Ch] [bp-2Ch]

  v5 = FIELD_U16(a2, 8);
  v6 = FIELD_U16(a2, 10);
  v8 = (unsigned __int16 *)a5;
  if ( v5 )
  {
    v9 = 0;
    v8 = (unsigned __int16 *)a5;
    do
    {
LABEL_6:
      v10 = *v8;
      v11 = v10 | 1;
      while ( v11 == 15 )
      {
        if ( v10 == 15 )
        {
          v8 += 3;
          goto LABEL_6;
        }
        v11 = 15;
        if ( v10 == 14 )
        {
          v8 = (unsigned __int16 *)((char *)v8 + v8[3] + 8);
          goto LABEL_6;
        }
      }
      ++v9;
      ++v8;
    }
    while ( v9 != v5 );
  }
  v17 = 0;
  v16 = 0.0;
  v15[1] = 0.0;
  v15[0] = 0.0;
  sub_6084E29C(*(const void **)a3, v15, a5, (unsigned __int16)(((__int64)v8 - (unsigned int)a5) / 2));
  v12 = v16 - v15[0];
  v13 = (float)((float)v6 * 0.0039062) * sub_60849C18(*(_DWORD *)a3);
  if ( v13 < v12 )
    *(float *)(*(_DWORD *)a3 + 12) = (float)(v13 / v12) * *(float *)(*(_DWORD *)a3 + 12);
  FIELD_U32(a3, 4) = a5;
  return 0;
}
