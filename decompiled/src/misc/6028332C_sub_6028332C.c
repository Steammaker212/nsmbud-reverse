/* sub_6028332C
 * address: 0x6028332C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028332C(int a1)
{
  _BYTE *v2; // r0
  int v3; // r2
  int result; // r0

  FIELD_U8(a1, 16528) = 0;
  v2 = (_BYTE *)(a1 + 16528);
  v3 = dword_60C9CF0C;
  if ( (FIELD_U8(dword_60C9CF0C, 1364) & 1) != 0 )
  {
    *v2 = 1;
    sub_603F4BF4(AreaTask_intance, a1 + 16532, v3 + 1368);
  }
  ++FIELD_U32(a1, 16540);
  switch ( FIELD_U8(a1, 6505) )
  {
    case 1:
      sub_6027F748(a1);
      result = 1;
      break;
    case 5:
      SE_AMB_BLACK_CLOUD_ref(a1);
      result = 1;
      break;
    case 8:
      ((void (__fastcall *)(int))loc_60282BB4)(a1);
      result = 1;
      break;
    case 9:
      sub_6027E874(a1);
      result = 1;
      break;
    default:
      ((void (__fastcall *)(int))loc_60280788)(a1);
      result = 1;
      break;
  }
  return result;
}
