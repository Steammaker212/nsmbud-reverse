/* sub_607601D4
 * address: 0x607601D4   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607601D4(int *result, int a2)
{
  unsigned int v2; // lr
  int v3; // r2
  int v4; // r3
  int v5; // r2
  _DWORD *v6; // r3
  int v7; // t1
  float v8; // s4
  float v9; // s8
  float v10; // s2
  float v11[4]; // [sp+0h] [bp-20h] BYREF
  char v12; // [sp+10h] [bp-10h]
  char v13; // [sp+11h] [bp-Fh]
  char v14; // [sp+12h] [bp-Eh]
  char v15; // [sp+13h] [bp-Dh]
  char v16; // [sp+14h] [bp-Ch]
  char v17; // [sp+15h] [bp-Bh]
  char v18; // [sp+16h] [bp-Ah]

  if ( FIELD_U32(dword_60C99DD4, 764) == 2 )
  {
    v2 = *((unsigned __int8 *)result + 84);
    v3 = 0;
    if ( v2 < 6 )
      v3 = (char)v2;
    v4 = dword_60C99DD4 + 72 * v3;
    v7 = FIELD_U32(v4, 344);
    v6 = (_DWORD *)(v4 + 344);
    v5 = v7;
    if ( v7 < a2 )
      a2 = v5;
    if ( a2 )
    {
      *v6 = v5 - a2;
      v8 = *((float *)result + 145);
      v9 = *((float *)result + 29);
      v10 = *((float *)result + 28) + *((float *)result + 144);
      v11[0] = *((float *)result + 27) + *((float *)result + 143);
      v11[1] = v10;
      v11[2] = v9 + v8;
      LODWORD(v11[3]) = result[20];
      v13 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v12 = a2;
      v14 = 0;
      v18 = 0;
      return sub_6058385C(dword_60CAF15C, (int)v11, 1);
    }
  }
  return result;
}
