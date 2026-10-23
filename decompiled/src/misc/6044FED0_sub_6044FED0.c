/* sub_6044FED0
 * address: 0x6044FED0   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044FED0(int a1, int a2, int a3, int a4)
{
  int v8; // r3
  int v9; // r0
  int v10; // r10
  int v11; // r4
  int v12; // r8
  int v13; // r6
  unsigned __int8 *v14; // r1
  int v15; // r2
  unsigned __int8 *v16; // r2
  int v17; // r9
  int v18; // r11
  int v19; // r1
  int v20; // r4
  int v21; // r7
  int v22; // r9
  __int64 v23; // r0
  int result; // r0
  __int64 v25; // [sp+0h] [bp-A8h]
  int v26; // [sp+14h] [bp-94h]
  __int16 v27; // [sp+1Ch] [bp-8Ch] BYREF
  char v28; // [sp+1Eh] [bp-8Ah]
  int v29; // [sp+20h] [bp-88h]
  int v30; // [sp+34h] [bp-74h]
  int v31; // [sp+38h] [bp-70h]
  char v32; // [sp+45h] [bp-63h]
  char v33; // [sp+47h] [bp-61h]
  char v34; // [sp+4Bh] [bp-5Dh]
  char v35; // [sp+4Dh] [bp-5Bh]
  __int16 v36; // [sp+74h] [bp-34h]
  char v37; // [sp+76h] [bp-32h]

  sub_6090B350(&v27);
  sub_6044FCD0((_DWORD *)a1, a2, a3, a4);
  if ( FIELD_U8(a1, 944) == 1 )
  {
    v31 = 255;
    v29 |= 3u;
    v32 = 5;
    v33 = 6;
    v34 = 5;
    v35 = 6;
    v28 = 1;
    v37 = 7;
    v30 = 1056964608;
    v27 = 257;
    v36 = 4;
    sub_6090B4B0(&v27, a2);
  }
  v9 = FIELD_U32(a1, 860);
  if ( v9 <= 0 )
  {
    v20 = a1 + 704;
    v10 = a1 + 336;
    v13 = 0;
  }
  else
  {
    v10 = a1 + 336;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = *(unsigned __int8 **)(a1 + 2288);
    v15 = *v14;
    v26 = a2;
    v8 = v15;
    while ( 1 )
    {
      if ( v12 == v9 - 1 || (v8 = (unsigned __int8)v8, (unsigned __int8)v8 != (unsigned __int8)v15) )
      {
        sub_60450184(a1, a2, v13, v8);
        sub_60922278(a1 + 336, a2);
        if ( v13 != v12 )
        {
          v17 = FIELD_U32(a2, 192);
          v18 = FIELD_U32(a1, 680);
          v25 = dword_60CC746C(a1 + 704) + (unsigned int)(6 * v13 * FIELD_U32(a1, 700));
          v19 = v18;
          a2 = v26;
          dword_60CC7874(v17, v19, FIELD_U32(a1, 676), v11 - 6 * v13, v25, HIDWORD(v25));
        }
        v14 = *(unsigned __int8 **)(a1 + 2288);
        v9 = FIELD_U32(a1, 860);
        v13 = v12;
        v8 = v14[v12];
      }
      else
      {
        v8 = v15;
      }
      if ( v12 + 1 >= v9 )
        break;
      v16 = &v14[v12];
      v11 += 6;
      ++v12;
      v15 = v16[1];
    }
    v20 = a1 + 704;
  }
  sub_60450184(a1, a2, v13, v8);
  sub_60922278(v10, a2);
  v21 = FIELD_U32(a2, 192);
  v22 = FIELD_U32(a1, 680);
  v23 = dword_60CC746C(v20);
  dword_60CC7874(
    v21,
    v22,
    FIELD_U32(a1, 676),
    6,
    v23 + 6 * v13 * FIELD_U32(a1, 700),
    (v23 + (unsigned __int64)(unsigned int)(6 * v13 * FIELD_U32(a1, 700))) >> 32);
  FIELD_U32(a1, 860) = 0;
  FIELD_U32(a1, 940) = 0;
  FIELD_U32(a1, 856) = (FIELD_U32(a1, 856) + 1) % 2;
  memset((void *)(a1 + 948), 0, 300);
  result = FIELD_U8(a1, 944);
  if ( result == 1 )
  {
    v31 = 15;
    return sub_6090B4B0(&v27, a2);
  }
  return result;
}
