/* sub_600E7094
 * address: 0x600E7094   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_600E7094(int a1)
{
  _DWORD *result; // r0
  int v3; // r1

  if ( !FIELD_U8(a1, 8132) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  result = (_DWORD *)(a1 + 0x2000);
  v3 = FIELD_U32(a1, 0x2000);
  if ( !v3 )
    return (_DWORD *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C85214);
  *result = v3 - 1;
  if ( v3 <= 1 )
    return (_DWORD *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C85214);
  return result;
}
