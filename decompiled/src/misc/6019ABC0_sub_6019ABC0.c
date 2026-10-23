/* sub_6019ABC0
 * address: 0x6019ABC0   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6019ABC0()
{
  int v0; // r6
  int v1; // r7
  int v2; // r8
  int v3; // r4
  int v5; // r0
  bool v6; // zf

  v0 = FIELD_U32(dword_60CC6D78, 428);
  if ( v0 == -1 )
    return 16;
  v1 = FIELD_U32(dword_60CC6D78, 440);
  if ( v1 == -1 )
    return 0;
  v2 = FIELD_U32(dword_60CC6D78, 448);
  if ( v2 )
  {
    if ( sub_603F6AA0(dword_60CC6D78 + 796, (unsigned __int8)v0, (unsigned __int8)v1) <= 3
      && sub_603F6B0C(dword_60CC6D78 + 796, (unsigned __int8)v0, (unsigned __int8)v1) < 4 )
    {
      v3 = 16;
    }
    else if ( (unsigned int)(v2 - 1) > 2 )
    {
      v3 = 8;
    }
    else
    {
      v3 = dword_60AFC084[v2 - 1];
    }
  }
  else
  {
    v3 = 0;
  }
  if ( sub_603F6AA0(dword_60CC6D78 + 796, (unsigned __int8)v0, (unsigned __int8)v1) == 4
    && sub_603F6AA0(dword_60CC6D78 + 796, (unsigned __int8)v0, (unsigned __int8)v1) <= 3
    && (unsigned int)(v2 - 1) <= 4 )
  {
    v3 = dword_60AFC090[v2 - 1];
  }
  if ( sub_603F6AA0(dword_60CC6D78 + 796, (unsigned __int8)v0, (unsigned __int8)v1) == 3
    && sub_603F6AA0(dword_60CC6D78 + 796, (unsigned __int8)v0, (unsigned __int8)v1) <= 3
    && sub_603F6AA0(dword_60CC6D78 + 796, (unsigned __int8)v0, (unsigned __int8)v1) != 4
    && (unsigned int)(v2 - 1) <= 4 )
  {
    v3 = dword_60AFC0B0[v2 - 1];
  }
  if ( v3 == 16 )
  {
    if ( sub_603F6B0C(dword_60CC6D78 + 796, (unsigned __int8)v0, (unsigned __int8)v1) > 3 )
      return 1;
    v5 = sub_603F6B0C(dword_60CC6D78 + 796, (unsigned __int8)v0, (unsigned __int8)v1);
    v6 = v2 == 3;
    if ( v2 == 3 )
    {
      v3 = 3;
      v6 = v5 == 3;
    }
    if ( !v6 )
      return 1;
  }
  return v3;
}
