/* sub_607740F4
 * address: 0x607740F4   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607740F4(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0

  if ( FIELD_F32(a1, 88) != 0.0 )
  {
    v2 = 1;
    if ( (FIELD_U8(a1, 6905) & 8) != 0 )
      FIELD_U32(a1, 9956) = 3;
LABEL_15:
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 980))(a1, v2);
    JUMPOUT(0x6076EF58);
  }
  if ( FIELD_U32(a1, 9956) || (v3 = FIELD_U32(a1, 6900), (v3 & 0x8000) != 0) )
  {
    v4 = a1 + 688;
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( (v3 & 4) != 0 )
    {
      if ( FIELD_U32(a1, 1320) != 3 || sub_607634E8(a1, FIELD_U32(a1, 80)) != 1 )
        return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 984))(a1, 1);
      v3 = FIELD_U32(a1, 6900);
      v2 = 0;
    }
    if ( (v3 & 0x40000000) != 0 )
      return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 984))(a1, 1);
    v4 = a1 + 688;
  }
  if ( sub_607868D4(v4, 0) )
    goto LABEL_15;
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 984))(a1, 1);
}
