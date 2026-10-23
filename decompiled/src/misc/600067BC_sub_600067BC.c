/* sub_600067BC
 * address: 0x600067BC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_600067BC()
{
  unsigned int v0; // r1
  int v1; // r4
  int v2; // r5
  int v3; // r1
  int result; // r0
  int i; // r2
  int v6; // r3

  v0 = FIELD_U8(LevelInfo_instance, 17);
  v1 = FIELD_U8(LevelInfo_instance, 18);
  v2 = FIELD_U8(LevelInfo_instance, 20);
  if ( v0 > 0x39 )
    v0 = 0;
  v3 = sub_603F7EFC(dword_60C99DC8, v0);
  result = 0;
  for ( i = 0; i != 300; ++i )
  {
    v6 = *(unsigned __int8 *)(v3 + 8 * i);
    if ( v6 != 255 && v1 == v6 && v2 == *(unsigned __int8 *)(v3 + 8 * i + 1) )
      ++result;
  }
  return result;
}
