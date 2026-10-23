/* sub_609213B8
 * address: 0x609213B8   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609213B8(int a1)
{
  int result; // r0
  void **v3; // r0

  result = FIELD_U8(a1, 38);
  if ( (result & 4) != 0 )
  {
    dword_60CC7464(a1 + 48);
    result = FIELD_U8(a1, 38) & 0xFB;
    FIELD_U8(a1, 38) = result;
  }
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = 0;
  if ( (result & 1) != 0 )
  {
    v3 = *(void ***)(a1 + 4);
    if ( *v3 )
    {
      operator_delete(*v3);
      v3 = *(void ***)(a1 + 4);
    }
    if ( v3 )
      operator_delete(v3);
    result = FIELD_U8(a1, 38) & 0xFE;
    FIELD_U8(a1, 38) = result;
  }
  FIELD_U32(a1, 4) = 0;
  if ( (result & 2) != 0 )
  {
    if ( FIELD_U32(a1, 24) )
    {
      sub_60913ABC(a1 + 24);
      sub_60913AD4((_DWORD *)(a1 + 24));
      LOBYTE(result) = FIELD_U8(a1, 38);
    }
    result &= 0xFDu;
    FIELD_U8(a1, 38) = result;
  }
  return result;
}
