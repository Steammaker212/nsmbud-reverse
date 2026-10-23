/* sub_606046B8
 * address: 0x606046B8   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606046B8(int a1, float a2, float a3)
{
  int v4; // r5
  unsigned __int8 v5; // r0
  int v6; // r1
  int v7; // r2
  unsigned int v8; // r0

  if ( (FIELD_U8(a1, 24) & 1) == 0
    || (v4 = 2,
        !sub_60716838(
           TileMgr_instance,
           (unsigned int)FIELD_F32(a1, 108),
           (unsigned int)(float)-FIELD_F32(a1, 112),
           FIELD_U8(a1, 86),
           COERCE_FLOAT((unsigned int)FIELD_F32(a1, 108)),
           a3,
           COERCE_FLOAT((unsigned int)(float)-FIELD_F32(a1, 112)))) )
  {
    v4 = 1;
    FIELD_U32(a1, 6116) = 0;
    FIELD_U32(a1, 6112) = 0;
    FIELD_U8(a1, 6122) = FIELD_U8(a1, 539) - 1;
    FIELD_U16(a1, 6120) = FIELD_U8(a1, 23);
    v5 = FIELD_U8(a1, 540) - 1;
    FIELD_U8(a1, 6123) = v5;
    v6 = v5 - 32;
    v7 = 1 << v5;
    v8 = 1u >> (32 - v5);
    if ( v6 >= 0 )
    {
      v7 = 0;
      v8 = 1 << v6;
    }
    FIELD_U32(a1, 6104) = v7;
    FIELD_U32(a1, 6108) = v8;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB2930);
  }
  return v4;
}
