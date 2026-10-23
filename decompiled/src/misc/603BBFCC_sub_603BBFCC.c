/* sub_603BBFCC
 * address: 0x603BBFCC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BBFCC(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  unsigned __int16 *v5; // r0
  unsigned int v6; // r2
  unsigned int v7; // r1
  float v8; // s4

  v4 = FIELD_U32(a1, 6352);
  v2 = (_DWORD *)(a1 + 6352);
  v3 = v4;
  if ( v4 != 2 )
  {
    FIELD_U32(a1, 6356) = v3;
    *v2 = 2;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  FIELD_U8(a1, 6854) = 1;
  v5 = *(unsigned __int16 **)(FIELD_U32(a1, 12) + 12);
  if ( v5 )
  {
    v6 = v5[14];
    v7 = v5[15];
    v8 = (float)v5[13];
    FIELD_F32(a1, 516) = 256.0 * 0.5;
    FIELD_F32(a1, 520) = v8;
    FIELD_F32(a1, 524) = (float)v6;
    FIELD_F32(a1, 528) = (float)v7;
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
}
