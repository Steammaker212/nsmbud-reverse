/* sub_605F87A0
 * address: 0x605F87A0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F87A0(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r0
  __int16 v5; // r5

  v2 = a1 + 6300;
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  result = *(unsigned __int8 *)(**(_DWORD **)(*(_DWORD *)v2 + 12) + 28);
  if ( (result & 0x20) != 0 )
  {
    if ( !FIELD_U32(a1, 6308) )
    {
      v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 736))(a1);
      v5 = v4;
      if ( v4 )
      {
        if ( sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) >= 1 )
        {
          FIELD_U16(dword_60C99DE4, 30) = v5;
          sub_603FBE70(dword_60C99DD4);
        }
      }
    }
    FIELD_U32(a1, 6308) = 1;
    result = FIELD_U32(a1, 6304);
    if ( result == 3 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB240C);
  }
  return result;
}
