/* sub_600EB144
 * address: 0x600EB144   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EB144(int a1)
{
  int v2; // r6
  int result; // r0

  v2 = a1;
  if ( FIELD_U8(a1, 8132) )
    v2 = FIELD_U32(a1, 56);
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 716))(v2) )
    (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 720))(v2);
  sub_60421AD4(FIELD_U32(a1, 7096));
  FIELD_U32(a1, 7152) = 0;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
  FIELD_U16(a1, 6276) = result;
  FIELD_U32(a1, 7092) = 1;
  return result;
}
