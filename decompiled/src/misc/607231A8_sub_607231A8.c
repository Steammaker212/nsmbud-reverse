/* sub_607231A8
 * address: 0x607231A8   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607231A8(int a1, int a2)
{
  int Area; // r8
  unsigned int v4; // r9
  unsigned __int16 *v5; // r10
  _WORD *v6; // r11
  unsigned int result; // r0
  unsigned int v8; // r4
  unsigned __int16 *v9; // r7
  unsigned int v10; // r12
  unsigned int v11; // r3
  unsigned int v12; // lr
  unsigned int v13; // r5
  unsigned int v14; // r2
  unsigned int v15; // r1
  unsigned int v16; // r6
  unsigned int v17; // r1
  bool v18; // cc
  unsigned int v19; // r1
  unsigned int v20; // r2
  unsigned int v21; // r6
  bool v22; // cc
  void *v23; // r0
  unsigned int v24; // r1
  int v25; // [sp+4h] [bp-2Ch]

  Area = Level_getArea(Level_instance, FIELD_U32(a1, 9244));
  v25 = a1;
  v4 = 0;
  v5 = *(unsigned __int16 **)(Area + 40);
  v6 = (_WORD *)(a1 + 9220);
  do
  {
    result = FIELD_U32(Area, 160);
    if ( result )
    {
      v8 = 0;
      v9 = v5;
      v10 = (v4 >> 2) & 0x3FFFFFF0;
      v11 = (16 * v4) & 0x3F0;
      v12 = v10 + 16;
      v13 = v11 + 16;
      while ( 1 )
      {
        v14 = v9[2];
        v15 = *v9;
        v16 = (v14 >> 4) + (v15 >> 4);
        v17 = v15 >> 4;
        if ( (v14 & 0xF) != 0 )
          ++v16;
        v18 = v17 > v13;
        if ( v17 <= v13 )
          v18 = v11 > v16;
        if ( !v18 )
        {
          v19 = v9[3];
          v20 = v9[1] >> 4;
          v21 = v20 + (v19 >> 4);
          if ( (v19 & 0xF) != 0 )
            ++v21;
          v22 = v20 > v12;
          if ( v20 <= v12 )
            v22 = v10 > v21;
          if ( !v22 )
            break;
        }
        ++v8;
        v9 += 14;
        if ( v8 >= result )
          goto LABEL_20;
      }
      *(_DWORD *)(v25 + 4 * v4 + 1028) = (unsigned __int16)*v6;
      v23 = (void *)operator_new_8DE2C8(0x200u, a2, 4);
      v24 = (unsigned __int16)*v6;
      if ( v24 > 0x100 )
        v24 = 0;
      *(_DWORD *)(v25 + 4 * v24) = v23;
      memset(v23, 0, 0x200u);
      result = (unsigned __int16)*v6 + 1;
      *v6 = result;
    }
LABEL_20:
    ++v4;
  }
  while ( v4 != 2048 );
  return result;
}
