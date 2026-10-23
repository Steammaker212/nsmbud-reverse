/* sub_608C7CE0
 * address: 0x608C7CE0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C7CE0(int a1, int a2, int a3)
{
  int v4; // r5
  void (__fastcall *v5)(int, int, _DWORD); // r3

  v4 = 2;
  switch ( a2 )
  {
    case 0:
      sub_608C932C(a1);
      break;
    case 1:
      sub_608C932C(a1);
      v4 = 3;
      break;
    case 2:
    case 3:
      v4 = 1;
      break;
    default:
      break;
  }
  v5 = *(void (__fastcall **)(int, int, _DWORD))(a3 + 356);
  if ( v5 )
  {
    v5(a3, v4, FIELD_U32(a3, 360));
    FIELD_U32(a3, 356) = 0;
    FIELD_U32(a3, 360) = 0;
  }
  FIELD_U32(a3, 364) = 0;
  FIELD_U16(a3, 176) = 0;
  FIELD_U8(a3, 178) = 0;
  return 0;
}
