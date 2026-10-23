/* sub_60927968
 * address: 0x60927968   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60927968(signed int *a1, signed int a2, int a3, int a4)
{
  int v6; // r6
  unsigned int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r6
  _DWORD *v10; // r4
  _BYTE *v11; // r0
  _DWORD *v13; // [sp+4h] [bp-34h]
  int v14; // [sp+10h] [bp-28h]

  v6 = 0;
  if ( a2 >= 1 )
  {
    v7 = 164 * a2 + 8;
    if ( v7 < 164 * a2 )
      v7 = -1;
    if ( !is_mul_ok(0xA4u, a2) )
      v7 = -1;
    v8 = (_DWORD *)sub_608DE334(v7, a3, a4);
    if ( v8 )
    {
      *v8 = 164;
      v8[1] = a2;
      v9 = v8 + 29;
      v13 = v8 + 2;
      v14 = (int)&v8[41 * a2 + 2];
      do
      {
        sub_60947BCC(v9 - 27);
        *(v9 - 27) = off_60C5DA90;
        sub_60940650(v9 - 20);
        *(v9 - 20) = off_60C5D7C4;
        *(v9 - 1) = 0;
        default_ref_9419C8(v9);
        *v9 = &off_60C5D898;
        v9[4] = v9 + 6;
        v9[3] = &BufferedSafeStringBase_char_vtable_probably;
        v10 = v9 + 3;
        v9[5] = 32;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(v9 + 3));
        v11 = (_BYTE *)v9[4];
        v9 += 41;
        *v11 = 0;
        *v10 = &off_60BD4C20;
      }
      while ( v10 + 11 != (_DWORD *)v14 );
      v6 = 1;
      *a1 = a2;
      a1[1] = (signed int)v13;
    }
  }
  return v6;
}
