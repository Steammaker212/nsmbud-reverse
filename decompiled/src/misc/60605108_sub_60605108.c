/* sub_60605108
 * address: 0x60605108   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60605108(int a1)
{
  unsigned __int8 v1; // r1
  int v2; // r2
  int v3; // r3
  unsigned int v4; // r1

  v1 = FIELD_U8(a1, 539) - 1;
  FIELD_U8(a1, 6122) = v1;
  v2 = v1 - 32;
  v3 = 1 << v1;
  if ( v2 >= 0 )
    v3 = 0;
  FIELD_U32(a1, 6104) = v3;
  v4 = 1u >> (32 - v1);
  if ( v2 >= 0 )
    v4 = 1 << v2;
  FIELD_U32(a1, 6108) = v4;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB29B0);
  return 1;
}
