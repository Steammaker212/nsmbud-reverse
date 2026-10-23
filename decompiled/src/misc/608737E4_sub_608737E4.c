/* sub_608737E4
 * address: 0x608737E4   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608737E4(int a1, int a2, int a3, unsigned int a4)
{
  int result; // r0
  int *v6; // r0
  int v7; // r8
  void *v8; // r3
  const void **v9; // r6
  int v10; // r7
  void **v11; // r7
  int v12; // r1
  int v13; // r5
  unsigned int v14; // r0

  result = 0;
  if ( FIELD_U32(a2, 8) && FIELD_U32(a2, 4) <= a4 )
  {
    v6 = *(int **)a2;
    v7 = **(_DWORD **)a2;
    *(_DWORD *)a1 = *(_DWORD *)a2;
    if ( a3 )
    {
      v8 = *(void **)(a2 + 12);
      if ( v8 )
        v8 = (void *)(a3 + FIELD_U32(a2, 24));
      FIELD_U32(a1, 4) = v8;
      v9 = (const void **)(a1 + 4);
      v10 = FIELD_U32(a2, 28);
      if ( v10 )
        v10 = a3 + FIELD_U32(a2, 40);
      FIELD_U32(a1, 8) = v10;
      v11 = (void **)(a1 + 8);
      if ( FIELD_U32(a2, 44) )
        v12 = a3 + FIELD_U32(a2, 56);
      else
        v12 = 0;
    }
    else
    {
      v8 = 0;
      v12 = 0;
      FIELD_U32(a1, 4) = 0;
      v9 = (const void **)(a1 + 4);
      FIELD_U32(a1, 8) = 0;
      v11 = (void **)(a1 + 8);
    }
    FIELD_U32(a1, 12) = v12;
    FIELD_U32(a1, 20) = a3;
    v13 = *(unsigned __int8 *)(*v6 + 219);
    if ( *(_BYTE *)(*v6 + 219) )
    {
      sub_608716DC(v7, v8);
      memmove(*v11, *v9, 4 * v13);
      sub_60871790(v7, *(void **)(a1 + 12));
      v14 = 0;
    }
    else
    {
      v14 = FIELD_U32(v7, 120) + 56 * sub_608717BC(v7, v6 + 4, (int)v8);
    }
    FIELD_U32(a1, 16) = v14;
    return 1;
  }
  return result;
}
