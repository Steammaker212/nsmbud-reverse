/* sub_6003C8CC
 * address: 0x6003C8CC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6003C8CC(int result)
{
  _DWORD *v1; // r1
  int v2; // r2
  int v3; // r0
  unsigned int v4; // r2
  int v5; // r0

  v1 = (_DWORD *)(result + 11492);
  v2 = FIELD_U32(result, 11492);
  if ( v2 == 2 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)result + 192))(result, &dword_60C800E4);
  if ( v2 == 1 )
  {
    v3 = FIELD_U32(result, 6304);
    v4 = FIELD_U32(v3, 8);
    v5 = FIELD_U32(v3, 12);
    if ( v4 > 1 )
      v5 += 4;
    result = *(unsigned __int8 *)(*(_DWORD *)v5 + 28);
    if ( (result & 0x10) != 0 )
    {
      result = 2;
      *v1 = 2;
    }
  }
  return result;
}
