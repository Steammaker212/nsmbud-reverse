/* sub_608F9A44
 * address: 0x608F9A44   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F9A44(int a1, int a2)
{
  int v2; // r10
  int v4; // r8
  int v5; // r5
  int v6; // r6
  int v7; // r7

  v2 = a1;
  v4 = 0;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1) == 1 )
  {
    while ( 1 )
    {
      v5 = FIELD_U32(v2, 44);
      if ( v5 == v2 + 40 )
        break;
      v6 = FIELD_U32(v2, 52);
      v7 = v5 - v6;
      while ( !(*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 68))(v7, a2) )
      {
        v5 = FIELD_U32(v5, 4);
        v7 = v5 - v6;
        if ( v5 - v6 == v2 + 40 - FIELD_U32(v2, 52) )
          return v2;
      }
      v2 = v7;
      if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 68))(v7, a2) != 1 )
        return v4;
    }
    return v2;
  }
  return v4;
}
