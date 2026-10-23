/* sub_6005F0F0
 * address: 0x6005F0F0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005F0F0(int a1)
{
  int v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  __int16 v5; // r1
  int v6; // r0
  char v7; // r6
  int result; // r0

  v2 = a1 + 7836;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1116))(a1);
  v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += 4 * v4;
  if ( (*(_BYTE *)(*(_DWORD *)v3 + 28) & 4) != 0 )
  {
    v5 = FIELD_U16(a1, 6640);
    v6 = a1 + 6332;
    if ( FIELD_U8(a1, 7936) )
    {
      v7 = 0;
      sub_608134CC(v6, "SE_EMY_BUNBUN_WING1", v5, 0);
    }
    else
    {
      sub_608134CC(v6, "SE_EMY_BUNBUN_WING2", v5, 0);
      v7 = 1;
    }
    FIELD_U8(a1, 7936) = v7;
  }
  ((void (__fastcall *)(int))loc_6005E8EC)(a1);
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
  {
    result = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( result )
      FIELD_U8(result, 6100) = 1;
  }
  return result;
}
