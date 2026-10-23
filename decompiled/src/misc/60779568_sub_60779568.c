/* sub_60779568
 * address: 0x60779568   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60779568(int a1)
{
  unsigned int result; // r0
  int v3; // r0
  int v4; // r0
  signed int v5; // r0
  int v6; // r1

  FIELD_U8(a1, 273) = 0;
  FIELD_U32(a1, 276) = 0;
  result = FIELD_U8(dword_60CC6D78, 44);
  if ( (result & 1) == 0 )
  {
    result = sub_603FD530((unsigned int *)(dword_60C99DD4 + 764));
    if ( !result )
    {
      if ( FIELD_U32(a1, 144) != 1
        || (v3 = sub_608DE61C(a1 + 136, 0), (v4 = sub_60788F54(PlayerMgr_instance, *(_DWORD *)(v3 - 4))) == 0)
        || (result = sub_6075EDF8(v4)) == 0 )
      {
        v5 = sub_603FC6A0(dword_60C99DE4);
        v6 = v5 / 10;
        result = v5 % 10;
        if ( result )
        {
          if ( result == v6 % 10 )
          {
            FIELD_U8(a1, 273) = 1;
            FIELD_U32(a1, 276) = result;
          }
        }
      }
    }
  }
  return result;
}
