/* sub_60454B60
 * address: 0x60454B60   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60454B60(int result, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int v3; // r4
  int v4; // lr
  int v5; // r12

  FIELD_U32(result, 1440) = 0;
  v3 = *a2 != *a3;
  FIELD_U32(result, 1440) = v3;
  if ( a2[1] != a3[1] )
  {
    v3 |= 2u;
    FIELD_U32(result, 1440) = v3;
  }
  if ( a2[2] != a3[2] )
  {
    v3 |= 4u;
    FIELD_U32(result, 1440) = v3;
  }
  if ( a2[3] != a3[3] )
  {
    v3 |= 8u;
    FIELD_U32(result, 1440) = v3;
  }
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a3 + 1);
  if ( ((v5 ^ v4) & 0xF) != 0 )
  {
    v3 |= 0x10u;
    FIELD_U32(result, 1440) = v3;
    v5 = *((_DWORD *)a3 + 1);
    v4 = *((_DWORD *)a2 + 1);
  }
  if ( ((v5 ^ v4) & 0xF0) != 0 )
  {
    v3 |= 0x20u;
    FIELD_U32(result, 1440) = v3;
    v5 = *((_DWORD *)a3 + 1);
    v4 = *((_DWORD *)a2 + 1);
  }
  if ( ((v5 ^ v4) & 0xF00) != 0 )
  {
    v3 |= 0x40u;
    FIELD_U32(result, 1440) = v3;
    v5 = *((_DWORD *)a3 + 1);
    v4 = *((_DWORD *)a2 + 1);
  }
  if ( ((v5 ^ v4) & 0xF000) != 0 )
  {
    v3 |= 0x80u;
    FIELD_U32(result, 1440) = v3;
    v5 = *((_DWORD *)a3 + 1);
    v4 = *((_DWORD *)a2 + 1);
  }
  if ( ((v5 ^ v4) & 0xF0000) != 0 )
  {
    v3 |= 0x100u;
    FIELD_U32(result, 1440) = v3;
    v5 = *((_DWORD *)a3 + 1);
    v4 = *((_DWORD *)a2 + 1);
  }
  if ( ((v5 ^ v4) & 0xF00000) != 0 )
    FIELD_U32(result, 1440) = v3 | 0x200;
  return result;
}
