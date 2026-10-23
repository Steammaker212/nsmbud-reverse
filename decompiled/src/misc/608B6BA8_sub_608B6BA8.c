/* sub_608B6BA8
 * address: 0x608B6BA8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B6BA8(int a1, int a2)
{
  int v3; // r0
  bool v4; // zf
  _DWORD *v5; // r0

  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U8(a1, 8) = 0;
  if ( a2 && *(_DWORD *)a2 == 1263419974 )
  {
    v3 = FIELD_U16(a2, 4);
    v4 = v3 == 65279;
    if ( v3 == 65279 )
      v4 = FIELD_U32(a2, 8) == 0x10000;
    if ( v4 )
    {
      *(_DWORD *)a1 = a2;
      v5 = (_DWORD *)sub_608D5408(a2);
      if ( *v5 == 1330007625 )
      {
        FIELD_U32(a1, 4) = v5 + 2;
        FIELD_U8(a1, 8) = 1;
      }
    }
  }
  return a1;
}
