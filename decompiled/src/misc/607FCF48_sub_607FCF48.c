/* sub_607FCF48
 * address: 0x607FCF48   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FCF48(
        int result,
        int a2,
        _DWORD *a3,
        int *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        int a13)
{
  int v13; // r12
  _DWORD *v14; // r6
  _DWORD *v15; // r4
  int v16; // r7
  int v17; // r3
  bool v18; // zf
  bool v19; // zf

  v13 = 3;
  *(_DWORD *)result = 3;
  FIELD_U32(result, 4) = 2139095039;
  FIELD_U32(result, 8) = -8388609;
  v14 = (_DWORD *)(result + 8);
  FIELD_U32(result, 12) = -8388609;
  FIELD_U32(result, 16) = 2139095039;
  v15 = (_DWORD *)(result + 16);
  v16 = *a4;
  v17 = a4[1];
  FIELD_U32(result, 20) = v16;
  FIELD_U32(result, 24) = v17;
  FIELD_U8(result, 28) = a5;
  FIELD_U8(result, 29) = a6;
  FIELD_U8(result, 30) = a7;
  FIELD_U8(result, 31) = a8;
  FIELD_U8(result, 32) = a9;
  FIELD_U8(result, 36) = a10;
  FIELD_U8(result, 37) = a11;
  FIELD_U8(result, 38) = a12;
  FIELD_U8(result, 39) = 0;
  FIELD_U8(result, 40) = 0;
  if ( a2 == 578 )
    goto LABEL_11;
  v18 = a2 == 579;
  if ( a2 != 579 )
    v18 = a2 == 582;
  if ( v18 || a2 == 583 )
  {
LABEL_11:
    if ( a2 == 582 )
      v14 = (_DWORD *)(result + 4);
    if ( a2 == 578 )
      v14 = (_DWORD *)(result + 4);
    if ( a13 )
      v13 = 2;
    v19 = a2 == 582;
    *v14 = *a3;
    if ( a2 != 582 )
      v19 = a2 == 583;
    FIELD_U32(result, 12) = a3[1];
    FIELD_U32(result, 16) = a3[1];
    *(_DWORD *)result = v13;
    if ( v19 )
      FIELD_U8(result, 40) = 1;
  }
  else if ( a2 == 580 || a2 == 581 )
  {
    if ( a2 == 580 )
      v15 = (_DWORD *)(result + 12);
    *v15 = a3[1];
    FIELD_U32(result, 4) = *a3;
    FIELD_U32(result, 8) = *a3;
    *(_DWORD *)result = a13;
  }
  return result;
}
