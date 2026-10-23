/* sub_60940D4C
 * address: 0x60940D4C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60940D4C(int a1, int a2, int a3, int a4)
{
  int v7; // r10
  int v8; // r7
  int v9; // r4
  _BYTE *v10; // r5
  int v11; // r0
  size_t v12; // r6

  sead__PtrArrayImpl__allocBuffer(a1 + 4, a2, a4, 4);
  sub_609417CC(a1 + 16, a3, a4, 4);
  sead__PtrArrayImpl__allocBuffer(a1 + 24, a3, a4, 4);
  v7 = FIELD_U32(a1, 16);
  if ( v7 )
  {
    v8 = 0;
    v9 = FIELD_U32(a1, 20) + 60;
    do
    {
      v10 = *(_BYTE **)v9;
      if ( *(char **)v9 != &byte_60ABC94D )
      {
        v11 = FIELD_U32(v9, 4);
        v12 = v11 - 1;
        if ( v11 > 0 )
          v12 = 0;
        memset(*(void **)v9, 0, v12);
        v10[v12] = 0;
      }
      *(_DWORD *)(v9 - 56) = a1;
      *(_DWORD *)(v9 - 52) = v8++;
      v9 += 324;
    }
    while ( v7 != v8 );
  }
}
