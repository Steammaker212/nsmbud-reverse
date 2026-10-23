/* sub_60156144
 * address: 0x60156144   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60156144(int a1, float a2)
{
  int v2; // r1

  v2 = FIELD_S8(a1, 5360);
  if ( (unsigned __int8)v2 == 255 )
    return FIELD_U32(a1, 2196);
  if ( (unsigned __int8)v2 >= 4u )
    v2 = 0;
  if ( *(float *)(*(_DWORD *)(dword_60CBF354 + 4 * v2 + 32) + 4) >= a2 )
    return FIELD_U32(a1, 2196);
  else
    return *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32);
}
