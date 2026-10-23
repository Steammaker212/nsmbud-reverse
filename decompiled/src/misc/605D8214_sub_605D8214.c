/* sub_605D8214
 * address: 0x605D8214   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D8214(int a1)
{
  if ( dword_60CB1BE4 )
    sub_605E8CC8(dword_60CB1BE4, a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 212))(a1);
  sub_605E5144(a1);
  sub_605DC0F8(a1);
  sub_605E3BD4(a1);
  sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6527));
  return CollisionActor__onDelete(a1);
}
