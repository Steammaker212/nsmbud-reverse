/* sub_6099BCC8
 * address: 0x6099BCC8   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6099BCC8(int a1, const char *a2)
{
  _DWORD *v4; // r7
  int v5; // r6
  signed int v6; // r0
  const char *v7; // r2
  signed int v8; // r1
  int v9; // r0
  int v10; // r0
  bool v11; // zf
  char *v12; // r0
  int v13; // r2
  int v14; // r3
  _BYTE *v15; // r0
  char v18[255]; // [sp+1h] [bp-29Fh] BYREF
  _BYTE v19[416]; // [sp+100h] [bp-1A0h] BYREF

  v4 = (_DWORD *)(a1 + 720);
  if ( sub_608CF7BC(a1 + 720) < 0 )
    return 0;
  v5 = 0;
  ++FIELD_U32(a1, 788);
  FIELD_U8(a1, 784) = 1;
  if ( sub_608CF59C(v4, (unsigned int)v19 & 0xFFFFFF00, 256, 0) == 256 )
  {
    sub_608B2128((int *)(a1 + 656), (int *)((unsigned int)v19 & 0xFFFFFF00));
    sub_608A9994(a1, a1 + 656);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
    v5 = 0;
    v18[0] = 0;
    v6 = strlen(a2);
    if ( v6 <= 638 )
    {
      v7 = a2;
      while ( v6 >= 1 )
      {
        v8 = v6 - 1;
        v9 = (unsigned __int8)a2[v6 - 1];
        if ( v9 != 92 )
        {
          v11 = v9 == 47;
          v6 = v8;
          if ( !v11 )
            continue;
        }
        v10 = v8 + 1;
        if ( v8 + 1 >= 639 )
          v10 = 639;
        v11 = v10 == 1;
        if ( v10 >= 1 )
        {
          v12 = v18;
          v7 = a2;
          if ( !v11 )
          {
            v13 = -640;
            if ( -2 - v8 > -640 )
              v13 = -2 - v8;
            v12 = v18;
            v14 = v13 + 2;
            v7 = a2;
            do
            {
              if ( !*v7 )
                break;
              *v12++ = *v7;
              ++v14;
              ++v7;
            }
            while ( v14 );
          }
          *v12 = 0;
        }
        if ( *v7 )
        {
          v15 = v7 + 1;
          while ( *v15++ )
            ;
        }
        v18[v8] = 0;
        break;
      }
      sub_608AA400(a1, v18);
      nn__util__SNPrintf((nn__util *)(a1 + 792), (char *)0x27F, (unsigned int)"%s", a2);
      return 1;
    }
  }
  return v5;
}
