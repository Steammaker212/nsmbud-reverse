/* sub_605F8998
 * address: 0x605F8998   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F8998(int a1)
{
  int v2; // r5
  int v3; // r0
  int result; // r0

  v2 = a1 + 6300;
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  v3 = FIELD_U32(a1, 6328) + 1;
  FIELD_U32(a1, 6328) = v3;
  if ( v3 == FIELD_U32(a1, 6332) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 728))(a1);
  result = *(unsigned __int8 *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB2430);
  return result;
}
