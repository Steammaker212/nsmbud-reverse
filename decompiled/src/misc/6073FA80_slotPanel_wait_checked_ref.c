/* slotPanel_wait_checked_ref
 * address: 0x6073FA80   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall slotPanel_wait_checked_ref(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  unsigned int v4; // r3
  int v5; // r1

  v3 = (_BYTE *)(a1 + 6340);
  result = FIELD_U8(a1, 6340);
  if ( result == 1 )
  {
    result = FIELD_U16(a1, 6276);
    if ( !FIELD_U16(a1, 6276) )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBE284);
  }
  else if ( !result )
  {
    result = FIELD_U32(a1, 6300);
    v4 = FIELD_U32(result, 68);
    v5 = FIELD_U32(result, 12);
    if ( FIELD_U32(result, 8) > v4 )
      v5 += 4 * v4;
    if ( (*(_BYTE *)(*(_DWORD *)v5 + 28) & 0x20) != 0 )
    {
      sub_60421AD4(result);
      FIELD_U16(a1, 6276) = 20;
      result = (unsigned __int8)*v3 + 1;
      *v3 = result;
    }
  }
  return result;
}
