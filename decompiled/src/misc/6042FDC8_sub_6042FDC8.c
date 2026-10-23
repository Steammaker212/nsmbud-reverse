/* sub_6042FDC8
 * address: 0x6042FDC8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042FDC8(int a1, int *a2, int a3)
{
  int v6; // r0
  unsigned int i; // r7
  int v8; // r1
  int v9; // r8
  int v10; // r1
  unsigned int U32; // r0
  unsigned int v13[13]; // [sp+4h] [bp-34h] BYREF

  v6 = 0;
  *a2 = 0;
  if ( a3 >= 1 )
  {
    for ( i = 0; i != a3; ++i )
    {
      v8 = i;
      if ( i >= 0xF )
        v8 = 15;
      v9 = a1 + 16 * v8;
      v10 = 0;
      if ( !FIELD_U8(v9, 52) )
      {
        U32 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
        FIELD_U8(v9, 52) = 1;
        FIELD_U32(v9, 44) = ((90 * (unsigned __int64)U32) >> 32) + 60;
        v10 = FIELD_U32(v9, 40);
        v6 = *a2;
      }
      if ( v6 < a2[1] )
      {
        *(_DWORD *)(a2[2] + 4 * v6) = v10;
        v6 = *a2 + 1;
        *a2 = v6;
      }
    }
  }
  sead__Random__init(v13);
  return sub_608DEBEC(a2, v13);
}
