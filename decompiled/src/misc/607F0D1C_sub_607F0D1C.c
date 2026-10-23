/* sub_607F0D1C
 * address: 0x607F0D1C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F0D1C(int result, _DWORD *a2)
{
  int v2; // r0

  switch ( *a2 )
  {
    case 0:
      result = AreaTask_intance;
      if ( AreaTask_intance )
        FIELD_U8(AreaTask_intance, 193) = 0;
      break;
    case 1:
      result = dword_60C8996C;
      if ( dword_60C8996C )
      {
        result = sub_601918EC(dword_60C8996C);
        FIELD_U8(result, 308) |= 1u;
      }
      break;
    case 2:
      result = sub_608EC968(result, 40, 1, 40);
      break;
    case 3:
      if ( dword_60C8996C )
      {
        v2 = sub_601918EC(dword_60C8996C);
        FIELD_U8(v2, 308) |= 2u;
      }
      result = dword_60CC62E4;
      FIELD_U8(dword_60CC62E4, 112) = 1;
      break;
    default:
      return result;
  }
  return result;
}
