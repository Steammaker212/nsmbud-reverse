/* sub_6067F09C
 * address: 0x6067F09C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067F09C(unsigned __int8 *a1, float a2)
{
  unsigned int v2; // r3
  float v3; // s4
  unsigned int v4; // r2
  unsigned int v5; // r1
  float v6; // s4
  bool v7; // fcf
  bool v8; // fzf
  int result; // r0

  v2 = 0;
  v3 = *(float *)(*(_DWORD *)a1 + 308);
  do
  {
    v4 = v2;
    if ( v2 >= (unsigned int)a1[3049] - 1 )
      break;
    ++v2;
    v5 = 0;
    if ( v4 + 1 < 8 )
      v5 = v4 + 1;
    v6 = (float)(v3 + *(float *)(*(_DWORD *)&a1[4 * v5] + 308)) * 0.5;
    v8 = v6 == a2;
    v7 = v6 >= a2;
    v3 = *(float *)(*(_DWORD *)&a1[4 * v5] + 308);
  }
  while ( !v8 && v7 );
  if ( v4 >= 8 )
    v4 = 0;
  result = *(_DWORD *)&a1[4 * v4];
  FIELD_U8(result, 337) = 1;
  return result;
}
