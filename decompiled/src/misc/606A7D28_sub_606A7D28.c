/* sub_606A7D28
 * address: 0x606A7D28   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606A7D28(int a1, unsigned int a2, int a3, int a4)
{
  char v7; // r5
  unsigned int v8; // r0
  int v9; // r2
  unsigned int v10; // r0
  bool v11; // zf

  v7 = a4;
  v8 = a2;
  v9 = *(_DWORD *)a1;
  if ( a2 >= 6 )
    v8 = 0;
  if ( (*(_DWORD *)(dword_60C99DD4 + 72 * v8 + 4 * (v9 >> 5) + 324) & (1 << (v9 & 0x1F))) == 0 )
  {
    v10 = FIELD_U8(a1, 6);
    if ( v10 <= 1 )
    {
      v11 = a4 == 1;
      if ( a4 == 1 )
        v11 = FIELD_U8(a1, 5) == 0;
      if ( v11 && (FIELD_U8(a1, 6) = v10 + 1, v10) )
      {
        sub_603F0040(dword_60C99D6C, a2, v9, 0);
        sub_603F02F4(dword_60C99D6C, a2, *(_DWORD *)a1);
      }
      else
      {
        if ( a3 == 1 )
        {
          if ( !FIELD_U8(a1, 4) )
          {
            if ( sub_603F056C(dword_60C99D6C, a2) )
              sub_603F0474(dword_60C99D6C, a2);
            else
              sub_603EFEAC(dword_60C99D6C, a2, *(_DWORD *)a1);
          }
        }
        else if ( FIELD_U8(a1, 4) )
        {
          sub_603F01A0(dword_60C99D6C, a2, v9, 60);
        }
        FIELD_U8(a1, 4) = a3;
        FIELD_U8(a1, 5) = v7;
      }
    }
  }
}
