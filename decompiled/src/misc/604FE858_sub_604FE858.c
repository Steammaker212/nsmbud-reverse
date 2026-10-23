/* sub_604FE858
 * address: 0x604FE858   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FE858(_DWORD *a1)
{
  _DWORD *v2; // r5
  unsigned int v3; // r3
  int v4; // r0
  int result; // r0

  a1[13] = 2;
  v2 = a1 + 535;
  v3 = sub_604746E4((int)(a1 + 535), &dword_60CA7420, &dword_60CA7428);
  if ( v3 != -1 )
    sub_604742D0(v2, 0, &dword_60CA7420, v3, 1.0, 0);
  if ( sub_6047482C((int)v2, 0) )
  {
    v4 = sub_6047482C((int)v2, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 108))(v4);
  }
  result = a1[3735];
  FIELD_U32(result, 28) = 0;
  FIELD_U8(result, 64) |= 0x10u;
  return result;
}
