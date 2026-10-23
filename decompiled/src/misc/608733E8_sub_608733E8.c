/* sub_608733E8
 * address: 0x608733E8   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608733E8(int a1, int a2)
{
  int v4; // r2
  unsigned int v5; // r0
  unsigned int v6; // r11
  int v7; // r7
  unsigned int v8; // r0
  unsigned int v9; // r0
  unsigned int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r6
  int v13; // r0
  int v14; // r8
  int v15; // r1
  int v16; // r2
  int v17; // [sp+4h] [bp-3Ch]
  int v18; // [sp+8h] [bp-38h]
  unsigned int v19; // [sp+Ch] [bp-34h]
  int v20; // [sp+10h] [bp-30h]
  int v21; // [sp+14h] [bp-2Ch]
  int v22; // [sp+18h] [bp-28h]

  if ( FIELD_U32(a1, 36) )
  {
    sub_6087EC1C(a1 + 44);
    if ( (FIELD_U8(a1, 65) & (1 << a2)) != 0 )
    {
      v17 = 9 * a2;
      v22 = sub_608354C4(FIELD_U32(a1, 32) + 72 * a2);
      v4 = 0;
      v5 = *(unsigned __int16 *)(*(_DWORD *)a1 + 212) + 31;
      if ( v5 >> 5 )
      {
        v19 = v5 >> 5;
        v18 = (1 << a2) ^ 0xFF;
        v20 = a2;
        do
        {
          FIELD_U8(a1, 65) &= v18;
          v21 = v4;
          v6 = *(_DWORD *)(FIELD_U32(a1, 48) + 4 * FIELD_U32(a1, 56) * a2 + 4 * v4);
          if ( v6 )
          {
            v7 = 32 * v4;
            do
            {
              v8 = v6 | (v6 >> 1) | ((v6 | (v6 >> 1)) >> 2);
              v9 = v8 | (v8 >> 4) | ((v8 | (v8 >> 4)) >> 8);
              v10 = ((~(v9 | HIWORD(v9)) >> 1) & 0x55555555) + (~(v9 | HIWORD(v9)) & 0x55555555);
              v11 = (((((v10 >> 2) & 0x33333333) + (v10 & 0x33333333)) >> 4) & 0x7070707)
                  + ((((v10 >> 2) & 0x33333333) + (v10 & 0x33333333)) & 0x7070707);
              v12 = (((((v11 >> 8) & 0xF000F) + (v11 & 0xF000F)) >> 16) ^ 0x1F)
                  - ((((v11 >> 8) & 0xF000F) + (v11 & 0xF000F)) & 0x1F);
              v13 = *(_DWORD *)(*(_DWORD *)a1 + 8) + 40 * (v12 + v7);
              if ( FIELD_U16(v13, 26) )
              {
                v14 = FIELD_U32(v13, 16);
                *(_DWORD *)(v22 + FIELD_U16(v13, 26) - 1) = *(_DWORD *)(v14
                                                                                   + 4
                                                                                   * sub_608714EC(
                                                                                       v13,
                                                                                       FIELD_U32(a1, 12)));
              }
              v6 ^= 1 << v12;
            }
            while ( v6 );
          }
          a2 = v20;
          v4 = v21 + 1;
        }
        while ( v21 + 1 != v19 );
      }
      v15 = FIELD_U32(a1, 56);
      if ( v15 >= 1 )
      {
        v16 = ~v15;
        if ( ~v15 < -2 || v15 == 1 )
          v16 = -2;
        memset((void *)(FIELD_U32(a1, 48) + 4 * v15 * a2), 0, 4 * (v16 + v15) + 8);
      }
      sub_608354E0(FIELD_U32(a1, 32) + 8 * v17);
      nullsub_66();
    }
  }
}
