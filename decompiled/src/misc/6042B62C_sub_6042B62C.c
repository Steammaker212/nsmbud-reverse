/* sub_6042B62C
 * address: 0x6042B62C   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042B62C(signed int *a1, signed int a2, int a3, int a4)
{
  int v6; // r6
  unsigned int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r4
  _DWORD *v10; // r6
  _BYTE *v11; // r0
  _DWORD *v13; // [sp+4h] [bp-34h]
  int v14; // [sp+10h] [bp-28h]

  v6 = 0;
  if ( a2 >= 1 )
  {
    v7 = 72 * a2 + 8;
    if ( v7 < 72 * a2 )
      v7 = -1;
    if ( !is_mul_ok(0x48u, a2) )
      v7 = -1;
    v8 = (_DWORD *)sub_608DE334(v7, a3, a4);
    if ( v8 )
    {
      v9 = v8 + 2;
      *v8 = 72;
      v8[1] = a2;
      v13 = v8 + 2;
      v14 = (int)&v8[18 * a2 + 2];
      do
      {
        *(_BYTE *)v9 = 0;
        *((_BYTE *)v9 + 1) = 0;
        v9[1] = 0;
        v9[2] = 0;
        v9[3] = 0;
        v9[5] = v9 + 7;
        v9[4] = &BufferedSafeStringBase_char_vtable_probably;
        v9[6] = 16;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(v9 + 4));
        *(_BYTE *)v9[5] = 0;
        v9[4] = &off_60BD54D4;
        v9[12] = v9 + 14;
        v9[11] = &BufferedSafeStringBase_char_vtable_probably;
        v10 = v9 + 11;
        v9[13] = 16;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(v9 + 11));
        v11 = (_BYTE *)v9[12];
        v9 += 18;
        *v11 = 0;
        *v10 = &off_60BD54D4;
      }
      while ( v10 + 7 != (_DWORD *)v14 );
      v6 = 1;
      *a1 = a2;
      a1[1] = (signed int)v13;
    }
  }
  return v6;
}
