/* sub_605B9FEC
 * address: 0x605B9FEC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B9FEC(int a1, float *a2, int a3)
{
  unsigned int v3; // r12
  float v5; // s0
  float v6; // s2
  float v7; // s4
  unsigned int v8; // r0
  unsigned int v9; // r1
  float v10; // s6
  bool v11; // zf

  v3 = FIELD_U32(a1, 61656);
  if ( !v3 )
    return 0;
  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  v8 = a1 + 1632;
  if ( v3 >= 0xBB9 )
    v3 = 0;
  v9 = v8 + 20 * v3;
  while ( 1 )
  {
    if ( *(float *)v8 == v5 && FIELD_F32(v8, 4) == v6 )
    {
      v10 = FIELD_F32(v8, 8);
      v11 = v10 == v7;
      if ( v10 == v7 )
        v11 = FIELD_U16(v8, 16) == a3;
      if ( v11 )
        break;
    }
    v8 += 20;
    if ( v8 >= v9 )
      return 0;
  }
  return FIELD_U32(v8, 12);
}
