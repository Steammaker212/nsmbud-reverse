/* sub_602F761C
 * address: 0x602F761C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F761C(int a1, int a2)
{
  int v2; // r4
  int v3; // r0

  v2 = FIELD_U32(a2, 64);
  sub_602A3EFC(v2 + 6868, 24, 0.0625);
  v3 = FIELD_U32(v2, 2872) & 1;
  if ( FIELD_U8(v2, 6320) )
  {
    if ( v3 )
    {
      FIELD_U32(v2, 124) = 1077936128;
      FIELD_F32(v2, 100) = -0.1875 * 0.7;
      return 1;
    }
  }
  else if ( v3 || FIELD_U8(v2, 6360) )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v2 + 192))(v2, &dword_60C92890);
  }
  return 1;
}
