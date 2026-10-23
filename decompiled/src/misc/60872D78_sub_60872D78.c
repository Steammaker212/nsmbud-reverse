/* sub_60872D78
 * address: 0x60872D78   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60872D78(int a1, int *a2, int a3, unsigned int a4)
{
  int result; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r2
  int v10; // r3
  void **v11; // r5
  int v12; // r3
  void **v13; // r8
  int v14; // r3
  int v15; // r7
  int v16; // r0
  int v17; // r1

  result = 0;
  if ( a2[2] && a2[1] <= a4 )
  {
    v7 = *a2;
    v8 = 0;
    *(_DWORD *)a1 = *a2;
    FIELD_U32(a1, 4) = 0;
    v9 = *((unsigned __int8 *)a2 + 76);
    FIELD_U8(a1, 40) = v9;
    if ( a3 )
    {
      v10 = a2[3];
      if ( v10 )
        v10 = a3 + a2[6];
      FIELD_U32(a1, 8) = v10;
      v11 = (void **)(a1 + 8);
      v12 = a2[7];
      v13 = (void **)(a1 + 12);
      if ( v12 )
        v12 = a3 + a2[10];
      FIELD_U32(a1, 12) = v12;
      if ( a2[15] )
        v8 = a3 + a2[18];
    }
    else
    {
      v8 = 0;
      FIELD_U32(a1, 8) = 0;
      v11 = (void **)(a1 + 8);
      FIELD_U32(a1, 12) = 0;
      v13 = (void **)(a1 + 12);
    }
    v14 = 0;
    FIELD_U32(a1, 32) = v8;
    FIELD_U32(a1, 68) = 0;
    FIELD_U32(a1, 72) = a3;
    FIELD_U32(a1, 36) = 0;
    FIELD_U32(a1, 24) = 0;
    FIELD_U32(a1, 28) = 0;
    v15 = a2[11];
    if ( a3 )
    {
      if ( v15 )
      {
        v14 = a3 + a2[14];
      }
      else
      {
        v15 = 0;
        v14 = 0;
      }
    }
    sub_6087EBD8(a1 + 44, FIELD_U16(v7, 212), v9, v14, v15);
    sub_60871630(*(_DWORD *)a1, *v11);
    v16 = *(_DWORD *)a1;
    if ( *(_BYTE *)(*(_DWORD *)a1 + 218) )
    {
      memmove(*v13, *v11, 4 * *(unsigned __int8 *)(*(_DWORD *)a1 + 218));
      v16 = *(_DWORD *)a1;
    }
    v17 = FIELD_U32(v16, 128) + 4 * FIELD_U8(v16, 218);
    FIELD_U32(a1, 16) = v17;
    FIELD_U32(a1, 20) = v17
                         + 4
                         * (FIELD_U8(v16, 219) + FIELD_U8(v16, 218))
                         * FIELD_U16(v16, 216);
    return 1;
  }
  return result;
}
