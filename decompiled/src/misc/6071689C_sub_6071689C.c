/* sub_6071689C
 * address: 0x6071689C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071689C(int result, char a2, char a3, int a4, float a5, float a6)
{
  float v6; // s2
  int v7; // r12
  _BYTE *v8; // r4
  int v9; // r5
  int v10; // r1

  v6 = FIELD_F32(dword_60CC6484, 112);
  if ( (float)(v6 + -64.0) <= a5 && (float)((float)(v6 + FIELD_F32(dword_60CC6484, 104)) + 64.0) >= a5 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( !*(_BYTE *)(result + 13952 + v7) )
      {
        v8 = (_BYTE *)(result + v7 + 13952);
        goto LABEL_10;
      }
      if ( !*(_BYTE *)(result + 13953 + v7) )
        break;
      v7 += 2;
      if ( v7 >= 100 )
        return result;
    }
    v9 = result + v7++;
    v8 = (_BYTE *)(v9 + 13953);
LABEL_10:
    *v8 = a2;
    v10 = result + 4 * v7;
    FIELD_F32(v10, 13152) = a5;
    FIELD_F32(v10, 13552) = a6;
    *(_BYTE *)(result + v7 + 14052) = a3;
    FIELD_U32(v10, 14152) = a4;
    return 14152;
  }
  return result;
}
