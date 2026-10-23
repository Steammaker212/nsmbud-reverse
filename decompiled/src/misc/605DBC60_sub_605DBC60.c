/* sub_605DBC60
 * address: 0x605DBC60   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DBC60(int a1, _DWORD *a2)
{
  int v2; // r2
  bool v3; // zf
  int v4; // r2

  v2 = (unsigned __int16)*a2;
  if ( v2 == 10 )
    return 0;
  v3 = v2 == 13;
  if ( v2 == 13 )
    v3 = (*a2 & 0xFF0000) == 0x40000;
  if ( v3 )
    return 0;
  if ( (a2[1] & 0xF) != 1 )
    return 0;
  v4 = a2[2];
  if ( v4 && (FIELD_U32(v4, 300) == 31 || (FIELD_U8(v4, 137) & 0x18) != 0 || (FIELD_U8(v4, 140) & 0x40) != 0) )
    return 0;
  else
    return sub_60157048();
}
