/* sub_607A6A48
 * address: 0x607A6A48   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A6A48(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r1

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1384))(a1);
  result = FIELD_U32(a1, 1204);
  if ( (result & 0x8000) == 0 )
  {
    FIELD_U32(a1, 1204) = result | 0x4000;
    v3 = dword_60C99DD4;
    v4 = FIELD_U32(dword_60C99DD4, 764);
    if ( v4 == 2 || (FIELD_U8(a1, 1228) & 4) != 0 )
      goto LABEL_8;
    if ( v4 == 1 )
    {
      if ( sub_60766858() )
      {
LABEL_8:
        FIELD_U32(a1, 9712) = 30;
        return 9712;
      }
      v3 = dword_60C99DD4;
    }
    sub_603FB9A0(v3, FIELD_S8(a1, 84));
    goto LABEL_8;
  }
  return result;
}
