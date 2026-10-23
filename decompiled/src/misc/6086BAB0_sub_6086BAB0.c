/* sub_6086BAB0
 * address: 0x6086BAB0   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086BAB0(int a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r6
  int v6; // r10
  int i; // r11
  int v8; // r7
  unsigned int v9; // r9
  int v10; // r4
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r1
  char v14; // r7
  int v15; // r3
  int v16; // r0
  void (__fastcall *v17)(_DWORD *, unsigned int); // r2
  int v18; // [sp+0h] [bp-28h]

  result = FIELD_U16(a1, 64);
  v18 = result;
  if ( result )
  {
    v5 = 0;
    v6 = 0;
    for ( i = 0; v18 != i; ++i )
    {
      v8 = *(_DWORD *)(FIELD_U32(a1, 56) + 4 * i);
      if ( v8 >= 0 )
      {
        v9 = *(_DWORD *)(FIELD_U32(a1, 56) + 4 * i) & 0x7FFF;
        v10 = FIELD_U32(a1, 72) + v5;
        sub_6086BBD8(a1, a2[9] + 72 * v9, v10, v6);
        v6 += FIELD_U16(v10, 50) + FIELD_U16(v10, 52);
        if ( FIELD_U16(v10, 46) != 0xFFFF )
        {
          v12 = (_DWORD *)(FIELD_U32(a1, 48) + 4 * FIELD_U16(v10, 44));
LABEL_8:
          v13 = a2[2];
          v14 = v8 & 0x1F;
          v15 = *(_DWORD *)(v13 + 4 * (v9 >> 5));
          v16 = *v12 != 0;
          *(_DWORD *)(v13 + 4 * (v9 >> 5)) = v15 & ~(1 << v14) | (v16 << v14);
          v17 = (void (__fastcall *)(_DWORD *, unsigned int))a2[16];
          if ( v17 )
          {
            if ( (v16 ^ ((v15 & (1 << v14)) != 0)) == 1 )
              v17(a2, v9);
          }
          goto LABEL_11;
        }
        v11 = FIELD_U16(v10, 48);
        if ( v11 != 0xFFFF )
        {
          v12 = (_DWORD *)(FIELD_U32(v10, 32) + 8 * v11 + 4);
          goto LABEL_8;
        }
      }
LABEL_11:
      result = v18;
      v5 += 64;
    }
  }
  return result;
}
