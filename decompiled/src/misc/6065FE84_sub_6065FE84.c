/* sub_6065FE84
 * address: 0x6065FE84   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6065FE84(int a1)
{
  _DWORD *result; // r0
  int v3; // t1

  if ( --FIELD_U8(a1, 7057) == 0 )
    return (_DWORD *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB6908);
  v3 = FIELD_U32(a1, 7044);
  result = (_DWORD *)(a1 + 7044);
  *result = v3 + 0x8000000;
  return result;
}
