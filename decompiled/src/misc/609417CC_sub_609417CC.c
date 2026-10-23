/* sub_609417CC
 * address: 0x609417CC   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609417CC(signed int *a1, signed int a2, int a3, int a4)
{
  int v6; // r7
  unsigned int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r1
  unsigned int v10; // r9
  _DWORD *v11; // r7
  _DWORD *v12; // r6
  _DWORD *v13; // r4
  char *v14; // r11
  int v15; // r0
  size_t v16; // r4
  _DWORD *v18; // [sp+0h] [bp-48h]
  signed int v19; // [sp+4h] [bp-44h]
  int v20; // [sp+20h] [bp-28h]

  v6 = 0;
  if ( a2 >= 1 )
  {
    v7 = 324 * a2 + 8;
    if ( v7 < 324 * a2 )
      v7 = -1;
    if ( !is_mul_ok(0x144u, a2) )
      v7 = -1;
    v8 = (_DWORD *)sub_608DE334(v7, a3, a4);
    v9 = v8;
    if ( v8 )
    {
      *v8 = 324;
      v8[1] = a2;
      v10 = 0;
      v19 = a2;
      v20 = 324 * a2;
      v18 = v8 + 2;
      do
      {
        v11 = &v9[v10 / 4];
        v12 = v9;
        v11[2] = off_60C5E3F8;
        v11[3] = 0;
        v11[6] = &v9[v10 / 4 + 8];
        v11[5] = &BufferedSafeStringBase_char_vtable_probably;
        v13 = &v9[v10 / 4 + 5];
        v11[7] = 32;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v13);
        *v13 = &off_60BD4C38;
        v14 = (char *)v11[6];
        if ( v14 != &byte_60ABC94D )
        {
          v15 = v11[7];
          v16 = v15 - 1;
          if ( v15 > 0 )
            v16 = 0;
          memset((void *)v11[6], 0, v16);
          v14[v16] = 0;
        }
        v11[5] = &off_60BD4C20;
        v11[17] = v11 + 19;
        v11[16] = &BufferedSafeStringBase_char_vtable_probably;
        v11[18] = 256;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(v11 + 16));
        v10 += 324;
        v9 = v12;
        *(_BYTE *)v11[17] = 0;
        v11[16] = &off_60BD94BC;
      }
      while ( v20 != v10 );
      v6 = 1;
      *a1 = v19;
      a1[1] = (signed int)v18;
    }
  }
  return v6;
}
