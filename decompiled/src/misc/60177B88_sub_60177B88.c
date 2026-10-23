/* sub_60177B88
 * address: 0x60177B88   size: 736   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60177B88(int a1, int a2, int a3, int a4)
{
  int v4; // r9
  int result; // r0
  unsigned int v6; // r4
  int (__fastcall *v7)(int, int); // r5
  int v8; // r0
  int v9; // r0
  int v10; // r5
  _DWORD *v11; // r7
  unsigned int v12; // r0
  int v13; // r11
  _DWORD *v14; // r8
  void *v15; // r6
  const void *v16; // r1
  int v17; // r0
  int v18; // r5
  size_t v19; // r9
  char *v20; // r0
  int v21; // r1
  bool v22; // cc
  _BOOL4 v23; // r6
  int v24; // [sp+0h] [bp-70h]
  int v28; // [sp+10h] [bp-60h]
  int v29; // [sp+14h] [bp-5Ch]
  int v30; // [sp+18h] [bp-58h]
  _BYTE v31[12]; // [sp+1Ch] [bp-54h] BYREF
  int v32; // [sp+28h] [bp-48h]
  int v33; // [sp+38h] [bp-38h]
  int v34; // [sp+48h] [bp-28h]

  v4 = a2;
  result = FIELD_U32(a2, 28);
  v24 = result;
  if ( result >= 1 )
  {
    v6 = 0;
    do
    {
      v7 = *(int (__fastcall **)(int, int))(*(_DWORD *)a3 + 84);
      v8 = sub_60182E38(v4, v6);
      v9 = v7(a3, v8);
      (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)a3 + 108))(a3, v9, v31);
      v10 = v32;
      v30 = v33;
      v29 = v34;
      v11 = (_DWORD *)sub_60182E38(v4, v6);
      v12 = 0;
      v13 = FIELD_U32(v4, 24);
      if ( v6 < 0x100 )
        v12 = v6;
      v14 = (_DWORD *)(a1 + 104 * v12);
      v15 = (void *)v14[7];
      (*(void (__fastcall **)(_DWORD *))(*v11 + 12))(v11);
      v16 = (const void *)v11[1];
      if ( v15 != v16 )
      {
        v17 = v14[8];
        v28 = v10;
        v18 = v4;
        v19 = v17 - 1;
        if ( v17 > 4 )
          v19 = 4;
        qmemcpy(v15, v16, v19);
        *((_BYTE *)v15 + v19) = 0;
        v4 = v18;
        v10 = v28;
      }
      v14[26] = a4;
      v14[23] = v10;
      v14[24] = v30;
      v14[25] = v29;
      v14[27] = v13;
      v14[29] = v6;
      (*(void (__fastcall **)(_DWORD *))(*v11 + 12))(v11);
      v20 = (char *)v11[1];
      v21 = 0;
      while ( v20[v21] )
      {
        if ( !v20[v21 + 1] )
        {
          ++v21;
          break;
        }
        if ( !v20[v21 + 2] )
        {
          v21 += 2;
          break;
        }
        v22 = v21 + 2 < 0x80000;
        v21 += 3;
        if ( !v22 )
        {
          v21 = 0;
          break;
        }
      }
      v23 = 1;
      if ( v21 < 0 )
        v20 = &byte_60B3BA34;
      if ( *v20 != 75 )
      {
        v23 = 0;
        if ( sub_6019A214(v11) != 2
          && sub_6040D864(v11) < 0
          && !sub_6018301C(v4, v6, 1)
          && !sub_60183038(v4, v6, 8)
          && !sub_60183038(v4, v6, 16)
          && !sub_60183038(v4, v6, 0x80000)
          && !sub_60183038(v4, v6, 0x100000)
          && !sub_60183038(v4, v6, 0x200000)
          && !sub_60183038(v4, v6, 0x400000)
          && !sub_60183038(v4, v6, 0x800000)
          && !sub_60183038(v4, v6, 0x1000000) )
        {
          v23 = sub_60183038(v4, v6, 0x2000000) == 0;
        }
      }
      v14[30] = v23;
      ++v6;
      result = v24;
    }
    while ( v6 != v24 );
  }
  return result;
}
