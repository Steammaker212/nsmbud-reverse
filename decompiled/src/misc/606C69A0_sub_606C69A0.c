/* sub_606C69A0
 * address: 0x606C69A0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C69A0(int a1)
{
  int result; // r0

  sub_603FD768(
    dword_60C99DF4,
    FIELD_U8(LevelInfo_instance, 18),
    1,
    FIELD_F32(a1, 108),
    FIELD_F32(a1, 112));
  if ( FIELD_U32(a1, 6104) == 3 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
  result = FIELD_U8(a1, 539);
  if ( FIELD_U8(a1, 539) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
  return result;
}
