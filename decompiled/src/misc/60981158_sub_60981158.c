/* sub_60981158
 * address: 0x60981158   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60981158(int a1, int a2)
{
  int v4; // r0
  float v5; // s16
  int v6; // r1
  int result; // r0
  int v8; // r5
  int v9; // r4

  v4 = FIELD_U32(a1, 56);
  if ( v4 )
  {
    v5 = FIELD_F32(v4, 16);
    v6 = sub_608502E4(v4);
    result = 0;
    if ( v5 != (float)(unsigned int)v6 )
      return result;
    result = 1;
    if ( a2 != 1 )
      return result;
  }
  else
  {
    result = 1;
    if ( a2 != 1 )
      return result;
  }
  v8 = a1 + 40;
  v9 = FIELD_U32(a1, 44);
  if ( v9 == v8 )
    return 1;
  while ( sub_60981158(FIELD_U32(v9, 8), 1) )
  {
    v9 = FIELD_U32(v9, 4);
    if ( v9 == v8 )
      return 1;
  }
  return 0;
}
