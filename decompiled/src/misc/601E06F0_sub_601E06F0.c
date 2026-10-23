/* sub_601E06F0
 * address: 0x601E06F0   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E06F0(int a1, _DWORD *a2)
{
  int v3; // r4
  int v4; // r6
  _BOOL4 v5; // r10
  int v6; // r7
  int v7; // r11
  unsigned int v8; // r4
  _DWORD *v9; // r5
  const char *v10; // r8
  int v11; // r1
  int i; // r2
  int v13; // r0
  int *v14; // r0
  _DWORD *v16; // [sp+4h] [bp-3Ch]
  int (**v17)(); // [sp+10h] [bp-30h] BYREF
  const char *v18; // [sp+14h] [bp-2Ch]
  int v19; // [sp+18h] [bp-28h]

  v19 = a1;
  v3 = 0;
  v4 = dword_60AFD114[a1];
  v5 = (unsigned int)(a1 - 7) < 2;
  v6 = sub_601A443C(dword_60C89E18, v4, v5);
  v7 = FIELD_U32(v6, 32);
  if ( v7 >= 1 )
  {
    v8 = 0;
    v16 = a2;
    while ( 1 )
    {
      v9 = (_DWORD *)sub_60182E38(v6, v8);
      if ( v19 == 9 )
      {
        v17 = &sead__SafeStringBase__vtable;
        v18 = "Fs01";
        (*(void (__fastcall **)(_DWORD *))(*v9 + 12))(v9);
        (*(void (__fastcall **)(_DWORD *))(*v9 + 12))(v9);
        v10 = (const char *)v9[1];
        ((void (__fastcall *)(int (***)()))v17[3])(&v17);
        if ( v10 == v18 )
          goto LABEL_16;
        v11 = v9[1];
        for ( i = 1; *(unsigned __int8 *)(v11 + i - 1) == (unsigned __int8)v18[i - 1]; i += 2 )
        {
          if ( !*(_BYTE *)(v11 + i - 1) )
            goto LABEL_16;
          if ( i > 0x80000 || *(unsigned __int8 *)(v11 + i) != (unsigned __int8)v18[i] )
            break;
          if ( !*(_BYTE *)(v11 + i) )
            goto LABEL_16;
        }
      }
      else if ( sub_6040D864(v9) == 37 )
      {
LABEL_16:
        v13 = sub_601A4454(dword_60C89E18, v4, v5);
        v14 = sub_601786A8(v13, v9);
        v3 = 1;
        *v16 = v14[21];
        v16[1] = v14[22];
        v16[2] = v14[24];
        return v3;
      }
      if ( (int)++v8 >= v7 )
        return 0;
    }
  }
  return v3;
}
