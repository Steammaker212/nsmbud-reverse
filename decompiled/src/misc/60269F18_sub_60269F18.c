/* sub_60269F18
 * address: 0x60269F18   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60269F18(int a1, int a2)
{
  int result; // r0

  sub_6000B690((unsigned int *)a1, a2);
  result = FIELD_U8(dword_60CC6D8C, 17);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 36) + 72))(FIELD_U32(a1, 36));
    return (*(int (__fastcall **)(_DWORD, StateVirtual *))(**(_DWORD **)(a1 + 36) + 192))(
             FIELD_U32(a1, 36),
             &stru_60C90950);
  }
  return result;
}
