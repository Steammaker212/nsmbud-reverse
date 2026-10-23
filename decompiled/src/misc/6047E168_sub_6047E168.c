/* sub_6047E168
 * address: 0x6047E168   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047E168(int *a1, _DWORD *a2, unsigned __int8 *a3, int a4, int a5)
{
  int result; // r0
  int v8; // r0
  bool v9; // zf
  int v10; // r7
  int v11; // r0
  unsigned __int16 *v12; // r8
  int v13; // r7
  int v14; // r7
  int *v15; // [sp+14h] [bp-13Ch]
  _DWORD v16[2]; // [sp+18h] [bp-138h] BYREF
  int v17; // [sp+20h] [bp-130h] BYREF
  char *v18; // [sp+24h] [bp-12Ch] BYREF
  int v19; // [sp+28h] [bp-128h]
  int v20; // [sp+2Ch] [bp-124h]
  char v21; // [sp+30h] [bp-120h] BYREF

  result = a1[1];
  if ( result )
  {
    v18 = &v21;
    v19 = 0;
    v20 = 256;
    v21 = 0;
    if ( a3 )
    {
      v8 = *a3;
      v9 = v8 == 45;
      if ( v8 != 45 )
        v9 = v8 == 64;
      if ( !v9 )
      {
        if ( v8 == 61 )
          sub_609903D4(&v18, a3 + 1, a4);
        else
          sub_608FDFB8(&v18, a3, -1);
      }
    }
    else
    {
      sub_609902D8(&v18, a5 + 136, a4);
    }
    if ( v19 )
    {
      v10 = sub_60911638(*(_DWORD *)(a1[1] + 4), v18);
      if ( v10 >= 0 )
      {
        v11 = a1[1];
        if ( FIELD_U32(v11, 8) <= (unsigned int)v10 )
        {
          v12 = 0;
        }
        else
        {
          v12 = (unsigned __int16 *)sub_6091171C(FIELD_U32(v11, 4), v10);
          v11 = a1[1];
        }
        v17 = 0;
        v13 = sub_609119F8(v11, v10);
        *(_WORD *)a1[4] = 0;
        (*(void (__fastcall **)(int *))(a1[3] + 12))(a1 + 3);
        v14 = sub_6047ACD8(a1[4], a1[5], v12, v13, a1[1], -1, &v17, 1, 0, v15);
        (*(void (__fastcall **)(int *))(a1[3] + 12))(a1 + 3);
        sub_60987718(v16, v14, a1[4]);
        if ( v16[0] )
        {
          *a2 = v16[0];
          a2[1] = v16[1];
        }
      }
    }
    result = a2[3];
    if ( result != -1 )
      a2[2] = result;
  }
  return result;
}
