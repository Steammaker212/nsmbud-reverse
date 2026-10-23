/* sub_6090AF14
 * address: 0x6090AF14   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090AF14(_BYTE *a1, float a2, float a3, float a4, float a5)
{
  float v5; // s4
  float v6; // s6
  unsigned int v7; // r1
  float v8; // s6
  unsigned int v9; // r1
  float v10; // s6
  float result; // s0

  v5 = 0.0;
  v6 = 0.0;
  if ( a2 >= 0.0 )
  {
    v6 = a2;
    if ( a2 > 1.0 )
      v6 = 1.0;
  }
  v7 = (unsigned int)(float)(v6 * 255.0);
  v8 = 0.0;
  a1[3] = v7;
  if ( a3 >= 0.0 )
  {
    v8 = a3;
    if ( a3 > 1.0 )
      v8 = 1.0;
  }
  v9 = (unsigned int)(float)(v8 * 255.0);
  v10 = 0.0;
  a1[2] = v9;
  if ( a4 >= 0.0 )
  {
    v10 = a4;
    if ( a4 > 1.0 )
      v10 = 1.0;
  }
  a1[1] = (unsigned int)(float)(v10 * 255.0);
  if ( a5 >= 0.0 )
  {
    v5 = a5;
    if ( a5 > 1.0 )
      v5 = 1.0;
  }
  LODWORD(result) = (unsigned int)(float)(v5 * 255.0);
  *a1 = LOBYTE(result);
  return result;
}
